#include "SensorEncoder.h"

//Constructor
SensorEncoder::SensorEncoder() {
  // Estado por defecto
  clockActual = HIGH;
  clockAnterior = HIGH;
  opcionMenu = 0; // Opción inicial del menú
}

//Destructor
SensorEncoder::~SensorEncoder() {
}

void SensorEncoder::configurar() {
  // Pines de encoder: Clock y Data como entradas, switch con pullup
  pinMode(patitaClock, INPUT);
  pinMode(patitaData, INPUT);
  pinMode(patitaSwitch, INPUT_PULLUP);

  // Leer estado inicial
  clockAnterior = digitalRead(patitaClock);
}

// Decisiones internas del encoder: detectar flanco y ajustar opcionMenu
int SensorEncoder::tomarDecisiones() {
  clockActual = digitalRead(patitaClock);

// Determinar dirección del giro
// Detectar flanco HIGH -> LOW
  if (clockAnterior == HIGH && clockActual == LOW) {
    int dataVal = digitalRead(patitaData);

    int nuevaOpcion = opcionMenu;
    if (dataVal == LOW) {
      nuevaOpcion = opcionMenu + 1;
    } else {
      nuevaOpcion = opcionMenu - 1;
    }

    // Ajustar rango circular 
    const int maxOpciones = 3; 
    if (nuevaOpcion < 0) nuevaOpcion = maxOpciones - 1;
    if (nuevaOpcion >= maxOpciones) nuevaOpcion = 0;

    opcionMenu = nuevaOpcion;
  }

  // Actualizar estado anterior
  clockAnterior = clockActual;
  return opcionMenu;
}

int SensorEncoder::leerMovimiento() {
  return tomarDecisiones();
}

// Botón: devuelve true una vez por pulsación (sin debounce complicado)
bool SensorEncoder::botonPresionado() {
  // El switch del encoder es activo en LOW (presionado)
  // Esta implementación es simple
  static unsigned long lastButton = 0;
  const unsigned long debounceMs = 200;
  if (digitalRead(patitaSwitch) == LOW) {
    unsigned long now = millis();
    if (now - lastButton > debounceMs) {
      lastButton = now;
      // esperar a que suelte no es obligatorio
      return true;
    }
  }
  return false;
}
