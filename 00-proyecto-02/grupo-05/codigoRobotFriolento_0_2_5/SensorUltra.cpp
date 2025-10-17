// incluir .h
#include "SensorUltra.h"

SensorUltra::SensorUltra() {
}

void SensorUltra::configurar() {
  // conectar las patitas
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //Serial.begin(115200);
}

void SensorUltra::reconocerDistancia() {
  // configuracion reconocimiento distancia
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

// medir duración del eco
  duracion = pulseIn(echoPin, HIGH);

// calcular distancia en cm
  distancia = duracion / 58;
  
// determinar si hay una persona (ejemplo: a menos de 30 cm)
  persona = (distancia < 30);
}

void SensorUltra::leerDistancia() {
  // imprimir en el monitor serial la distancia detectada en cm
if (persona) {
  Serial.println("la persona esta a: ");
    Serial.print(distancia);
    Serial.println(" cm");
  } else {
    Serial.println("No hay persona.");
  }
}