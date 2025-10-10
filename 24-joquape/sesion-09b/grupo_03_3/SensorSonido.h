#ifndef SENSOR_SONIDO_H
#define SENSOR_SONIDO_H

#include <Arduino.h>
#define PIN_SENSOR_SONIDO 7

class SensorSonido {
  // constructor
  SensorSonido();

  // destructor
  ~SensorSonido();

  void configurar();

  bool detectarSonido();

  void aplausoTextoSonido();
}
#endif