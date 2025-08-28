# sesion-03b
## Materiales para la sesión 04a
### Componentes

- Mini protoboard de 170 puntos
- Pantalla OLED

Resolución de pantalla: número de píxeles que se pueden mostrar en cada eje.

### Referencias artísticas

- Daniel Cruz – Artista visual que trabaja con pantallas LED.
- Plataforma Arte y Medios

### Herramientas de prototipado

- Tinkercad
- Wokwi

### Pantalla OLED y protocolo I2C

La pantalla utiliza el protocolo I2C, que permite la comunicación entre un microcontrolador y distintos periféricos electrónicos.

### Prefijos métricos

Se emplean para expresar múltiplos y submúltiplos en el Sistema Internacional de Unidades (SI).

### Pines importantes

GND → Tierra

VCC → Voltaje

SCL → Señal de reloj

SDA → Línea de datos

### Librerías

Utilizamos la biblioteca de Adafruit, desarrollada por Ladyada.
Es fundamental seleccionar correctamente la placa en la que se conectará la pantalla, ya que la librería define la asignación de pines.

### Dirección I2C

El ejemplo no funcionaba porque la dirección estaba mal configurada.
Se debía usar 0x3C en lugar de 0x3D.

0x3C = 0111100 (binario)

0x3D = 0111101 (binario)

En C++ el signo ! significa “lo contrario” o “negación lógica”:
```cpp
if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) { 
```
### Funciones utilizadas

Ejemplos de funciones para la pantalla:
```cpp
pantallita.clearDisplay(); // Limpia toda la pantalla
pantallita.setTextSize(2); // Ajusta tamaño del texto
pantallita.setTextColor(SSD1306_WHITE); // Establece color
```
### Código de ejemplo
```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int contador = 0;

void setup() {
  if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Pantalla SSD1306 no encontrada"));
    for(;;);
  }
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);
}

void loop() {
  pantallita.clearDisplay();
  pantallita.setTextSize(2);
  String mensaje = "Contador:";
  int16_t x1, y1;
  uint16_t w, h;
  
  // Centrado del texto
  pantallita.getTextBounds(mensaje, 0, 0, &x1, &y1, &w, &h);
  pantallita.setCursor((SCREEN_WIDTH - w)/2, 0);
  pantallita.println(mensaje);

  // Número centrado
  String numero = String(contador);
  pantallita.getTextBounds(numero, 0, 0, &x1, &y1, &w, &h);
  pantallita.setCursor((SCREEN_WIDTH - w)/2, 30);
  pantallita.println(numero);

  pantallita.display();
  contador++;
  delay(1000);
}
```
### Incluir imágenes en la pantalla OLED

Para mostrar gráficos se deben convertir a formato de bits.
Se puede usar la herramienta: Image2Cpp

Es importante definir bien el tamaño y la resolución de la imagen.
