// incluir la clase escrita
#include "SensorAplauso.h"

// hacer una instancia de la clase
SensorAplauso sensorAplauso;

void setup() {
  // comunicación serial
  Serial.begin(9600);

  sensorAplauso.configurar();
}

void loop() {

  sensorAplauso.leer();

  sensorAplauso.decidir();

  
}