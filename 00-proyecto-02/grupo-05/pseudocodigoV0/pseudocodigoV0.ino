void setup() {
  configurarSensoresActuadores();
}

void loop() {
  leerSensores();

  procesamientoSensores();

  actuarSensores();

}
