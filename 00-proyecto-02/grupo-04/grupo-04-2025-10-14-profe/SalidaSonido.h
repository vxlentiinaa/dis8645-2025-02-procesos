#ifndef SALIDA_SONIDO_H
#define SALIDA_SONIDO_H

#include <Arduino.h>
#include <DFRobotDFPlayerMini.h>
#include <SoftwareSerial.h>

class SalidaSonido {
public:
  SalidaSonido();
  ~SalidaSonido();

  void configurar();
  void loop();
  void reproducirAlerta();

  SoftwareSerial* softSerial;
  DFRobotDFPlayerMini* myDFPlayer;

  int rxPin = 4;
  int txPin = 5;
  int totalTracks = 10;
  int distAudio = 30;
  // Pin para el LED indicador de audio (Debugging)
  int ledPin = 13;

  bool reproduciendo = false;
  unsigned long ultimoAudioReproducido = 0;
  const unsigned long delayEntreAudios = 2000;

  void printDetail(uint8_t type, int value);
};

#endif
