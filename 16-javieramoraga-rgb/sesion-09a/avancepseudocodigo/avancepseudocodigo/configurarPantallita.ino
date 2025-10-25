// encendido de la pantalla
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64
#define OLED_RESET -1

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

void desplegarMensajePantalla() {
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