#ifndef OJOS_H
#define OJOS_H

#include <Arduino.h>
#include <Servo.h>

class Ojos {

  public:

  Ojos();
  ~Ojos();

  void configurar();

  // Mueve los ojos a un ángulo objetivo específico.
  void apuntar(int anguloObjetivo);

  //variablels y funciones internas
  private:
  
  Servo servoOjos;
  
  // La patita que controla el servo
  const int patitaServoOjos = 10;
};


#endif