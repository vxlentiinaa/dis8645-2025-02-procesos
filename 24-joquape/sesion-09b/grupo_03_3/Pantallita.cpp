#include "Pantallita.h"

// constructor
Pantallita::Pantallita() {
  Pantallita::display(Pantallita::ANCHO_PANTALLA,
                      Pantallita::ALTO_PANTALLA,
                      &Wire,
                      Pantallita::OLED_RESET);
}

// destructor
Pantallita::~Pantallita() {}

void Pantallita::configurar() {


  if (!Pantallita::display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    if (!Pantallita::display.begin(SSD1306_SWITCHCAPVCC, 0x3c)) {
      Serial.println("No se pudo inicializar la pantalla OLED");
      for (;;)
        ;
    }
    Pantallita::display.clearDisplay();
    Pantallita::display.display();
  }

  void Pantallita::desplegar(int opcionMenu) {

    Pantallita::display.clearDisplay();
    Pantallita::display.setCursor(0, 0);

    if (opcionMenu == 1) {
      Pantallita::display.println("Privet!");
    } else if (opcionMenu == 2) {
      Pantallita::display.println("Konnichiwa!");
    } else if (opcionMenu == 3) {
      Pantallita::display.println("Bonjour!");
    } else {
      Pantallita::display.println("pucha!");
    }

    Pantallita::display.display();
  }
