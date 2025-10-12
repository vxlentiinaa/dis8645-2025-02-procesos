#ifndef MOTORCILLO_H
#define MOTORCILLO_H

#include <Arduino.h>
#include <Servo.h>

class Motorcillo{
public:

Motorcillo();

Servo motorcillo;
int angulo;
int posMax;
int posMin;
int position;
int direction = 1;
int incremento;
bool amenaza;

void moverCuello();

void setMotorcillo();
void bareMinimum();
void actualizarServo();
void actualizarPosition();

};

#endif