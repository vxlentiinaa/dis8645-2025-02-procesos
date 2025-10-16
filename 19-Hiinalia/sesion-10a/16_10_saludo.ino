/*
  main.ino - CHISPOP 
  - Usa: Encoder, Pantalla OLED, Sensor de aplausos, DFPlayer Mini
  - Lógica:
     * Menú de selección con encoder
     * Pantalla de instrucción: "Aplaude dos veces"
     * Reproducción: se activa al detectar 2 aplausos (≈5 s)
*/

#include <Arduino.h>
#include "Pantalla.h"
#include "ReproductorMP3.h"
#include "SensorEncoder.h"
#include "SensorAplauso.h"

// Objetos principales
Pantalla pantalla;
ReproductorMP3 mp3;
SensorEncoder encoder;
SensorAplauso sensorSonido;

// Estados de la aplicación
bool enModoMenu = true;
bool enReproduccion = false;
int idiomaSeleccionado = 0;
const int totalIdiomas = 3;
const char* nombresIdiomas[totalIdiomas] = { "> Ruso", "> Japonés", "> Francés" };

// Control de tiempo
const unsigned long duracionAudioMs = 5000UL;  // 5 segundos
unsigned long tiempoFinReproduccion = 0UL;

void setup() {
  Serial.begin(9600);
  delay(50);
  Serial.println(F("CHISPOP - versión final"));

  pantalla.iniciar();
  mp3.iniciar();
  encoder.configurar();
  sensorSonido.configurar();

  pantalla.mostrarMenuIdioma(idiomaSeleccionado);
  Serial.println(F("Listo. Gira el encoder y presiona para elegir idioma."));
}

void loop() {
  if (enModoMenu) {
    int opt = encoder.leerMovimiento();
    if (opt != idiomaSeleccionado) {
      idiomaSeleccionado = opt;
      pantalla.mostrarMenuIdioma(idiomaSeleccionado);
      Serial.print(F("Idioma seleccionado: "));
      Serial.println(nombresIdiomas[idiomaSeleccionado]);
    }

    if (encoder.botonPresionado()) {
      enModoMenu = false;
      pantalla.mostrarMensajeAplauso();  // instrucción
      Serial.println(F("Presiona: Aplaude dos veces para continuar."));
      delay(120);
    }
  }


  // --- detectar aplausos ---
  if (!enReproduccion && sensorSonido.detectarAplausos()) {
    Serial.println(F(" Dos aplausos detectados -> Reproducir saludo"));
    // PARA MATEO
    // Mostrar imagen y reproducir sonido simultáneamente
    pantalla.mostrarBitmapIdioma(idiomaSeleccionado);
    mp3.reproducirSaludo(idiomaSeleccionado);

    enReproduccion = true;
    tiempoFinReproduccion = millis() + duracionAudioMs;
  }

  // Control no bloqueante de fin de audio
  if (enReproduccion && millis() >= tiempoFinReproduccion) {
    enReproduccion = false;
    pantalla.mostrarMensajeAplauso();  // volver a instrucción
    Serial.println(F("Reproducción finalizada."));
  }

  // Botón presionado → volver al menú
  if (encoder.botonPresionado()) {
    enModoMenu = true;
    enReproduccion = false;
    pantalla.mostrarMenuIdioma(idiomaSeleccionado);
    Serial.println(F("Volviendo al menú principal."));
    delay(150);
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