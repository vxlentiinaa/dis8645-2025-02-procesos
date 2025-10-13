#include "Gatos.h"
#include "pelajeGatos.h"

Gatos gato1("Leroy", 4);
pelajeGatos pelaje1("Tricolor", "Largo", "Atigrado", "liso");

Gatos gato2("Pulga", 3);
pelajeGatos pelaje2("Tricolor", "Corto", "Atigrado", "Liso");

void setup() {
  Serial.begin(9600);

  Serial.println("--- Ficha del Gato 1 ---");
  Serial.println("Nombre: " + gato1.getNombre());
  Serial.println("Edad: " + String(gato1.getEdad()) + " anos");
  pelaje1.describir();
  gato1.ronronear();

  Serial.println();

  Serial.println("--- Ficha del Gato 2 ---");
  Serial.println("Nombre: " + gato2.getNombre());
  Serial.println("Edad: " + String(gato2.getEdad()) + " anos");
  pelaje2.describir();
  gato2.jugar();
}

void loop() {

}