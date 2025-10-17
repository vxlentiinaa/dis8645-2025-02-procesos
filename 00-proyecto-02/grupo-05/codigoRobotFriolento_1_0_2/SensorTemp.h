// constructores de este archivo del proyecto 
#ifndef SENSOR_TEMP_H
#define SENSOR_TEMP_H

#include <Arduino.h>
#include <DHT11.h>

// crear la clase de SensorTemp
class SensorTemp {
public:
  SensorTemp();
  //
  void configurar();
  void reconocerTemp();
  void leerTemp();

// Se declara que temperatura es un "int", osea un valor numerico
  int temperatura;

// variable booleana para especificar si Friolin siene frio actualmente o no
  bool frio;

};
// destructor para este archivo del proyecto para no causar problemas en el codigo
#endif