#ifndef SENSORANALOGO_H
#define SENSORANALOGO_H

#include <Arduino.h>

class SensorAnalogo {
  
public:
  // constructor
  SensorAnalogo(int nuevaPatita);

// cual es el rango que entra
  void definirRangoUtil(int nuevoMin, int nuevoMax);

  void definirRangoMapeo(int nuevoMin, int nuevoMax);

  void leerValor();

  // destructor
  ~SensorAnalogo();

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