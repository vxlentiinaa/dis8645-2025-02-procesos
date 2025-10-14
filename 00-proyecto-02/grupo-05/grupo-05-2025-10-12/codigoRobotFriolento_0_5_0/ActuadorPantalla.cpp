#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "ActuadorPantalla.h"
#include "BitmapsPantalla.h"

// Aqui le pondremos el nombre al display
// tambien cual es su ancho y alto
// no estoy seguro orque tiene que estar en este archivo, pero no funciona en el "ActuadorPantalla.h"
Adafruit_SSD1306 caraMuneco(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

ActuadorPantalla::ActuadorPantalla() {}

void ActuadorPantalla::configurar() {
  // Error que es visible en el monitor serial
  //en caso de que el display no inicia correctamente
    if (!caraMuneco.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
     // No se pudo inicializar la pantalla
      for (;;);
       Serial.print("Error con el display");
    }
    // limpia la pantalla y la vuelve a actualizar
    // constantemente para que no se mueva el contenido
     caraMuneco.clearDisplay();
     caraMuneco.display();
}

void ActuadorPantalla::mostrarImagenCalor() {
    caraMuneco.clearDisplay();
    caraMuneco.drawBitmap(0, 0, logo_bmp, LOGO_WIDTH, LOGO_HEIGHT, WHITE);
    caraMuneco.display();
}

void ActuadorPantalla::mostrarImagenFrio() {
    caraMuneco.clearDisplay();
    caraMuneco.drawBitmap(0, 0, logo2_bmp, LOGO_WIDTH, LOGO_HEIGHT, WHITE);
    caraMuneco.display();
}

void ActuadorPantalla::mostrarImagenNadie() {

}


