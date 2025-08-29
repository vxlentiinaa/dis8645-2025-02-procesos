https://wokwi.com/projects/440319400562495489


```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C
#define potenciometro A3


Adafruit_SSD1306 display (SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
// se crea la variable volocidad
int velocidad;


void setup () {
  // inicia la pantalla OLED
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  // limpia la pantalla antes de dibujar.
  display.clearDisplay();
  // define el tamaño del texto.
  display.setTextSize(1);
  // define el color del texto.
  display.setTextColor(WHITE);
}


void loop() {
  // la variable velocidad lee el potenciometro.
  velocidad = analogRead(potenciometro);
  // se determina con map que los valores de potenciometro sean adaptados a la velocidad que se mueve el texto.
  velocidad = map(velocidad, 0, 1023, 0, 100);
  // variable i, determina que el texto va subiendo desde abajo hacia arriba.
 for (int i = 0; i < SCREEN_HEIGHT *4; i += 2) {
    display.clearDisplay();
    // se determina que el texto vaya subiendo
    display.setCursor(0, SCREEN_HEIGHT - i);
    display.println(F("En Santiago de Chile"));
    display.println(F(""));
    display.println(F("los dias son"));
    display.println(F(""));
    display.println(F("interminablemente."));
    display.println(F(""));
    display.println(F("largos."));
    display.println(F(""));
    display.println(F("Varias eternidades"));
    display.println(F(""));
    display.println(F("en un dia."));
    display.println(F(""));
    display.println(F("Nos desplazamos"));
    display.println(F(""));
    display.println(F("a lomo de luma"));
    display.println(F(""));
    display.println(F("Como los vendedores"));
    display.println(F(""));
    display.println(F("de cochayuyo:"));
    display.println(F(""));
    display.println(F("Se bosteza."));
    display.println(F(""));
    display.println(F("Se vuelve a bostezar."));
    // envía el contenido preparado, texto, a la pantalla.
    display.display();
    // ajusta el retraso de velocidad del scroll segun designado en for.
    delay(velocidad);
  }
}