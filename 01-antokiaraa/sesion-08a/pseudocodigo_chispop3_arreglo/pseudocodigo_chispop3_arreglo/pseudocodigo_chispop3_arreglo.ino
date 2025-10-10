// VARIABLES GLOBALES 
// Encoder
int opcionMenu = 0;        // Idioma seleccionado (0 = Español, 1 = Inglés, etc.)
int totalIdiomas = 3;      // Se debe cambiar si agregamos mas idiomas

// Bibliotecas y objetos globales
#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>
#include <LiquidCrystal.h>

#define PIN_DF_RX 10
#define PIN_DF_TX 11
SoftwareSerial mySoftwareSerial(PIN_DF_RX, PIN_DF_TX);
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  Serial.begin(9600);
  // configurarSensoresActuadores();
  configurarPantallita();
  configurarEncoder();
  // configurarActuadorReproductorMP3();
}

void loop() {
  // leerSensores();              // Revisa los estados de los sensores
  desplegarMenu();             // Muestra el menú de idiomas
   tomarDecisionesEncoder();    // Cambia la selección con el encoder
  // desplegarMensaje();          // Muestra el idioma elegido
  // aplausoTextoSonido();        // Detecta el aplauso y reproduce el audio
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



