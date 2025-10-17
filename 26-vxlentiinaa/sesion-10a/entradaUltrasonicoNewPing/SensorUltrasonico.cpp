#include "SensorUltrasonico.h"

SensorUltrasonico::SensorUltrasonico(int triggerPin, int echoPin, int distanciaMax)
  : patitaTrigger(triggerPin), patitaEcho(echoPin), distanciaMax(distanciaMax) {
  sonar = new NewPing(patitaTrigger, patitaEcho, distanciaMax);
}

SensorUltrasonico::~SensorUltrasonico() {
  delete sonar;
}

void SensorUltrasonico::configurar() {
  Serial.begin(9600);
}

void SensorUltrasonico::medirDistancia() {
  distanciaCm = sonar->ping_cm(); // entrega valor entero en cm

  if (distanciaCm == 0) {
    estaCerca = false;
    return;
  }

  if (distanciaCm >= minCercana && distanciaCm <= maxCercana) {
    estaCerca = true;
  } else {
    estaCerca = false;
  }
}

void SensorUltrasonico::mostrarConsola() {
  if (distanciaCm >= minCercana && distanciaCm <= maxCercana) {
    Serial.println(mensajeCercana);
  } else if (distanciaCm >= minMediana && distanciaCm <= maxMediana) {
    Serial.println(mensajeMediana);
  } else if (distanciaCm >= minLejana && distanciaCm <= maxLejana) {
    Serial.println(mensajeLejana);
  } else {
    Serial.println(mensajeEnOtroCaso);
  }
}

