# sesion-09b

## Apuntes 

- Braulio y yo logramos randomizar el audio.
- Anteriormente no había conectado bien el circuito del arduino.
- Para el proyecto necesitamos que el sonido se emita cuando una persona este a x distancia del sensor.
- Misaa nos enseño que delay es una mala practica porque bloquea la ejecución y no permite hacer otras tareas mientras espera.
- Chequear [BlinkWithoutDelay](https://docs.arduino.cc/built-in-examples/digital/BlinkWithoutDelay)
- Millis() te da el tiempo en milisegundos desde que encendió Arduino. Con esto se puede medir intervalos sin bloquear el código.
- Establecimos que temática iba a tener el proyecto. Tenemos la base que es unos ojos que te siguen y un parlante que emite un sonido de forma aleatoria cuando detecta que hay una persona cerca. 

### Blink without delay

```cpp

  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

  The circuit:
  - Use the onboard LED.
  - Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA
    and ZERO it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN
    is set to the correct LED pin independent of which board is used.
    If you want to know what pin the on-board LED is connected to on your
    Arduino model, check the Technical Specs of your board at:
    https://www.arduino.cc/en/Main/Products

  created 2005
  by David A. Mellis
  modified 8 Feb 2010
  by Paul Stoffregen
  modified 11 Nov 2013
  by Scott Fitzgerald
  modified 9 Jan 2017
  by Arturo Guadalupi

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/BlinkWithoutDelay
*/

// constants won't change. Used here to set a pin number:
const int ledPin = LED_BUILTIN;  // the number of the LED pin

// Variables will change:
int ledState = LOW;  // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;  // will store last time LED was updated

// constants won't change:
const long interval = 1000;  // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}

```

### Reemplazando el delay

Misaa nos habia recomendado cambiar el delay presente en el codigo: 

```CPP

  if (!myDFPlayer.begin(FPSerial, /*isACK = */true, /*doReset = */true)) {  //Use serial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
```
Para reemplazar el delay(), hay que hacer que el programa mida el tiempo transcurrido usando millis() y ejecute la acción solo cuando haya pasado el intervalo establecido, en lugar de detenerse completamente. Esto permite que Arduino siga ejecutando otras tareas mientras se “espera” el tiempo necesario.

```CPP

 while (!myDFPlayer.begin(FPSerial, true, true)) {
  Serial.println(F("Unable to begin, reintentando..."));
  unsigned long start = millis();
  // Espera 1 segundo sin bloquear otras tareas
  while (millis() - start < 1000) {
```

### Activicacion sonido aleatorio

Para simular el sensor ultrasónico usaremos un botón para probar la lógica de activación del sonido sin necesidad de conectar el sensor ultrasonico. Así podemos asegurarnos de que el Arduino y el DFPlayer funcionen correctamente, detectar la pulsación y reproducir una canción aleatoria, antes de integrar el sensor físico al proyecto. 

Para activar la reproducción, se integró un botón conectado al pin 2 y se aplicó un [debounce](https://docs.arduino.cc/built-in-examples/digital/Debounce) que asegura que cada pulsación genere únicamente un sonido, evitando activaciones múltiples por rebotes. Para la configuración del botón tuve que revisar el ejemplo de Arduino: [Button](https://docs.arduino.cc/built-in-examples/digital/Button). No tenía muy fresco esto, así que lo ocupé para aprender.

```CPP
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

const int botonPin = 2;       // Pin donde está conectado el botón
bool botonPresionado = false; // Variable para debounce

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
  

  Serial.println(F("DFPlayer Mini online."));
  
  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.play(1);  //Play the first mp3
  randomSeed(analogRead(0));  // inicia random usando el valor leído en el pin A0, que cambia cada vez que enciendes Arduino.

  pinMode(botonPin, INPUT_PULLUP); // pin del botón

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

// Pulsación del botón  
//button https://docs.arduino.cc/built-in-examples/digital/Button
//https://docs.arduino.cc/built-in-examples/digital/Debounce

if (digitalRead(botonPin) == LOW && !botonPresionado) {
    botonPresionado = true;

    int totalTracks = 10;                   
    int track = random(1, totalTracks + 1);

    Serial.print(F("▶ Reproduciendo pista aleatoria: "));
    Serial.println(track);

    myDFPlayer.play(track);
    delay(200); // 
}

if (digitalRead(botonPin) == HIGH) {
    botonPresionado = false;
}

        
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
### Ideas Carcasa y proyecto final

- Vincent van Gogh y su oreja
- Un cangrejo y una concha
- 

