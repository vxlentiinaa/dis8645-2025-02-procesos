#ifndef PARPADOS_H
#define PARPADOS_H

#include <Arduino.h>
#include <Servo.h>

class Parpados {

public:

  Parpados();
  ~Parpados();

  void configurar();

  void moverMotorcillo(int angulo, int tiempo);

  Servo motorcillo;
};


#endif