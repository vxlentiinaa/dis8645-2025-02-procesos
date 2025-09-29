void setup() {
  sensorUltrasonico();
}

void loop() {
  leerSensores();

  procesamientoSensores();

  actuarSensores();

}
