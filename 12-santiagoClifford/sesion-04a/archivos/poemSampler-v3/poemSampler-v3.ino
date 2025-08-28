#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int potPin = A0;

int poteValue=0;


String refranEnano = "se le escapan los enanos del bosque";
String refranGallina = "dale con que las gallinas mean";
String refranMono = "quedar como chaleco 'e mono";
String refranWawa = "wawa que no llora no mama";

int16_t y = -8;  // Comenzamos fuera de la pantalla

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Error al iniciar la pantalla SSD1306"));
    for (;;)
      ;
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {

  poteValue = analogRead(potPin);
  poteValue = map(poteValue, 0, 1023, 400,0);  //map value 0-1023 to 0-255 (PWM)

  display.clearDisplay();

  display.setCursor(0, poteValue);


  display.println(refranEnano);
  display.print("\n");
  // display.print("\n");
  // display.print("\n");
  // display.print("\n");
  display.println(refranGallina);
  // display.print("\n");
  // display.print("\n");
  // display.print("\n");
  display.print("\n");
  display.println(refranMono);
  // display.print("\n");
  // display.print("\n");
  // display.print("\n");
  display.print("\n");
  display.println(refranWawa);

  display.display();

  //y++;  // Mueve el texto hacia abajo

  // Si el texto saliÃ³ completamente de la pantalla, reinicia desde arriba
  //int16_t textHeight = 8;  // Altura de la fuente 1
                           // if (y > SCREEN_HEIGHT) {
                           //   y = -textHeight;
                           // }

  //delay(50); // Ajusta la velocidad del scroll
}