# Proyecto 02

## Grupo-05 "Waos" : Integrantes

**Morgan Aravena Arze** // Investigación, creacion del pseudocodigo, organización de código y pseudocódigo a lo largo de todo el proyecto, armado y prototipado de la pieza final. 
**Aileen Guiselle D'Espessailles Rojas** // Investigación, incorporación del sensor ultrasónico, incorporación pantalla, modelado 3d de carcasa, armado y prototipado de la pieza final. 
**Carla Andrea del Carmen Pino Barrios** // Investigación, incorporación del sensor ultrasónico, incorporación, pantalla, creación de imágenes para la pantalla, armado y prototipado de la pieza final.
**Sebastián Alejandro Sáez Olivares**  // Investigación, incorporación del sensor temperatura, incorporación pantalla y servo motor, implementación del texto en pantalla, armado y prototipado de la pieza final.

## Presentación textual

### Introducción

El proyecto, de manera general, consiste en hacer una máquina saludadora.

Para la ideación del proyecto usamos la propuesta de SebastianSaez1003, que quería usar un servomotor desde el semestre pasado.

Nuestro proyecto se centra en desarrollar un robot que te salude dependiendo de la temperatura.

El saludo se define como "Un acto comunicacional (entre humanos), en el que una persona hace notar a otra su presencia" - Wikipedia.

En nuestro caso, los sensores serían un sensor de temperatura, humedad y presión y un sensor ultrasónico, y los actuadores, dos servomotores y una pantalla.

### Friolin

Friolin, nuestro robot friolento, funciona con un sensor ultrasónico HC-SR04, que usaremos para detectar si hay o no hay alguien frente al robot; un sensor DHT11, que es de temperatura, humedad y presión; en nuestro caso solo utilizaremos la función de temperatura; una pantalla OLED SSD1306, para mostrar una retroalimentación visual con características faciales; y un servomotor, para que cometa el acto de saludar con el brazo.
**paso a paso del proyecto**
1. Máquina inicia en estado neutro
2. Si no detecta a nadie se mantiene en este estado, en donde ambas manos estarán en suspensión y en la pantalla no se mostrará nada
3. Si detecta a una persona, se esperan 3 segundos para actuar según la temperatura medida en el ambiente
4. Si la temperatura es menor o igual a (15) grados celsius, el servomotor no actuará y mostrará en display un mensaje del porqué no quiere saludar, además de una expresión facial importada a través del Arduino que se puede observar en el display
5. Si la temperatura es mayor a (15) grados celsius, el servomotor actuará para dar el saludo (donde su "brazo" se moverá de lado a lado entre los grados 135 y 45 para simular un saludo de mano como lo realizaría un humano) y se mostrará en display un mensaje de texto para saludar, junto a una expresión facial.
6. El ciclo del saludo se repetirá 3 veces y el mensaje durará 15 segundos en la pantalla
7. La persona al retirarse hará que la máquina vuelva a su estado neutro.
Mapa de flujo
![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/mapa%20de%20flujo.png)

### Desarrollo
Para poder programar a friolin de manera más fácil partimos con el desarrollo del pseudocódigo donde se separaron las funciones de cada sensor y actuador en archivos. H y .cpp para que el archivo .ino quedará todo ordenado, se partió con la ideación de los parámetros de cada sensor, para poder comenzar con la investigación exacta de que queríamos hacer.
En este punto del pseudocódigo también se definieron las clases, donde, con la ayuda de Aarón Moraga pudimos definir cada una de las acciones que queríamos que se desarrollaran. (Las clases se hicieron en el archivo .cpp y los parámetros en .h)

Luego de ver todos los parámetros nos separamos por investigación de sensor/actuador y por la persona que uniría todo en el código madre.

### Avances de pseudocódigo

#### Pseudocódigo V0

En esta versión del pseudocodigo se hizo la separación de tabs dentro del archivo, por el momento solo con archinos .ino

![carpeta pseudocodigo](imagenes/pseudocodigoV0.png)

#### Pseudocódigo V0_1_4

Esta es la versión final del pseudocódigo, hay muchos errores y con la ayuda de Aaron Montoya Moraga empezamos a ordenar y resumir los archivos  llegando a la primera versión de codigoRobotFriolento.INO

En esta versión es cuando ya incorporamos todos los actuadores y sensores, cada una en .h, donde se crean clases como, “configurar”, “reconocer” y “leer”, y .cpp donde, se utilizan estas clases para designar el actuar de cada sensor y actuador. 
foto????

#### Código V_0_2_2 sensor temperatura
Se agregó el sensor de temperatura como .cpp y .h, que mostraba la temperatura actual en serial monitor de forma exitosa. 
```cpp
// incluir .h
#include "SensorTemp.h"


// una clase que viene desde la libreria del sensor de temp
// donde se especifica que el pin de comunicacion es el 5
// se descarta el pin 2 porque el sensorUltra los ocupará
DHT11 dht11(5);


SensorTemp::SensorTemp() {
}


void SensorTemp::configurar() {
  //Abrir la comunicación serial
  Serial.begin(9600);
}


// Lo que se hace para leer la Temp.
// Según el código de ejemplo.
// https://github.com/dhrubasaha08/DHT11/blob/main/examples/ReadTemperature/ReadTemperature.ino#L18
void SensorTemp::leerTemp() {
  // El int de "temperatura" va a ser equivalente
  // a la temperatura leída por el sensor DHT11.
  // Se corrige la asignación a la variable de instancia:
  temperatura = dht11.readTemperature();
 
  // Cuando la temperatura no presente algún error.
  if (temperatura != DHT11::ERROR_CHECKSUM && temperatura != DHT11::ERROR_TIMEOUT) {
    // Se demostrará la temperatura actual en el monitor serial.
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" °C");
    // Cada 2 segundos.
    //delay(2000);
   
    // Si es que esto no se cumple.
  } else {
    // Muestra el error en el monitor serial.
    Serial.println(DHT11::getErrorString(temperatura));
    // Opcional: Asignar un valor por defecto si hay error para no detener el código.
    // temperatura = 0;
  }
}

```
#### Código V_0_2_3 sensor ultrasónico
Se agregó el sensor de ultrasónico como .cpp y .h, que determina si había una persona cerca o no en serial monitor de forma exitosa. 
```cpp
// incluir .h
#include "SensorUltra.h"


SensorUltra::SensorUltra() {
}


void SensorUltra::configurar() {
  // Conectar las patitas.
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}


void SensorUltra::reconocerDistancia() {
  // Configuración reconocimiento distancia
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);


  // Medir duración del eco.
  duracion = pulseIn(echoPin, HIGH);


  // Calcular distancia en cm.
  distancia = duracion / 58;


  // Determinar si hay una persona (ejemplo: a menos de 30 cm)
  persona = (distancia < 30);
}


void SensorUltra::leerDistancia() {
  // Imprimir en el monitor serial la distancia detectada en cm.
 if (persona) {
    Serial.println("la persona esta a: ");
    Serial.print(distancia);
    Serial.println(" cm");
  } else {
    Serial.println("No hay persona.");
  }
}

```
#### Código V_0_3_1 servo motor
Se agregó el servo motor como .cpp y .h, de forma exitosa.

```cpp
// biblioteca para funcionamiento del servo
#include "ActuadorServo.h"

ActuadorServo::ActuadorServo() {
}

void ActuadorServo::configurar() {
  // configurar en que pin conectar el servo
  actBrazo.attach(9);
}

// escribir el movimiento que queremos realizar
void ActuadorServo::moverBrazo() {
    // se repetira esto 3 veces
    for (cuantosSaludos = 0; cuantosSaludos < 3; cuantosSaludos++){
    // primero hacia la derecha
    actBrazo.write(saludoDer);
    delay(1000);
    // despues a la izquierda
    actBrazo.write(saludoIzq);
    delay(1000);
  }
  // vuelve a posicion inicial
  actBrazo.write(saludoNeu);
}
```
#### Código V_0_2_5
La pantalla fue el último actuador en ser incorporado, la cual era …. , pero al momento de incorporarla hubo problemas con el display, por lo que se decidió usar la pantalla … 
```cpp

#include <Wire.h>
#include <U8g2lib.h>
#include "Pantalla.h"


// Constructor para pantalla SH1106 128x64 I2C
U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);


void Pantalla::configurar () {
  display.begin();
  display.clearBuffer();
  Serial.begin(115200);
};


void Pantalla::mostrar (){
  // Fuente monoespaciada en negrita
 display.setFont(u8g2_font_9x15B_tr); // similar a FreeMonoBold12pt7b


  // Posición del texto
  display.drawStr(0, 30, "Probando algo ");
  display.drawStr(0, 45, "Largo!");
  // Muestra en pantalla


  display.sendBuffer();
 
};
```
#### Codigo V_0_4_7
Después de variados intentos, se llegó a un resultado que sí llegó a compilar correctamente, con ambas caras que teníamos en aquel momento. El problema es que el sensor ultrasónico dejó de funcionar y detectar la distancia. Por lo tanto, con la ayuda del equipo, se utilizó el código ya hecho y se ordenó de mejor manera, para luego hacer otra versión donde tanto la pantalla como el sensor ultrasónico podían funcionar a la vez.
```cpp

```
![carpeta pseudocodigo](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/CARA%20FRIO.jpeg)
![carpeta pseudocodigo](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/CARA%20HAPPY.jpeg)
![carpeta pseudocódigo](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/CARA%20SUE%C3%91O.jpeg)


#### Carcasa e imágenes

(antes de eso lo habíamos visto como un robot amigable, similar a nuestro moodboard, después de varios bocetos se dio la idea de que sea friolin)
La idea principal de la carcasa es que contenga y exponga todos los componentes de manera eficiente, también su forma de hombre de nieve hace alusión de forma irónica a su miedo al frío. Además, su forma geométrica se eligió para ser similar al pixel art de las imágenes. También se realizaron piezas extras como sus orejeras y brazo para personificar y dar mayor personalidad al proyecto.

![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/cara%201.png)
![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/cara%202.png)
![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/cara%203.png)
![Test Image 3](https://github.com/aileendespessailles-design/dis8645-2025-02-procesos/blob/main/00-proyecto-02/grupo-05/imagenes/descuartizado.png)
![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/cables.jpeg)

### Comentarios finales

El desarrollo de Friolín nos permitió explorar de forma creativa la relación entre tecnología y comportamiento. Más que un simple ejercicio técnico, el proyecto nos llevó a pensar cómo un conjunto de sensores y servomotores puede transmitir intención y carácter.

Aunque hubo ajustes y errores en el camino, el resultado refleja un proceso de aprendizaje colectivo donde cada decisión —desde el código hasta la carcasa— aportó a darle identidad al robot. Friolín no solo saluda, también muestra cómo la temperatura puede influir en la forma en que interactuamos, incluso con las máquinas.
