#ifndef SENSOR_ANALOGO_H
#define SENSOR_ANALOGO_H

#include <Arduino.h>

class SensorAnalogo {

public:
  // constructor
  SensorAnalogo(int nuevaPatita);

    // destructor
  ~SensorAnalogo();

  void definirRangoUtil(int nuevoMin, int nuevoMax);

  void definirRangoMapeo(int nuevoMin, int nuevoMax);

  void leerValor();
  

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