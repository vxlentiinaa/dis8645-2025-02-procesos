/*
Grupo-04

Integrantes:

10-brauliofigueroa2001
13-Bernardita-Jesus
17-jotamorales-romulus
20-Camila-Parada
28-FranUDP

Conexiones:

ServoRadar = Pin 9

ServoOjos =

SensorUltrasonico | Trig = Pin 12 | Echo = Pin 11

Mp3 =

*/

#include "SensorUltrasonico.h"
#include "Rotador.h"

Rotador rotador;
SensorUltrasonico ultrasonico;

void setup()
{
  Serial.begin(115200);
  ultrasonico.configurar();
  rotador.configurar(&ultrasonico);
}

void loop()
{
  rotador.radar();
}