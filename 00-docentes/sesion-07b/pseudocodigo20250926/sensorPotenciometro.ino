
int valorActualPotenciometro = 0;

void configurarSensorPotenciometro() {
  // por ahora nada
}

void leerPotenciometro() {
  valorActualPotenciometro = analogRead(patitaPotenciometro);

  if (terminalPrendida) {
    Serial.println(valorActualPotenciometro);
  }
}