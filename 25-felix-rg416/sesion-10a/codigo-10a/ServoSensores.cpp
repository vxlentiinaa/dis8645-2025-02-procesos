#include "ServoSensores.h"

ServoSensores::ServoSensores() {}
ServoSensores::~ServoSensores() {}

void ServoSensores::configurar() {
  ServoSensores::motorcillo.attach(6);
}
