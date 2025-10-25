#ifndef SENSOR_ENCODER_H
#define SENSOR_ENCODER_H

#include <Arduino.h>

class SensorEncoder {
public:
  // constructor
  SensorEncoder();
  // destructor
  ~SensorEncoder();

  void configurar();
  int tomarDecisiones();

  int patitaClock = 2;
  int patitaData = 3;
  int patitaSwitch = 4;
  int clockAnterior = LOW;
  int clockActual;
  bool botonVolver = false;
  int opcionMenu = 0;
};

#endif