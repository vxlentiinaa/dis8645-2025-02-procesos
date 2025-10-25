#ifndef SENSOR_APLAUSO_H
#define SENSOR_APLAUSO_H

#include <Arduino.h>

class SensorAplauso {
public:

  ////////////
  // funciones
  ////////////

// constructor, inicializa objeto
  SensorAplauso();

// destructor, libera recursos si es necesario
  ~SensorAplauso();

//Configura el pin del sensor como entrada
  void configurar();

//Leer el estado actual del sensor
  void leer();

// Decide si se detectaron dos aplausos consecutivos
  void decidir();

 // Detecta aplausos (función extra para uso externo)
  bool detectarAplausos();

  ////////////
  // variables
  ////////////

  // sensor de sonido
  // oops era analogo, lo cambiamos a digital
  // 2025-10-16 :(
  // int patitaSensor = A0;
  int patitaSensor = 6;

 // Estado del sistema: true si hay dos aplausos
  bool hayDosAplausos = false;

  // valores de lectura pueden ser 0 (LOW) o 1 (HIGH)
  bool valorActual = 0;
  bool valorAnterior = 0;

  // momentos de lectura en milisegundos
  unsigned long tiempoActual = 0;
  unsigned long tiempoAnterior = 0;

  // momento de cambio de la luz LED
  unsigned long tiempoCambioLED = 0;

  // Mensaje de depuración
  String mensajeAgua = "aplauso detectado";
};

#endif