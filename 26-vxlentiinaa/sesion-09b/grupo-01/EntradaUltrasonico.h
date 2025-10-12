#ifndef ENTRADA_ULTRASONICO_H
#define ENTRADA_ULTRASONICO_H

#include <Arduino.h>

class EntradaUltrasonico {

public:

  EntradaUltrasonico();

  ~EntradaUltrasonico();

  void configurar();

  void medirDistancia();

  void mostrarConsola();

  int patitaTrigger = 11;
  int patitaEcho = 12;

  long duracion;

  float distanciaCm;

  bool estaCerca = false;
};

#endif