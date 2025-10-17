#include "Pantalla.h"
#include "Imagen.h"  // Incluye bitmaps
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Definición global del objeto display
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, -1);

// =======================
// Constructor e inicio
// =======================

Pantalla::Pantalla() {}  //Constructor vacio

void Pantalla::iniciar() {
  //Inicializa pantalla OLED con direccion I2C 0x3C
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se pudo inicializar la pantalla OLED"));
    for (;;);  //Bloquea si falla la inicializacion
  }
  display.clearDisplay();  //Limpia la pantalla
  display.display();  //Refresca para mostrar pantalla limpia
}

// =======================
// Menú de selección de idioma
// =======================


void Pantalla::mostrarMenuIdioma(int opcion) {

  const char* idiomas[] = {"> Ruso", "> Japones", "> Frances"}; //Array de opciones
  int total = 3;  //Numero total de idiomas

  display.clearDisplay();  //Limpia pantalla antes de dibujar menu
  display.setTextSize(1);  //Tamaño de texto
  display.setTextColor(SSD1306_WHITE);

  for (int i = 0; i < total; i++) {
    if (i == opcion) {
      display.fillRect(0, i * 16, 128, 16, SSD1306_WHITE);
      display.setTextColor(SSD1306_BLACK);  //Texto negro sobre fondo blanco
    } else {
      display.setTextColor(SSD1306_WHITE);  //Texto blanco para opciones no seleccionadas
    }
    display.setCursor(10, i * 16 + 4);  //Posicion texto
    display.print(idiomas[i]);  //Muestra el nombre del idioma
  }

  display.display(); //Actualiza la pantalla
}

// =======================
// Mostrar mensaje de aplauso
// =======================

void Pantalla::mostrarMensajeAplauso() {
  display.clearDisplay();
  display.setTextSize(1);  //Tamaño texto
  display.setTextColor(SSD1306_WHITE);  //Color texto
  display.setCursor(10, 20);  //Posicion primera linea
  display.println("Aplaude dos veces");  //Mensaje
  display.setCursor(10, 35);  //Posicion segunda linea
  display.println("para continuar...");  
  display.display();  //Refresca pantalla para mostrar mensaje
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
    display.drawBitmap(0, 0, imagenPucha, 128, 64, SSD1306_WHITE);  //Imagen por defecto si idioma es invalido
  }

  display.display();
}
