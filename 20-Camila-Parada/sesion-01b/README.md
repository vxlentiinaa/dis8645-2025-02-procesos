# ⋆₊˚⊹♡ Clase 01b - Introducción a github, discord, arduino IDE ♡⊹˚₊⋆

Viernes 8 Agosto 2025

***

## Observaciones

Tuve inconvenientes para llegar a la hora, dado que se les ocurrió romper una calle por la cual transitan las micros que me acercan al metro. Terminé pidiendo un auto por uber para llegar al metro más cercano e ir corriendo a la sala.

***

### Apuntes escritos de la grabación

![imagen](./archivos/.)

▼ Descripción de la imagen. Obtenido de: cita

***

### ¿Qué sucedió durante la clase?

Dicho día me emocioné bastante, dado que pude recuperar un archivo de arduino que creía perdido. Lo pude abrir y quise revisar el cómo estaba construido, a la par que fui contandole a mi compañero de puesto el cómo funcionan unas secciones de código. Ante ello me distraje de la clase y lo que estaban realizando, por lo que decidí replicar proyectos pequeños que mezclaran circuitos con código y arduino.

Ante ello conseguí un [proyecto](https://projecthub.arduino.cc/stannano/led-wave-27b109) para poder crear una corrida de leds que se fueran activando de forma secuencial (primero 1, luego otro, y así). 

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/6dc013c1-1947-4134-bf82-2bfce2f279fd" />

▼ Página web del proyecto. Obtenido de: recurso propio.

En dicho lugar me dispuse a replicar el circuito, pero con menos leds (3 en vez de 5). Los colores que elegí fueron rojo, verde y azul. Tras probar la iluminación de cada uno terminé cambiando el color del led verde por uno blanco.

Tras ello me dispuse a ver el [código de la página](./codigo-arduino/led_wave.txt), copiandolo y analizando sus partes.

```cpp
int ledCount = 5;
int leds[] = {13, 12, 11, 10, 9};
int currentState[]   = {HIGH, LOW, LOW, LOW, LOW};
int currentHighLed = 0;

void setup() {
for   (int i = 0; i < ledCount; i++) {
pinMode(leds[i], OUTPUT);
}
}

void   loop() {

for (int i = 0; i < ledCount; i++) {
digitalWrite(leds[i], currentState[i]);
}
currentState[currentHighLed]   = LOW;
currentHighLed++;
if (currentHighLed >= 5) {
currentHighLed = 0;
}
currentState[currentHighLed]   = HIGH;
delay(500);
}
```




estudiar el código que tenía, analizarlo para poder entenderlo y descubrir qué fue lo que programé, el cómo lo hice y qué significa cada línea.

Quise probar si funcionaba armando un pequeño circuito con una protoboard, un [display de 28 x 64 px](https://mcielectronics.cl/shop/product/display-oled-de-128-x-64-pixeles-controlable-por-i2c-29546/?gad_source=1&gad_campaignid=21444224314&gbraid=0AAAAADijL1UGyZHAfOpvQLxXraoiFzK2N&gclid=Cj0KCQjwzOvEBhDVARIsADHfJJQjui9BFsT1zdMtYKYmrbFk69Fsc2wQs-_fx9d2JVgVvC24lY_Z6RkaAsqXEALw_wcB) y cables dupond.

Al parecer alguna de las piezas estaban dañadas (conclusión), por lo que terminé usando un simulador online: [WOKWI](https://wokwi.com/projects/439087666921849857)

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/6d35679b-ef6e-46f5-8eb2-d59dd2ba400f" />


▼ Captura de WOKWI con el código y circuito simulado. Obtenido de: recurso propio.

***

### Tarea 02: ¿Qué puedo hacer con un Arduino y un computador?

Aún no hay apuntes

***

### Posdata

Espacio para ideas y pensamientos varios ૮₍ ´ ꒳ `₎ა

***

°˖✧◝(⁰▿⁰)◜✧˖°
