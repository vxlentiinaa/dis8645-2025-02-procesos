# sesión-04a

26 Agosto 2025

Empezamos por conversar acerca de la entrega del encargo. No vamos a hacer una lámina impresa, sino que vamos a hacer una digital.

En carpeta proyecto 1, se condensa toda la información a presentar el viernes acerca del encargo.

## documentación de proyecto 1

Hice una prueba con este código que encontré en este link para poder ver el poema dentro de la pantalla. Al principio lo probé con const char, pero la verdad se veía mucho mejor utilizando string.
<https://forum.arduino.cc/t/arduino-nano-i2c-oled-display-0-96-inches-128x64-pixels/935544>

```cpp
/* this program shows how to write long text messages on LCD by scrolling*/


// define the chars in one LED line
#define LEDLINE 16  






   #include <Adafruit_SSD1306.h>
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);






  // funciona mejor con string
  //const char poema[] = "Veo al jugador al que te refieres."
  // "Aaron?"
  // "Si. Ten cuidado. Ha alcanzado un nivel más alto."
  // "Puede leer nuestros pensamientos..."
  // "Eso no importa. Cree que somos parte del juego.";


  // poema del End queda la "p" de pensamientos fuera.
  String poemaEnd =  
  "Veo al jugador al que te refieres.\n"
  "Aaron?\n"
    "Si. Ten cuidado. Ha alcanzado un nivel más alto.\n"
    "Puede leer nuestros pensamientos...\n"
    "Eso no importa. Cree que somos parte del juego.\n";


  void setup() {


    // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Address 0x3C for 128x32


    display.display();
    delay(2000);


    display.clearDisplay();      //this line to clear previous logo
    display.setTextColor(WHITE); //without this no display
    display.println(poemaEnd);//your TEXT here
    display.display();            //to shows or update your TEXT
  }


  void loop() {
   
  }
```

Probé también este código para hacerle scroll al texto. No me estaba dando ningún error al momento de verificar, pero en el monitor no se mostraba. No conseguí que este código funcionara. Voy a probar también con otros códigos utilizados en el mismo foro.
<https://forum.arduino.cc/t/lcd-scroll-text/210755/7>

```cpp
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);


void setup()
{


  lcd.begin(16,2);
  /* try to keep this stationary*/
  lcd.setCursor(5,0);
  lcd.print("TEST STRING");


}


void loop()
{


  String poemaEnd =  
  "Veo al jugador al que te refieres.\n"
  "Aaron?\n"
    "Si. Ten cuidado. Ha alcanzado un nivel mas alto.\n"
    "Puede leer nuestros pensamientos...\n"
    "Eso no importa. Cree que somos parte del juego.\n";


  lcd.setCursor(16,1);
  lcd.print(poemaEnd);


  for (int scrollCounter = 0; scrollCounter < 28; scrollCounter++)
  {


    lcd.scrollDisplayLeft();


    delay(250);
  }


  lcd.clear();


}
```

Utilicé uno de los últimos códigos dentro del mismo foro. Le cambié el tipo de pantalla y los tamaños pensando que era eso el por qué no se mostraba nada. Aun así no logré que funcionara. No cambié el texto a mostrar, dejé el mismo texto que venía en el código. También lo probé en Wokwi y tampoco funcionó. Creo que quizás la persona que lo escribió pudo haberse equivocado en alguna parte.

```cpp
#include <LiquidCrystal_I2C.h> // include lib according to your lcd type


// Constant for my lcd size, adjust to your lcd
#define LCDWIDTH 20
#define LCDHEIGHT 4


// Tipo de monitor
LiquidCrystal_I2C lcd(0x3c, 128, 64);


void setup() {
  lcd.begin(128, 64); // initialize with your correct lcd size here
  lcd.init();
  lcd.clear();
  lcd.backlight();


  char * pinnedString = (char *) F("by Goet");
  char * scrollingString = (char *) F("I don't like being long-winded type of guy, so I think i'll go straight to the point: this is a very long, long text scrolling on your lcd display :)");
  int pinnedRow = LCDHEIGHT / 2;
  int scrollingRow =  LCDHEIGHT / 2 - 1;
  int scrollingSpeed = 200;
  pinAndScrollText(pinnedString, pinnedRow, scrollingString, scrollingRow, scrollingSpeed);


  delay(2000);
  lcd.clear();
  lcd.print(F("Back"));


}


void loop() {
}


/* This procedure pins a given text in the center of a desired row while scrolling from right to left another given text on another desired row.
    Parameters:
    char * pinnedText: pinned char string
    int pinnedRow: desired row for pinned String
    char * scrollingText: scrolling char string
    int scrollingRow: desired row for scrolling String
    int v = scrolling speed expressed in milliseconds
*/
void pinAndScrollText(char * pinnedText, int pinnedRow, char * scrollingText, int scrollingRow, int v) {
  if (pinnedRow == scrollingRow || pinnedRow < 0 || scrollingRow < 0 || pinnedRow >= LCDHEIGHT || scrollingRow >= LCDHEIGHT || strlen(pinnedText) > LCDWIDTH || v < 0) {
    lcd.clear();
    lcd.print(F("Error"));
    while (1);
  }
  int l = strlen(pinnedText);
  int ls = strlen(scrollingText);
  int x = LCDWIDTH;
  int n = ls + x;
  int i = 0;
  int j = 0;
  char c[ls + 1];
  flashCharSubstring(pinnedText, c, 0, l);
  lcd.setCursor(l % 2 == 0 ? LCDWIDTH / 2 - (l / 2) : LCDWIDTH / 2 - (l / 2) - 1, pinnedRow);
  lcd.print(c);
  while (n > 0) {
    if (x > 0) {
      x--;
    }
    lcd.setCursor(x, scrollingRow);
    if (n > LCDWIDTH) {
      j++;
      i = (j > LCDWIDTH) ? i + 1 : 0;
      flashCharSubstring(scrollingText, c, i, j);
      lcd.print(c);
    } else {
      i = i > 0 ? i + 1 : 0;
      if (n == ls) {
        i++;
      }
      flashCharSubstring(scrollingText, c, i, j);
      lcd.print(c);
      lcd.setCursor(n - 1, scrollingRow);
      lcd.print(' ');
    }
    n--;
    if (n > 0) {
      delay(v);
    }
  }
}


/* This procedure makes a char substring based on indexes from a given char string stored in progmem.
   The caller have to set its own buffer and pass its reference
   to the procedure. The procedure will fill the buffer with
   desired substring based on given indexes. Caller buffer size have
   to be at least big as desired substring length (plus null terminating char) of course.
   As a general rule, caller buffer should be: char buf[strlen(str) + 1].
   Example:
   char * string = (char*)F("Hello world!"); // or char string[] = (char[])F("Hello world!");
   char buf[strlen(string) + 1];
   flashCharSubstring(string, buf, 0, 5);
   Serial.println(buf); // output: "Hello"
    Parameters:
    const char *str: string from where to extract the substring
    char *buf: reference of the caller buffer.
    int inf: lower bound, included
    int sup: upper bound, excluded
*/
void flashCharSubstring(const char *str, char *buf, int inf, int sup) {
  int l = sup - inf;
  for (int i = 0; i < l; i++) {
    buf[i] = pgm_read_byte_near(&str[i + inf]);
  }
  buf[l] = '\0';
}
```

Me haré la vida más fácil y voy a utilizar el código utilizado por Aarón en la clase 3b para hacerle scroll al texto.

función con parametro adicional de int para las pausas

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
  
  testscrolltext(linea0, 300);
  testscrolltext(linea1, 300);
  testscrolltext(linea2, 600);
  
  pantallita.display(); // Actualiza la pantalla


}


// void testscrolltext(void) {
  // cambiar la linea anterior
  // para agregar parametro String
  // de input
  // y tambien int para delays
  void testscrolltext(String texto, int pausa) {
  pantallita.clearDisplay();

  pantallita.setTextSize(2); // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 0);
  // pantallita.println(F("scroll"));
  // mod que le hice yo
  pantallita.println(texto);

  pantallita.display();      // Show initial text
  delay(100);

  // Scroll in various directions, pausing in-between:
  pantallita.startscrollright(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrolldiagright(0x00, 0x07);
  delay(pausa);
  pantallita.startscrolldiagleft(0x00, 0x07);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
}
```

Le cambié el poema anterior por el de Minecraft, y noté que algunas palabras se cortaban. Utilicé algo que aprendimos anteriormente en clases, que es para crear una nueva línea. Funcionó perfecto para evitar que se corten ciertas palabras.

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


  linea0 = "Veo al jugador al que te refieres.";
  linea1 = "Aaron?";
  linea2 = "Si. Ten cuidado. Ha alcanzado un nivel\n"
  "mas alto.";
}


void loop() {
  pantallita.clearDisplay(); // Limpiamos toda la pantalla
 
  testscrolltext(linea0, 300);
  testscrolltext(linea1, 300);
  testscrolltext(linea2, 600);
 
  pantallita.display(); // Actualiza la pantalla




}




// void testscrolltext(void) {
  // cambiar la linea anterior
  // para agregar parametro String
  // de input
  // y tambien int para delays
  void testscrolltext(String texto, int pausa) {
  pantallita.clearDisplay();


  pantallita.setTextSize(1); // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 0);
  // pantallita.println(F("scroll"));
  // mod que le hice yo
  pantallita.println(texto);


  pantallita.display();      // Show initial text
  delay(100);


  // Scroll in various directions, pausing in-between:
  pantallita.startscrollright(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrolldiagright(0x00, 0x07);
  delay(pausa);
  pantallita.startscrolldiagleft(0x00, 0x07);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
}
```

Probé cambiando la tipografía, pero al parecer necesito convertir la tipografía que quiero usar a un formato que pueda leer arduino.

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


  linea0 = "Veo al jugador \n"
  "al que te refieres.";
  linea1 = "Misa?";
  linea2 = "Si. Ten cuidado. Ha alcanzado un nivel\n"
  "mas alto.";
}


void loop() {
  pantallita.clearDisplay(); // Limpiamos toda la pantalla
 
  testscrolltext(linea0, 300);
  testscrolltext(linea1, 300);
  testscrolltext(linea2, 600);
 
  pantallita.display(); // Actualiza la pantalla




}




// void testscrolltext(void) {
  // cambiar la linea anterior
  // para agregar parametro String
  // de input
  // y tambien int para delays
  void testscrolltext(String texto, int pausa) {
  pantallita.clearDisplay();


// pruebita para cambiar la tipografia
  pantallita.setFont(ArialMT_Plain_10);


  pantallita.setTextSize(1); // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 0);
  // pantallita.println(F("scroll"));
  // mod que le hice yo
  pantallita.println(texto);


  pantallita.display();      // Show initial text
  delay(100);


  // Scroll in various directions, pausing in-between:
  pantallita.startscrollright(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrolldiagright(0x00, 0x07);
  delay(pausa);
  pantallita.startscrolldiagleft(0x00, 0x07);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
}


  // de input
  // y tambien int para delays
  void testscrolltext(String texto, int pausa) {
  pantallita.clearDisplay();


  pantallita.setFont(ArialMT_Plain_10);
  pantallita.setTextSize(1); // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 0);
  // pantallita.println(F("scroll"));
  // mod que le hice yo
  pantallita.println(texto);


  pantallita.display();      // Show initial text
  delay(100);


  // Scroll in various directions, pausing in-between:
  pantallita.startscrollright(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrolldiagright(0x00, 0x07);
  delay(pausa);
  pantallita.startscrolldiagleft(0x00, 0x07);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
}

```

Estuve investigando como hacer scrolling vertical, y encontré un foro que explica el por qué no se puede en esta pantalla. Básicamente, solo se puede horizontal o en diagonal.

### Conversación

Nos empezamos a poner de acuerdo después de probar varias cosas. Decidimos que queremos poder comunicarnos con el arduino, y que a cierto punto responda con el poema que elegimos.

Pensamos que sería bueno aplicar el humor(silly) como concepto al proyecto.

### Roles

**Documentación** Moss
**Investigación** Moss, Miguel, Seba, Angie
**Conceptualización** Miguel
**Programación** Seba, Angie, Miguel

## Materia de clases

### Simulación de arduino

**Como leer un potenciómetro**
Tienen tres patitas, o terminales.

Protoboards tienen un rio. Divide cada hemisferio y no se crea una conexión entre hemisferios. Se conectan los componentes de manera paralela al río.

Para conectar el potenciómetro, se conecta en un hemisferio, y se alinea un cable hacia el otro hemisferio para conectarlo a la pantalla conectada al otro lado.

*Diferencia entre análogo y digital*
En pocas palabras, análogo es fluido, y digital es estático.
