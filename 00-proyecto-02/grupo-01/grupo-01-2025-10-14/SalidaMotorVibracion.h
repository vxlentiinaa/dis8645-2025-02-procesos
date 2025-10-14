#ifndef MOTOR_VIBRACION_H
#define MOTOR_VIBRACION_H

#include <Arduino.h>

class SalidaMotorVibracion {
public:
  // constructor
  SalidaMotorVibracion();
  // destructor
  ~SalidaMotorVibracion();

  // configura los pines
  void configurar();
  // mide distancia y ajusta vibración
  void actualizar();
  // función auxiliar
  float medirDistancia();

  // pines
  int TRIG_PIN = 11;
  int ECHO_PIN = 12;
  int MOTOR_PIN = 9;


  // variables internas
  unsigned long duracion = 0;
  float distanciaCm = 0;
  int intensidad = 0;
};

#endif