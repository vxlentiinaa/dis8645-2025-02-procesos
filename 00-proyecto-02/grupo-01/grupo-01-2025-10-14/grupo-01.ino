#include "EntradaUltrasonico.h"
#include "SalidaDedo.h"
#include "SalidaMotorVibracion.h"
#include "SalidaVoz.h"

// instancias de las clases
EntradaUltrasonico ultrasonico;
SalidaDedo dedo;
SalidaMotorVibracion motor;
// salidaVoz voz;

int pausa = 500;

void setup() {
  // configurar entrada
  ultrasonico.configurar();

  // configurar salidas
  dedo.configurar();
  motor.configurar();
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
