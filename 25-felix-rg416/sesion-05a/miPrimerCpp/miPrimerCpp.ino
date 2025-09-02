  // incluyo el archivo ""constantes.h""
#include "constantes.h";
#include "Persona.h"

void setup() {
  // inicio la comunicación con el monitor seria
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(numEstudiantes);
}
