
void setup() {
  configurarSensoresActuadores();
}


void loop() {
  leerSensores();

  tomarDecisiones();

  actuar();
}
