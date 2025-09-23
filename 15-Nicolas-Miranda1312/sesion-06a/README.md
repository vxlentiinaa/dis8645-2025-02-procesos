# sesion-06a

-09-09-2025

Scratch:
- Software de programación basado en bloques.
- Permite aprender y crear proyectos de forma visual.

[scratch](https://scratch.mit.edu)

Pure Data (Pd):
- Programa para la creación y manipulación de audio.
- Desarrollado en C++ por Miller Puckette (quien luego hizo una nueva versión).
- Conceptos clave:
    - dac: convierte señal digital a análoga.
    - Los objetos (cajitas) tienen entradas arriba y salidas abajo.
    - Un archivo ".pd" puede contener un subpatch.
    - El símbolo "~" indica objetos relacionados con audio/salida de sonido.

[puredata](https://puredata.info)

Otros softwares:
- Max/MSP
- TouchDesigner
- Isadora

Conceptos de programación:
- Programación orientada a objetos: trabajar con “entidades” que tienen propiedades y acciones.

Ejemplos de proyectos/artistas:
- Lauren Lee McCarthy → Tools for Improved Social Interacting
- Renata Gaui → Hysterical Wearable

## Sensores y Actuadores

- Sensor: entrada a nuestra "caja negra".
- Actuador: salida.

Observaciones / Ejemplos de sensores:

Ultrasonido:
  - Emite un pulso ultrasónico.
  - Mide el tiempo que demora en devolverse.

Sensor de temperatura y humedad:
  - Detecta condiciones atmosféricas.

Sensor de gas

Potenciómetro (5 patas):
  - Encoder rotatorio.
  - No tiene límite de giros.

Sensores de humedad

Sensor de lluvia:
  - Basado en resistencia (experimental).
  - Considerado un sensor pasivo.
  - Existe otra versión usada para medir nivel de agua.

Joystick

Sensor de luz

Fotodiodo

Sensores de sonido:
  - Incorporan micrófono.

## Encargo

Investigar sensor elegido en clases y buscar tres ideas de cómo utilizarlo.

## Sensor de proximidad HC­-SR04
- Capaz de detectar objetos y calcular la distancia en un rango de 2 a 450 cm.
- Posee dos transductores piezoeléctricos: un emisor y un receptor.

Funcionamiento:
1. El emisor piezoeléctrico emite 8 pulsos de ultrasonido.
2. Al recibir la orden en el pin TRIG, las ondas viajan por el aire.
3. Cuando encuentran un objeto, rebotan y son detectadas por el receptor piezoeléctrico.
4. El pin ECHO se pone en estado ALTO durante un tiempo igual al que tardó la onda en viajar desde que se emitió hasta que fue detectada.

Conexiones:
- VCC -> +5V DC
- TRIG -> Disparo del ultrasonido
- ECHO -> Recepción del ultrasonido
- GND -> 0V

![conexion](./imagenes/conexion.png)

En este link vi como se programa el sensor 

<https://naylampmechatronics.com/blog/10_tutorial-de-arduino-y-sensor-ultrasonico-hc-sr04.html>

### Idea 1

Luces que reaccionan a la distancia
  - Usando el sensor HC-SR04, se mide qué tan cerca está un objeto o persona.
  - Mientras más cerca se encuentre, más luces se encienden o más brillantes se vuelven.

### intento de la Idea 1 

```cpp
const int TRIG_PIN = 9; // Pin TRIG del sensor
const int ECHO_PIN = 8; // Pin ECHO del sensor
long duration;
float distanceCm;

void setup() {
  
  // Configuración del sensor ultrasónico
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
}

void loop() {
  // Enviar pulso de ultrasonido
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Leer la duración del pulso de retorno
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  distanceCm = duration * 0.0343 / 2;

  // Control acumulativo de LEDs
  // Apagar todos primero
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);

  if (distanceCm < 400) {
    digitalWrite(12, HIGH); // LED 12 prende
  }
  if (distanceCm < 200) {
    digitalWrite(11, HIGH); // LED 11 prende además
  }
  if (distanceCm < 100) {
    digitalWrite(10, HIGH); // LED 10 prende además
  }
  }
```

### Idea 2

Pantalla OLED interactiva
  - Con el sensor HC-SR04 se detecta la distancia de la persona u objeto.
  - La pantalla OLED muestra mensajes que cambian según la proximidad.

### intento de la Idea 2

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Configuración de la pantalla OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1  
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


const int TRIG_PIN = 11; // Pin TRIG del sensor
const int ECHO_PIN = 12; // Pin ECHO del sensor
long duration;
float distanceCm;





void setup() {
  // Inicialización de la pantalla OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("Error al iniciar la pantalla OLED"));
    while (true);
  }
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  
  // Configuración del sensor ultrasónico
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);


  // Inicialización de la comunicación serial
  Serial.begin(9600);
}

void loop() {
  // Enviar pulso de ultrasonido
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Leer la duración del pulso de retorno
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  distanceCm = duration * 0.0343 / 2;



 display.clearDisplay(); 
  display.setTextSize(1);
  display.setCursor(0,20);

  // Mostrar mensaje según la distancia
  if (distanceCm < 100) {
    display.println("Hola");
  }
  else if (distanceCm < 200) {
    display.println("Quien anda ahi?");
  }
  else if (distanceCm < 300) {
    display.println("Ah eras tu");
  }
  else if (distanceCm < 400) {
    display.println("Zzz.. nadie");
  }
  else {
    display.println("Oh ya te fuiste :c");
  }


  display.display(); // Actualizar la pantalla
  delay(500); // Esperar 500 ms
  }
```

### Idea 3

Combinación de luces y pantalla OLED
 -  Se combinan las dos ideas anteriores.
 - El sensor HC-SR04 controla tanto la intensidad o cantidad de luces como los mensajes en la pantalla OLED.
 - A medida que la persona se acerca, se activan luces y mensajes simultáneamente, creando una experiencia más inmersiva y divertida.

### intento de la Idea 3

```cpp

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Configuración de la pantalla OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1  
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


const int TRIG_PIN = 11; // Pin TRIG del sensor
const int ECHO_PIN = 12; // Pin ECHO del sensor
long duration;
float distanceCm;


void setup() {
  // Inicialización de la pantalla OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("Error al iniciar la pantalla OLED"));
    while (true);
  }
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  
  // Configuración del sensor ultrasónico
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  

  // Inicialización de la comunicación serial
  Serial.begin(9600);
}

void loop() {
  // Enviar pulso de ultrasonido
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Leer la duración del pulso de retorno
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  distanceCm = duration * 0.0343 / 2;



 display.clearDisplay(); 
  display.setTextSize(1);
  display.setCursor(0,20);

  // Mostrar mensaje según la distancia
  if (distanceCm < 100) {
    display.println("Hola");
  }
  else if (distanceCm < 200) {
    display.println("Quien anda ahi?");
  }
  else if (distanceCm < 300) {
    display.println("Ah eras tu");
  }
  else if (distanceCm < 400) {
    display.println("Zzz.. nadie");
  }
  else {
    display.println("Oh ya te fuiste :c");
  }


 // Control acumulativo de LEDs
  // Apagar todos primero
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);

  if (distanceCm < 400) {
    digitalWrite(12, HIGH); // LED 12 prende
  }
  if (distanceCm < 200) {
    digitalWrite(11, HIGH); // LED 11 prende además
  }
  if (distanceCm < 100) {
    digitalWrite(10, HIGH); // LED 10 prende además
  }

  display.display(); // Actualizar la pantalla
  delay(500); // Esperar 500 ms
  }
 
```
