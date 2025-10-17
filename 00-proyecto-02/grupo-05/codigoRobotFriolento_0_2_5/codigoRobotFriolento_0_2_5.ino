#include "SensorTemp.h"
#include "SensorUltra.h"
#include "Pantalla.h"

SensorUltra sensorUltra;
SensorTemp sensorTemp;
Pantalla pantalla;

void setup() {
  //Serial.begin(115200);  // 🔹 Solo una vez aquí
  sensorUltra.configurar();
  sensorTemp.configurar();
  pantalla.configurar();
  pantalla.mostrar();
}

void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();

  sensorTemp.reconocerTemp();
  sensorTemp.leerTemp();
  
  pantalla.mostrar();
}
