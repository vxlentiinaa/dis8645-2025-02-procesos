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

  float minCercana = 2;
  float maxCercana = 10;
  String mensajeCercana = "no se lo digas a nadie… pero me da miedo el WiFi.";

  float minMediana = 40;
  float maxMediana = 60;
  String mensajeMediana = "ACERCATE MAS";

  float minLejana = 80;
  float maxLejana = 100;
  String mensajeLejana = "HOLA HUMANO VEN";

  String mensajeEnOtroCaso = "ZZZ...";

  long duracion;

  float distanciaCm;

  bool estaCerca = false;
};

#endif
