# sesion-05a / Clase 08 / 02.09.2025

## Conversación en la mañana 

Las 10 categorías de Aristóteles 
- Sustancia
- Cantidad
- Cualidad
- Relación
- Lugar
- Tiempo
- Posición
- Hábito
- Acción
- Padecimiento
  
Libro: Problemas - Aristóteles
  
[POO](https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objetos) Programación orientada a objetos.

[OOO](https://en.wikipedia.org/wiki/Object-oriented_ontology) La Ontología Orientada a Objetos.

[C++](https://es.wikipedia.org/wiki/C%2B%2B) Lenguaje de programación.

### Bjarne Stroustrup

![Bjarne](./imagenes/Bjarne.jpg)

Bjarne Stroustrup es un informático danés, ampliamente conocido como el creador e implementador original del lenguaje de programación C++. Su trabajo ha tenido un impacto significativo en el desarrollo de software y la informática moderna.

Publicaciones importantes de Bjarne sobre programación

- El lenguaje de programación C++
- El diseño y la evolución de C++
- Programación: principios y práctica usando C++

## Inicio de clase

### Lenguaje de programación 

- C
- C++
- [Swift](https://es.wikipedia.org/wiki/Swift_(lenguaje_de_programaci%C3%B3n)) Enfocado en el desarrollo de aplicaciones para iOS y macOS.
- [Python](https://es.wikipedia.org/wiki/Python) Lenguaje de programación de propósito general, interpretado, de alto nivel y código abierto.

### Arduino 

El archivo principal termina en .ino

Los siguientes deben finalizar con .h

New tab para que el código no sea tan largo 

Para poder distribuir de mejor manera la información entre archivos arduinos y el código no sea tan largo, tedioso y difícil de manejar, en un archivo arduino se agregan un nuevo file, ejemplo: archivo.h y un archivo.cpp de este mismo, para que luego en el código inicial (.ino) agregar: #include archivo.h para incluir la información de los otros files. 

Primer archivo es para definir (archivo.h) PROMETER.

Segundo para definir qué hace o cómo se comparta (archivo.ccp) SE HACE CARGO.

### Ejercicio en clases

#### Archivo.ino

- Iniciamos con el archivo principal ARCHIVO.INO.
- Se incluyen el resto de los archivos (#include) .h y .cpp para ocupar su información, pero sin que el código principal esté tan largo. 

```cpp

#include "constantes.h"
#include "Persona.h"
#include "SensorAnalogo.h";

Persona aristoteles(false);
Persona javieraMena(true);

SensorAnalogo potenciometroIzquierda(A0);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  aristoteles.setEdad(2025 + 384);
  javieraMena.setEdad(42);

  aristoteles.setRut("1-0");
  javieraMena.setRut("11.111.111-1");

  potenciometroIzquierda.definirRangoUtil(0, 1023);
  potenciometroIzquierda.definirRangoMapeo(0, 10);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Aristoteles tiene ");
  Serial.print(aristoteles.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene ");
  Serial.print(javieraMena.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene RUT ");
  Serial.println(javieraMena.getRut());

  potenciometroIzquierda.leerValor();
}
```
#### Archivo.h

- En este caso, define "persona" que tiene un constructor y un destructor (~).
- Constructor y destructor mismo nombre del archivo.
  
```cpp
#ifndef PERSONA_H
#define PERSONA_H

#include <Arduino.h>

class Persona {

public:

  // metodos
  // son funciones dentro de una clase

  // metodo constructor
  // sirve para crear nuevas instancias
  // clase Persona es un molde de galleta
  // metodo Persona() nos permite hacer las galletas
  // parametro del constructor es un boolean lentes
  // true si esta vivo, false si esta muerto
  Persona(bool vida);

  // destructor
  ~Persona();

  // funcion void
  // que define edad
  // necesita parametro int
  void setEdad(int nuevaEdad);

  // funcion int
  // devuelve la edad
  int getEdad();


  // get y set de rut
  String getRut();

  void setRut(String nuevoRut);

  bool estaViva;
  int edad = -1;
  String rut;
};


#endif
```

#### Archivo.cpp

- ¿Cómo se comporta?
- Se tiene que incluir el archivo.h en este caso "Persona.h"

```cpp
#include "Persona.h"

// constructor
Persona::Persona(bool vida) {
  Persona::estaViva = vida;
}

// destructor
Persona::~Persona() {}

// set edad
void Persona::setEdad(int nuevaEdad) {
  Persona::edad = nuevaEdad;
}

// get edad
int Persona::getEdad() {
  return Persona::edad;
}

// get y set de rut
String Persona::getRut(){
  return Persona::rut;
}

void Persona::setRut(String nuevoRut){
  Persona::rut = nuevoRut;
}
```
### Encargo

No hay encargo. 

