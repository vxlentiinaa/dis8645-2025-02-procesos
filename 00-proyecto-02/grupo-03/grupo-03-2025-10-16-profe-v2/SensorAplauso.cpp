#include "SensorAplauso.h"

// constructor
SensorAplauso::SensorAplauso() {
}

// destructor
SensorAplauso::~SensorAplauso() {
}


void SensorAplauso::configurar() {
  //entrada es el sensor
  pinMode(SensorAplauso::patitaSensor, INPUT);
}

void SensorAplauso::leer() {
  // lee el valor del sensor
  // Serial.println("VOY A LEER ATENCION");
  SensorAplauso::valorActual = digitalRead(SensorAplauso::patitaSensor);


  // guardar valor para medir el tiempo entre aplausos
  SensorAplauso::tiempoActual = millis();
}

void SensorAplauso::decidir() {

  // si el valor actual es 1
  if (SensorAplauso::valorActual == HIGH) {
    SensorAplauso::hayDosAplausos = true;
  } else {
    SensorAplauso::hayDosAplausos = false;
  }

  // PORHACER
  // por ahora, hayAplauso queda true
  // pero nadie se hace cargo aun
  // de volverlo false


  // guardar lo actual en lo anterior
  // para luego poder actualizar lo actual
  SensorAplauso::valorAnterior = SensorAplauso::valorActual;
  SensorAplauso::tiempoAnterior = SensorAplauso::tiempoActual;
}
