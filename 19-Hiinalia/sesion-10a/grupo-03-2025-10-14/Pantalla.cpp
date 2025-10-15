#include "Pantalla.h"
#include "Imagen.h"  // incluye tus bitmaps
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Definición global del objeto display
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, -1);

// =======================
// Constructor e inicio
// =======================

Pantalla::Pantalla() {}

void Pantalla::iniciar() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se pudo inicializar la pantalla OLED"));
    for (;;);
  }
  display.clearDisplay();
  display.display();
}

// =======================
// Menú de selección de idioma
// =======================


void Pantalla::mostrarMenuIdioma(int opcion) {

  const char* idiomas[] = {"> Ruso", "> Japones", "> Frances"};
  int total = 3;

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  for (int i = 0; i < total; i++) {
    if (i == opcion) {
      display.fillRect(0, i * 16, 128, 16, SSD1306_WHITE);
      display.setTextColor(SSD1306_BLACK);
    } else {
      display.setTextColor(SSD1306_WHITE);
    }
    display.setCursor(10, i * 16 + 4);
    display.print(idiomas[i]);
  }

  display.display();
}

// =======================
// Mostrar bitmap según idioma
// =======================

void Pantalla::mostrarBitmapIdioma(int idioma) {
  display.clearDisplay();
  
  if (idioma == 0) {
    display.drawBitmap(0, 0, imagenRuso, 128, 64, SSD1306_WHITE);
  } else if (idioma == 1) {
    display.drawBitmap(0, 0, imagenJapones, 128, 64, SSD1306_WHITE);
  } else if (idioma == 2) {
    display.drawBitmap(0, 0, imagenFrances, 128, 64, SSD1306_WHITE);
  } else {
    display.drawBitmap(0, 0, imagenPucha, 128, 64, SSD1306_WHITE);
  }

  display.display();
}
