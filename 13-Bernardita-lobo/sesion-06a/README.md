# Sesión-06a

Martes 09 de septiembre, 2025

## Trabajo en clase

### Cosas que hablamos en la mañana

- [Puredata](https://puredata.info/) PD, Para generar sonidos y programar el estado de los objetos, se utiliza C++.

- Software de creación de sonido y multimedia

- Max 9

- Pure Data: similar a Max 9, creado por [Miller Puckette](https://es.wikipedia.org/wiki/Miller_Puckette) 

- TouchDesigner: desarrollado por Sergio Mora Díaz

- [vvvv](https://vvvv.org/)

- Isadora

### Estilos de escritura en GitHub y Actions

[LaTeX](https://en.wikipedia.org/wiki/LaTeX), creado a partir de Donald E. Knuth, creador de TeX. LaTeX permite programar texto bello y bien estructurado.

[The Art of Computer Programming]https://es.wikipedia.org/wiki/The_Art_of_Computer_Programming)

Es el lenguaje de programación que se utiliza en [Overleaf.](https://es.overleaf.com/)

Referencia académica, Universidad DELF.

[UTF-8](https://es.wikipedia.org/wiki/UTF-8), 8-bit Unicode Transformation Format.

### Código en tejido

Taller [Tejiendo para codificar, codificando para tejer](https://weavingxcoding.studio/#Resources)

[Craftwork](https://www.craftwork.today/work), tecnologías creativas y materiales textiles, explorados a través de contextos históricos y culturales.

Código decolonial de Aranda, director de Media Lab de México

Lenguaje de programación en quechua, Llankana

Gameboy Sewing Machine

[A Handbook for Computational Art and Design](https://drive.google.com/file/d/1nINNHaT2K8J4e0vC1CEPemVNpAJVJPi5/view?usp=drive_link)

### Proyecto-02

Grupos nuevos, más complejidad, más comentarios en el código, subir el código, no solo citar.

Máquina saludadora, si está lejos llama la atención, si estás cerca te saluda. Interactúa.

Maywa Denkintoys

Greeting machine Arduino

Afel

Metáfora de la caja negra: input y output.

Hacia una filosofía de la fotografía, capítulo 3.

Sensor y actuador: el sensor es como los sentidos del Arduino, lo usamos como entrada, lo que hace es el actuador: luz, movimiento, sonido.

Logger App para mostrar los sensores que tiene el teléfono.

Over engineer, una burla a la tecnología, tecnología de sobra.

p5

Data login

#### Ideas Proyecto-02

- Una máquina que de acuerdo a la distancia, hace preguntas íntimas (personales); tú escoges qué tan cercana quieres la interacción.

- O al revés, mientras más te acercas, más sincera se vuelve nuestra máquina.

- Una máquina que necesites estar muy cerca para que te cuente sus secretos.

- Una máquina que reclame cuando la muevan de su espacio, de su eje.

- Una máquina que, cuando es levantada de su espacio, a través de un NFC y un lector de NFC que lo detecta, temporiza una hora y, si no es regresada a su espacio, emite sonido.

- Sensor que si está temblando, encienda todas las luces (me da miedo los temblores).

---

### Referentes 

- [Miller Puckette](https://es.wikipedia.org/wiki/Miller_Puckette)

- [Sergio Mora Diaz](https://www.sergiomoradiaz.com/)

- [Donald Knuth](https://es.wikipedia.org/wiki/Donald_Knuth)

### Palabras importantes

[Over engineer:](https://www.codesimplicity.com/post/what-is-overengineering/) sobreingeniería, cuando tu diseño en realidad hace que las cosas sean más complejas en lugar de simplificarlas, estás haciendo sobreingeniería.Un láser orbital complicaría enormemente la vida de alguien que sólo necesitara destruir algunos hormigueros, mientras que un simple veneno para hormigas simplificaría enormemente su vida al eliminar su problema de hormigas (si funcionara).

---

## Engargo-11: investigar sensores

### Sensor ultrasonico HC-SR04

Utiliza un sonar para determinar la distancia a un objeto. Este sensor mide desde 2 cm hasta 400 cm

El transmisor de ultrasonidos envía un sonido muy agudo (40 kHz), cuando el sonido se encuentra con un objeto, rebota y el receptor lo detecta como eco.

| Especificación               | Valor                                  |
|-------------------------------|----------------------------------------|
| Alimentación                  | +5 V CC                                |
| Corriente en reposo            | <2 mA                                   |
| Corriente de trabajo           | 15 mA                                   |
| Alcance                        | 2 cm – 400 cm (1″ – 13 pies)          |
| Resolución                     | 0,3 cm                                  |
| Ángulo efectivo de detección   | 30° (ángulo del haz <15°)             |
| Entrada disparador             | Pulso TTL de 10 µs                      |
| Salida eco                     | Pulso TTL proporcional a la distancia  |
| Dimensiones                    | 45 × 20 × 15 mm                         |

Para la investigación utilicé esta guía, que incluía códigos para probar el sensor con Arduino Uno.

[Complete Guide for Ultrasonic Sensor HC-SR04 with Arduino](https://randomnerdtutorials.com/complete-guide-for-ultrasonic-sensor-hc-sr04/)

```c
/*
 * created by Rui Santos, https://randomnerdtutorials.com
 * 
 * Complete Guide for Ultrasonic Sensor HC-SR04
 *
    Ultrasonic sensor Pins:
        VCC: +5VDC
        Trig : Trigger (INPUT) - Pin11
        Echo: Echo (OUTPUT) - Pin 12
        GND: GND
 */
 
int trigPin = 11;    // Trigger
int echoPin = 12;    // Echo
long duration, cm, inches;
 
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop() {
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  inches = (duration/2) / 74;   // Divide by 74 or multiply by 0.0135
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(250);
}
```

#### Cotización 

- [afel](https://afel.cl/products/sensor-de-ultrasonico-hc-sr04) $1.500

- [Aliespress](https://www.aliexpress.com/p/tesla-landing/index.html) $1.071

- [MCI electronics](https://mcielectronics.cl/shop/product/sensor-de-proximidad-de-ultrasonido-hc-sr04-23582/) $2.590

También encontré esta casita interactiva en Afel y me encantó! [Kit Casa Inteligente con ESP32 Keyestudio](https://afel.cl/products/kit-casa-inteligente-con-esp32-keyestudio)

#### Ideas 

- Una máquina que de acuerdo a la distancia, hace preguntas íntimas (personales); tú escoges qué tan cercana quieres la interacción.

- Una máquina que necesites estar muy cerca para que te cuente sus secretos.

- Una máquina que, cuando es levantada de su espacio, a través de un NFC y un lector de NFC que lo detecta, temporiza una hora y, si no es regresada a su espacio, emite sonido.
