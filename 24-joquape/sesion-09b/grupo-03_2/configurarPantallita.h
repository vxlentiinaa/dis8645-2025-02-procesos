#ifndef CONFIGURAR_PANTALLA_H
#define CONFIGURAR_PANTALLA_H


#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//Medidas de la pantalla 
#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64
#define OLED_RESET -1

extern Adafruit_SSD1306 display;


void configurarPantallita() ;

void desplegarMensajePantalla(int opcionMenu);


#endif