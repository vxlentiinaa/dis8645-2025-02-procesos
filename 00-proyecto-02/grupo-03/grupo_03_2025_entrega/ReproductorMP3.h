#ifndef REPRODUCTORMP3_H
#define REPRODUCTORMP3_H

#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

// Clase para controlar el reproductor MP3 DFPlayer
class ReproductorMP3 {
  public:

  // Inicializa la comunicación con el DFPlayer y ajusta volumen
    void iniciar(); 

  // Reproduce un saludo según el idioma seleccionado
  // idioma: 0 = Ruso, 1 = Japonés, 2 = Francés, otro = mensaje de error

    void reproducirSaludo(int idioma); // Reproduce archivo MP3 según idioma
};

#endif
