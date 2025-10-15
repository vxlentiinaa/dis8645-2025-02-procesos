// constructores de este archivo del proyecto 
#ifndef ACTUADOR_PANTALLA_H
#define ACTUADOR_PANTALLA_H

// incluir todos las bilbiotecas para el funcionamiento
// del display OLED1306
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// crear la clase de ActuadorPantalla
class ActuadorPantalla {
public:
   ActuadorPantalla(); 
   // funcionamiento de la pantalla
    void configurar();  
   // se definira una clase para cada "estado" del robot
   // cuando tiene frio, no tiene frio, o no detecta a nadie
    void mostrarImagenTemperado();
    void mostrarImagenFrio();
    void mostrarImagenNadie();

    // Definiciones de parametros de el display
    int SCREEN_WIDTH  = 128;
    int SCREEN_HEIGHT = 64;
    int OLED_RESET    = -1;

    // Declaración del tamaño las imágenes 
    int LOGO_HEIGHT = 64;
    int LOGO_WIDTH  = 128;
  
    // Aqui le pondremos el nombre al display en este caso caraMuneco, tambien
    // cual es su ancho y alto segun datos establecidos previamente
    Adafruit_SSD1306 caraMuneco = Adafruit_SSD1306(
    ActuadorPantalla::SCREEN_WIDTH,
    ActuadorPantalla::SCREEN_HEIGHT,
    &Wire,
    ActuadorPantalla::OLED_RESET);
};
// destructor para este archivo del proyecto para no causar problemas en el codigo
#endif