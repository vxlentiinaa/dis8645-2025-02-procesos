#ifndef SENSOR_ANALOGO_H
#define  SENSOR_ANALOGO_H
#include <Arduino.h>

class SensorAnalogo{
public:
//constructor
SensorAnalogo(int newPin);

void definirRangoUtilizado(int nuevoMin, int nuevoMax);

void definirRangoMapeo(int nuevoMin, int nuevoMax);
//los int de ambos void anteriores, no tienen relación, comparten nombre pero son cosas distintas.

//destructor
~SensorAnalogo();

int currentValor;
int maxValor;
int minValor;
int pin;
int valorMapeado;
int minMapRange;
int maxMapRange;

String nombre;

};


#endif 