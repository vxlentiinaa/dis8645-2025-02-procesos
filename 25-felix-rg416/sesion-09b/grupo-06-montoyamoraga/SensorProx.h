#ifndef SENSOR_PROX_H
#define SENSOR_PROX_H

#include <Arduino.h>

// clase para sensor
class SensorProx {
public:

  // constructor
  SensorProx();

  // destructor
  ~SensorProx();

  void configurar();

  void leer();

  void imprimirEnConsola();

  int patitaTrigger = 9;
  int patitaEcho = 10;

  float duracion;
  float distancia;

};

#endif