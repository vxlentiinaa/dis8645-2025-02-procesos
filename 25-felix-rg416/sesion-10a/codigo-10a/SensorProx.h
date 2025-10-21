#ifndef SENSOR_PROX_H
#define SENSOR_PROX_H

#include <Arduino.h>

// clase para sensor
class SensorProx {
public:

  SensorProx();
  ~SensorProx();

  void configurar();
  void leer();
  void imprimirEnConsola();
  void determinarPresencia();
  // void presencia();
  // void nada();
  int patitaTrigger = 9;
  int patitaEcho = 10;
  float duracion = 0;
  float distancia = 0;
  bool presencia = false;
};

#endif