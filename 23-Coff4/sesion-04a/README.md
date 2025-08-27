# sesion-04a

## FULL ENCARGO! ᕕ( ᐛ )ᕗ

----

Relataré como fueron sucediendo las cosas en orden

### Fin de semana

Primero vimos cual poema ibamos a usar.

Después todos comenzamos a investigar sobre como queriamos la visualidad del poema y como el potenciometro entraria en escena.

- Mover el potenciometro y que por cada movimiento se mostrara una linea de texto
- Tal vez desplazar el texto hacia el lado
- Pero terminamos pensando en que bajaran como "creditos de pelicula"

Por mi lado fui investigando diferentes paginas webs (Mirar la carpeta del encargo anterior) hasta dar con una que fue fundamental

<https://forum.arduino.cc/t/scrolling-a-oled-down/1403417/8>

En esta se explicaba como hacer que el texto bajara y subiera. un gran punto para mi  ┐(￣∀￣)┌

(<https://www.youtube.com/watch?v=l_2vnl5MOpo>)

El Felix termino encontrando un tutorial para mostrar la frecuencia del potenciometro junto a un texto.
Así que podriamos comenzar a probar.

En mi caso intente usar el codigo que encontre

`![imagen del ejercicio](./imagenes/filosofico.png)`

```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C
// En primer lugar se da a entender que existe la pantalla
Adafruit_SSD1306 display (SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
// Esta es la variable para que suba o baje el texto
int j = 1; 

void setup () {
//se inicia la pantalla
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  display.clearDisplay();
//Con esto se regula el tamaño del texto
  display.setTextSize(1);
}

void loop() {
//j cambia de valor al comenzar el loop, donde estan las variables True or False, esto se utiliza para subir o bajar el texto
  j = !j; // + = down, - = up
//Esto es complicado, pero el profe Misa me ayudo  (/▿＼ )
//i es igual a 0 y cada vez que se sube se suman 2 pixeles y esto se repite hasta alcanzar la maxima altura de la pantalla
// que en este caso es 64
  for (int i = 0; i < SCREEN_HEIGHT; i += 2) {
//Variable para que el color sea blanco
    display.setTextColor(WHITE);
// Si j es 1 el texto subira y si no, se ejecutara la siguiente linea de codigo
    if (j)
// En este caso si va hacia arriba, el cursor (el punto donde se comienza a escribir (como coordenadas segun lo interpreto))
//se coloca en la posicion 0,i
//i seria la posicion vertical que se ira moviendo y 0 es la parte superior izquierda
      display.setCursor(0, i); // scroll UP
    else
// Ahora si el texto va hacia abajo, el cursor comenzara en 0 y la altura maxima de la pantalla, a la cual se le ira restando i
//haciendo que todo caracter baje
      display.setCursor(0, SCREEN_HEIGHT - i); // scroll DOWN
// Aqui se da la orden de imprimir las siguientes frases
//Algo que intente fue que se separaran y no estuvieran todas juntas, pero no funciono  
    display.println(F("En Santiago de Chile\los dias son\interminablemente\largos"));
// Con esto se actualiza la pantalla 
    display.display();
// y termina aqui limpiandola por completo
    display.clearDisplay();
  }
}
```

Esto seria una explicación de como funciona el codigo base (con un muy pequeño cambio hecho por mi)

Después evoluciono en este otro codigo que es similar y que mostré en la carpeta pasada con un diferente poema

`![imagen del ejercicio](./imagenes/filosofico.png)`

```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display (SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
int j = 1; // direction up/down

void setup () {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  display.clearDisplay();
  display.setTextSize(1);
}

void loop() {
  j = !j; // + = down, - = up
  for (int i = 0; i < SCREEN_HEIGHT; i += 2) {
    display.setTextColor(WHITE);
    if (j)
      display.setCursor(0, i); // scroll UP
    else
      display.setCursor(0, SCREEN_HEIGHT - i); // scroll DOWN
    display.println(F("Que el verso sea como una llave
 "que abra mil puertas"
 "Una hoja cae;"
 "algo pasa volando;"
 "Cuanto miren los ojos creado sea,"
 "y el alma del oyente quede temblando"));
    display.display();
    display.clearDisplay();
  }
}
```

Como se observa la idea era separar las lineas, pero quedaban juntas igualmente ya que esta no era la manera de hacerlo

----

- *Lo se, soy un poco desordenada pero intentare hacer lo posible para que se entienda en esta carpeta (⁄ ⁄•⁄ω⁄•⁄ ⁄)*

## Dia Lunes
