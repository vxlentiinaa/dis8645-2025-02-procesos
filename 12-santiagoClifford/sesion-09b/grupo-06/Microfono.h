#ifndef MICROFONO_H
#define MICROFONO_H

#include "Arduino.h"

// clase para microfono
class Microfono {
public:

  // constructor
  Microfono();

  // destructor
  ~Microfono();

  void configurarPatita(int nuevaPatita);

  void leer();

  void actualizarMinMax();

  void actualizarPeakToPeak();

  void imprimirEnConsola();

  int patita;
  int valorActual;

  unsigned int peakToPeak = 0;
  unsigned int signalMin;
  unsigned int signalMax;


  // unsigned int peakToPeak1 = 0;          // amplitud pico-pico mic1
  // unsigned int peakToPeak2 = 0;          // amplitud pico-pico mic2

  // unsigned int signalMax1 = 0;     // max detectado mic1
  // unsigned int signalMin1 = 1024;  // min detectado mic1
  // unsigned int signalMax2 = 0;     // max detectado mic2
  // unsigned int signalMin2 = 1024;  // min detectado mic2
};

#endif