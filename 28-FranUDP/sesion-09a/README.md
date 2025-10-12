# sesion-09a

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### ${\color{cyan}Los\ servos\ de\ la\ Cami}$

Al iniciar la clase [@Camila-Parada](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/20-Camila-Parada/sesion-09a) me mostró sus avances en el código del movimiento del servo del radar:

````ino
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
````

Lo primero que noté al ver el código era que no tenía variables que controlaran el comportamiento del servo.

Escribí las siguientes variables y las envié a nuestro grupo en discord como feedback, para que alterara el código para que las utilizara:

````ino
// --- CONFIGURATION CONSTANTS FOR THE RADAR ---
const int radarServoPin = 9;  // el pin del servoRadar
const int anguloMin = 0;       // limite izquierdo del servo
const int anguloMax = 180;      // limite derecho del servo
const int servoStep = 1; // cuantos grados por paso
const int servoTime = 15; // milisegundos que espera entre cada paso (millis)

// --- HARDWARE OBJECT ---
Servo radarServo; // Crear objeto

// --- STATE VARIABLES (memoria) ---
int anguloRadarActual = anguloMin; // comienza al angulo mínimo
bool direccionRadar = 1;            // 1 es hacia la derecha, 0 es a la izquierda
unsigned long lastServoMoveTime = 0; // cuando movimos el servo por ultima vez
````

Tras eso, [@Camila-Parada](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/20-Camila-Parada/sesion-09a) me dijo que estaba medio perdida con lo que le pedí y que iba a probar hacer que el servo funcionara en conjunto con el sensor ultrasónico en otro archivo.

Comencé a editar el código `Sweep`, cuando llegó [@matbutom](https://github.com/matbutom/), le mostré el código de la [sesión 08a](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/28-FranUDP/sesion-08a) y le comenté mi problema, el enredo que tenía en el cerebro intentando pre-ver como organizar el código antes de escribirlo para que los componentes que trabajan en conjunto operen de forma correcta y coordinada. Me dijo que no me preocupara y que nomás lo escribiera todo en un solo archivo de forma que funcionara y que después ellos se iban a encargar de hacerlo modular.

Abrí un nuevo archivo .ino, pegué las variables y comencé a escribir las primeras lineas, cuando llegó [@montoyamoraga](https://github.com/montoyamoraga), nos pidió que le mandaramos nuestro código, a lo que le enviamos el código `Sweep` y las nuevas variables, con @[jotamorales-romulus](https://github.com/jotamorales-romulus/dis8645-2025-02-procesos/tree/main/17-jotamorales-romulus/sesion-09a) estubimos viendo, con asombro, cómo el profe con una rapidez y facilidad impensable tomaba nuestro enrredo y lo convertía en algo no solo comprensible, pero funcional, después de que el profe subiera el código nuevo a [github](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/00-docentes/sesion-09a/grupo-04) me dispuse a estudiarlo, para luego continuar trabajando sobre él.

Le di el código nuevo a Gemini 2.5 pro, le pedí que comparara con los intentos anteriores y que ayudara en continuar desarrollando el código, estaba escribiendo el prompt detallando el comportamiento de la lógica de detección (ultrasonico + sensor) cuando me di cuenta que yo mismo me estaba enredando al explicar detalladamente su comportamiento.

Durante el resto de la semana estube poniendome al día con las bitácoras, estando el Martes en el LID, el Miércoles no pude estar porque era el cumpleaños de mi Mamá y el Jueves me quedé en mi casa (no tengo clase), porque al ir y volver pierdo 1Hr que se podría haber usado para trabajar.