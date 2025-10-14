#include "SensorUltrasonico.h"
#include "Rotador.h"

Rotador rotador;
SensorUltrasonico ultrasonico;

void setup() {
  Serial.begin(115200);
  ultrasonico.configurar();
  rotador.configurar(&ultrasonico); 
}

void loop() {
  rotador.radar();
}