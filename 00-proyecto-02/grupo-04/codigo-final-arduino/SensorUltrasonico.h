#ifndef SENSOR_ULTRASONICO_H
#define SENSOR_ULTRASONICO_H

#include <Arduino.h>
#include <NewPing.h>


class SensorUltrasonico {

public:

  SensorUltrasonico();
  ~SensorUltrasonico();

  void configurar();
  int medirDistanciaCm();

// Variables privadas que solo el sensor necesita saber
private: 
  // Las patitas y la distancia máxima son configuración interna del sensor
  const int patitaTrig = 12;
  const int patitaEcho = 11;
  const int maxDistancia = 500;
  
  // Un puntero a un objeto de la librería NewPing.
  // Usamos un puntero para poder crearlo en el .cpp
  NewPing* sonar;

};

#endif