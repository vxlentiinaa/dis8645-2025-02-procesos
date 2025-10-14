#include "SensorEncoder.h"

SensorEncoder::SensorEncoder() {
}
SensorEncoder::~SensorEncoder() {
}

void SensorEncoder::configurar() {
  pinMode(SensorEncoder::patitaClock, INPUT);
  pinMode(SensorEncoder::patitaData, INPUT);
  pinMode(SensorEncoder::patitaSwitch, INPUT);
}

int SensorEncoder::tomarDecisiones() {
  SensorEncoder::clockActual = digitalRead(SensorEncoder::patitaClock);

  if (SensorEncoder::clockActual != SensorEncoder::clockAnterior && SensorEncoder::clockActual == HIGH) {
    if (digitalRead(SensorEncoder::patitaData) != SensorEncoder::clockActual) {
      // Aquí se puede aumentar o disminuir el menú
    }
  }

  int nuevaOpcion = 0;

  // actualizar clock
  SensorEncoder::clockAnterior = SensorEncoder::clockActual;

  if (digitalRead(SensorEncoder::patitaSwitch) == LOW) {
    Serial.print("Idioma seleccionado: ");
    Serial.println(opcionMenu);
    delay(500);
  }

  return nuevaOpcion;
}

// Esta función devuelve el movimiento del encoder
int SensorEncoder::leerMovimiento() {
  return tomarDecisiones();
}

// Esta función detecta si el botón del encoder fue presionado
bool SensorEncoder::botonPresionado() {
  // El switch del encoder es activo en LOW (presionado)
  return (digitalRead(SensorEncoder::patitaSwitch) == LOW);
}
