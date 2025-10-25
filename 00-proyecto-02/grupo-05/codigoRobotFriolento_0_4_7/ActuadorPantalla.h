#ifndef ACTUADOR_PANTALLA_H
#define ACTUADOR_PANTALLA_H

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class ActuadorPantalla {
private:
    // Puntero para la instancia de la pantalla
    Adafruit_SSD1306* _display;
public:
    // Se corrige el constructor para que no genere un error de definición de clase en ActuadorPantalla.cpp
    ActuadorPantalla(); // Se añade un constructor por defecto
    void configurar();  // Se añade función configurar() para reemplazar iniciar()
    void mostrarImagen(int temperatura);
    void mostrarLogo1();
    void mostrarLogo2();
};

#endif // ACTUADOR_PANTALLA_H