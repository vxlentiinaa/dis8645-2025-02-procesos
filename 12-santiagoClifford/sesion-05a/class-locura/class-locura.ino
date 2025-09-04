#include "constantes.h"
#include "Persona.h"

Persona aristoteles(false);
Persona javieraMena(true);

Sensor potenciometroGrande(A0);

potenciometroGrande.

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
aristoteles.setEdad(384+2025);
javieraMena.setEdad(42);

aristoteles.setRut("1-0");
javieraMena.setRut("11.111.111-1");
}

void loop() {
Serial.print("Aristoteles tiene ");
  Serial.print(aristoteles.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene ");
  Serial.print(javieraMena.getEdad());
  Serial.println(" años");


  Serial.print("Javiera Mena tiene RUT ");
  Serial.println(javieraMena.getRut());
}
