#include "SensorUltrasonico.h"

SensorUltrasonico::SensorUltrasonico() {}
SensorUltrasonico::~SensorUltrasonico() {}

void SensorUltrasonico::configurar() {
  // Nuevo objeto sensor
  sonar = new NewPing(patitaTrig, patitaEcho, maxDistancia);
}

int SensorUltrasonico::medirDistanciaCm() {
// Usamos la función incorporada de NewPing para obtener la mediana de 5 pings.
  // Es más rápida y resistente a lecturas anómalas que un promedio simple.
  // El "50" es el timeout máximo en milisegundos.
  int distancia = sonar->ping_median(4, 50);
  
  if (distancia == 0) {
    return maxDistancia;
  }
  
  return distancia;
}