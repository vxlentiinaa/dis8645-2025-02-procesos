# sesion-03b

## Finalmente pude entender de que trata el encargo 	☆(>ᴗ•)

---

Ok, poniendo los pies sobre el suelo. La idea es que una pequeña pantalla logre transmitir un poema.

en mi busqueda de codigos que puedan ayudarme, encontre algunos foros.

(https://arduino.stackexchange.com/questions/71121/how-to-get-text-to-flash-on-ssd1306-i2c-screen)

```cpp
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


void setup() {
 Serial.begin(9600);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();
  delay(2000); // Pause for 2 seconds

  // Clear the buffer
  display.clearDisplay();

  // Show the display buffer on the screen. You MUST call display() after
  // drawing commands to make them visible on screen!
  display.display();
  delay(2000);


  display.setTextSize(4);             // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);

}

void loop() {
 testdrawstyles1();
 testdrawstyles2();
}


void testdrawstyles1(void) 
{
  display.clearDisplay();
  display.setCursor(0,0); 
  display.print(F("test1"));
  display.display();
  delay(500);
}

void testdrawstyles2(void) 
{
  display.clearDisplay();
  display.setCursor(0,0); 
  display.print(F("test2"));
  display.display();
  delay(500);
}
```
obviamente presenta un error que despues es corregido por otro usuario. el problema de este, ademas de que son textos muy pequeños. 

*es la cantidad de lineas de codigo para hacer un poema entero*

En mi caso logre ampliar el codigo uno más para mostrar otra frase

---

![imagen del ejercicio]()
//despues debo subir las imagenes a la carpeta

Un poco filosofico.

Como tal si funciona y lo muestra, pero viendo que el espacio es limitado es mejor no arriesgarse por esta opcion


---

## Segundo intento

Video de youtube con codigo incluido ¿que puede salir mal?

(https://www.youtube.com/watch?v=EFmrIceBkAs)

```cpp
//With Scroll
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.begin();
  // Turn on the backlight
  lcd.backlight();
    lcd.setCursor(0,1);
  lcd.print("Subscribe now !!");
}

void loop() {
  // Scroll text left
  scrollText("Electronics with Adwait ", 500);

}

void scrollText(String message, int delayTime) {
  int messageLength = message.length();
  for (int position = 0; position < messageLength; position++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(message.substring(position, position + 16));
      lcd.setCursor(0,1);
  lcd.print("Subscribe now !!");
    delay(delayTime);
  }

  // Pause at the end of the message before scrolling back
  delay(2000);

  for (int position = 0; position < 16; position++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(message.substring(messageLength - 16 + position, messageLength) + message.substring(0, position));
      lcd.setCursor(0,1);
  lcd.print("Subscribe now !!");
    delay(delayTime);
  }

  // Pause at the beginning of the message before scrolling again
  delay(500);
}




//Without Scroll
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.begin();
  // Turn on the backlight
  lcd.backlight();
  // Print a message to the LCD
  lcd.setCursor(0, 0); // Set cursor to column 0, row 0
  lcd.print("Electronics with");
  lcd.setCursor(5, 1); // Set cursor to column 0, row 1
  lcd.print("Adwait");
}


void loop() {
  // Nothing needed here for this example
}
```
Jaja

![imagen del error garrafal]()

Tal vez no fue algo bueno, pero fallar es humano.

Pero entre todo eso, descubri que hay una manera de hacer scroll con estos 2 comandos que dejare por aqui

- autoscroll(): para hacer autoscroll al texto
- noAutoscroll(): para detenerlo

Actualizacion: estos errores pueden deberse (ya que estuve leyendo la pagina web que lo explica) a que la pantalla no es compatible,
ya que se utiliza otro modelo de pantalla

(https://docs.arduino.cc/learn/electronics/lcd-displays/)

---

## La tercera es la vencida ⊂(･ω･*⊂)

(https://forum.arduino.cc/t/scrolling-a-oled-down/1403417/8)

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
      display.setCursor(0, SCREEN_HEIGHT - i); // scroll DOWN
    display.println(F("Que el verso sea como una llave"

     "que abra mil puertas"

      "Una hoja cae;" 

      "algo pasa volando;" 

      "cuanto miren los ojos creado sea,"
      
      "y el alma del oyente quede temblando."));
  
    display.display();
    display.clearDisplay();
  }
}
```

Modifique el codigo para que solo vaya para abajo y le cambie las frases.

Y claro, funciona pero...podria ser mucho mejor.
Lo llevare a la clase por si la opcion de usar el codigo que dio el profe no funciona o no convence


![imagen de intento]()


