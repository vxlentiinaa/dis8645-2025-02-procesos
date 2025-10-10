#ifndef SENSOR_H
#define SENSOR_H

#include "Arduino.h"

// clase para sensor
class Sensor {
public:

// constructor
  Sensor();

// destructor
  ~Sensor();

// configurar pin para Triger
// configurar pin para Eco
  void configurarPatita(int PatitaTriger, int patitaEco);

  float leer(int duracion, int distancia);

  void imprimirEnConsola();


