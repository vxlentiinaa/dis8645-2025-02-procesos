#include "EntradaUltrasonico.h"
#include "SalidaDedo.h"

// instancias de las clases
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


  if (ultrasonico.estaCerca) {
    dedo.levantar();
  } else {
    dedo.bajar();
  }

  // pausa para estabilidad
  delay(pausa);
}

