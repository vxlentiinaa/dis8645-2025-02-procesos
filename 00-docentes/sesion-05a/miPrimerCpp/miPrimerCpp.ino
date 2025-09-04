#include "constantes.h"
#include "Persona.h"
#include "SensorAnalogo.h";

Persona aristoteles(false);
Persona javieraMena(true);

SensorAnalogo potenciometroIzquierda(A0);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  aristoteles.setEdad(2025 + 384);
  javieraMena.setEdad(42);

  aristoteles.setRut("1-0");
  javieraMena.setRut("11.111.111-1");

  potenciometroIzquierda.definirRangoUtil(0, 1023);
  potenciometroIzquierda.definirRangoMapeo(0, 10);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Aristoteles tiene ");
  Serial.print(aristoteles.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene ");
  Serial.print(javieraMena.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene RUT ");
  Serial.println(javieraMena.getRut());

  potenciometroIzquierda.leerValor();
}