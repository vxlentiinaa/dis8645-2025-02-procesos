// incluir lo establecido en el archivo header
#include "SensorUltra.h"

SensorUltra::SensorUltra() {
}

// establecer codigo necesario para funcionamiento
// del sensor ultra sonico
void SensorUltra::configurar() {
// Configurar los pines de input y output
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void SensorUltra::reconocerDistancia() {
// Configuración reconocimiento distancia
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
// Medir duración del eco.
  duracion = pulseIn(echoPin, HIGH);
// Calcular distancia en cm.
  distancia = duracion / 58; 
// Determinar si hay una persona (ejemplo: a menos de 30 cm)
  persona = (distancia < 30);
}

void SensorUltra::leerDistancia() {
// Imprimir en el monitor serial la distancia detectada en cm.
 if (persona) {
  // se escribira en el monitor serial la distancia de la persona
    Serial.println("la persona esta a: ");
    Serial.print(distancia);
    Serial.println(" cm");
  // si no se escribira en el monitor serial que no hay una persona  
   } else {
    Serial.println("No hay persona.");
  }
}