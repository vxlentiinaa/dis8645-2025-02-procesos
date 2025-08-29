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
  // limpia la pantalla antes de dibujar
  display.clearDisplay();
  // define el tamaño del texto
  display.setTextSize(1);
  display.setTextColor(WHITE);
}


void loop() {
  velocidad = analogRead(potenciometro); // la velocidad lee el potemciometro
// mapea el rango de valores
// el rango del input lo pasa al rango del output
  velocidad =  map(velocidad, 0, 1023, 0, 100);

// 
 for (int i = 0; i < SCREEN_HEIGHT *3; i += 2) {
    display.clearDisplay();
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
    display.println(F(""));
    display.println(F(""));
    display.println(F(""));
    display.println(F(""));  
    display.display();
    delay(velocidad); // ajusta velocidad del scroll


  }
}
