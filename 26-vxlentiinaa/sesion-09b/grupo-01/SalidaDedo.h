#ifndef SALIDA_DEDO_H
#define SALIDA_DEDO_H

#include <Arduino.h>
#include <Servo.h>

class SalidaDedo {

public:
  
  // constructor
  SalidaDedo();

  // destructor
  ~SalidaDedo();

  void configurar();

  void levantar();

  void bajar();

  int patitaServo = 13; //SOLO CAMBIAMOS EL NUMERO DEL PIN 
  
  Servo servo;
};

#endif