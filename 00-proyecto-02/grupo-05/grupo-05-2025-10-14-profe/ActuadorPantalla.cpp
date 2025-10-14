#include "ActuadorPantalla.h"
#include "BitmapsPantalla.h"

// PROFE: comente estas, porque
// ya estan en ActuadorPantalla.h
#include <Wire.h>
// #include <SPI.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SSD1306.h>

// Aqui le pondremos el nombre al display
// tambien cual es su ancho y alto
// no estoy seguro orque tiene que estar en este archivo, pero no funciona en el "ActuadorPantalla.h"

ActuadorPantalla::ActuadorPantalla() {}

void ActuadorPantalla::configurar() {
  ActuadorPantalla::caraMuneco(
    ActuadorPantalla::SCREEN_WIDTH,
    ActuadorPantalla::SCREEN_HEIGHT,
    &Wire,
    ActuadorPantalla::OLED_RESET);

  // Error que es visible en el monitor serial
  //en caso de que el display no inicia correctamente
  if (!ActuadorPantalla::caraMuneco.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    // No se pudo inicializar la pantalla
    for (;;)
      ;
    Serial.print("Error con el display");
  }
  // limpia la pantalla y la vuelve a actualizar
  // constantemente para que no se mueva el contenido
  ActuadorPantalla::caraMuneco.clearDisplay();
  ActuadorPantalla::caraMuneco.display();
}

void ActuadorPantalla::mostrarImagenCalor() {
  ActuadorPantalla::caraMuneco.clearDisplay();
  ActuadorPantalla::caraMuneco.drawBitmap(0,
                                          0,
                                          logo_bmp,
                                          ActuadorPantalla::LOGO_WIDTH,
                                          ActuadorPantalla::LOGO_HEIGHT,
                                          WHITE);
  ActuadorPantalla::caraMuneco.display();
}

void ActuadorPantalla::mostrarImagenFrio() {
  ActuadorPantalla::caraMuneco.clearDisplay();
  ActuadorPantalla::caraMuneco.drawBitmap(0,
                                          0,
                                          logo2_bmp,
                                          ActuadorPantalla::LOGO_WIDTH,
                                          ActuadorPantalla::LOGO_HEIGHT,
                                          WHITE);
  ActuadorPantalla::caraMuneco.display();
}

void ActuadorPantalla::mostrarImagenNadie() {
}
