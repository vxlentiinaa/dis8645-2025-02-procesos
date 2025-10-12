#include "SensorSonido.h"

//constuctor 
SensorSonido::SensorSonido (){
}
//destructor 
SensorSonido::SensorSonido(){
}

// definir rango de sonido
#define PIN_SENSOR_SONIDO 7

void SensorSonido::configurar() {
  pinMode(PIN_SENSOR_SONIDO, INPUT);
}

bool SensorSonido::detectarSonido() {
  int estadoSonido = digitalRead(PIN_SENSOR_SONIDO);
  return (estadoSonido == LOW); // LOW cuando detecta aplauso/ruido
}

void SensorSonido::aplausoTextoSonido() {
  if (detectarSonido()) {
    Serial.println("¡Sonido detectado! Reproduciendo audio...");
    reproducirSaludo(opcionMenu);
  }
}
