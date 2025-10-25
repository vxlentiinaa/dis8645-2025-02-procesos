#include "ServoSensores.h"


ServoSensores::ServoSensores() {}
ServoSensores::~ServoSensores() {}

void ServoSensores::configurar() {
  ServoSensores::motorcillo.attach(6);
}

void ServoSensores::moverMotorcillo() {
  if (escanearPresencia == true) {
    // cada 0.5 ms cambia un grado
    if (millis() - ultimoTiempo >= 0.5) {
      angulo += direccion;
      motorcillo.write(angulo);

      // si llega a un extremo, cambia de dirección
      if (angulo >= 180 || angulo <= 0) {
        direccion = -direccion;
      }

      ultimoTiempo = millis();
    }
  }
}

void ServoSensores::imprimirEnConsola() {
  Serial.print("Angulo: ");
  Serial.println(angulo);
  delay(800);
}

int ServoSensores::getAnguloActual() {
  return motorcillo.read();
}
