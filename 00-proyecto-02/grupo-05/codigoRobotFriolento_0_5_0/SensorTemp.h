#ifndef SENSOR_TEMP_H
#define SENSOR_TEMP_H

#include <Arduino.h>
//Incluir biblioteca hecha por Dhruba Saha
//para el funcionamiento del sensor.
#include <DHT11.h>

class SensorTemp {
public:
// Según el código de ejemplo
// https://github.com/dhrubasaha08/DHT11/blob/main/examples/ReadTemperature/ReadTemperature.ino#L18
  SensorTemp();
  void configurar();
  void reconocerTemp();
  void leerTemp();

// Se declara que temperatura es un "int", osea un valor numerico
  int temperatura;

  bool frio;

};
#endif