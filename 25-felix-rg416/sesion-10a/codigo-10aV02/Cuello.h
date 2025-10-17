#ifndef CUELLO_H
#define CUELLO_H

#include <Arduino.h>
#include <Servo.h>

class Cuello {

public:

  Cuello();
  ~Cuello();

  Servo motorcillo;

  void configurar();

  // void moverMotorcillo(int angulo, int tiempo);
  void moverCuello();

  void amenaza();
};

#endif