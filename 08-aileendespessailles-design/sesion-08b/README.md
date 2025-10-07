# sesion-08b

no había clase pero avance en la casa 

- codigo de la clase 8a:

```cpp
// incluir .h
#include "SensorUltra.h"


SensorUltra::SensorUltra() {
}


void SensorUltra::configurar() {
  // conectar las patitas
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);  // cambiar a 115200 como en el ejemplo
}


void SensorUltra::reconocerDistancia() {
  // configuracion reconocimiento distancia
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  //agregar párametros de medicion,
  //como en el ejemplo de wokwi, duracion y distancia
  // agregar bool persona
}


void SensorUltra::leerDistancia() {
  //va a leer e imprimir en el monitor serial la distancia detectada
  distancia = duracion / 58; // ponerlo en void reconocer distancia como variable para reconocer 
  if (distancia < 30) { // cambiarlo, me dijo chat gpt 
    persona = false;
  } else {
    Serial.print("la persona esta a: ");
  }
}
```


- ejemplo chat gpt : 

```cpp
#ifndef SENSOR_ULTRA_H
#define SENSOR_ULTRA_H

#include <Arduino.h>

class SensorUltra {
private:
  int trigPin;
  int echoPin;
  long duracion;
  int distancia;

public:
  bool persona;

  SensorUltra();                 // Constructor por defecto
  void configurar();             // Configura los pines
  void reconocerDistancia();     // Calcula la distancia y detecta persona
  void leerDistancia();          // Muestra la distancia por Serial
};

#endif
SensorUltra.cpp
cpp
Copiar código
#include "SensorUltra.h"

SensorUltra::SensorUltra() {
  trigPin = 3;
  echoPin = 2;
  persona = false;
  duracion = 0;
  distancia = 0;
}

void SensorUltra::configurar() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200);
}

void SensorUltra::reconocerDistancia() {
  // Enviar pulso
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Medir duración del eco
  duracion = pulseIn(echoPin, HIGH);

  // Calcular distancia en cm
  distancia = duracion / 58;

  // Determinar si hay una persona (ejemplo: menos de 30 cm)
  persona = (distancia < 30);
}

void SensorUltra::leerDistancia() {
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if (persona) {
    Serial.println("Persona detectada!");
  } else {
    Serial.println("No hay persona."); // esto al final lo uni todo dejando solo el if, y la frase nuestra 
  }
}
```

- ejemplo wokwi: 
```cpp

#define PIN_TRIG 3
#define PIN_ECHO 2

void setup() {
  Serial.begin(115200);
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
}

void loop() {
  // Start a new measurement:
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);

  // Read the result:
  int duration = pulseIn(PIN_ECHO, HIGH); // esto lo saque para usarlo 
  Serial.print("Distance in CM: ");
  Serial.println(duration / 58);
  Serial.print("Distance in inches: ");
  Serial.println(duration / 148);

  delay(1000);
}
```

- nuevo codigo sensorultra.cpp: 

```cpp
// incluir .h
#include "SensorUltra.h"


SensorUltra::SensorUltra() {
}


void SensorUltra::configurar() {
  // conectar las patitas
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200); // lo cambie como el ejemplo de wokwi
}


void SensorUltra::reconocerDistancia() {
  // configuracion reconocimiento distancia
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);


// medir duración del eco
  duracion = pulseIn(echoPin, HIGH); // lo cambie como el ejemplo de wokwi


// calcular distancia en cm
  distancia = duracion / 58; // se determina la distancia en cm como en wokwi
 
// determinar si hay una persona (ejemplo: a menos de 30 cm)
// bool persona cuenta como parametro de medicion (chat gpt)
  persona = (distancia < 30);
}


void SensorUltra::leerDistancia() {
  // imprimir en el monitor serial la distancia detectada en cm
// lo cambie basandome en los ejemplos de wokwi y chat gpt 
if (persona) {
  Serial.println("la persona esta a: ");
    Serial.print(distancia);
    Serial.println(" cm");
  } else {
    Serial.println("No hay persona.");
  }
}
```
