#include "SensorUltrasonico.h"

SensorUltrasonico sensor(11, 12, 200);

void setup() {
  sensor.configurar();
}

void loop() {
  sensor.medirDistancia();
  sensor.mostrarConsola();
  delay(500);
}
