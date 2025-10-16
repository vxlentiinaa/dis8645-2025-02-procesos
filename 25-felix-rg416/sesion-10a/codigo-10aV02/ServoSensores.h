#ifndef SERVO_SENSORES_H
#define SERVO_SENSORES_H

#include <Arduino.h>
#include <Servo.h>

class ServoSensores {

public:

  ServoSensores();
  ~ServoSensores();

  void configurar();
  void moverMotorcillo(int angulo, int tiempo);
  int getAnguloActual();
  Servo motorcillo;
};


#endif