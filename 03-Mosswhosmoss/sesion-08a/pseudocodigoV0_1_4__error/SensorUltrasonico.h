#ifndef SENSOR_ULTRASONICO_H
#define SENSOR_ULTRASONICO_H

#include "Arduino.h"
void configurarSensorUltra();
void reconocimientoDistancia();
void leerDistancia();

const int trigPin = 3;

const int echoPin = 2;

int distancia = 0;
int duracion = 1000;

bool persona;

#endif