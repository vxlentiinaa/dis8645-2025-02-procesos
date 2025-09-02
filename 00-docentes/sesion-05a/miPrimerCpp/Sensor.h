#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

class Sensor {

public:
  // constructor
  Sensor();


  int patita;

  int valorActual;
  int valorMinimo;
  int valorMaximo;

  int valorMapeado;
  int rangoMapeadoMin;
  int rangoMapeadoMax;

  String nombre;






};

#endif