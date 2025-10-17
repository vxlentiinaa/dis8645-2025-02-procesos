#include "ServoSensores.h"

ServoSensores::ServoSensores() {}
ServoSensores::~ServoSensores() {}

void ServoSensores::configurar() {
  ServoSensores::motorcillo.attach(6);
}

void ServoSensores::moverMotorcillo(int angulo, int tiempo) {
  motorcillo.write(angulo);
  delay(tiempo);
}

int ServoSensores::getAnguloActual() {
  return motorcillo.read();
}