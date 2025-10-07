# Sesión-09a

## Trabajo en clase

### Cosas que hablamos en la mañana

- vimos el proyecto de un grupo de trabajo, era un robot que lebantaba el dedo.

- etica y geomeria, angulos peligrosos.

- ejemplos de clases, es importante separ los datos y parametros del codigo principal, por si hay que cambiar algo no modificar por error el, codigo principal.



hacer un indice para hacer una lista de sonidos randoms para el m

si esta cerca algo del sensor ultrosonico, tira un dado para emitir aleatoriamente un sonido, 

switch case

este ejercicio para entender como funcionan los botones y con esto poder hacer un codigo aleatorio, luego la idea esque pueda ir explicandolo, para entender cada parte.

https://docs.arduino.cc/built-in-examples/digital/Button/


```cpp
/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;  // the number of the pushbutton pin
const int ledPin = 13;    // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}

```

### Aquí agregué mis cometarios para entender el codigo 

creo que logre entender mejor, se que tengo que repasar ;(

``` cpp
/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constante llamada buttonpin, con el valor 2, esta en un pin digital
const int buttonPin = 2;

// constante llamada ledpin, con el valor 13, esta donde el led
const int ledPin = 13;

// varianle buttonstate inicia en 0
int buttonState = 0;

// inicio de la funcion setup, solo lo hace una vez
void setup() {

  // configura el pin ledpin 13, como salida
  pinMode(ledPin, OUTPUT);

  // configura el pin buttonpin como entrada
  pinMode(buttonPin, INPUT);

  // fin del setup
}

// inicio del loop, bucle infinito
void loop() {

  // digitalread, lee el valor del pin, y lo deja en buttonstate
  buttonState = digitalRead(buttonPin);

  // el valor sera alto o bajo
  if (buttonState == HIGH) {

    // envia alto como voltaje, al led encendiendolo
    digitalWrite(ledPin, HIGH);

    // si la condicion es low entra en else
  } else {

    // envia low al pin led y lo apaga
    digitalWrite(ledPin, LOW);
  }
}
```

la idea es hacer un listado de frases, sonidos para poder hacerlo aleatorio con el monitor serial.

igual, yo me pregunto si es necesario que sea aleatorio si de por si tenia un orden desconectado, aunque puede ser un listado desconectado.

piskel

### Referentes

-

-

### Palabras impoertantes

---

## Encargo

###
