# sesion-04a

## 26-agosto clase 7

### proyecto-01

tener 2 pantallas.

#### pantalla-01

texto. scroll automático. Algunas palabras se ven destacadas en amarillo.

#### pantalla-02

muestra imágenes/animaciones.

#### interacción

el usuario puede escribir con un teclado una o varias de las palabras destacadas. Las palabras provocan una animación relacionada al concepto o palabra.

### ideas refranes

ojos que no ven, corazón que no siente.

perro que ladra no muerde

cría cuervos, y te sacarán los ojos.

### refranes chilenos

[link pdf memoria chilena](https://www.memoriachilena.gob.cl/602/articles-122398_recurso_2.pdf)

dale con que las gallinas mean

en casa de herrero, cuchillo de palo

el que no llora no mama

pasar gato por liebre

quedar como chaleco de mono

se le escapan los enanos del bosque

ta mal pelao el xanxo

y a vo quien te pateó la jaula

### recursos

[2 displays](https://www.youtube.com/watch?v=j6B47reye80)

[fonts](https://www.youtube.com/watch?v=WIAcy5FXuAA)

### repartición

cami: dibujar 4 ilustraciones que convivan, 1 por refrán

braulio: scroll por línea

cami parada: convivencia entre displays

stgo: código

## avance pro

Continuando con el código de [poemSampler-v1](/12-santiagoClifford/sesion-03b/poemSampler/poemSampler/poemSampler.ino)

```cpp
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
```

//agregué void testscrolltext(), bansandome en el [ejemplo](https://github.com/adafruit/Adafruit_SSD1306/blob/master/examples/ssd1306_128x64_i2c/ssd1306_128x64_i2c.ino)

hice varias pruebas editando el void con variables similares. No tuvo efecto.

```cpp
void testscrolltext(){ 
  pantallita.startscrollright(0x00, 0x0F);
  delay(2000);
  pantallita.stopscroll();
  delay(1000);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(2000);
}
```

mateo me ayudó con este código, me envió este:

```cpp
include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

String texto = "Hola! Esto es un scroll vertical en Arduino :)";
int16_t y = -8; // Comenzamos fuera de la pantalla

void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("Error al iniciar la pantalla SSD1306"));
    for(;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  display.clearDisplay();

  display.setCursor(0, y);
  display.print(texto);
  display.display();

  y++;  // Mueve el texto hacia abajo

  // Si el texto saliÃ³ completamente de la pantalla, reinicia desde arriba
  int16_t textHeight = 8; // Altura de la fuente 1
  if (y > SCREEN_HEIGHT) {
    y = -textHeight;
  }

  delay(50); // Ajusta la velocidad del scroll
}
```

comparando los código pude a llegar a las siguientes conclusiones.

- en el [ejemplo de adafruit](https://github.com/adafruit/Adafruit_SSD1306/blob/master/examples/ssd1306_128x64_i2c/ssd1306_128x64_i2c.ino), hay una función display.startscrollright(0x00, 0x0F);. Esto me hizo pensar que para scrollear hacia abajo habría una función similar. Comparando los códigos me di cuenta de una manera sencilla de resolverlo, y es ir aumentado en 1 la "y" de display.setCursor(x,y);

### proyecto-01 v2

conversando con el grupo, y gracias al feed back de mateo el proyecto evolucionó de la siguiente manera:

#### pantalla-01 nueva versión

muestra 1 refrán a la vez. con un potenciómetro puedes ir scrolleando entre refranes.

#### pantalla-02 nueva versión

muestra imágenes/animaciones que surgen a partir de los refranes.

#### interacción nueva versión

con el potenciómetro se selecciona refrán, el cual es mostrado en una pantalla. Al pulsar un botón, en la pantalla2, se prende un dibujo referente al refrán seleccionado.

El usuarix puede combinar varios dibujos para crear su propio escenario.

## poemSampler-v2

modifiqué el codigo que me pasó mateo, para poder controlar el scroll con el potenciómetro.

```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int potPin = A0;

int poteValue;
 

String texto = "frugeles";
int16_t y = -8; // Comenzamos fuera de la pantalla

void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("Error al iniciar la pantalla SSD1306"));
    for(;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {

poteValue=analogRead(potPin);
poteValue = map(poteValue, 0, 1023, 0, 64); //Map value 0-1023 to 0-255 (PWM)
     

  display.clearDisplay();

  display.setCursor(0, poteValue);
  display.print("frugeles");
  display.print("\n");
  display.print("\n");
  display.print("superocho");
  display.print("\n");
  display.print("\n");
    display.print("chocman");
  display.print("\n");
  display.print("\n");
  display.print("centella");

  display.display();

  //y++;  // Mueve el texto hacia abajo

  // Si el texto saliÃ³ completamente de la pantalla, reinicia desde arriba
  int16_t textHeight = 8; // Altura de la fuente 1
 // if (y > SCREEN_HEIGHT) {
 //   y = -textHeight;
 // }

  //delay(50); // Ajusta la velocidad del scroll
}
```
### actualización 27-agosto
Hoydía estuvimos con camila parada y braulio en el lab trabajando. Estuvimos revisando el código de poemSampler-v1.1 línea por línea, con el fin de entender más sobre las variables y funciones nativas de arduino IDE.

## proyecto-01 v3

camila parada fue la encargada de investugar sobre la viabilidad de usar 2 pantallas que puedieran comunicarse. Camila llegó a la conclusión de que debido a las limitaciones técninas y temporales, lo mas apropiado sería pasar a que funciones con 1 display, en vez de 2

la propuesta consiste en una pantalla la cual muestra una seria de refranes chilenos, los cuales puedes ir scrolleando con un potenciómetro.

Nuestro equipo define 1 ilustración para cada refrán. Al presionar el botón, se ve en pantalla la ilustración asociada al poema presente en pantalla en el momento en que se presionó el boton.

el intercambio de los modos de la pantalla(textoMode, ilustracionMode), está determinado por 2 componentes. El potenciómetro y el botón, respectivamente. Siempre que se presione el botón a continuación se visualizará ilustracionMode, y siempre que se gire el potenciómetro, a continuación se activará el textMode.

Las ilustraciones de los distintos refranes son compatibles, es decir, puede haber más de una en pantalla simultáneamente.

código que llevamos. sigo trabajando en base a las versiones anteriores de poemSampler

```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int potPin = A0;

int poteValue=0;


String refranEnano = "se le escapan los enanos del bosque";
String refranGallina = "dale con que las gallinas mean";
String refranMono = "quedar como chaleco 'e mono";
String refranWawa = "wawa que no llora no mama";

int16_t y = -8;  // Comenzamos fuera de la pantalla

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Error al iniciar la pantalla SSD1306"));
    for (;;)
      ;
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {

  poteValue = analogRead(potPin);
  poteValue = map(poteValue, 0, 1023, 400,0);  //map value 0-1023 to 0-255 (PWM)

  display.clearDisplay();

  display.setCursor(0, poteValue);


  display.println(refranEnano);
  display.print("\n");
  // display.print("\n");
  // display.print("\n");
  // display.print("\n");
  display.println(refranGallina);
  // display.print("\n");
  // display.print("\n");
  // display.print("\n");
  display.print("\n");
  display.println(refranMono);
  // display.print("\n");
  // display.print("\n");
  // display.print("\n");
  display.print("\n");
  display.println(refranWawa);

  display.display();

  //y++;  // Mueve el texto hacia abajo

  // Si el texto saliÃ³ completamente de la pantalla, reinicia desde arriba
  //int16_t textHeight = 8;  // Altura de la fuente 1
                           // if (y > SCREEN_HEIGHT) {
                           //   y = -textHeight;
                           // }

  //delay(50); // Ajusta la velocidad del scroll
}
```

## proyecto-01 v4

camila delgado fue la encargada de preparar las imágenes que usaríamos para representar cada refrán. Camila llegó a la conclusión que la resolución de la pantall(128x64) no era suficiente para mostrar más de 1 imagen a la vez. Debido a esa limitación técnica, decidimos evolucionar el proyecto.

poemSampler-v4 consta de una pantalla, un potenciómetro y un botón.

Existen 2 modos de navegar el programa. el modo para texto(textoMode) y el modo para las ilustraciones(fotoMode). Ambos modos muestran una serie de elementos ordenados en fila, verticalmente.

El potenciómetro permite scrollear en el eje Y. Mientras que el botón permite cambiar de modo. De manera que, el botón siempre "apaga" el modo activo, y "enciende" el modo inactivo.