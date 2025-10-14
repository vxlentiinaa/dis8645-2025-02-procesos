#ifndef MOTOR_VIBRACION_H
#define MOTOR_VIBRACION_H

#include <Arduino.h>

class SalidaMotorVibracion {
public:
  SalidaMotorVibracion();       // Constructor
  ~SalidaMotorVibracion();      // Destructor

  void configurar();         // Configura los pines
  void actualizar();         // Mide distancia y ajusta vibración
  float medirDistancia();    // Función auxiliar

private:
  // Pines
  const int TRIG_PIN = 11;
  const int ECHO_PIN = 12;
  const int MOTOR_PIN = 9;

  // Rangos de distancia (en cm)
  float minCercana = 2;
  float maxCercana = 15;

  float minMediana = 80;
  float maxMediana = 100;

  float minLejana = 130;
  float maxLejana = 150;

  // Variables internas
  long duracion = 0;
  float distanciaCm = 0;
  int intensidad = 0;
};

#endif