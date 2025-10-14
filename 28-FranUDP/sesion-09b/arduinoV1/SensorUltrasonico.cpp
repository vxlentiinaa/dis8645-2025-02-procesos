#include "SensorUltrasonico.h"

SensorUltrasonico::SensorUltrasonico() {}
SensorUltrasonico::~SensorUltrasonico() {}

void SensorUltrasonico::configurar() {
  // Nuevo objeto sensor
  sonar = new NewPing(patitaTrig, patitaEcho, maxDistancia);
}

int SensorUltrasonico::medirDistanciaCm() {
  int distancia = sonar->ping_cm();

  // Si no hay un retorno del sonar...
  if (distancia == 0) {
    return maxDistancia;
  }
  
  // Si hay una lectura válida...
  return distancia;
}