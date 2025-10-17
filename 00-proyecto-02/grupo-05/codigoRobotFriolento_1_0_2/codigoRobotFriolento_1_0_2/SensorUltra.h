// constructores de este archivo del proyecto 
#ifndef SENSOR_ULTRA_H
#define SENSOR_ULTRA_H

#include <Arduino.h>

class SensorUltra {

public:
  SensorUltra();

  // establecer las 3 partes del 
  // funcionamiento para el sensor
  void configurar();
  void reconocerDistancia();
  void leerDistancia();

// definir cuales seran los pines para la funcion de
// trigger y echo en el sensor
  int trigPin = 3;
  int echoPin = 2;
// definir datos para el calculo de la distancia
  int distancia = 0;
  int duracion = 500;
// definir una booleana sobre la existencia de una persona
  bool persona = false;
};

// destructor para este archivo del proyecto para no causar problemas en el codigo
#endif