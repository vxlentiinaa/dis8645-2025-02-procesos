#ifndef PANTALLITA_H
#define PANTALLITA_H

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class Pantallita {

  // constructor
  Pantallita();

  // destructor
  ~Pantallita();

  void configurar();

  void desplegar(int opcionMenu);

  Adafruit_SSD1306 display;

  //Medidas de la pantalla
  int ANCHO_PANTALLA = 128;
  int ALTO_PANTALLA = 64;
  int OLED_RESET = -1;
};

#endif