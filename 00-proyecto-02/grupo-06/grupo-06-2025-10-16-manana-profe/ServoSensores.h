#ifndef SERVO_SENSORES_H
#define SERVO_SENSORES_H


#include <Arduino.h>
#include <Servo.h>


class ServoSensores {
public:
  ServoSensores();
  ~ServoSensores();

  void configurar();
  // método para adjuntar el servo
  void moverMotorcillo(int angulo, int tiempo);
  // devuelve el ángulo actual del servo de los sensores
  int getAnguloActual();

  // servo interno
  Servo motorcillo;
  int pinMotor;  // guarda el pin
};

#endif