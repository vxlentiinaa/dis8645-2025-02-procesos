#ifndef MOTOR_VIBRACION_H
#define MOTOR_VIBRACION_H

#include <Arduino.h>

class SalidaMotorVibracion {
public:
  // Constructor
  SalidaMotorVibracion();
  // Destructor
  ~SalidaMotorVibracion();

  // Configura los pines
  void configurar();
  // Mide distancia y ajusta vibración
  void actualizar();
  // Función auxiliar
  float medirDistancia();

  // Pines
  int TRIG_PIN = 11;
  int ECHO_PIN = 12;
  int MOTOR_PIN = 9;

  // Rangos de distancia (en cm)
  float minCercana = 2;
  float maxCercana = 15;

  float minMediana = 80;
  float maxMediana = 100;
  float minLejana = 130;
  float maxLejana = 150;

  // Variables internas
  unsigned long duracion = 0;
  float distanciaCm = 0;
  int intensidad = 0;
};

#endif