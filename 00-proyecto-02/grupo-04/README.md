# ⋆⭒˚.⋆ └[∵┌] - Máquina de saludo - Juanito la Jaiba - [┐∵]┘ ⋆.˚⭒⋆

Viernes 17 Octubre, 2025

***

## Grupo-04 "Grupo Juanito" - Integrantes

- [Braulio Figueroa Vega](https://github.com/brauliofigueroa2001) (Código MP3, investigación)
- [Bernardita Lobo Baeza](https://github.com/Bernardita-Jesus) (Modelado carcasa, investigación)
- [José Morales Berríos](https://github.com/jotamorales-romulus) (Código MP3, modelado carcasa)
- [Camila Parada Vasquez](https://github.com/Camila-Parada) (Código servo, investigación)
- [Francisco Stephens González](https://github.com/FranUDP) (Código ultrasónico, Optimización de código, modelado)

***

### Introducción

Este proyecto se centra en desarrollar una "caja negra" que pueda "saludar".
El saludo de define como ["Un acto comunicacional (entre humanos), en el que una persona hace notar a otra su presencia" - Wikipedia](https://es.wikipedia.org/wiki/Saludo).

A partir de esta definición es que como equipo comenzamos a ahondar en el sentido conceptual de lo que es un saludo, ya no como una actividad humana sino como una interacción que se puede emitir con otros “sujetos” u "objetos", como por ejemplo una inteligencia artificial.
Ello a modo de crear una experiencia enfocada en la exploración de la interacción de un “saludo” con un sitio.

─ ¿Podemos saludar a un lugar?

Si, el libre albedrío nos permite hacer lo que queramos.

─ ¿Recibiremos respuesta de ello?

Probablemente no, dado que se tratan de objetos u espacios inanimados, por lo que solo podemos apreciar y contemplar lo que nos ofrecen estos mismos.

Como colectivo se creó una propuesta a partir de la fusión de las tareas efectuadas en la clase "06b", escogiendo la decisión de crear un mecanismo que posea "ojos" y que pueda "mirar" al usuario a través de un sensor de presencia. Al identificar que la persona se encuentra a cierta distancia, una de las partes de la máquina comienza a emitir sonido de forma aleatoria, sin un orden establecido.

¿Por qué hacer que se reproduzca un sonido [aleatorio](https://es.wikipedia.org/wiki/Azar#:~:text=El%20azar%20es%20una%20casualidad,Azar%20en%20matem%C3%A1ticas)?
Pues el hecho que el usuario no poder predecir o saber que “esperar” de esta máquina genera un factor "sorpresa", puesto que depende del artefacto el elegir qué sonidos va a transmitir.

***

#### Presentación textual de la propuesta

Nuestra máquina consiste en un dispositivo funcional que está planeado para ser utilizado por una persona a la vez.
Esta trabaja detectando la presencia del usuario a través de un “radar” compuesto por un [“sensor ultrasónico HC-SR04”]( https://www.alldatasheet.com/html-pdf/1132204/ETC2/HCSR04/110/1/HCSR04.html) y un [“servomotor SG90”](https://arduino.cl/producto/micro-servo-motor-sg90-9g/?srsltid=AfmBOopUK1FSSvEOeee794pcjIBccD8B2MQF36GlEjuMTAzqI4rHkSnN) que se encuentra en constante movimiento, rotando continuamente desde 0 a 180 grados.

Cuando se ingresa al rango de “reconocimiento” (compuesto por la rotación del servomotor más la distancia del ultrasónico) los “ojos” de la máquina se mueven y siguen a la persona a través de un mecanismo que posee otro motor servo.

Cuando el sujeto se acerca a una distancia (15 cm) del dispositivo, la concha que posee un [“Modulo Reproductor MP3 DFPlayer Mini”](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?_pos=1&_psq=mp3&_ss=e&_v=1.0), comienza a emitir sonidos de forma aleatoria hasta que la persona se aleje lo suficiente como para salir del "rango de sonido".

Los ojos no dejan de funcionar en ningún momento, por lo que persiguen al usuario hasta que salga del rango de reconocimiento.

Por el lado conceptual y figurativo, la máquina posee una carcasa compuesta por un "cangrejo" y una "concha marina".

La primera pieza se compone de una imitación de un “cangrejo”, una réplica de una criatura asociada con la costa por su presencia en dicho sector a lo largo de todo Chile. La segunda parte se compone de una “concha de mar”, un objeto común de encontrar en las playas y que posee el mito de permitir escuchar sonidos semejantes al oleaje del mar y viento de las costas (efecto conocido como [Resonancia de las conchas de Gastrópodos](https://es.wikipedia.org/wiki/Resonancia_de_las_conchas_de_Gastr%C3%B3podos)).

***

###

#### Mapa de flujo

``` mermaid
flowchart TD
F(ServoRadar comienza en la posición inicial anguloMin) --> A
A{¿Es la posición actual igual a anguloMax?} --> |No| B(Servo avanza paso grados a la derecha) --> |Termina de moverse| C(ultrasonico mide distancia) --> D(Guarda el valor de medición correspondiente al grado del servo) -->A
A --> |Sí| E(Servo avanza paso grados a la izquierda) --> |Termina de moverse| G(Ultrasonico mide distancia) --> H(Compara medición actual con la anterior correspondiente al mismo angulo) --> I{Son los 2 valores iguales? considerando margenError}
I --> |No| J{¿a detectado ya a un usuario?}
I --> |Sí| Q{¿A detectado ya a un usuario?} --> |Sí| R(Registrar angulo de final de detección e indicar que aún no se detecta a un ususario) --> |Tomar angulo de inicio de deteccion|S(calcular promedio entre angulo inicio y final de detección) -->T(posicionar servo ojos)--> E
C --> K{¿Es la distancia medida inferior o igual a distAudio?} --> |Sí| L(Reproduce uno de los audios del mp3 al azar)
G --> K --> |No| M(No reproducir audio)
L --> N{¿se terminó de reproducir el audio?} -->|Sí| O(desactivar con un delay chao para dar tiempo al usuario de irse) -->F
N --> |No|U(Esperar que termine de reproducirse) -->N
J --> |No| P(Grabar el angulo de inicio de detección e indicar que ha detectado a un usuario) -->E
J --> |Sí|E
Q --> |No|E
```

***

### Desarrollo

Para poder ser más estratégicos en cuanto al aprendizaje y desarrollo es que cada integrante fue aprendiendo sobre cómo hacer funcionar un sensor o actuador. Ello requirió de procesos personales de prueba y error que fueron registrados de forma independiente en las bitácoras desde la clase “07a” hasta la fecha de entrega. Estos fueron agrupados de forma lineal.

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶

#### 1) Ultrasónico HC-SR04

Esta parte del proceso comenzó con el estudio del sensor en cuestión. Este se trata de un circuito que emite ondas "ultrasónicas" y calcula cuánto tiempo pasa antes de que estas regresen a él. Sin embargo, este modelo no es muy preciso y recibe mucho “ruido”, por lo que se aplicó la biblioteca [“Newping”](https://docs.arduino.cc/libraries/newping/) que ayuda a corregir este problema y estabiliza el sensor.

Tras haber probado un ejemplo de código de ultrasónico que comenzó a planificar la construcción de un "radar" montando el "detector" sobre un servomotor para que este pueda estar en una rotación constante entre 0 y 180 grados, y por ende cubrir un mayor rango de distancia en el espacio.

![imagen](./imagenes/dibujo-explicativo.jpg)

![gif](./imagenes/prueba-radar.gif)


Un inconveniente surge, Y es el cómo poder hacer que el ultrasónico pueda detectar a una persona y no a un objeto inerte. Pues la solución fue el poder implementar un sistema que pueda registrar según su ángulo los objetos a distancia, cosa que si algo se aproxima al sensor pueda diferenciar al haber al usuario al existir movimiento. Ante ello se entregó un código de ejemplo de la biblioteca NewPing, lo que tenía y el ejemplo de radar sacado de internet a Gemini 2.5 Pro, además de una explicación detallada del comportamiento que busco obtener del código, para que pueda hacer de guía.

Después de conseguir que el sensor funcionara y mostrara los valores registrados en la terminal, estuvimos es que comenzó a ver el orden y desarrollo del código ".ino" y sus respectivas pestañas ".h" y ".cpp". Ello fue una tarea bastante complicada, dado que ninguno de los integrantes lograba entender como contruir los archivos.

Pese a ello se continuaron revisando los códigos de las otras piezas, fusionando las "líneas" del servomotor para montar el "radar".

```cpp
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
```

El código final .ino del sensor ultrasónico se encuentra a continuación, en conjunto con el código .h y el .cpp

##### Archivo .ino (principal)

```cpp
/*
Grupo-04

Integrantes:

10-brauliofigueroa2001
13-Bernardita-Jesus
17-jotamorales-romulus
20-Camila-Parada
28-FranUDP

Conexiones:

ServoRadar = Pin 9

ServoOjos = Pin 10

SensorUltrasonico | Trig = Pin 12 | Echo = Pin 11

Mp3 = Pin 8

*/

#include "SensorUltrasonico.h"
#include "Rotador.h"
#include "Ojos.h"

Rotador rotador;
SensorUltrasonico ultrasonico;
Ojos ojos;

void setup() {
  Serial.begin(115200);
  ultrasonico.configurar();
  rotador.configurar(&ultrasonico, &ojos); 
  ojos.configurar();
}

void loop() {
  rotador.radar();
}
```

##### Archivo .h

```cpp
#ifndef SENSOR_ULTRASONICO_H
#define SENSOR_ULTRASONICO_H

#include <Arduino.h>
#include <NewPing.h>

class SensorUltrasonico {

public:

  SensorUltrasonico();
  ~SensorUltrasonico();

  void configurar();
  int medirDistanciaCm();

// Variables privadas que solo el sensor necesita saber
private: 
  // Las patitas y la distancia máxima son configuración interna del sensor
  const int patitaTrig = 12;
  const int patitaEcho = 11;
  const int maxDistancia = 500;
  
  // Un puntero a un objeto de la librería NewPing.
  // Usamos un puntero para poder crearlo en el .cpp
  NewPing* sonar;
};
#endif
```

##### Archivo .cpp

```cpp
#include "SensorUltrasonico.h"

SensorUltrasonico::SensorUltrasonico() {}
SensorUltrasonico::~SensorUltrasonico() {}

void SensorUltrasonico::configurar() {
  // Nuevo objeto sensor
  sonar = new NewPing(patitaTrig, patitaEcho, maxDistancia);
}

int SensorUltrasonico::medirDistanciaCm() {
  // Numero de mediciones para promediar
  const int numeroDeLecturas = 3; 
  //
  long total_cm = 0;
  //
  int lecturasValidas = 0;

  for (int i = 0; i < numeroDeLecturas; i++) {
    // Usamos la función simple que sabemos que funciona
    int lecturaActual = sonar->ping_cm();
    
    // Solo sumamos lecturas que tienen sentido (no son 0)
    if (lecturaActual > 0) {
      total_cm += lecturaActual;
      lecturasValidas++;
    }
    
    // Una pausa muy pequeña entre pings es necesaria por física
    delay(25); // 15ms es un valor seguro según la documentación de NewPing
  }
  
  // Si no obtuvimos NINGUNA lectura válida, devolvemos el máximo
  if (lecturasValidas == 0) {
    return maxDistancia;
  }
  
  // Calculamos el promedio de las lecturas válidas
  return total_cm / lecturasValidas;
}

// // Usamos la función de NewPing para obtener la mediana de un número de pings.
//   // Es más rápida y resistente a lecturas anómalas que un promedio simple.
//   // El "50" es el timeout máximo en milisegundos.
//   int distancia = sonar->ping_median(4, 50);
  
//   // Si la distancia es = a 0 no hubo retorno, por lo que se devuelve el valor máximo
//   // también si registra un valor superior al maximo
//   if (distancia == 0 || distancia > maxDistancia) {
//     return maxDistancia;
//   }
  
//   return distancia;
// }
```

Ya para configurar la parte del "rotador" perteneciente al radar, es que fue necesario el configurarlo en nuervos archivos.

##### Archivo .h

```cpp

#ifndef ROTADOR_H
#define ROTADOR_H

#include <Arduino.h>
#include <Servo.h>
#include "SensorUltrasonico.h"
#include "Ojos.h"

class Rotador {

public:
  Rotador();
  ~Rotador();

  void configurar(SensorUltrasonico* s, Ojos* o);

  void radar();

  Servo servo;
  SensorUltrasonico* sensor; 
  Ojos* ojos;

  // Patita que controla el servo
  int patitaServo = 9;
  // Angulo minimo y de inicio del servoRadar
  int anguloMin = 0;
  // ServoRadar comienza en angulo mínimo como posición inicial
  int anguloActual = anguloMin;
  // Angulo máximo de rotación del servoRadar
  int anguloMax = 180;
  // Distancia (grados) que recorre el servoRadar tras cada medición
  int paso = 3;
  // 1 es hacia la derecha, 0 es a la izquierda
  bool direccion = 1;

  
  // Array de mediciones del radar correspondientes a cada angulo
  int distanciasFondo[181];
  // Margen de error en cm
  const int umbralDeteccion = 350; 
  // Si hemos detectado a un usuario
  bool detectandoUsuario = false;
  // Angulo donde se comenzó a registrar una alerta (presencia de usuario)
  int anguloInicioDeteccion = -1;

  // El pin que enviará la señal LOW al mp3
  const int patitaTriggerMp3 = 8; 
  // Distancia en cm para activar el mp3
  const int distanciaActivacionMp3 = 10; 

private:
  // Funcion interna encargada de procesar a que punto posicionar el servoOjos
  void procesarDeteccion(int distanciaActual);
};

#endif

```

##### Archivo .cpp

```cpp

#include "Rotador.h"

Rotador::Rotador() {}
Rotador::~Rotador() {}

void Rotador::configurar(SensorUltrasonico* s, Ojos* o) {
  servo.attach(Rotador::patitaServo);
  sensor = s; // Guardamos el sensor que nos pasaron para usarlo después
  ojos = o; // Guardamos el puntero del servo de los ojos

  pinMode(patitaTriggerMp3, OUTPUT);
  digitalWrite(patitaTriggerMp3, HIGH);

for (int i = 0; i <= 180; i++) {
    distanciasFondo[i] = 400; // Un valor por defecto seguro (lejos)
  }
}



// Funcion principal encargada del barrido del radar y delegar tareas
void Rotador::radar() {
  
    // Obtiene el promedio de las distancias y la guarda
    int distanciaActual = sensor->medirDistanciaCm();

    // Si la medicion actual es igual o inferior a la deistancia de activacio0n del mp3...
    if (distanciaActual <= distanciaActivacionMp3) {
    digitalWrite(patitaTriggerMp3, LOW);
    delay(50);
    digitalWrite(patitaTriggerMp3, HIGH);
    }
    
    // Si vamos a la derecha... 
    if (direccion == 1) {
    // Guardamos la distanciaActual en el slot correspondiente al angulo del servo, en el array
     distanciasFondo[anguloActual] = distanciaActual;
    
    // Imprime el estado actual para debugging
    Serial.print("Angulo: ");
    Serial.print(anguloActual);
    Serial.print(" | Distancia: ");
    Serial.println(distanciaActual);

    // Si vamos a la izquieda...
    } else {
    // Delega el analisis de detección
    procesarDeteccion(distanciaActual);
    }

    // Comprobar si estamos en un extremo, para ir en la otra dirección
    // Si estamos en el angulo maximo (derecha), ir a la izquierda
    if (anguloActual >= anguloMax) {
      direccion = 0; 
    }
    // Si estamos en el anulo minimo (izquierda), cambiar dirección a la derecha
    if (anguloActual <= anguloMin) {
      direccion = 1; 
    }

    // Dependiendo de la dirección aumenta o reduce el angulo del servo
    if (direccion == 1) {
      anguloActual += paso;
    } else {
      anguloActual -= paso;
    }
    servo.write(anguloActual);
  }


// Procesa el/los cono(s) de deteccion, ve el punto medio y reposiciona los ojos
void Rotador::procesarDeteccion(int distanciaActual) {
  // Si la diferencia de las dos mediciones es superior al margen de error deteccion = true
  bool deteccion = (abs(distanciaActual - distanciasFondo[anguloActual]) > umbralDeteccion);

  // If deteccion = true...
  if (deteccion) {
    // If "no estabamos ya siguiendo a usuario" ...
    if (detectandoUsuario == false) {
      // Cambiar el estado de la flag para que luego funcione el bloque siguiente 
      detectandoUsuario = true;
      // Registrar el angulo de inicio de detección
      anguloInicioDeteccion = anguloActual;
      // Debugging
      Serial.print(">>> Comienzo de detección en ángulo: ");
      Serial.println(anguloInicioDeteccion);
    }
  } else { // If deteccion = false, es decir ya no estoy viendo al usuario...
    // If "ya estabamos detectando al usuario"...
    if (detectandoUsuario == true) {
      // Registrar angulo final de detección (el servo va desde 160 a 0, por lo que el ultimo angulo donde estuvo el usuario fue 1 step atrás)
      int anguloFinDeteccion = anguloActual + paso;
      // Calcula el promedio de ambas mediciones para obtener el centro del cono
      int anguloObjetivo = (anguloInicioDeteccion + anguloFinDeteccion) / 2;
      // Debugging
      Serial.print(">>> Fin de detección | Apuntando a: ");
      Serial.println(anguloObjetivo);
      // Envia el valor a la funcion de los ojos
      ojos->apuntar(anguloObjetivo);
      // Resetea la flag para poder detectar a otro usuario
      detectandoUsuario = false;
      // anguloInicioDeteccion = -1;
    }
  }
}
```

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶

#### 2) Servomotor SG90 y movimiento ocular

En un comienzo todo partió con una inspiración: un video mostrando el proceso de fabricación y funcionamiento de unos ojos “animatrónicos” (referencia compartida por [Santiago]( https://github.com/santiagoClifford)).

[![Comprehensive Markdown Crash Course](https://img.youtube.com/vi/Ftt9e8xnKE4/mqdefault.jpg)](https://www.youtube.com/watch?v=Ftt9e8xnKE4)

-> Will Cogley (5 nov 2019). Cómo construir un sencillo mecanismo de ojo animatrónico Arduino impreso en 3D. Youtube. <https://www.youtube.com/watch?v=Ftt9e8xnKE4>

A partir de ello es que los estudios iniciales se centraron en replicar el mecanismo, entendiendo su construcción, las formas modeladas para cada pieza y la aplicación de los “motores servo” para su funcionamiento. Para ello se obtuvo un tutorial en [“Autodesk instructables”]( https://www.instructables.com/Animatronic-Eyes-Double-and-Single-Fully-3D-Printe/) en el que se presenta un proyecto similar.

![imagen](./imagenes/ojitos-proyecto-inspo.jpg)

-> Animatronic Eyes Fotografías, por Morgan Manly, s.f., instructables (<https://www.instructables.com/Animatronic-Eyes-Double-and-Single-Fully-3D-Printe/>). CC BY-NC-SA 4.0

Ante ello se pudo concluir que es necesario 3 servomotores por ojo para abrir y cerrar del parpado, además de un segundo y tercero para mover el ojo en vertical y horizontal. Además, se requiere de una calibración con código para ir ajustando los motores.

Dentro de toda la información recopilada sobre los servomotores es que son actuadores de tipo motor que permiten controlar el posicionamiento físico. Poseen un controlador que se encarga de comparar y ajustar la posición del motor a la indicada, un potenciómetro que funciona como un sensor de retroalimentación que informa la posición actual, engranajes de plástico o metal y un motor de corriente continua. Para poder controlar este tipo de motor es necesario el enviarle una serie de pulsos eléctricos, cuya longitud determina la posición del servomotor.

Acerca del código con el cuál comencé a explorar las funciones del servo es que pillé el ejemplo "sweep" de la web [Arduino.cc](https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep/).

![imagen](./imagenes/servomotor-prueba-sweep.gif)

Dado el nivel de dificultad que requería el montaje (entre 5 a 6 servos) es que decidí simplificar lo más posible y buscar un referente más cercano a lo que quería conseguir (movimiento ocular horizontal). Para poder montar un mecanismo simplificado que solo posea 1 servomotor es que me inspiré en este video.

![imagen](./imagenes/inspiracion-servo-ojos.gif)

-> Dr scott Diabolical - Evil Genius (14 sept 2023). DIY Animatronic Eyes: Test #2. Youtube. <https://www.youtube.com/watch?v=5X0v0MOrQiI>

Tras varias pruebas intentando montar y mejorar las piezas vistas, es que terminé llegando a esta alternativa de construcción, y modificando el código para que quede con otros parámetros.

![imagen](./imagenes/ojitos-finales-movimiento.gif)

```cpp
// Código movimiento servomotor para los ojos. Recuperado de: https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 20; pos <= 130; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 130; pos >= 20; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15 ms for the servo to reach the position
  }
}
```

En cuanto a la configuración de los servomotores de los ojos, el resultado final se encuentra a continuación.

##### Archivo .h

```cpp
#ifndef OJOS_H
#define OJOS_H

#include <Arduino.h>
#include <Servo.h>

class Ojos {

  public:

  Ojos();
  ~Ojos();

  void configurar();

  // Mueve los ojos a un ángulo objetivo específico.
  void apuntar(int anguloObjetivo);

  //variablels y funciones internas
  private:
  
  Servo servoOjos;
  
  // La patita que controla el servo
  const int patitaServoOjos = 10;
};
#endif
```

##### Archivo .cpp

```cpp
#include "Ojos.h"

Ojos::Ojos() {}
Ojos::~Ojos() {}

void Ojos::configurar() {

  // Conecta el servo a esta patita
  servoOjos.attach(patitaServoOjos);
  // Comienza con el servo mirando al centro
  servoOjos.write(90);
}

void Ojos::apuntar(int anguloObjetivo) {
  // Mira al angulo obtenido de la funcion procesarDeteccion()
  servoOjos.write(anguloObjetivo);
}
```

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶

#### 3) Modulo Reproductor MP3 DFPlayer Mini

Cuando comenzó la investigación del módulo dfplayer mini la primera función era poder reproducir los sonidos puestos en la tarjeta SD, esto lo hicimos con el siguiente código que fue sacado de [githubdfrobot](https://github.com/DFRobot/DFRobotDFPlayerMini)

![imagen](./imagenes/conexión-dfplayermini.jpg)

Este código permitía reproducir el número de pistas en específico nombradas según un orden establecido en base a una numeración específica que pedía enumerar las pistas de audio como 0001,0002,0003,0004. Luego de poder establecer una lista de audios, se necesitaba que se reprodujeran de forma aleatoria por lo que se utilizó la función mydfplayer.randomall la cuál permitía correr los audios de forma aleatoria en un loop sin parar. Este era un problema ya que necesitábamos tener un control sobre el cómo se estaban reproduciendo los audios.

Para ello [Matías](https://github.com/misaaaaaa) nos sugirió utilizar un botón el cual nos permitiera establecer una especie de "dado" en el cuál al presionarlo se daba un resultado aleatorio, en este caso la reproducción de un sonido aleatorio.

```cpp
#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

#if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))  // Using a soft serial port
#include <SoftwareSerial.h>
SoftwareSerial softSerial(/*rx =*/4, /*tx =*/5);
#define FPSerial softSerial
#else
#define FPSerial Serial1
#endif

DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

// --- Constantes del Proyecto ---
const int botonPin = 2;
const int totalTracks = 10;                     // Número total de archivos mp3 en la SD

// --- Variables de estado ---
unsigned long ultimoDebounceTiempo = 0; // Para el antirrebote del botón
const unsigned long debounceDelay = 50; // Tiempo de espera del antirrebote (50 ms)

void setup()
{
  FPSerial.begin(9600);
  Serial.begin(115200);

  Serial.println(F("DFPlayer Mini - Reproductor por Botón"));
  Serial.println(F("Inicializando..."));

  if (!myDFPlayer.begin(FPSerial)) {
    Serial.println(F("Error de comunicación con DFPlayer."));
    Serial.println(F("Verifica conexiones y tarjeta SD."));
    while (true);
  }
  Serial.println(F("DFPlayer en línea. Listo para usar."));

  myDFPlayer.volume(15); // Ajusta el volumen (0 a 30)

  randomSeed(analogRead(0));
  pinMode(botonPin, INPUT_PULLUP);
}

void loop() {
  // --- 1. LÓGICA DEL BOTÓN (ÚNICA FORMA DE REPRODUCIR) ---
  // Revisa si el botón se ha presionado y si ha pasado el tiempo de antirrebote
  if (digitalRead(botonPin) == LOW && (millis() - ultimoDebounceTiempo) > debounceDelay) {
    
    // Elige un número al azar y lo reproduce
    int track = random(1, totalTracks + 1);
    Serial.print(F("--> Botón presionado! Reproduciendo pista: "));
    Serial.println(track);
    myDFPlayer.play(track);

    // Actualiza el tiempo del antirrebote para evitar lecturas falsas
    ultimoDebounceTiempo = millis();
  }

  // --- 2. REVISAR MENSAJES DEL DFPLAYER ---
  // Tarea de fondo: revisa si el módulo ha enviado información (ej: "pista terminada")
  if (myDFPlayer.available()) {
    printDetail(myDFPlayer.readType(), myDFPlayer.read());
  }
}


// La función printDetail sigue siendo la misma...
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
    case DFPlayerPlayFinished:
      Serial.print(F("Pista finalizada:"));
      Serial.println(value);
      break;
    case DFPlayerError:
      Serial.print(F("DFPlayerError:"));
      switch (value) {
        case Busy:
          Serial.println(F("Ocupado"));
          break;
        case Sleeping:
          Serial.println(F("Durmiendo"));
          break;
        case SerialWrongStack:
          Serial.println(F("Error de Stack Serial"));
          break;
        case CheckSumNotMatch:
          Serial.println(F("Error de Checksum"));
          break;
        case FileIndexOut:
          Serial.println(F("Índice de archivo fuera de rango"));
          break;
        case FileMismatch:
          Serial.println(F("No se encuentra el archivo"));
          break;
        case Advertise:
          Serial.println(F("En modo Advertise"));
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

Funcionamiento: Se configura la comunicación serial con el DFPlayer y se inicializa el volumen. El botón, conectado al pin 2, activa la reproducción de una pista aleatoria de la tarjeta SD,
se implementa un antirrebote para evitar lecturas falsas del botón, la función "PrintDetail()" muestra en el monitor serial el estado del módulo y errores, ayudando a depurar.

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶

#### Inconvenientes con los componentes

Debido a varios problemas técnicos con el código del proyecto a última hora, decidimos improvisar y usar dos "Arduinos" en lugar de uno. Esto permitió repartir las tareas y evitar los errores de funcionamiento.

Cada Arduino tiene una función. 
El primero actúa como el radar: controla el servo, mide la distancia con el sensor ultrasónico y detecta si algo está demasiado cerca. El segundo es el módulo de sonido: su única tarea es manejar el DFPlayer Mini y reproducir un audio aleatorio cuando recibe una señal.

La comunicación entre ambos se hace con una señal digital simple: un pin del Arduino radar se conecta al pin 2 del Arduino de sonido. Cuando el radar detecta un objeto cercano, envía un pulso eléctrico (low) que el otro Arduino interpreta como la orden para activar el sonido.

Gracias a la idea de [@Fran-udp](https://github.com/FranUDP) el código de cada parte se volvió más simple. Aunque no era lo ideal, fue una manera de lograr que el proyecto funcionara.

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶

#### 4) Modelado 3D, desarrollo de carcasa y ensamblado

Como requisito fundamental para diseñar las carcasas es que hubo que profundizar en el funcionamiento y en los cambios técnicos que surgieron en cuanto al desarrollo del circuito eléctrico y el funcionamiento de cada pieza.

#### A) Carcasa Speaker (speaker, MP3 DFPlayer Mini)

![gif](imagenes/gif.gif)

Al trabajar con el conjunto del módulo mp3 (dfplayer mini y altavoz) se nos ocurrió crear una especie de "parlante" con forma de concha. Ello hace alusión a la idea que tenemos de los "" y los sonidos que se cree escuchar en estas, pero emitiendo sonidos reales de las playas de Chile: ruidos del ambiente, gritos, pájaros y gaviotas. La idea era generar la sensación de estar teletransportado a una playa chilena.

![foto](imagenes/proceso-carcasa-caracola.jpg)

#### B) Carcasa Cangrejo (servo, sensor ultrasónico y arduino)

![gif](imagenes/gif-cangrejo.gif)

Al tener una idea más concreta, decidimos tematizar la "envoltura" de los elementos de la parte principal del proyecto, cubriendo el Arduino, el servomotor y el sensor, dándoles la forma de un cangrejo sobre unas piedras para mantener una coherencia estética y conceptual.

![imagen](./imagenes/boceto-cangrejo-carcasa.jpg)

![imagen](./imagenes/modelado-cangrejo-jota.jpg)

![imagen](./imagenes/proceso-carcasa-cangrejo.jpg)

***

### Proyecto final

![foto](imagenes/juanito-vive.jpg)

![foto](imagenes/cangrejo.jpeg)

[![video-youtube](https://img.youtube.com/vi/x2AwFOhT8Lk/mqdefault.jpg)](https://www.youtube.com/shorts/x2AwFOhT8Lk) 

***

### Reflexiones individuales

#### - Braulio Figueroa:

Creo que la mayor dificultad que enfrentamos en el proyecto fue la comunicación y el entender las distintas capacidades de los demás para poder llegar a ser un grupo que tuviera una mayor cohesión. En diversas ocasiones sentí que nos separábamos mucho como grupo y sentía que nos queríamos decir más cosas como equipo, pero al final no lo hacíamos, no sé si por vergüenza o por incomodidad. No sé si seré la única persona del grupo que se sintió así.

Creo que no me pude terminar de sentir en un ambiente cómodo en el grupo, pero creo que también es porque siento que me cuesta adaptarme en cualquier lugar que esté, entonces no sé si es más algo de las personas con las que trabajo o algo mío más personal. Pienso que debería ser más claro cuando necesito ayuda con algo o saber expresarlo mejor para no sentirme tan encerrado en cómo me siento en cuanto a la frustración que conlleva un proyecto y de esta manera poder trabajar mejor en un futuro, a modo de autocrítica creo que me falta estudiar muchísimo más.

En cuanto al proyecto en sí, creo que me gustaría implementar más cosas para hacerlo más parecido a una especie de juguete que huya de las personas cuando las detecte, estilo cangrejo que camina de lado y que al mismo tiempo pueda tener algún tipo de detección de obstáculos para hacerlo más dinámico e interactivo con un potencial público.

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶
#### - Bernardita Lobo:

Yo creo que lo que más me costó en este primer proyecto fue sentirme preparada para gestionar algo así, ya que varias veces sentí que no sabía lo suficiente para trabajar con programación. 

Se podría decir que “perdí” bastante tiempo repasando conceptos de programación en general para sentirme más al día. Por eso, no pude involucrarme tanto en el código como me habría gustado, participando principalmente en la búsqueda de referencias. 

Además, siento que no tuvimos una comunicación tan buena y no supimos repartir bien el trabajo según nuestras habilidades. Cada integrante fue avanzando a distintos ritmos y en diferentes partes del proyecto, lo que hizo difícil concretar y unir todas las versiones de los códigos al final.

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶
#### - José Morales:

Primero, quiero agradecer el trabajo realizado por el equipo, ya que fue grato colaborar y compartir ideas durante el desarrollo del proyecto. En cuanto a mi participación, reconozco que algunas tareas se me hicieron complejas y más de alguna vez me ganó la ansiedad. Al haber tantas cosas por resolver al mismo tiempo, me sentí un poco abrumado, especialmente al intentar programar el código del audio randomizado. Aunque logré avanzar, se me dificultó lograr que funcionara correctamente junto con el resto de cosas, lo que me llevó a comprender mejor la importancia de la integración y la comunicación entre las distintas partes del proyecto. 

El modelado y prototipado fueron un verdadero desafío, ya que comenzamos a trabajarlos cuando el proyecto ya estaba avanzado. Creo que, si hubiésemos abordado esa etapa desde el inicio, habríamos tenido más oportunidades para hacer pruebas, detectar errores y mejorar el diseño. También creo que podríamos haber explorado un objeto más compacto, algo que integrara varias funciones. 

Finalmente, el trabajo en grupo fue clave para avanzar, pero también hubo momentos en los que se notaron algunas debilidades en la organización y en la gestión del tiempo. Hubo ideas que se estancaron y tiempos muertos que afectaron el ritmo del proyecto. Ha futuro me gustaría que hubiese una planificación clara y una distribución equitativa de tareas.

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶
#### - Camila Parada:

Este encargo fue un nuevo desafío personalmente. Siento que dos de mis dificultades son la comunicación y el querer hacer siempre más, no quedando satisfecha con los resultados obtenidos. Esta sensación y mi compromiso con el grupo y el taller (curso) es lo que me hace moverme para seguir avanzando. 

Siento que fue un poco complejo organizarse como equipo, dado que no había una comunicación muy efectiva, no había un entendimiento mutuo sobre los objetivos de cada uno, y no había una figura que pudiera ayudar a administrar y poner orden. El haber trabajado con herramientas como “Github” o “Discord” no aportaba demasiado a acortar esto, puesto que al tener que trabajar con distintos códigos hizo que existieran más desencuentros.

Por otra parte, mi proceso de trabajo fue a un ritmo más lento y con muchas expectativas. Al final para no estresarme estos últimos días decidí simplificarme y poder hacer todo lo que estuviera en mi poder y conocimientos, por más que me cueste valorarlo y no angustiarme por ello.

No negaré que mi mente me juega en contra, y que las situaciones externas han detonado más la distimia. Pese a ello me interesa poder seguir desarrollando proyectos en conjunto y seguir aprendiendo de sensores u actuadores, además de nuevas tecnologías.

︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶
#### - Francisco Stephens:

Personalmente me enredé mucho con el “OOP”, estuve como dos semanas dando vueltas en círculos intentando comenzar a hacer el código, no fue hasta que @montoyamoraga tomó lo poco que teníamos y nos dio una base clara desde donde comenzar a construir el código, quizás hubiese sido beneficioso tener esas revisiones de código en clase antes. 

También encontré que trabajar en el código con múltiples personas era muy confuso, pues sabiendo lo frágil que es el código, escribirlo teniendo en cuenta que sea “futureproof”, para que no se rompa a cada rato fue un jaleo. Creo que hubiese sido beneficioso haber visto en clase como anticipar estos problemas y programar entre varios. 

Por último, nos pasó que todos avanzábamos a distintos ritmos, lo que ocasionó que terminase escribiendo casi todo el código, pues yo ya había terminado mi parte mientras los otros seguían trabajando en el modelado, investigando referentes y demás, no es que esto me moleste, nomás que me desorienta no estar actualizado sobre qué está pasando con cada uno, para poder anticipar y planificar mejor.

***

### Comentarios finales

Este ejercicio nos dejó replanteando sobre "qué es en realidad un saludo". Si por el hecho de tener a un ser humano como el usuario "iniciador de esta actividad" es que se pueden generar interacciones con objetos o hasta lugares. Es un acto temporal pero que puede persistir en la memoria de quienes, por ejemplo, conocen o se vuelven a encontrar con lugares tales como el mar.

***

## Bibliografía

- <https://www.instructables.com/Animatronic-Eyes-Double-and-Single-Fully-3D-Printe/>
- <https://web.archive.org/web/20240421145837/https://cursos.mcielectronics.cl/2023/06/28/como-utilizar-un-servo-motor-con-arduino/>
- <https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep/>
- <https://www.instructables.com/Animatronic-Face-of-Ed-From-Good-Burger/>
- <https://www.instructables.com/Face-With-Animatronic-Eyes-Motion-Detection-and-Vo/>
- <https://es.wikipedia.org/wiki/Resonancia_de_las_conchas_de_Gastr%C3%B3podos>
- <https://wolles-elektronikkiste.de/en/arduino-controlled-dfplayer-mini>
- <https://www.instructables.com/Controlling-a-Servo-With-an-Ultrasonic-Sensor-Usin/>
- <https://www.youtube.com/watch?v=5X0v0MOrQiI>
- <https://wiki.dfrobot.com/DFPlayer_Mini_SKU_DFR0299>
- <https://felixblume.com/valparaiso/>
- <https://audiomapa.org/>
