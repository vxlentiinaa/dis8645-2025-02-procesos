ejemplo de final de clase con arreglos
```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
  Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int contador = 0;

// referencia de https://docs.arduino.cc/language-reference/en/variables/data-types/string/
char *myStrings[] = { "This is string 1", "This is string 2", "This is string 3",
                      "This is string 4", "This is string 5", "This is string 6" };


void setup() {
  if (!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    for (;;)
      ;
  }
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);
}

void loop() {
  pantallita.clearDisplay();  // Limpiamos toda la pantalla

  // recorrer el arreglo de strings
  // a su vez cada string es un arreglo de chars
  // vivan los for loops
  // tb conocidos como bucles
  for (int i = 0; i < 6; i++) {
    testscrolltext(myStrings[i], 300);
  }

  pantallita.display();  // Actualiza la pantalla
}


// void testscrolltext(void) {
// cambiar la linea anterior
// para agregar parametro String
// de input
// y tambien int para delays
void testscrolltext(String texto, int pausa) {
  pantallita.clearDisplay();

  pantallita.setTextSize(2);  // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 0);
  // pantallita.println(F("scroll"));
  // mod que le hice yo
  pantallita.println(texto);

  pantallita.display();  // Show initial text
  delay(100);

  // Scroll in various directions, pausing in-between:
  pantallita.startscrollright(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrolldiagright(0x00, 0x07);
  delay(pausa);
  pantallita.startscrolldiagleft(0x00, 0x07);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
}
```