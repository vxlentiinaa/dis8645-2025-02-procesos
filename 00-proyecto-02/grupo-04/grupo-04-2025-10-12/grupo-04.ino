// grupo-04
// 10-brauliofigueroa2001
// 13-Bernardita-lobo
// 17-jotamorales-romulus
// 20-Camila-Parada
// 28-FranUDP


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