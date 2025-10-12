

#include "SensorUltraS.h"
#include "Motorcillo.h"

Motorcillo motorcillo;
SensorUltraS sensorUltraS;




void setup() {
  sensorUltraS.setUltra();
  motorcillo.setMotorcillo();
}

void loop() {
  motorcillo.actualizarServo();

  sensorUltraS.bareMinimum();
  motorcillo.actualizarPosition();
  motorcillo.moverCuello();
}
