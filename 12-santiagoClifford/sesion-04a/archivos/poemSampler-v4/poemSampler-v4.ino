#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int potPin = A0;
int botonPin =2;

int poteValue=0;
int botonValue;

int desplazo = -poteValue;

char *refranes[] = { "se le escapan los enanos del bosque", "dale con que las gallinas mean", "quedar como chaleco 'e mono", "wawa que no llora no mama" };

// String refranEnano = "se le escapan los enanos del bosque";
// String refranGallina = "dale con que las gallinas mean";
// String refranMono = "quedar como chaleco 'e mono";
// String refranWawa = "wawa que no llora no mama";

//int16_t y = -8;  // Comenzamos fuera de la pantalla

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Error al iniciar la pantalla SSD1306"));
    for (;;)
      ;
  }
  Serial.begin(9600);
  pinMode(botonPin, INPUT_PULLUP);

  //tenía un problema recurrente, el display no iniciaba sino hasta que desenchufaba y volvía a enchufar el cable.
  //añadiendo la linea de begin, se arregló el problema <https://www.youtube.com/watch?v=___p9JYbTc0>
  //display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {


  poteValue = analogRead(potPin);
  //<https://www.youtube.com/watch?v=dUOGDd-LA3k> de este código me inspiré para usar valores negativos en el mapeo.
  poteValue = map(poteValue, 0, 1023, -100,40);  //map value 0-1023 to 0-255 (PWM)

  botonValue= digitalRead(botonPin);
Serial.println(botonValue);

  display.clearDisplay();

  display.setCursor(0, poteValue);


  display.println(refranes[0]);
  display.print("\n");
  display.print("\n");
  display.print("\n");
  // display.print("\n");
  display.println(refranes[1]);
  display.print("\n");
  display.print("\n");
  display.print("\n");
  // display.print("\n");
  display.println(refranes[2]);
  display.print("\n");
  display.print("\n");
  display.print("\n");
  // display.print("\n");
  display.println(refranes[3]);

  display.display();


  display.clearDisplay();

  display.setCursor(140, poteValue);


  display.println(refranes[0]);
  display.print("\n");
  display.print("\n");
  display.print("\n");
  // display.print("\n");
  display.println(refranes[1]);
  display.print("\n");
  display.print("\n");
  display.print("\n");
  // display.print("\n");
  display.println(refranes[2]);
  display.print("\n");
  display.print("\n");
  display.print("\n");
  // display.print("\n");
  display.println(refranes[3]);

  display.display();


}