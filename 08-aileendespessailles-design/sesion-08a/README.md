# sesion-08a
servo motor 
<https://wokwi.com/projects/344891730528567891> <https://docs.wokwi.com/parts/wokwi-servo> 
Con carla logramos utilizar el servo motor con ese codigo de woki. 
Alambrado:
modulación por ancho de pulsos (PWM) - Amarillo	- Señal de control de entrada para el motor
V+ - Rojo - Terminal de alimentación positiva
Suelo - Marrón - Terminal de tierra

Pantalla xfp1116 07a y (ssh1106)

Pasos para la conexión: 

Conecta el módulo XFP1116 al Arduino:

GND (Tierra): Conecta el pin GND del módulo a un pin GND del Arduino.

VDD (Alimentación): Conecta el pin VCC del módulo a 5V en el Arduino.

SDA (Señal de Datos): Conecta el pin SDA del módulo al pin analógico A4 del Arduino.

SCK (Señal de Reloj): Conecta el pin SCL del módulo al pin analógico A5 del Arduino.

- tipografías:

Tipografías para display <https://learn.adafruit.com/adafruit-gfx-graphics-library/using-fonts>

codigo trabajado con el link anterior y chat gpt  

Cpp´´´

// el codigo funcionaba con la pantalla del proyecto 1 pero no con la pantalla del proyecto 2 

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeMonoBold12pt7b.h>  // Fuente incluida en Adafruit GFX

#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64

// Dirección I2C típica de pantallas OLED con SSD1306 es 0x3C
#define OLED_RESET -1  
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, OLED_RESET);

void setup() {
  // Inicializamos pantalla
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla OLED"));
    for (;;); // Se queda detenido si falla
  }

  display.clearDisplay();

  // Seleccionamos la fuente
  display.setFont(&FreeMonoBold12pt7b);

  // Color del texto
  display.setTextColor(SSD1306_WHITE);

  // Posición inicial del cursor (x, y) – y es la línea base del texto
  display.setCursor(0, 30);

  // Mostrar texto
  display.println(F("Hola Mundo!"));

  display.display();
}

void loop() {
  // No es necesario nada en loop para este ejemplo
}
