void setup() {
   configurarSensorUltrasonico();
}

void loop() {
  leerSensores();

  procesamientoSensores();

  actuarSensores();

}
