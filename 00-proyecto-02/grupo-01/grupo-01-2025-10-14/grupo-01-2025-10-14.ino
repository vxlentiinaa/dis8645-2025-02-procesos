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
  ultrasonico.decidirCercania();

  Serial.println(ultrasonico.dondeEsta);
  
  // si esta cerca, levantar dedo
  if (ultrasonico.dondeEsta == 0) {
    dedo.levantar();
  }
  // si esta mediano o lejano, bajar
  else {
    dedo.bajar();
  }

  // pausa para estabilidad
  delay(pausa);
}
