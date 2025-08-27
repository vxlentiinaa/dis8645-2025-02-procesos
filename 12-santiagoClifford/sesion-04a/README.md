# sesion-04a

## 26-agosto clase 7

### proyecto-01

tener 2 pantallas. 

#### pantalla-01

texto. scroll automático. Akgunas palabras se ven destacadas en amarillo.

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