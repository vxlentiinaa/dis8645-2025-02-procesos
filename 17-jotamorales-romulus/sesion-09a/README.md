# sesion-09a


## 

### Reproductor mp3 

Una parte del proyecto requiere hacer que el reproudctor mp3 reproduzca audios randomizados

- Grupo 1 nos ayudo con el codigo (poner fuente)
  
```cpp
<@746126402121629817> /***************************************************
DFPlayer - A Mini MP3 Player For Arduino
 <https://www.dfrobot.com/product-1121.html>
 
 ***************************************************
 This example shows the basic function of library for DFPlayer.
 
 Created 2016-12-07
 By [Angelo qiao](Angelo.qiao@dfrobot.com)
 
 GNU Lesser General Public License.
 See <http://www.gnu.org/licenses/> for details.
 All above must be included in any redistribution
 ****************************************************/

/***********Notice and Trouble shooting***************
 1.Connection and Diagram can be found here
 <https://www.dfrobot.com/wiki/index.php/DFPlayer_Mini_SKU:DFR0299#Connection_Diagram>
 2.This code is tested on Arduino Uno, Leonardo, Mega boards.
 ****************************************************/

#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

#if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))   // Using a soft serial port
#include <SoftwareSerial.h>
SoftwareSerial softSerial(/*rx =*/4, /*tx =*/5);
#define FPSerial softSerial
#else
#define FPSerial Serial1
#endif

DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

void setup()
{
#if (defined ESP32)
  FPSerial.begin(9600, SERIAL_8N1, /*rx =*/A3, /*tx =*/A2);
#else
  FPSerial.begin(9600);
#endif

  Serial.begin(115200);

  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
  if (!myDFPlayer.begin(FPSerial, /*isACK = */true, /*doReset = */true)) {  //Use serial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
  Serial.println(F("DFPlayer Mini online."));
  
  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.play(1);  //Play the first mp3
}

void loop()
{
  static unsigned long timer = millis();
  
  if (millis() - timer > 3000) {
    timer = millis();
    myDFPlayer.next();  //Play next mp3 every 3 second.
  }
  
  if (myDFPlayer.available()) {
    printDetail(myDFPlayer.readType(), myDFPlayer.read()); //Print the detail message from DFPlayer to handle different errors and states.
  }
}

void printDetail(uint8_t type, int value){
  switch (type) {
    case TimeOut:
      Serial.println(F("Time Out!"));
      break;
    case WrongStack:
      Serial.println(F("Stack Wrong!"));
      break;
    case DFPlayerCardInserted:
      Serial.println(F("Card Inserted!"));
      break;
    case DFPlayerCardRemoved:
      Serial.println(F("Card Removed!"));
      break;
    case DFPlayerCardOnline:
      Serial.println(F("Card Online!"));
      break;
    case DFPlayerUSBInserted:
      Serial.println("USB Inserted!");
      break;
    case DFPlayerUSBRemoved:
      Serial.println("USB Removed!");
      break;
    case DFPlayerPlayFinished:
      Serial.print(F("Number:"));
      Serial.print(value);
      Serial.println(F(" Play Finished!"));
      break;
    case DFPlayerError:
      Serial.print(F("DFPlayerError:"));
      switch (value) {
        case Busy:
          Serial.println(F("Card not found"));
          break;
        case Sleeping:
          Serial.println(F("Sleeping"));
          break;
        case SerialWrongStack:
          Serial.println(F("Get Wrong Stack"));
          break;
        case CheckSumNotMatch:
          Serial.println(F("Check Sum Not Match"));
          break;
        case FileIndexOut:
          Serial.println(F("File Index Out of Bound"));
          break;
        case FileMismatch:
          Serial.println(F("Cannot Find File"));
          break;
        case Advertise:
          Serial.println(F("In Advertise"));
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
  
}

```

Pillé este [proyecto](http://www.trainelectronics.com/Arduino/MP3Sound/Arduino-basic-player/index.htm), que cumple la función de reproducir sonidos ya sea en orden secuencial o de manera aleatoria al presionar un botón, y además puede mostrar información sobre la reproducción y el estado de la tarjeta en el monitor serial.

  
```cpp
/*
 d. bodnar
 1-12-15
 Program to test audio files - must be in /mp3 directory with 4 digit names ie:  0001.mp3, 0012.mp3 etc
 Plays each if trigger is jumpered or one at a time if a pushbutton is used
 Set to play all Defect Detector files (31 files)
 Trigger and jumper for random
 */

#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#define I2C_ADDR    0x27 // <<----- Add your address here.  Find it from I2C Scanner
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7
const int buttonPin = 3;     // the number of the pushbutton pin
const int buttonPin2 = 4;    // second button pin
LiquidCrystal_I2C	lcd(I2C_ADDR, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, D6_pin, D7_pin);
char buf[12];

int buusyPin = 10;// buusyPin = 10; // sound player busy
int bsy = 0;
int z = 0;

void setup () {
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  Serial.begin (9600);
  // 30 good for unpowered speaker - requires power off to reset volume
  lcd.begin (16, 2); //  <<----- My LCD was 16x2
  lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE); // Switch on the backlight
  lcd.setBacklight(HIGH);
  lcd.home (); // go home

  lcd.setCursor(0, 0);
  lcd.print("Audio File Test");

  mp3_set_serial (Serial);	//set Serial for DFPlayer-mini mp3 module
  // mp3_reset();
  delay (400);
  mp3_set_volume (25);          // 15 is low for unpowered speaker - had to remove reset to get vol to work
  delay (400);
  Serial.println("");

  Serial.println("play MP3 files in sequence with trigger & random option  v3.1b");

  delay(100); // may be needed for initialization of sound
  randomSeed(analogRead(0));
}

void loop () {
  for (int zz = 1; zz <= 11; zz++)//set max to number of mp3's 
  {
    if (digitalRead(buttonPin) == 1) {
    if (digitalRead(buttonPin2) ==1){
    zz=random(1,11);   //set max to number of mp3's 
    }  
      Serial.print(zz);
      Serial.print(" ");
      lcd.setCursor(0, 1);
      lcd.print("File: ");
      lcd.print(zz);
      lcd.print(" ");
      mp3_play(zz);  //degrees
      dlayPrint();
      delay(100);
    }
  }
}

// routine to stay here till busy pin goes low once then goes high after speech item completes
void dlayPrint()
{
  while (digitalRead(buttonPin) == 1) {  //wait for button to be released
    //delay (100);
  }
    
  int bsyflag = 0;
  Serial.println(" ");
  Serial.print("busypin ");
  for ( z = 0; z <= 10000; z++) {
    bsy = digitalRead(buusyPin);
    Serial.print(bsy);
    delay(50);
    if (bsyflag == 1 && bsy == 1) {
      break;
    }
    if (digitalRead(buttonPin) == 1) {
      break;
    }
    if (bsy == 0) {
      bsyflag = 1;
    }
  }
  Serial.println(" ");
  Serial.println("done");
}
```
### TOMANDO Y MEZCLANDO 

Del primer código tomÉ la lógica para generar reproducción aleatoria de los archivos. Se añadió en setup() la instrucción randomSeed(analogRead(0)) para inicializar la semilla de números aleatorios, asegurando que cada vez que se prenda el Arduino, la secuencia de números generados por random() sea distinta y, por lo tanto, los MP3 no se reproduzcan siempre en el mismo orden. 

Además, en loop() se reemplazó la función secuencial myDFPlayer.next() por un bloque que genera un número aleatorio entre 1 y la cantidad total de archivos (random(1, totalTracks + 1)) y reproduce el MP3 correspondiente con myDFPlayer.play(track). Esto hace que cada reproducción sea aleatoria.

```cpp

#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"


#if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))   // Using a soft serial port
#include <SoftwareSerial.h>
SoftwareSerial softSerial(/*rx =*/4, /*tx =*/5);
#define FPSerial softSerial
#else
#define FPSerial Serial1
#endif

DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

void setup()
{
#if (defined ESP32)
  FPSerial.begin(9600, SERIAL_8N1, /*rx =*/A3, /*tx =*/A2);
#else
  FPSerial.begin(9600);
#endif

  Serial.begin(115200);

  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
  if (!myDFPlayer.begin(FPSerial, /*isACK = */true, /*doReset = */true)) {  //Use serial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
  Serial.println(F("DFPlayer Mini online."));
  
  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.play(1);  //Play the first mp3
  randomSeed(analogRead(0));  // inicia random usando el valor leído en el pin A0, que cambia cada vez que enciendes Arduino.

}


void loop() {
    static unsigned long timer = millis();

    if (millis() - timer > 3000) {
        timer = millis();
        int totalTracks = 10;                   // número total de mp3
        int track = random(1, totalTracks + 1); // elige un archivo al azar
        myDFPlayer.play(track);                 // reproduce el archivo random
    }

    if (myDFPlayer.available()) {
        printDetail(myDFPlayer.readType(), myDFPlayer.read());
    }    
}

void printDetail(uint8_t type, int value){
  switch (type) {
    case TimeOut:
      Serial.println(F("Time Out!"));
      break;
    case WrongStack:
      Serial.println(F("Stack Wrong!"));
      break;
    case DFPlayerCardInserted:
      Serial.println(F("Card Inserted!"));
      break;
    case DFPlayerCardRemoved:
      Serial.println(F("Card Removed!"));
      break;
    case DFPlayerCardOnline:
      Serial.println(F("Card Online!"));
      break;
    case DFPlayerUSBInserted:
      Serial.println("USB Inserted!");
      break;
    case DFPlayerUSBRemoved:
      Serial.println("USB Removed!");
      break;
    case DFPlayerPlayFinished:
      Serial.print(F("Number:"));
      Serial.print(value);
      Serial.println(F(" Play Finished!"));
      break;
    case DFPlayerError:
      Serial.print(F("DFPlayerError:"));
      switch (value) {
        case Busy:
          Serial.println(F("Card not found"));
          break;
        case Sleeping:
          Serial.println(F("Sleeping"));
          break;
        case SerialWrongStack:
          Serial.println(F("Get Wrong Stack"));
          break;
        case CheckSumNotMatch:
          Serial.println(F("Check Sum Not Match"));
          break;
        case FileIndexOut:
          Serial.println(F("File Index Out of Bound"));
          break;
        case FileMismatch:
          Serial.println(F("Cannot Find File"));
          break;
        case Advertise:
          Serial.println(F("In Advertise"));
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
  
}

```
