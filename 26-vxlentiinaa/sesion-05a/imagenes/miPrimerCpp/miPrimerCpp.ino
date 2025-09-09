#include "constantes.h" // significa que va a constantes.h y lo identifica
#include "constantes.h"
#include "Persona.h" // memoriza lo que esta dentro de Persona.h

Persona aristoteles(false);
Persona javieraMena(true);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

aristoteles.setEdad(2025 + 384);
javieraMena.setEdad(42);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(numEstudiantes);

  Serial.println(aristoteles.getEdad());
}
