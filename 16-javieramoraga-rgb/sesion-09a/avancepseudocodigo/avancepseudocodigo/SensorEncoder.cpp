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
    }
  }

  int nuevaOpcion = 0;

  // if (currentCLK != lastCLK && currentCLK == HIGH) {
  //   if (digitalRead(PIN_DT) != currentCLK) {
  //     SensorEncoder::opcionMenu++;

  //   } else {
  //      SensorEncoder::opcionMenu--;
  //   }
  //   if (SensorEncoder::opcionMenu >= totalIdiomas) {
  //     SensorEncoder::opcionMenu = 0;
  //   }
  //   if (SensorEncoder::opcionMenu < 0) {
  //     SensorEncoder::opcionMenu = totalIdiomas - 1;
  //   }
  // }

  // actualizar clock
  SensorEncoder::clockAnterior = SensorEncoder::clockActual;

  if (digitalRead(SensorEncoder::patitaSwitch) == LOW) {
    Serial.print("Idioma seleccionado: ");
    Serial.println(opcionMenu);
    delay(500);
  }

  return nuevaOpcion;
}