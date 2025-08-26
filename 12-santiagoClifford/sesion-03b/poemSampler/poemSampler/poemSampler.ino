#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int datoRecibido = 0;

//int index1, index2, index3, index4;

int index1=0;
int index2=0;
int index3=0;
int index4=0;


char *linea1[] = { "verso1A", "verso1B", "verso1C", "verso1D" };

char *linea2[] = { "verso2A", "verso2B", "verso2C", "verso2D" };

char *linea3[] = { "verso3A", "verso3B", "verso3C", "verso3D" };

char *linea4[] = { "verso4A", "verso4B", "verso4C", "verso4D" };


void setup() {
  if (!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontrÃ³ la pantalla SSD1306"));
    for (;;)
      ;
  }
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);
}

void loop() {
  pantallita.clearDisplay();

  pantallita.setTextSize(1);  // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);

  pantallita.setCursor(2, 0);

  pantallita.println(linea1[index1]);
  pantallita.println(linea2[index2]);
  pantallita.println(linea3[index3]);
  pantallita.println(linea4[index4]);

  pantallita.display();  // Show initial text
  delay(100);

  if (Serial.available() > 0) {
    // read the incoming byte:
    datoRecibido = Serial.read();

    //tecla '1' = 1 segundo, tecla '2' = 2 segundos, etc.
    if (datoRecibido == '1') {
      index1++;
    } else if (datoRecibido == '2') {
      index2++;
    } else if (datoRecibido == '3') {
      index3++;
    } else if (datoRecibido == '4') {
      index4++;
    }
  }
}
