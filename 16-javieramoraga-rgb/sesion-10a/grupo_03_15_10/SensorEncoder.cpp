#include "SensorEncoder.h"

SensorEncoder::SensorEncoder() {
}
SensorEncoder::~SensorEncoder() {
}

void SensorEncoder::configurar() {
  pinMode(SensorEncoder::patitaClock, INPUT);
  pinMode(SensorEncoder::patitaData, INPUT);
  pinMode(SensorEncoder::patitaSwitch, INPUT_PULLUP);
}

int SensorEncoder::tomarDecisiones() {
  SensorEncoder::clockActual = digitalRead(SensorEncoder::patitaClock);

  if (SensorEncoder::clockActual != SensorEncoder::clockAnterior
      && SensorEncoder::clockActual == HIGH) {
    if (digitalRead(SensorEncoder::patitaData) != SensorEncoder::clockActual) {
      // Aquí se puede aumentar o disminuir el menú
      SensorEncoder::opcionMenu += 1;
    } else {
      SensorEncoder::opcionMenu -= 1;
    }
    // encargarse de los limites
    if (SensorEncoder::opcionMenu > 2 ) {
      SensorEncoder::opcionMenu = 0;
    }
    if (SensorEncoder::opcionMenu < 0) {
      SensorEncoder::opcionMenu = 2;
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


  //return nuevaOpcion; // ESTO TENIAN USTEDES
  return opcionMenu; //esto propuso el profe (se buguea, pero se mueve)
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
