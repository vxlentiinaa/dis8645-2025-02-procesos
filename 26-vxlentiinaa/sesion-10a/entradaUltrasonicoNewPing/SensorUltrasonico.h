#ifndef SENSOR_ULTRASONICO_H
#define SENSOR_ULTRASONICO_H

#include <Arduino.h>
#include <NewPing.h>

class SensorUltrasonico {
public:
  SensorUltrasonico(int triggerPin = 11, int echoPin = 12, int distanciaMax = 200);
  ~SensorUltrasonico();

  void configurar();
  void medirDistancia();
  void mostrarConsola();

  bool estaCerca = false;
  unsigned int distanciaCm = 0; // sin decimales

private:
  int patitaTrigger;
  int patitaEcho;
  int distanciaMax;
  NewPing* sonar;  // Usa la clase original NewPing correctamente

  // Rangos de distancia personalizados
  int minCercana = 2;
  int maxCercana = 15;
  int minMediana = 70;
  int maxMediana = 90;
  int minLejana = 130;
  int maxLejana = 150;

  String mensajeCercana = "¿Sabías qué? El 99% de los problemas se arreglan reiniciando.";
  String mensajeMediana = "Hola, no seas tímido, ven más cerca. No tengo virus (creo, jiji).";
  String mensajeLejana = "Hola humano, ¿por qué estás tan lejos? Acércate.";
  String mensajeEnOtroCaso = "Fuera de rango.";
};

#endif

