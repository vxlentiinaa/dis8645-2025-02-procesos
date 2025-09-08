# sesion-05a

## Ontología aplicada

El estudio de las cosas como aparecen
¿Cómo describirías una mesa sin decir de qué está hecha y para qué sirve?

### POO
Según gemini: La programación orientada a objetos (POO) es un paradigma de programación que organiza el software alrededor de objetos, que son entidades que combinan datos (atributos) y el comportamiento asociado (métodos). Las clases actúan como plantillas para crear estos objetos, permitiendo la reutilización de código, el desarrollo de sistemas complejos y el mantenimiento del software. Sus pilares son la abstracción, el encapsulamiento, la herencia y el polimorfismo, que ayudan a gestionar la complejidad y a crear soluciones más robustas y eficientes. 

**Conceptos Clave**
+ **Objeto:**
Es una instancia de una clase que tiene un estado (sus atributos), un comportamiento (sus métodos) y una identidad propia que lo distingue de otros objetos. 
+ **Clase:**
Es un plano o plantilla que define la estructura y el comportamiento de los objetos. Por ejemplo, una clase "Coche" define que todos los coches tienen atributos como color o marca y métodos como "acelerar". 
+ **Atributos (o propiedades):**
Son los datos que describen el estado de un objeto. Siguiendo el ejemplo de "Coche", serían el color, la marca, etc. 
+ **Métodos:**
Son las funciones o comportamientos que un objeto puede realizar. En la clase "Coche", "acelerar" y "frenar" serían métodos. 

### Las 10 categorías de Aristóteles
El propone que cada ente/objeto en el universo tiene 10 categorías

- Sustancia
- Cantidad
- Cualidad
- Relación
- Lugar
- Tiempo
- Posición
- Posesión (Hábito)
- Acción
- Pasión

### C programming language
- C++ = Cpp
- 1972
- .c y .h
- It´s not C++ nor C#
- C++ = Le damos toda la información posible al computador para que trabaje menos.

**Bjarne Stroustrup**
Según engineering.columbia: Es el diseñador e implementador original de C++, así como el autor de The C++ Programming Language (4.ª edición) y A Tour of C++ (3.ª edición), Programming: Principles and Practice using C++ (3.ª edición) y muchas publicaciones populares y académicas.
![Bjarne](./imagenes/bjarne.jpg)

### Lenguajes de programación

- **Openframewoks:** Programa de programacion para videojuegos C++.
- **SuperCollider:** Language que se usa para modelar sintetizadores, generar patrones sonoros, procesar audio, y construir interfaces gráficas para interactuar con el sonido.
- **Lua:** Fácil de escribir
- **Chuck:** Audio Programming, highly timed.
- **Turing complete:** Un lenguaje que puede hacer tdoo lo que un computador puede hacer.

## Clases
Las clases nos permiten que con su infraestructura podamos hacer lo que nosotros queramos.

### Diferentes files en Arduino

Para distribuir información entre arvichos de arduino y el código no se haga tan largo/confuso o ahorrarnos tiempo, en un archivo de Arduino se agrega un nuevo file guardándolo como "archivo.h" y un "archivo.cpp" de este mismo, luego en el código inicial (.ino) poner: #include "archivo.h" para incluir la info de esos otros files a este código.
- El primer archivo es para definir (.h) "promete"
- El segundo archivo es para definir como se hace o como se comporta (cpp) "hazte cargo"
  
### Mi primer cpp

- Esqueleto de un archivo.h:

```cpp
#ifndef CONSTANTES_H // mayúsculas xq es muy importante
#define CONSTANTES_H // Define que hay algo que se llama "constantes" y es todo lo que está abajo

//const = para constantes
const int numEstudiantes = 29;

#endif
```

+ if it isnt defined : #ifndef
+ define it : #define

+ Archivo.h : Nuevo archivo en cpp
+ Vermas: ifndef y define
+ Crear clase: Cada clase debe etener al menos un constructor que se llame igual que la clase

- public: Dentro de una clase
- Si hay () es función.
- Clases con Mayúsculas al principio
- Variables con minúscula
- "::" Vale para todes (los del mismo tipo)
- String con "S" Mayúscula solo tiene sentido en arduino
- "" aqui mismo
- <> Dónde sea que esté

  ### Ejemplo Clase

  **ARCHIVO.INO**
  Este inluye (#include) el resto archivos .h y .cpp para ocupar su información sin tener que añadirla al código principal.

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
**PRIMER ARCHIVO.H**
En este se define, en este caso "persona"
Este contiene un constructor y un destructor(~) que tienen el mimo nombre del archivo.

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
**PRIMER ARCHIVO.CPP**
¿Cómo se comporta? Se incluye el archivo (.h)

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
**SEGUNDO ARCHIVO.H**

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
**SEGUNDO ARCHIVO.CPP**
Archivo cpp del archivo SensorAnalogo.h, este se incluye en el primcipio

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


