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

Ok. Aquí deben ir mis conclusiones sobre esta pantalla:

1. Al ser más grande, tiene diferentes resoluciones y pixeles
2. No funciona el movimiento, solo de manera estatica. Al menos para nuestro trabajo, no necesitamos mucho más.

---

Ahora probare la otra pantalla que tiene más maneras de personalización

El modelo es: IC GC9A01 de 200 x 200

Me estoy ayudando tanto con ChatGpt y esta pagina que se me proporciono: (https://arduinogetstarted.com/tutorials/arduino-round-circular-tft-lcd-display)

Lo primero fue conectar todo, para acto después usar un codigo simple:
