#ifndef ACTUADOR_PANTALLA_H
#define ACTUADOR_PANTALLA_H

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class ActuadorPantalla {
public:
  ActuadorPantalla();
  // funcionamiento de la pantalla
  void configurar();
  // se definira una clase para cada "estado" del robot
  // cuando tiene frio, no tiene frio, o no detecta a nadie
  void mostrarImagenCalor();
  void mostrarImagenFrio();
  void mostrarImagenNadie();

  // parametros de el display
  int SCREEN_WIDTH = 128;
  int SCREEN_HEIGHT = 64;
  int OLED_RESET = -1;

  // tamano de las imagenes
  int LOGO_HEIGHT = 64;
  int LOGO_WIDTH = 128;

  // PROFE: agregue esto
  Adafruit_SSD1306 caraMuneco = Adafruit_SSD1306(
    ActuadorPantalla::SCREEN_WIDTH,
    ActuadorPantalla::SCREEN_HEIGHT,
    &Wire,
    ActuadorPantalla::OLED_RESET);
};

#endif