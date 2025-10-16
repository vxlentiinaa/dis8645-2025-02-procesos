// definir rango de sonido
#define PIN_SENSOR_SONIDO 7

void configurarSensorSonido() {
  pinMode(PIN_SENSOR_SONIDO, INPUT);
}

bool detectarSonido() {
  int estadoSonido = digitalRead(PIN_SENSOR_SONIDO);
  return (estadoSonido == LOW); // LOW cuando detecta aplauso/ruido
}

void aplausoTextoSonido() {
  if (detectarSonido()) {
    Serial.println("¡Sonido detectado! Reproduciendo audio...");
    reproducirSaludo(opcionMenu);
  }
}