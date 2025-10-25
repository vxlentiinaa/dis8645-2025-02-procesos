#ifndef PANTALLA_H
#define PANTALLA_H

#include <Arduino.h>
#include <Adafruit_SSD1306.h>

// Tamaño del OLED
#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64

class Pantalla {
  public:
    Pantalla();  //Constructor
    void iniciar();  //Inicializa pantall OLED
    void mostrarMenuIdioma(int opcion); // Muestra menú de selección de idioma, resalta 'opcion'
    void mostrarBitmapIdioma(int idioma); // Muestra imagen correspondiente al idioma seleccionado
    void mostrarMensajeAplauso(); // Muestra mensaje de instrucciones para aplauso
};

// Objeto global para usar la pantalla en todo el proyecto

extern Adafruit_SSD1306 display;

#endif
