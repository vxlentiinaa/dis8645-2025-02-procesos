#ifndef ACTUADOR_PANTALLA_H
#define ACTUADOR_PANTALLA_H

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Definiciones de parametros de el display
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64 
#define OLED_RESET -1

// Declaración del tamaño las imágenes 
#define LOGO_HEIGHT   64
#define LOGO_WIDTH    128

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
  
};

#endif