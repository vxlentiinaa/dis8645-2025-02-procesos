void setup() {
  configurarSensorColor();
  configurarTerminal();
}

void loop() {
 leerSensor();
 tomarDecisiones();
 actuar();
}