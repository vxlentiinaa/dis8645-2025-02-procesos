#include "Microfono.h"

// constructor
Microfono::Microfono() {
}

void Microfono::configurarPatita(int nuevaPatita) {
  patita = nuevaPatita;
}

void Microfono::leer() {
  valorActual = analogRead(patita);
}

void Microfono::actualizarPeakToPeak() {
  peakToPeak = signalMax - signalMin;
}

void Microfono::actualizarMinMax() {
  if (valorActual < 1024) {
    // actualizar minimo
    if (valorActual < signalMin) {
      signalMin = valorActual;
    }
    // actualizar maximo
    if (valorActual > signalMax) {
      signalMax = valorActual;
    }
  }
}

void Microfono::imprimirEnConsola() {
  // imprime en serial: formato legible y también CSV opcional
  Serial.print("mic: ");
  Serial.print(valorActual);

  // // Si quieres formato CSV para graficar: descomenta la línea siguiente
  // // Serial.print(peakToPeak1); Serial.print(","); Serial.println(peakToPeak2);
}

// destructor
Microfono::~Microfono() {
}