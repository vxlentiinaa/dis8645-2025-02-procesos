#ifndef ENTRADA_ULTRASONICO_H
#define ENTRADA_ULTRASONICO_H

#include <Arduino.h>

class EntradaUltrasonico {

public:

  EntradaUltrasonico();

  ~EntradaUltrasonico();

  void configurar();

  float medirDistancia();

  void mostrarConsola();

  // pin digital 11 para el Trigger del sensor
  int patitaTrigger = 11;

  // pin digital 12 para el Echo del sensor
  int patitaEcho = 12;

  long duracion;

  int distanciaCm;

  bool estaCerca = false;
};

#endif