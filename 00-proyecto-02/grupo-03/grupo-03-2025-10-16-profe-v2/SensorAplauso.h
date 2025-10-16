#ifndef SENSOR_APLAUSO_H
#define SENSOR_APLAUSO_H

#include <Arduino.h>

class SensorAplauso {
public:

  ////////////
  // funciones
  ////////////

  // constructor
  SensorAplauso();

  // destructor
  ~SensorAplauso();

  void configurar();

  void leer();

  void decidir();

  bool detectarAplausos();

  ////////////
  // variables
  ////////////

  // sensor de sonido
  // oops era analogo, lo cambiamos a digital
  // 2025-10-16 :(
  // int patitaSensor = A0;
  int patitaSensor = 6;

  // estado del sistema
  bool hayDosAplausos = false;

  // valores de lectura pueden ser 0 o 1
  bool valorActual = 0;
  bool valorAnterior = 0;

  // momentos de lectura
  unsigned long tiempoActual = 0;
  unsigned long tiempoAnterior = 0;

  // momento de cambio de la luz LED
  unsigned long tiempoCambioLED = 0;

  String mensajeAgua = "aplauso detectado";
};

#endif