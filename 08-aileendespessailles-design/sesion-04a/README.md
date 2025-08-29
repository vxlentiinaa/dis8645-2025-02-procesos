# sesion-04a

- potenciómetro,  sirve para variar el voltaje (tensión) o la resistencia en un circuito eléctrico o para medir la posición y el desplazamiento.

poema, es una obra literaria escrita generalmente en verso, que usa el lenguaje de manera estética y emotiva para expresar sentimientos, ideas o impresiones del mundo.

- breadboard o protoboard es una placa con agujeros interconectados internamente que permite construir y probar circuitos electrónicos temporalmente y sin soldar.
- diagrama de flujo (o flujograma) es una representación visual y secuencial de un proceso o flujo de trabajo, utilizando símbolos y flechas estandarizados para mostrar los pasos, decisiones y la conexión entre ellos.
- map hace que una función que tome otra función como argumento y la aplica a cada ítem de una secuencia (como una lista). ( toma los valores de lo que esta conectados y los adaptando a lo que se pone después. ej: velocidad = map(velocidad, 0, 1023, 0, 100); 0, 1023, (valor potenciómetro) 0, 100, (valor que se le re asigna.
- Display, se refiere a un componente que muestra información visual, como la pantalla de un celular o un televisor, o a una forma de publicidad online (banners) y física (expositores en tiendas).
- display.display() es el comando final que envía el contenido preparado (por ejemplo, texto o imágenes dibujadas por comandos anteriores) a la pantalla física del dispositivo.

## potenciometro

Pin names:
Name - Description

- GND - Ground
- SIG - Output, connect to an analog input pin
- VCC - Supply voltage

## Ideas proyecto 1

- que el texto suba o baje
- que el potenciómetro cambie la velocidad a la que el texto se mueve
- que el potenciómetro cambie la dirección en la que va el texto, derecha baja, izquierda sube
- que un botón cambie la dirección en la que va el texto al hacer click
  
## Desarrolo del proceso del proyecto

Para nuestro proyecto decidimos agregar una imagen que se reproduzca en la pantalla. Optamos por crear un pixel art y, para que tenga más relación con el poema, decidimos hacer una pequeña representación de Santiago.

Use como referencia y base para empezar a programar <https://forum.arduino.cc/t/scrolling-a-oled-down/1403417/8>, link que investigo Carla. 
Luego, a partir de este ejemplo, cambió los comandos de acuerdo a lo que deseaba el grupo ( que el texto subiera por la pantalla ). 
Surgio, el problema de que el texto no subia comletamente y esto fue resolvido junto al profe durante clases cambiando en el comando for el tamaño de la pantalla. https://wokwi.com/projects/344892191015961170 ejemplo pontenciometro + servo. Sacado de https://docs.wokwi.com/parts/wokwi-potentiometer
También realice la investigación del código que controla un servomotor con un potenciómetro y lo uní, junto a Félix, al código para regular la velocidad del poema. 
Además hice un registro fotográfico del circuito.
Junto con Carla resolvimos los preblemas que surgieron al poner la imagen en en el codigo, yaque salia pestañandi y por en ecima del poema, esto era por que teniamos escritro display.display dos veces en el textoñ. Tambien resolvimos el problema de la imagen sobre el texto poniendo espacios en blanco entre el poema y que así solo se viera la imagen. 

#### Primera parte del codigo proyecto trabajado con Felix. 
código versión 01: solo poema el texto se reinicia al tocar la parte superio de la pantalla. 
```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C
#define potenciometro A3


Adafruit_SSD1306 display (SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
int j = 15; // direction up/down
int velocidad; // se crea variable velocidad


void setup () {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS); //Inicia la pantalla OLED
  display.clearDisplay(); //Limpia la pantalla antes de dibujar.
  display.setTextSize(1); //Define el tamaño del texto.
}


void loop() {
  velocidad = analogRead(potenciometro); // la velocidad lee el potemciometro
  velocidad =  map(velocidad, 0, 1023, 0, 100);
 for (int i = 0; i < SCREEN_HEIGHT; i += 2) {
    display.clearDisplay();
    display.setTextColor(WHITE);
    // SIEMPRE subiendo desde abajo hacia arriba
    display.setCursor(0, SCREEN_HEIGHT - i);
    display.println(F("En Santiago de Chile"));
    display.println(F(""));
    display.println(F("los dias son"));
    display.println(F(""));
    display.println(F("interminablemente"));
    display.println(F(""));
    display.println(F("largos"));
    display.println(F(""));
    display.println(F("interminablemente"));
    display.println(F(""));
    display.println(F("largos"));
    display.display();
    delay(velocidad); // ajusta velocidad del scroll
  }
}
```
código versión 02: solo poema pasa sin problema hacia arriba
```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C
#define potenciometro A3


Adafruit_SSD1306 display (SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
int velocidad; // se crea variable velocidad


void setup () {
  // inicia la pantalla OLED
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  // limpia la pantalla antes de dibujar.
  display.clearDisplay();
  // define el tamaño del texto.
  display.setTextSize(1);
  // define el color del texto.
  display.setTextColor(WHITE);
}


void loop() {
  // variable i, determina que el texto va subiendo desde abajo hacia arriba.
 for (int i = 0; i < SCREEN_HEIGHT *3; i += 2) {
    display.clearDisplay();
    // La pantalla se divide en 3 partes, el texto se ubica en la parte de abajo (la tercera parte) en donde se va sumando de 2 en 2 “i”, por lo tanto en la siguiente línea se va restando este valor para que la pantalla suba
    display.setCursor(0, SCREEN_HEIGHT - i); 
    display.println(F("En Santiago de Chile"));
    display.println(F(""));
    display.println(F("los dias son"));
    display.println(F(""));
    display.println(F("interminablemente"));
    display.println(F(""));
    display.println(F("largos"));
    display.println(F(""));
    display.println(F("interminablemente"));
    display.println(F(""));
    display.println(F("largos"));
    //
    display.display();
    // ajusta el retraso de velocidad del scroll segun designado en for.
    delay(100);
  }
}
```


código versión 03: velocidad del poema controlado con el potenciometro
<https://wokwi.com/projects/440319400562495489>


```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C
#define potenciometro A3


Adafruit_SSD1306 display (SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
// se crea la variable volocidad
int velocidad;


void setup () {
  // inicia la pantalla OLED
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  // limpia la pantalla antes de dibujar.
  display.clearDisplay();
  // define el tamaño del texto.
  display.setTextSize(1);
  // define el color del texto.
  display.setTextColor(WHITE);
}


void loop() {
  // la variable velocidad lee el potenciometro.
  velocidad = analogRead(potenciometro);
  // se determina con map que los valores de potenciometro sean adaptados a la velocidad que se mueve el texto.
  velocidad = map(velocidad, 0, 1023, 0, 100);
  // variable i, determina que el texto va subiendo desde abajo hacia arriba.
 for (int i = 0; i < SCREEN_HEIGHT *4; i += 2) {
    display.clearDisplay();
    // se determina que el texto vaya subiendo
    display.setCursor(0, SCREEN_HEIGHT - i);
    display.println(F("En Santiago de Chile"));
    display.println(F(""));
    display.println(F("los dias son"));
    display.println(F(""));
    display.println(F("interminablemente."));
    display.println(F(""));
    display.println(F("largos."));
    display.println(F(""));
    display.println(F("Varias eternidades"));
    display.println(F(""));
    display.println(F("en un dia."));
    display.println(F(""));
    display.println(F("Nos desplazamos"));
    display.println(F(""));
    display.println(F("a lomo de luma"));
    display.println(F(""));
    display.println(F("Como los vendedores"));
    display.println(F(""));
    display.println(F("de cochayuyo:"));
    display.println(F(""));
    display.println(F("Se bosteza."));
    display.println(F(""));
    display.println(F("Se vuelve a bostezar."));
    // envía el contenido preparado, texto, a la pantalla.
    display.display();
    // ajusta el retraso de velocidad del scroll segun designado en for.
    delay(velocidad);
  }
}
```
####Segunda parte del codigo proyecto trabajado con Carla. 
intento 1: imagen que parpadea y esta al medio 
<https://wokwi.com/projects/440546331476540417>

intento 2: intentamos resolver y no resolvimos 
<https://wokwi.com/projects/440564452291708929>

intento 3: agregamos la foto de santiago
<https://wokwi.com/projects/440548077248882689>

intento 4: casi listo, pero no mostraba la ultima linea del poema
<https://wokwi.com/projects/440548344446009345>

intento 5: version final, sin corregir comentarios y modales 
<https://wokwi.com/projects/440548344446009345>
