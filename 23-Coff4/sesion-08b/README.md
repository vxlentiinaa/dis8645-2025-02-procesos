# sesion-08b

Hola hola!
Esto sera un lugar donde se pondran los codigos que intenté probar 

Creditos a Chatgpt en esta ocasión.

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>
#include <Fonts/FreeMonoBold12pt7b.h>

#define OLED_RESET -1
Adafruit_SH1106 display(OLED_RESET);

void setup() {
  Serial.begin(9600);
  Wire.begin();

  // Inicializa SH1106 con dirección I2C 0x3C
  display.begin(SH1106_SWITCHCAPVCC, 0x3C);

  display.clearDisplay();
  display.setFont(&FreeMonoBold12pt7b);
  display.setTextColor(WHITE);
  display.setCursor(0, 30);
  display.println(F("Hola Mundo!"));
  display.display();
}
```

En este caso, tuvo el error que no encontraba la libreria (siendo que ya la había instalado y desinstalado 2 veces)

Seguí con el siguiente codigo:

```cpp
#include <Wire.h>
#include <U8g2lib.h>

// Constructor para pantalla SH1106 128x64 I2C
U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);

void setup() {
  display.begin();
  display.clearBuffer();

  // Fuente monoespaciada en negrita
  display.setFont(u8g2_font_9x15B_tr); // similar a FreeMonoBold12pt7b

  // Posición del texto
  display.drawStr(0, 30, "Hola Mundo!");

  // Muestra en pantalla
  display.sendBuffer();
}

void loop() {
  // nada
}
void loop() {
  // Nada, texto fijo
}
```

¿Que tenemos aquí? ¿letras sin defectos? Perfecto!

Anteriormente el profe Misa me habia sugerido esta libreria pero con un example ya hecho en el propio Ino.
Por lo tanto ya la tenía descargada.

![Hola Mundo](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-08b/imagenes/Hola%20Mundo.jpg)

Y si hacemos que se mueva? Se supone que ya funciona correctamente, por lo tanto no habría problemas ¿verdad?

```cpp

#include <Wire.h>
#include <U8g2lib.h>

// Pantalla SH1106 128x64 con comunicación I2C
U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);

// Texto que quieres mostrar
const char* texto = "Hola Mundo! Scroll con U8g2 :)";

int x;  // posición X del texto
int anchoTexto;

void setup() {
  display.begin();
  display.clearBuffer();

  // Fuente monoespaciada en negrita
  display.setFont(u8g2_font_9x15B_tr);

  // Calcula el ancho del texto
  anchoTexto = display.getStrWidth(texto);

  // Comienza desde la derecha del display
  x = display.getDisplayWidth();
}

void loop() {
  display.clearBuffer();

  // Dibuja el texto en la posición actual
  display.drawStr(x, 32, texto);

  // Envía el buffer al display
  display.sendBuffer();

  // Mueve el texto hacia la izquierda
  x--;

  // Si el texto termina de salir, vuelve a empezar
  if (x < -anchoTexto) {
    x = display.getDisplayWidth();
  }

  // Controla la velocidad del scroll (ajusta este valor)
  delay(30);
}
```
[![Movimiento](https://img.youtube.com/vi/zCfFTpQGll4/hqdefault.jpg)](https://youtube.com/shorts/zCfFTpQGll4?feature=share)

Ok. Aquí deben ir mis conclusiones sobre esta pantalla:

1. Al ser más grande, tiene diferentes resoluciones y pixeles
2. No funciona el movimiento, solo de manera estatica. Al menos para nuestro trabajo, no necesitamos mucho más.

---

Ahora probare la otra pantalla que tiene más maneras de personalización

El modelo es: IC GC9A01 de 200 x 200

Me estoy ayudando tanto con ChatGpt y esta pagina que se me proporcionó: (https://arduinogetstarted.com/tutorials/arduino-round-circular-tft-lcd-display)

Lo primero fue conectar todo, para acto después usar un codigo simple:

Como tal es el primer ejemplo de la pagina: 

```cpp
/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-round-circular-tft-lcd-display
 */

#include <DIYables_TFT_Round.h>

#define RED DIYables_TFT::colorRGB(255, 0, 0)
#define BLUE DIYables_TFT::colorRGB(0, 0, 255)
#define WHITE DIYables_TFT::colorRGB(255, 255, 255)

#define PIN_RST 8  // The Arduino pin connected to the RST pin of the circular TFT display
#define PIN_DC 9   // The Arduino pin connected to the DC pin of the circular TFT display
#define PIN_CS 10  // The Arduino pin connected to the CS pin of the circular TFT display

DIYables_TFT_GC9A01_Round TFT_display(PIN_RST, PIN_DC, PIN_CS);

void setup() {
  Serial.println(F("Arduino TFT LCD Display - show text and number"));

  TFT_display.begin();

  // Set the rotation (0 to 3)
  TFT_display.setRotation(1);  // Rotate screen 90 degrees
  TFT_display.fillScreen(WHITE);

  TFT_display.setTextSize(2);  // Adjust text size as needed

  // Sample temperature value
  float temperature = 26.4;
  float humidity = 64.7;

  // Display temperature with degree symbol
  TFT_display.setTextColor(RED);
  TFT_display.setCursor(5, 100);  // Set cursor position (x, y)
  TFT_display.print("Temperature: ");
  TFT_display.print(temperature, 1);  // Print temperature with 1 decimal place
  TFT_display.print(char(247));
  TFT_display.println("C");

  // Display humidity
  TFT_display.setTextColor(BLUE);
  TFT_display.setCursor(30, 140);  // Set cursor position (x, y)
  TFT_display.print("Humidity: ");
  TFT_display.print(humidity, 1);  // Print humidity with 1 decimal place
  TFT_display.print("%");
}

void loop(void) {
}
```

[![Ehh?](https://img.youtube.com/vi/Ji3Wl5u43bM/hqdefault.jpg)](https://youtube.com/shorts/Ji3Wl5u43bM?feature=share)


```cpp
/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-round-circular-tft-lcd-display
 */

#include <DIYables_TFT_Round.h>
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSerif9pt7b.h>
#include <Fonts/FreeMono9pt7b.h>

#define PIN_RST 8 // The Arduino pin connected to the RST pin of the circular TFT display
#define PIN_DC 9  // The Arduino pin connected to the DC pin of the circular TFT display
#define PIN_CS 10 // The Arduino pin connected to the CS pin of the circular TFT display

DIYables_TFT_GC9A01_Round TFT_display(PIN_RST, PIN_DC, PIN_CS);

void setup() {
  Serial.println(F("Arduino TFT LCD Display - Use external font"));

  TFT_display.begin();
  TFT_display.fillScreen(DIYables_TFT::colorRGB(0, 0, 0));          // black
  TFT_display.setTextColor(DIYables_TFT::colorRGB(255, 255, 255));  // White text

  TFT_display.setTextSize(2);
  TFT_display.setCursor(40, 50);
  TFT_display.print("Hello DIYables!");  // default font

  TFT_display.setTextSize(1);

  TFT_display.setFont(&FreeSans9pt7b);
  TFT_display.setTextColor(DIYables_TFT::colorRGB(255, 0, 0));  // Red text
  TFT_display.setCursor(60, 100);
  TFT_display.print("Hello DIYables!");  // FreeSans9pt7b font

  TFT_display.setFont(&FreeSerif9pt7b);
  TFT_display.setTextColor(DIYables_TFT::colorRGB(0, 0, 255));  // Blue text
  TFT_display.setCursor(60, 140);
  TFT_display.print("Hello DIYables!");  // FreeSerif9pt7b font

  TFT_display.setFont(&FreeMono9pt7b);
  TFT_display.setTextColor(DIYables_TFT::colorRGB(0, 255, 0));  // Green text
  TFT_display.setCursor(40, 180);
  TFT_display.print("Hello DIYables!");  // FreeMono9pt7b font
}

void loop(void) {
}
```
![Testing Funcional](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-08b/imagenes/Funcional.jpg)

```cpp
/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-round-circular-tft-lcd-display
 */

#include <DIYables_TFT_Round.h>
#include "bitmap.h"

#define WHITE     DIYables_TFT::colorRGB(255, 255, 255)

#define PIN_RST 8 // The Arduino pin connected to the RST pin of the circular TFT display
#define PIN_DC  9 // The Arduino pin connected to the DC pin of the circular TFT display
#define PIN_CS 10 // The Arduino pin connected to the CS pin of the circular TFT display

DIYables_TFT_GC9A01_Round TFT_display(PIN_RST, PIN_DC, PIN_CS);

int img_width = 120;
int img_height = 53;

uint16_t SCREEN_WIDTH;
uint16_t SCREEN_HEIGHT;

void setup() {
  Serial.begin(9600);

  Serial.println(F("Arduino TFT LCD Display"));

  TFT_display.begin();

  SCREEN_WIDTH = TFT_display.width();
  SCREEN_HEIGHT = TFT_display.height();

  int x = (SCREEN_WIDTH - img_width) / 2;
  int y = (SCREEN_HEIGHT - img_height) / 2;

  TFT_display.fillScreen(WHITE);
  TFT_display.drawRGBBitmap(x, y, myBitmap, img_width, img_height);
}

void loop(void) {
  delay(2000);
  TFT_display.invertDisplay(true);
  
  delay(2000);
  TFT_display.invertDisplay(false);
}
```

En este caso cambié la imagen para mostrar otra, un poco más acorde a mis gustos...pero como que no funcionó

La imagen en cuestión: 

![TV Time](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-08b/imagenes/Tenna.jpg)

---

En concluciones: 

Nada que hacerle, se intentó de varias maneras. se descubrio que el modelo de la pantalla no era el mismo que el de los codigos, pero
es curioso. por un lado si hay algunos que funcionan y otros que no.

Al menos no es la pantalla definitiva que usaremos, si no, la anterior que si logré compilar y mostrar bien.
