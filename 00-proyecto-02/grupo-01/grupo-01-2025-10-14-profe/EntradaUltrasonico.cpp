#include "EntradaUltrasonico.h"

EntradaUltrasonico::EntradaUltrasonico() {}

EntradaUltrasonico::~EntradaUltrasonico() {}

void EntradaUltrasonico::configurar() {
  pinMode(EntradaUltrasonico::patitaTrigger, OUTPUT);
  pinMode(EntradaUltrasonico::patitaEcho, INPUT);
  Serial.begin(9600);
}

float EntradaUltrasonico::medirDistancia() {

// Medir la distancia y devolverla
  digitalWrite(EntradaUltrasonico::patitaTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(EntradaUltrasonico::patitaTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(EntradaUltrasonico::patitaTrigger, LOW);

  // Leer la duración del pulso de retorno
  EntradaUltrasonico::duracion = pulseIn(EntradaUltrasonico::patitaEcho, HIGH);
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  EntradaUltrasonico::distanciaCm = int(float(EntradaUltrasonico::duracion) * 0.0343 / 2.0);

  // Mostrar distancia medida en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distanciaCm);
  Serial.println(" cm");

  return distanciaCm;
}