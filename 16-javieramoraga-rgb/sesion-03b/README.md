# sesion-03b ᯓ★
## Clase Online ┆ 22 de Agosto  . ݁₊ ⊹ . ݁˖ . ݁

### Pantallas con Arduino  
- En teoría íbamos a trabajar con pantallas.  
- **Tipos de pantallas a usar:**  
  - **OLED** y/o **TFT** → Diferencia principal: **resolución y brillo**.  
  - **Displays numéricos** (sólo muestran números o caracteres).  
  - **Displays programables por caracteres** → no se pueden manipular píxeles directamente.  
  - **Display de 64 puntos** → requiere chip **MAX7219**.  

### Recursos y referencias  
- Video recomendado: **Daniel Cruz – Masivo.cl**  
- Pixel art en GitHub: [Gitfiti](https://github.com/gelstudios/gitfiti)  
- Sitios para componentes electrónicos:  
  - [Mouser](https://www.mouser.com/) → muy completo, pero poco amigable.  
  - [Adafruit](https://www.adafruit.com/) → más amigable, creada por **Ladyada** (tiene biblioteca para pantallas y fábrica en Nueva York).  
- Herramienta de cálculo: **WolframAlpha**  

### Programas de simulación  
- **Wokwi**  
- **Tinkercad**  

### Pantalla OLED SSD1306  
Usaremos la **pantalla OLED SSD1306**, que funciona con el protocolo **I2C**, utilizando sólo **4 cables**:  

- **GND** → Tierra  
- **VCC** → Alimentación (5V)  
- **SCL** → Clock  
- **SDA** → Data  

⚠️ **Importante**: siempre alimentar la pantalla primero (**GND y VCC**).  

### Bibliotecas necesarias  .𖥔 ݁ ˖
- `Adafruit_SSD1306`  
- `Adafruit-GFX`  

.☘︎ ݁˖ Notas:  
- No siempre las bibliotecas van a funcionar a la primera.  
- Algunas dependen de otras → es posible que debas instalarlas en un orden específico.  
- En **Arduino IDE** también existen estas bibliotecas disponibles.  

### Consideraciones para proyectos  
- Si usamos ejemplos de internet, debemos **acreditarlos**:  
  - Citar la fuente.  
  - Especificar qué parte fue tomada, mezclada o editada.  

### CODIGOS DE CLASE ⋆✴︎˚｡⋆
```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
// Le cambiamos el nombre de "display" a "pantalita"
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int contador = 0;

void setup() {
  if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    for(;;);
  }
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);
}

void loop() {
  pantallita.clearDisplay(); // Limpiamos toda la pantalla
  
  // SE LE PUEDE CAMBIAR EL TAMAÑO
  pantallita.setTextSize(1); // Tamaño de texto más grande
  String mensaje = "Contador muy grande, Misa recomienda javiera contador";
  int16_t x1, y1;
  uint16_t w, h;
  
  // Medimos el ancho del texto para centrarlo horizontalmente
  // contador, con esas letras, ese tamaño ¿Cuánto mides?
  // es importante que se haga manual
  pantallita.getTextBounds(mensaje, 0, 0, &x1, &y1, &w, &h);
  pantallita.setCursor((SCREEN_WIDTH - w)/2, 0);
  pantallita.println(mensaje);

  // Mostramos el número centrado
  // TOMA EL VALOR 0 NUMÉRICO, PERO DÁMELO EN VERSIÓN TEXTO
  String numero = String(contador);
  // CUÁNTO MIDE LA PANTALLA
  pantallita.getTextBounds(numero, 0, 0, &x1, &y1, &w, &h);
  pantallita.setCursor((SCREEN_WIDTH - w)/2, 30); // 30 píxeles hacia abajo
  pantallita.println(numero);

  // EN QUÉ MOMENTO SE DIBUJA
  // UNO LE DICE TODO LO QUE TIENE QUE HACER
  // Y LO HARÁ CUANDO APAREZCA "pantallita.display();"
  pantallita.display(); // Actualiza la pantalla
  // A LO QEU VALE CONTADOR, AGRÉGALE 1
  contador++;
  // CON UN TIEMPO DE UN SEGUNDO
  delay(1000);
}
```
```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int contador = 0;

String linea0;
String linea1;
String linea2;


void setup() {
  if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    for(;;);
  }
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);

  linea0 = "respuesta del oraculo";
  linea1 = "hagas lo que hagas";
  linea2 = "te arrepentiras";
}

void loop() {
  pantallita.clearDisplay(); // Limpiamos toda la pantalla
  
  // LLAMA AL "testscrolltext"
  testscrolltext(linea0);
  testscrolltext(linea1);
  testscrolltext(linea2);
  
  pantallita.display(); // Actualiza la pantalla

}

// void testscrolltext(void) {
  // CAMBIAR LA LINEA ANTERIOR
  // PARA AGREGAR PARÁMETRO String
  // DE INPUT
  void testscrolltext(String texto) {
  pantallita.clearDisplay();

  pantallita.setTextSize(2); // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 0);

  // SE PUEDE CAMBIAR LO QUE ESTÁ EN LA PANTALLA
  // pantallita.println(F("scroll"));
  
  // HICE QUE LA PANTALLA DIJERA LO QUE DICE "linea0"
  // SACÁNDOLE EL F()
  pantallita.println(linea0);
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
}
```

