/*
  grupo_03_ino.ino
  ----------------
  Archivo principal (modular) - Proyecto Grupo 03
  - Usa: SensorEncoder, SensorAplauso, Pantalla y ReproductorMP3 (modular)
  - Arduino UNO (ReproductorMP3 implementado con SoftwareSerial en 10/11)
  - Flujo: elegir idioma -> "Aplaude dos veces..." -> reproducir saludo -> repetir o volver al menú
*/

#include "Pantalla.h"
#include "ReproductorMP3.h"
#include "SensorEncoder.h"
#include "SensorAplauso.h"

// ============================
// Objetos globales
// ============================

Pantalla pantalla;
ReproductorMP3 mp3;
SensorEncoder encoder;
SensorAplauso sensorSonido;

// ============================
// Variables de control
// ============================

int idiomaSeleccionado = 0;   // 0 = Ruso, 1 = Japonés, 2 = Francés
bool idiomaElegido = false;   // Controla si estamos en menú o mostrando saludo

// ============================
// Inicialización del sistema
// ============================

void iniciarSistemas() {
  Serial.begin(9600);
  pantalla.iniciar();
  mp3.iniciar();
  encoder.configurar();  // función existente en tu clase
  // sensorSonido.iniciar(); // descomentar si existe este método
  pantalla.mostrarMenuIdioma(idiomaSeleccionado);
}

// ============================
// Setup
// ============================

void setup() {
  iniciarSistemas();
}

// ============================
// Loop principal
// ============================

void loop() {

  // ==========================
  // MENÚ DE IDIOMAS
  // ==========================
  
  if (!idiomaElegido) {

    // Leer movimiento del encoder (-1 / 0 / +1)
    int movimiento = encoder.leerMovimiento();

    if (movimiento == 1) idiomaSeleccionado = (idiomaSeleccionado + 1) % 3;
    if (movimiento == -1) idiomaSeleccionado = (idiomaSeleccionado + 2) % 3;

    // Actualizar visualización del menú
    pantalla.mostrarMenuIdioma(idiomaSeleccionado);
    
    // CAMBIAR ESTO POR EL SENSOR DE APLAUSOS!!
    // Si se presiona el botón, mostrar imagen y reproducir audio
    if (encoder.botonPresionado()) {
      idiomaElegido = true;
      pantalla.mostrarMensajeAplauso();
      //pantalla.mostrarBitmapIdioma(idiomaSeleccionado);
     // mp3.reproducirSaludo(idiomaSeleccionado);
      delay(2000); // Espera para que termine la reproducción
    }

  } else {
    // ==========================
    // MODO IMAGEN / SALUDO
    // ==========================
    // Si el usuario presiona de nuevo el botón → volver al menú
    if (encoder.botonPresionado()) {
      idiomaElegido = false;
      pantalla.mostrarMenuIdioma(idiomaSeleccionado);
      delay(500);
    }
  }
}


/* REFERENCIAS 
 * Encoder KY-040:
 *  - Luis Llamas. "Rotary encoder KY-040 con Arduino" (tutorial).
 *    https://www.luisllamas.es/arduino-encoder-rotativo/
 *
 * DFPlayer Mini:
 *  - DFRobot. "DFPlayer Mini MP3 Player" (documentación y ejemplos).
 *    https://wiki.dfrobot.com/DFPlayer_Mini_SKU_DFR0299
 *
 * Pantalla OLED SSD1306:
 *  - Adafruit. "Monochrome OLED Breakouts" (biblioteca y ejemplos).
 *    https://learn.adafruit.com/monochrome-oled-breakouts/arduino-library-and-examples
 *
 * Sensor de sonido (microphone module):
 *  - Random Nerd Tutorials. "Guide for Microphone Sound Sensor with Arduino"
 *    https://randomnerdtutorials.com/guide-for-microphone-sound-sensor-with-arduino/
 *
 * SoftwareSerial (documentación Arduino):
 *  - Arduino Reference: SoftwareSerial.
 *    https://www.arduino.cc/reference/en/language/functions/communication/softwareserial/
 *
 * Bibliotecas recomendadas para instalar:
 *  - Adafruit SSD1306
 *  - Adafruit GFX
 *  - DFRobotDFPlayerMini (busca "DFRobotDFPlayerMini")
 *
 * Ejemplos consultados (en Arduino IDE):
 *  - File → Examples → Adafruit SSD1306 → ssd1306_128x64_i2c
 *  - File → Examples → SoftwareSerial
 *  - Ejemplos incluidos en la biblioteca DFRobotDFPlayerMini
 *
 * Fecha de consulta: 2025-09-29
 */