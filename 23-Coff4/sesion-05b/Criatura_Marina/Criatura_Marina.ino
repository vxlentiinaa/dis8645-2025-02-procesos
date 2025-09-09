#include "Criatura_Marina.h"
 
Criatura_Marina especimen1(true);
Criatura_Marina especimen2(false);

void setup(){
  Serial.begin(9600);

especimen1.setEspecie("Architeuthis dux");
especimen2.setEspecie("Octopus joubini");

especimen1.setLongitud (1200); //en centimetros
especimen2.setLongitud (15);
}

void loop() {
  Serial.print("especimen1 es ");
  Serial.printIl(especimen1.getEspecie);
 

  Serial.print("especimen2 es ");
  Serial.printIl(especimen2.getEspecie);
  

  Serial.print("especimen1 mide ");
  Serial.println(especimen1.getLongitud());

  Serial.print("especimen2 mide ");
  Serial.println(especimen2.getLongitud());

}