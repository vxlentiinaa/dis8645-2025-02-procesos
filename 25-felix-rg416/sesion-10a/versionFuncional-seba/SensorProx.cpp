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

  SensorProx::duracion = pulseIn(patitaEcho, HIGH);
  distancia = (duracion / 58);
  Serial.println("si funcionoo");
}

void SensorProx::determinarPresencia() {
  if (SensorProx::distancia < 16) {
    SensorProx::presencia = true;
    Serial.println("Si hay presencia");
  } else {
    SensorProx::presencia = false;
    Serial.println("No hay presencia");
  }
}

// void SensorProx::nada() {
//   if (SensorProx::distancia > 15) {
//   }
// }

void SensorProx::imprimirEnConsola() {
  Serial.print("Distancia: ");
  Serial.println(distancia);
  delay(800);
}
