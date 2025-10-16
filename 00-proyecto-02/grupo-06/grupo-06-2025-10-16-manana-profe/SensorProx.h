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

  void configurar(int echo, int trigger);

  void leer();

  void imprimirEnConsola();

  void determinarPresencia();

  // void presencia();
  // void nada();

  int patitaTrigger = -1;
  int patitaEcho = -1;

  float duracion = 0;
  float distancia = 0;

  bool presencia = false;
};

#endif