# sesion-03b

- Encargo proxima semana hacer un navegador de poemas con una pantalla

- Paginas no informacion util: tinkercard.com  /  wokwi.com

SSD1306OLED pantalla que se puede usar, esta pantalla tiene cuatro entradas

- GND TIERRA, 0 VOLTS, punto de inicio
- VCC TIERRA Y 5 VOLTS aveces puede decir otra cantidad de volts, es lo que necesita o pide la pantalla para funcionar
Arduino Uno pin ENTRADAS:

- GND -> Ground -> GND
- VCC -> Supply voltage -> 5V
- SCL -> I2C clock line -> A5
- SDA -> I2C data line -> A4

*lo primero que se hace es alimentar la pantalla desde el arduino en la torre power en la patita GND a GND de la pantalla 
*después se conecta 5v a 5v
*A5 - SCL
*A4 - SDA

- Librerías para usar la pantalla (github):
1- Adafruit_SSD1306 <https://github.com/adafruit/Adafruit_SSD1306>
2-Adafruit-GFX-Library <https://github.com/adafruit/Adafruit_SSD1306>
  
```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
```

biblioteca, para programar pantalla, siempre que el codigo diga #include se debe agregar la biblioteca para que el programa pueda entender el lenguaje de programacion

```cpp
 display.clearDisplay(); // Limpiar toda la pantalla
  display.setTextSize(2); // Tamaño de texto más grande
  int16_t x1, y1; // es un tipo de dato entero con signo de exactamente 16 bits 

```

- para agregar imagenes a la pantalla <https://javl.github.io/image2cpp/>

crea un código de bits que se puede agregar a la programación debe ser de 128 x 84, se pone antes del void

- string array:  estructura de datos que permite almacenar una colección de texto, donde cada elemento de la colección es una cadena de caracteres.
