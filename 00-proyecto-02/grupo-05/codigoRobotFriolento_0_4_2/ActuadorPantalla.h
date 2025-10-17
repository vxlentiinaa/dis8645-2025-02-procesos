#ifndef ACTUADOR_PANTALLA_H
#define ACTUADOR_PANTALLA_H

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class ActuadorPantalla {
public:
    ActuadorPantalla(Adafruit_SSD1306* display);  // Constructor correcto
    void iniciar();                               // Estas funciones deben estar
    void mostrarImagen(float temperatura);
    void mostrarLogo1();
    void mostrarLogo2();

#endif