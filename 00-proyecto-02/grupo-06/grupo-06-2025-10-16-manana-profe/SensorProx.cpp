#include "SensorProx.h"

SensorProx::SensorProx() {}

SensorProx::~SensorProx() {}


void SensorProx::configurar(int echo, int trigger) {
  // reemplaza los valores iniciales por los entregados
  SensorProx::patitaEcho = echo;
  SensorProx::patitaTrigger = trigger;

  // luego configura a nivel input output
  pinMode(SensorProx::patitaEcho, INPUT);
  pinMode(SensorProx::patitaTrigger, OUTPUT);
}

void SensorProx::leer() {

  digitalWrite(SensorProx::patitaTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(SensorProx::patitaTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(SensorProx::patitaTrigger, LOW);

  SensorProx::duracion = pulseIn(
    SensorProx::patitaEcho,
    HIGH);
  SensorProx::distancia = (SensorProx::duracion * 0.0343) / 2;
}

void SensorProx::determinarPresencia() {
  if (SensorProx::distancia < 16) {
    SensorProx::presencia = true;
  } else {
    SensorProx::presencia = false;
  }
}

// void SensorProx::nada() {
//   if (SensorProx::distancia > 15) {
//   }
// }

void SensorProx::imprimirEnConsola() {
  Serial.print("Distancia: ");
  Serial.println(duracion);
  delay(100);
}