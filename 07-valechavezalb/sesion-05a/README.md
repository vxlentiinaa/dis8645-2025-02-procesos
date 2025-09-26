# 🌷 sesion-05a

Martes 2 de septiembre

## 🛠️ ¿Qué son las clases?

- Es un concepto relacionada a la **programación orientada a objetos (POO)**, se puede entender como un molde o plantilla que define cómo serán los objetos que se creen a partir de ella.
- Una clase se compone de dos cosas:

1. Atributos (propiedades o varibales)
2. Métodos (funciones o comportamientos

Detro de las clases hay muchas opciones como public:

### archivo.h
archivo en donde se crean clases para definir algo. Ejemplo se crea la clase de Persona, y dentro de estas hay constructores, que son los parámetros que necesito para que sea una persona, por ejemplo: si usa lentes o no, etc. (ejemplo de la clase)

### Lenguaje C

- Sus archivos terminan en .c o .h.
- Es o mismo que cpp (c-plus-plus en inglés).
- Variable, set variable, get variable.
- Puedo crear otro archivo .ino que se llame "creditos" para que hablen entre sí ambos archivos.

- **Para las proximas entregas, tendremos un sensor.h o ptenciometro.h**

## Ejercicios clase

- Las clases de los archivos se hacen con **.h** y **.cpp**+ el archivo arduino **.ino**

➜ ARCHIVO INO

```cpp
//programacion orientada a objetos
#include "constantes.h"
#include "Persona.h"

Persona aristoteles(false);
Persona javieraMena(true);
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  aristoteles.setEdad(2025 + 384);
  javieraMena.setEdad(2025 - 1983);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Aristoteles tiene ");
  Serial.print(aristoteles.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene ");
  Serial.print(javieraMena.getEdad());
  Serial.println(" años");
}

```

➜ ARCHIVO .h

```cpp
//cualquier codigo que incluya este archivo, tendra la informacion de este archivo solo escribiendo #include en el archivo principal
#ifndef PERSONA_H
#define PERSONA_H

class Persona { //las clases se escriben con mayúscula la primera letra

public:

//metodos son funciones dentro de una clase

//parametro del cosntructor es un boolean vida
//true si esta vivo, false si esta muerto
Persona(bool vida); //es el metodo constructor que sirve para crear nuevas instancias, que nos permite hacer las galletas 

//destructor
~Persona();

//funcion void
//que define edad
//necesita un parametro int (numero entero)
void setEdad(int nuevaEdad); //es un parametro de la nueva funcion


//funcion int
//devulve la edad 
int getEdad();


//las personas adentro de la clase, le pusimos un bool que nos dice que está vivo y un int que nos indica la edad
bool estaViva;
int edad;

}; //se debe escribir ; al final de calda } pero solo en las clases


#endif
```

➜ ARCHIVO .cpp

```cpp
#include "Persona.h"

//se copian las funciones del archivo Persona.h, para que en este en cpp, nos dice cómo se hace y como se comporta 

//se eliminan los puntos y coma  y se agregar murcielagos 

//se ponen ::

//coonstructor
Persona::Persona (bool vida) {
  Persona::estaViva = vida;
}

//destructor
Persona::~Persona() {}

//set edad
void Persona::setEdad(int nuevaEdad) {
Persona::edad = nuevaEdad;  
}


//get edad
int Persona::getEdad() {

  return Persona::edad;
}
```

## Ejercicio para usar sensores análogos

➜ SensorAnalogo.h

```cpp
#ifndef SENSOR_ANALOGO_H
#define SENSOR_ANALOGO_H

#include <Arduino.h>

class SensorAnalogo {

public:
  // constructor
  SensorAnalogo(int nuevaPatita);

    // destructor
  ~SensorAnalogo();

  void definirRangoUtil(int nuevoMin, int nuevoMax);

  void definirRangoMapeo(int nuevoMin, int nuevoMax);

  void leerValor();
  

  int patita;

  int valorActual;
  int valorMinimo;
  int valorMaximo;

  int valorMapeado;
  int rangoMapeadoMin;
  int rangoMapeadoMax;

  String nombre;

};

#endif
```

➜ SensorAnalogo.cpp

```cpp
#include "SensorAnalogo.h"


  // constructor
  SensorAnalogo::SensorAnalogo(int nuevaPatita){
    SensorAnalogo::patita = nuevaPatita;
  }

    // destructor
  SensorAnalogo::~SensorAnalogo(){}

  void SensorAnalogo::definirRangoUtil(int nuevoMin, int nuevoMax){
    SensorAnalogo::valorMinimo = nuevoMin;
    SensorAnalogo::valorMaximo = nuevoMax;
  }

  void SensorAnalogo::definirRangoMapeo(int nuevoMin, int nuevoMax){
    SensorAnalogo::rangoMapeadoMin = nuevoMin;
    SensorAnalogo::rangoMapeadoMax = nuevoMax;
  }

  void SensorAnalogo::leerValor() {
    // leer el valor con analogRead
    SensorAnalogo::valorActual = analogRead(SensorAnalogo::patita);

    SensorAnalog::valorMapeado = map(SensorAnalogo::valorActual, 
    SensorAnalogo::valorMinimo, SensorAnalogo::valorMaximo,
    SensorAnalogo::rangoMapeadoMin, SensorAnalogo::rangoMapeadoMax 
    );

  }
```


### 🪵 Categorías de Aristóteles

1. Sustancia.
2. Cantidad.
3. Cualidad.
4. Relación.
5. Lugar.
6. Tiempo.
7. Posición (o Situación).
8. Posesión (o Hábito).
9. Acción.
10. Pasión.

### Más apuntes...
- <https://openframeworks.cc/> para programar una aplicación.
- Para programar cosas en IOS se usa Swift, para crear aplicaciones.
- NORM computador que funciona con el lenguaje SuperCollider y también utiliza Lua.
