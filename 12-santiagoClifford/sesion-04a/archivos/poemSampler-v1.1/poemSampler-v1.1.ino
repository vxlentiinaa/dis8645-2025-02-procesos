//librerias incluidas
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//datos propios del ejemplo
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 80
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int datoRecibido = 0;

//int index1, index2, index3, index4;

//indices que guardan versos en el q vamos
int index0 = 0;
int index1 = 0;
int index2 = 0;
int index3 = 0;
int index4 = 0;

//arrays de mis opciones de versos <https://docs.arduino.cc/language-reference/en/variables/data-types/string>
char *linea0[] = { "verso1A", "verso1B", "verso1C", "verso1D" };

char *linea1[] = { "verso2A", "verso2B", "verso2C", "verso2D" };

char *linea2[] = { "verso3A", "verso3B", "verso3C", "verso3D" };

char *linea3[] = { "verso4A", "verso4B", "verso4C", "verso4D" };

//char *linea4[] = { "verso5A", "verso5B", "verso5C", "verso5D" };

void setup() {
  //if para casos de error
  if (!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontrÃ³ la pantalla SSD1306"));
    for (;;)
      ;
  }
 
}

void loop() {
  //seteo del display
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);
  Serial.begin(9600);
  Serial.println("alexis");
  ///////////////////////////////////////////////////

   pantallita.clearDisplay();

  pantallita.setTextSize(2);  // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);

  //en que parte del display se dibuja el texto
  pantallita.setCursor(2, 0);

  pantallita.println(linea0[index0]);
  pantallita.println(linea1[index1]);
  pantallita.println(linea2[index2]);
  pantallita.println(linea3[index3]);
  //pantallita.println(linea4[index4]);


  pantallita.display();  // Show initial text
  delay(100);

  //si hay datos disponibles, datoRecibido será igual a la info recibida
  if (Serial.available() > 0) {
    // read the incoming byte:
    datoRecibido = Serial.read();

    //con la tecla 1 alternas entre las opciones de verso1. así para las teclas 1, 2, 3 y 4.
    if (datoRecibido == '1') {
      index0++;
      if (index0 > 3) {
        index0 = 0;
      }
    } else if (datoRecibido == '2') {
        index1++;
      if (index1 > 3) {
        index1 = 0;
      }
    } else if (datoRecibido == '3') {
        index2++;
      if (index2 > 3) {
        index2 = 0;
      }
    } else if (datoRecibido == '4') {
        index3++;
      if (index3 > 3) {
        index3 = 0;
      }}}
testscrolltext();
}

void testscrolltext(){ 
  pantallita.startscrollright(0x00, 0x0F);
  delay(2000);
  pantallita.stopscroll();
  delay(1000);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(2000);
}

/*
testscrolltext();
}
void testscrolltext(void) {
  pantallita.clearDisplay();

  pantallita.setTextSize(2); // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 0);
  pantallita.println(F("scroll"));
  pantallita.display();      // Show initial text
  delay(100);

  // Scroll in various directions, pausing in-between:
  pantallita.startscrollright(0x00, 0x0F);
  delay(2000);
  pantallita.stopscroll();
  delay(1000);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(2000);
  pantallita.stopscroll();
  delay(1000);
  pantallita.startscrolldiagright(0x00, 0x07);
  delay(2000);
  pantallita.startscrolldiagleft(0x00, 0x07);
  delay(2000);
  pantallita.stopscroll();
  delay(1000);
}*/

