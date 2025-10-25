#include "constantes.h"
#include "SensorProx.h"
#include "Cuello.h"
#include "Parpados.h"
#include "ServoSensores.h"
#include <Servo.h>
#include <Arduino.h>

// variable temporal para lecturas
unsigned int sample;

unsigned long startMillis;

Cuello cuello;
Parpados parpados;
ServoSensores sensores;

SensorProx sensorProxIZQ;
SensorProx sensorProxDER;

bool imprimir = true;

void setup() {

  cuello.configurar();
  parpados.configurar();

  sensorProxIZQ.configurar(10, 9);
  sensorProxIZQ.configurar(12, 11);

  // inicia monitor serial
  Serial.begin(9600);
}

void loop() {
 cuello.moverCuello();

  sensorProxIZQ.leer();
  sensorProxIZQ.determinarPresencia();

  if (sensorProxIZQ.presencia){
    
  }
}
