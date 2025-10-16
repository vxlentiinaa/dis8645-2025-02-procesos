#ifndef REPRODUCTORMP3_H
#define REPRODUCTORMP3_H

#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

class ReproductorMP3 {
  public:
    void iniciar();
    void reproducirSaludo(int idioma);
};

#endif
