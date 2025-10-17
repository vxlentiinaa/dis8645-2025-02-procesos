#ifndef SERVO_SENSORES_H

#define SERVO_SENSORES_H


#include <Arduino.h>
#include <Servo.h>



class ServoSensores {
public:
  ServoSensores();
  ~ServoSensores();

  void configurar();            // método para adjuntar el servo
  void moverMotorcillo(int angulo, int tiempo);
  int getAnguloActual(); // devuelve el ángulo actual del servo de los sensores

private:
  Servo motorcillo;                    // servo interno
  int pinMotor;                        // guarda el pin
};

#endif