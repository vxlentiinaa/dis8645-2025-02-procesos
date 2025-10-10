/*

*/

#include <NewPing.h>     
#include "ultrasonico.h" 
#include "servo.h"

int Scan[181]; // un array para guardar las medidas de los angulos desde 0° a 180°

// --- CONFIGURATION ---
int servoRadar = 10;
int servoOjos = 9;

// configuracion ultrasonico.
const int ultrasonicoTrig = 12;
const int ultrasonicoEcho = 11;
const int maxDistancia = 400;

// The NewPing object
NewPing sonarA(ultrasonicoTrig, ultrasonicoEcho, maxDistancia);

void setup() {
  Serial.begin(115200);
}

void loop() {
  ultrasonico(sonarA);
}

