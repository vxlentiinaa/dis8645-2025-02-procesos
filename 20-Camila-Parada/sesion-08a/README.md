# ⋆₊˚⊹♡ Clase 08a - Avances de hormiga ♡⊹˚₊⋆

Martes 30 Septiembre 2025

***

## Observaciones

Esta clase fue más libre. Tanto así que me incomodo un poco. Por lo que tengo entendido la idea es ir trabajando con código e ir aprendiendo a como usar cada parte de nuestro proyecto (Sensor ultrasónico, servomotores, reproductor mp3, entre otros) a la par que se va realizando códigos para ello.
En mi caso en particular me centré en comprender el funcionamiento del [servomotor sg90](https://arduino.cl/producto/micro-servo-motor-sg90-9g/?srsltid=AfmBOopUK1FSSvEOeee794pcjIBccD8B2MQF36GlEjuMTAzqI4rHkSnN).

***

## Aprendiendo más sobre el "Servomotor S90"

Los servos son actuadores de tipo motor que permiten controlar el posicionamiento físico de manera precisa al moverse según las indicaciones.
Las partes de las que se componen suelen poseer una unidad de control que cuenta con un circuito integrado (controlador), un motor de corriente continua, engranajes (plásticos o metálicos), un potenciómetro además de contener piezas que ayudan a transmitir el movimiento (servo horns o cuernos).
El controlador se encarga de comparar y ajustar la posición del motor a la indicada, mientras que el potenciómetro funciona como un sensor de retroalimentación que informa la posición actual.
Para poder controlar este tipo de motor es necesario el enviarle una serie de pulsos eléctricos (descargas de alto voltaje de pulso rápido y corta duración), cuya longitud determina la posición del servomotor. 

**¡¡¡Vale aclarar existe un estándar para poder relacionar de forma exacta entre los pulsos y la posición del motor!!!**

Toda esta teoría sobre los servos fue adquirida gracias a [MCI Electronics](https://cursos.mcielectronics.cl/2023/06/28/como-utilizar-un-servo-motor-con-arduino). Al intentar entrar nuevamente al enlace, me dí cuenta que la página se calló, por lo que decidí buscar dicho link en la [Wayback Machine](https://web.archive.org/web/20240421145837/https://cursos.mcielectronics.cl/2023/06/28/como-utilizar-un-servo-motor-con-arduino/).

![imagen](./imagenes/servomotor-partes.png)

-> Recuperado de: https://naylampmechatronics.com/blog/33_tutorial-uso-de-servomotores-con-arduino.html

Puesto que soy de ir a la práctica y luego al estudio es que estuve averiguando a través de videos de youtube para saber la implementación del código. Estuve viendo varios tutoriales explicativos (["Cómo Usar SERVOMOTOR Arduino" - Johann Perez E](https://youtu.be/GUhPrO1BEJ0?si=34x7leOxCQy0DmKY), ["Servo SG90 with Arduino UNO" - RoboTantra](https://youtu.be/5bEHd8h_p-k?si=yi9lFM3OvyYMu7ic), ["Como probar si funciona un servomotor, código y conexión con arduino" - Ivan Espinoza](https://youtu.be/X-xXYQfeaMo?si=8sMIqRgPhZVGC06c)), de los cuales pude identificar que algunos utilizaban los pines análogos y otros los pines digitales (de los cuales sólo 1 utilizaban los pwm).

Al ver el último video tutorial pude hacer funcionar el servomotor son mayor dilemas, puesto que en los anteriores fue más complicado el definir las ubicaciones del motor o tuve problemas con la corriente.

https://github.com/user-attachments/assets/5c587cdb-5530-41b3-85f5-973918128bd9

-> Recuperado de: https://github.com/Camila-Parada/dis8645-2025-02-procesos/blob/main/20-Camila-Parada/sesion-08a/video/IMG_0662.mp4

Ante ello, me pregunté porque según la persona y su proyecto se utiliza un distinto tipo de pin de entrada del arduino.

Al indagar sobre el tipo de salidas de los pines de arduino, estas se pueden clasificar entre análogos y digitales.

### Arduino: pines Digitales y Análogicos

Los [pines digitales](https://controlautomaticoeducacion.com/sistemas-embebidos/arduino/entradas-digitales/) (enumerados desde el 0 al 13, siendo un total de 14) permiten leer valores binario (0 o 1, true o false, 0V o 5V). Cuando al entrada hace una "lectura" del mundo real a través de un sensor, lo hace mediante un umbral donde el valor promedio es de 2,5V. Ante ello, todos los valores que sean mayores que lo superen serán denóminados como "HIGH", y su contraparte aquellos valores menores se nombran como "LOW". O se está "encendido" o "apagado". Para aquellos sensores que requieren más voltaje del que permite arduino (5V) hay que diseñar un "circuito externo" que ayude a controlar la tensión del voltaje inicial. El modo de obtener información por parte de los sensores es utilizando el comando "digitalRead", mientras que para mostrarlo en el monitor serial se utiliza "digitalWrite"

En cuanto a los [pines análogos](https://cursos.mcielectronics.cl/2022/08/27/entradas-analogicas-en-arduino/) (enumerados desde el A0 al A5, siendo un total de 6), estos son un tipo de entrada que puede emitir y recibir una señal que va en un intervalo de voltaje, en este caso pudiendo abarcar desde 0V a 5V incluyendo valores con números decimales. Vale mencionar que estos son escasos dentro del arduino, puesto que son más caros que una entrada digital. La forma en la que funcionan estas entradas es "proporcionando una medición codificada en forma de un valor digital en forma de bits (unidad minima de información codificado en valor binario, o 0 o 1)", proceso que resulta más lento. Para poder realizar una lectura del sensor se utilia "analogRead", un comando que va a arrojar un valor devuelta que será codificado como un número entre 0 y 1023.

Tras esta información probé un código que viene como ejemplo en el arduino, denominado "sweep".

``` cpp
/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}

```

Dicha pieza de código me ayudó a entender más el cómo trabajar utilizando los pines digitales al ponerlos en práctica

***

## Proyectos de referencia

https://github.com/ManlyMorgan/Animatronic-Eye/blob/main/03_calibration/calibration/calibration.ino

https://www.instructables.com/Animatronic-Eyes-Double-and-Single-Fully-3D-Printe/

- [x] Aprender a usar el servo
- [ ] https://github.com/octo-org/octo-repo/issues/740
- [ ] Add delight to the experience when all tasks are complete :tada:

***

### Posdata

Hoy estoy cansadita, muchos días quedándome hasta tarde en la u por gusto.

Estoy intentando esforzarme lo más que puedo... me da miedo que mi mente no lo soporte.
Se que nadie me fuerza. Mis ansias de ser más.

***

°˖✧◝(⁰ ^ ⁰)◜✧˖°
