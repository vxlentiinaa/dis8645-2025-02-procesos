#include "variablesGlobales.h"


void setup() {
  configurarSensoresActuadores();
  configurarTerminal();
}

void loop() {
  leerSensores();
  tomarDecisiones();
  actuar();
}


