#include "SensorUltrasonico.h"
#include "Rotador.h"

Rotador rotador;
SensorUltrasonico ultrasonico;

void setup() {
  rotador.configurar();
}

void loop() {
  rotador.rotar();
}