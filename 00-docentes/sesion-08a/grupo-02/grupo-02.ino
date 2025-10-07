#include "EntradaColor.h"
#include "SalidaAudio.h"

EntradaColor sensor;
SalidaAudio actuador;

void setup() {

  sensor.configurar();
  actuador.configurar();
}

void loop() {

  sensor.leer();
}
