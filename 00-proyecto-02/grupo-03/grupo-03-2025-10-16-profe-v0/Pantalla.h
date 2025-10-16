#ifndef PANTALLA_H
#define PANTALLA_H

#include <Arduino.h>
#include <Adafruit_SSD1306.h>

// Tamaño del OLED
#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64

class Pantalla {
  public:
    Pantalla();
    void iniciar();
    void mostrarMenuIdioma(int opcion);
    void mostrarBitmapIdioma(int idioma);
    void mostrarMensajeAplauso();
};

extern Adafruit_SSD1306 display;

#endif
