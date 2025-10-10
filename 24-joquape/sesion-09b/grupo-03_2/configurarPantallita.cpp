// encendido de la pantalla
#include "configurarPantallita.h"
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, OLED_RESET);


void configurarPantallita() {
  // if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3c)) {
    Serial.println("No se pudo inicializar la pantalla OLED");
    for (;;)
      ;
  }
  display.clearDisplay();
  display.display();
}

void desplegarMensajePantalla(int opcionMenu) {
  display.clearDisplay();
  display.setCursor(0, 0);

  if (opcionMenu == 1) {
    display.println("Privet!");
  }
  else if (opcionMenu == 2) {
    display.println("Konnichiwa!");
  }
  else if (opcionMenu == 3) {
    display.println("Bonjour!");
  }
  else {
    display.println("pucha!");
  }

  display.display();
}
