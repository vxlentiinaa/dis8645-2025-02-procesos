#ifndef SENSOR_ULTRA_H
#define SENSOR_ULTRA_H

#include <Arduino.h>
class SensorUltraS {
public:
SensorUltraS();

// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;
bool amenaza;


void setUltra();
void bareMinimum();

};
#endif