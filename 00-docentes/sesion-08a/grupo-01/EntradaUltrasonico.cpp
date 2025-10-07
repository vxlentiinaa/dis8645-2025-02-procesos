#include "EntradaUltrasonico.h"

EntradaUltrasonico::EntradaUltrasonico() {}

EntradaUltrasonico::~EntradaUltrasonico() {}

void EntradaUltrasonico::configurar() {
  pinMode(EntradaUltrasonico::patitaTrigger, OUTPUT);
  pinMode(EntradaUltrasonico::patitaEcho, INPUT);
  Serial.begin(9600);
}

void EntradaUltrasonico::medirDistancia() {

  digitalWrite(EntradaUltrasonico::patitaTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(EntradaUltrasonico::patitaTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(EntradaUltrasonico::patitaTrigger, LOW);

  // Leer la duración del pulso de retorno
  EntradaUltrasonico::duracion = pulseIn(EntradaUltrasonico::patitaEcho, HIGH);
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  EntradaUltrasonico::distanciaCm = EntradaUltrasonico::duracion * 0.0343 / 2;

  if (EntradaUltrasonico::distanciaCm >= EntradaUltrasonico::minCercana
      && EntradaUltrasonico::distanciaCm <= EntradaUltrasonico::maxCercana) {
    EntradaUltrasonico::estaCerca = true;
  } else {
    EntradaUltrasonico::estaCerca = false;
  }
}

void EntradaUltrasonico::mostrarConsola() {
  if (EntradaUltrasonico::distanciaCm >= EntradaUltrasonico::minCercana
      && EntradaUltrasonico::distanciaCm <= EntradaUltrasonico::maxCercana) {
    Serial.println(EntradaUltrasonico::mensajeCercana);
  } else if (EntradaUltrasonico::distanciaCm >= EntradaUltrasonico::minMediana
             && EntradaUltrasonico::distanciaCm <= EntradaUltrasonico::maxMediana) {
    Serial.println(EntradaUltrasonico::mensajeMediana);
  } else if (EntradaUltrasonico::distanciaCm >= EntradaUltrasonico::minLejana
             && EntradaUltrasonico::distanciaCm <= EntradaUltrasonico::maxLejana) {
    Serial.println(EntradaUltrasonico::mensajeLejana);
  } else {
    Serial.println(EntradaUltrasonico::mensajeEnOtroCaso);
  }
}
