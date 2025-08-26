# sesion-03b

Potenciómetro
No importa que lugar, eléctricamente son lo mismo (lineal vertical 5)
En los dos extremos tiene 0 y 5v.
//Declarar valor de potenciómetro
valorPot = analogRead(A0);

Write: Output
Read: Input

### Proyecto 01

Poema elegido de Pablo Neruda
Inicia con la idea de usar el scroll

Código inicial para aprender y jugar con las variables

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -5
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int contador = 0;

// referencia de https://docs.arduino.cc/language-reference/en/variables/data-types/string/
char *myStrings[] = {"Es tan", "corto", "el AMOR", "y tan",
                        "Laaaaaaaaaaaaaaaaargooooooooooooooooooo", "el olvido"
                       };




void setup() {
 if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
   Serial.println(F("No se encontrÃ³ la pantalla SSD1306"));
   for(;;);
 }
 pantallita.clearDisplay();
 pantallita.setTextColor(SSD1306_WHITE);


}


void loop() {
 pantallita.clearDisplay(); // Limpiamos toda la pantalla
  // recorrer el arreglo de strings
 // a su vez cada string es un arreglo de chars
 // vivan los for loops
 // tb conocidos como bucles
 for (int i = 0; i < 6; i++) {
   poemaScroll(myStrings[i], 300);
 }
  pantallita.display(); // Actualiza la pantalla
}
 // agregar parametro String
 // de input
 // y tambien int para delays
 void poemaScroll (String poema, int pausa) {
 pantallita.clearDisplay();

 pantallita.setTextSize(2); // Draw 2X-scale text
 pantallita.setTextColor(SSD1306_WHITE);
 pantallita.setCursor(10, 0);
 // pantallita.println(F("scroll"));
 // mod que le hice yo
 pantallita.println(poema);
```
Idea de poetario que gire alrededor del poema de Pablo Neruda; "Tal corto el amor y tan largo el olvido" que teniamos en mente al principio, con la idea de contar una historia con los poemas

Etapas del poetario:

*El Encuentro*

“Si me miras, yo me vuelvo hermosa.”
— Gabriela Mistral, Ternura (1924).

*El Amor*

“Quiero hacer contigo
lo que la primavera hace con los cerezos.”
— Pablo Neruda, Veinte poemas de amor y una canción desesperada (1924).

*El Quiebre*

“Se rompió mi voz
cuando más tuya era.”
— Dulce María Loynaz, Poemas sin nombre (1953).

*El Olvido*

“Es tan corto el amor,
y tan largo el olvido.”
— Pablo Neruda, Veinte poemas de amor y una canción desesperada (1924).

*La Huella*

“De todo quedó un poco.
De tu luz y de mi sombra.”
— César Vallejo, Poemas humanos (1939, póstumo).
