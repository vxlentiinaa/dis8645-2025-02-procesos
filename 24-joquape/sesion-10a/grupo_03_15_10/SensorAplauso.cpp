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
  //salida es el led
  pinMode(SensorAplauso::patitaLED, OUTPUT);
}

void SensorAplauso::leer() {
  // lee el valor del sensor
  SensorAplauso::valorActual = digitalRead(SensorAplauso::patitaSensor);

  // guardar valor para medir el tiempo entre aplausos
  SensorAplauso::tiempoActual = millis();
}

void SensorAplauso::decidir() {

  // si el valor actual es 1
  if (SensorAplauso::valorActual == 1) {

    // y ademas se cumplen todas estas otras condiciones
    if (

      // para evitar detectar el sonido varias veces
      (SensorAplauso::tiempoActual > SensorAplauso::tiempoAnterior + 200) &&
      // para asegurarse de que no haya habido sonido antes
      (SensorAplauso::valorAnterior == 0) &&
      // segundo aplauso en 0.8 segundos
      (SensorAplauso::tiempoActual < SensorAplauso::tiempoAnterior + 800) &&
      // evitar un tercer aplauso
      (SensorAplauso::tiempoActual > SensorAplauso::tiempoCambioLED + 1000)) {

      SensorAplauso::hayAplauso = true;
      // CAMBIAR PARA REPRODUCIR SONIDO Y MOSTRAR MENSAJE
      Serial.println(SensorAplauso::mensajeAgua);
      // lo de aqui abajo es del código anterior
      // para usar la luz led como lámpara
      //relayStatus = !relayStatus;
      //digitalWrite(signalToRelayPin, relayStatus);
      //lastLightChange = SensorAplauso::tiempoActual;
    }
  }
  else {
     // PORHACER
     // por ahora, hayAplauso queda true
     // pero nadie se hace cargo aun
     // de volverlo false
  }

  // guardar lo actual en lo anterior
  // para luego poder actualizar lo actual
  SensorAplauso::valorAnterior = SensorAplauso::valorActual;
  SensorAplauso::tiempoAnterior = SensorAplauso::tiempoActual;
}