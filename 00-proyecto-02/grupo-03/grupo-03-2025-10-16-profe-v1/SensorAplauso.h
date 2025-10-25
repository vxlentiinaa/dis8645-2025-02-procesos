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
  int patitaSensor = A0;
  
  // estado del sistema
  bool hayDosAplausos = false;

  // valores de lectura pueden ser 0 o 1
  int valorActual = 0;
  int valorAnterior = 0;

  // momentos de lectura
  unsigned long tiempoActual = 0;
  unsigned long tiempoAnterior = 0;

  // momento de cambio de la luz LED
  unsigned long tiempoCambioLED = 0;

  String mensajeAgua = "aplauso detectado";
};

#endif