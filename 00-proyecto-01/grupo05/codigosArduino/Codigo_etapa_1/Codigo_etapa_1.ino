#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C
#define potenciometro A3


Adafruit_SSD1306 display (SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
int j = 15; // direction up/down
int velocidad; // se crea variable velocidad


void setup () {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS); //Inicia la pantalla OLED
  display.clearDisplay(); //Limpia la pantalla antes de dibujar.
  display.setTextSize(1); //Define el tamaño del texto.
}


void loop() {
  velocidad = analogRead(potenciometro); // la velocidad lee el potemciometro
  velocidad =  map(velocidad, 0, 1023, 0, 100);
 for (int i = 0; i < SCREEN_HEIGHT; i += 2) {
    display.clearDisplay();
    display.setTextColor(WHITE);
    // SIEMPRE subiendo desde abajo hacia arriba
    display.setCursor(0, SCREEN_HEIGHT - i);
    display.println(F("En Santiago de Chile"));
    display.println(F(""));
    display.println(F("los dias son"));
    display.println(F(""));
    display.println(F("interminablemente"));
    display.println(F(""));
    display.println(F("largos"));
    display.println(F(""));
    display.println(F("interminablemente"));
    display.println(F(""));
    display.println(F("largos"));
    display.display();
    delay(velocidad); // ajusta velocidad del scroll
  }
}