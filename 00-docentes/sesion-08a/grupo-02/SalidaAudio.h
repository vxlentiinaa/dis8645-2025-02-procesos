#ifndef SALIDA_AUDIO_H
#define SALIDA_AUDIO_H

#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

class SalidaAudio {

public:

  SalidaAudio();

  ~SalidaAudio();

  void configurar();
};

#endif