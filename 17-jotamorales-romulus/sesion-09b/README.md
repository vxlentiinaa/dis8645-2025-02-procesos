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


### Ideas Carcasa y proyecto final

- Vincent van Gogh y su oreja
- Un cangrejo que 

