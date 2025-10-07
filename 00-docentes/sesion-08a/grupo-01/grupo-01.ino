#include "EntradaUltrasonico.h"
#include "SalidaDedo.h"

// instancias
EntradaUltrasonico ultrasonico;
SalidaDedo dedo;

int pausa = 500;

void setup() {
  // configurar entrada
  ultrasonico.configurar();

  // configurar salida
  dedo.configurar();
}

void loop() {

  ultrasonico.medirDistancia();

  ultrasonico.mostrarConsola();

  if (ultrasonico.estaCerca) {
    dedo.levantar();
  } else {
    dedo.bajar();
  }

  // pausa para estabilidad
  delay(pausa);
}
