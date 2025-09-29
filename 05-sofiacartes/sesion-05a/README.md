# sesion-05a 02/09

## Apuntes clase

- [OOO](https://en.wikipedia.org/wiki/Object-oriented_ontology) Ontología Orientada a Objetos
- Fenomenología -> estudio de las cosas, como aparecen
- ¿Cómo definimos un objeto?
- Para qué está hecho y para qué sirve
- [POO](https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objetos) Programación orientada a objetos
- Mnomer Norms

---

### Definición clases

Lenguaje [C++](https://es.wikipedia.org/wiki/C%2B%2B)

"Todo en C++/CPP está asociado a clases y objetos, junto con sus atributos y métodos. Por ejemplo, en la vida real, un coche es un objeto . El coche tiene atributos, como el peso y el color, y métodos, como la tracción y el freno.

Los atributos y métodos son básicamente variables y funciones que pertenecen a la clase. A menudo se les denomina "miembros de la clase".

Una clase es un tipo de datos definido por el usuario que podemos usar en nuestro programa y funciona como un constructor de objetos o un "modelo" para crear objetos."

Sacado de: <https://www.w3schools.com/cpp/cpp_classes.asp>

### Bjarne Stroustrup

Es un científico de la computación y catedrático de Ciencias de la Computación en la Universidad A&M de Texas.  Desarrolló el lenguaje de programación C++.

Sacado de : <https://es.wikipedia.org/wiki/Bjarne_Stroustrup>

### Lenguaje de programación

- **.C, .h** -> son para C
- **C** se utiliza para  el título y **h** se  utiliza paralos encabezados
- Se utiliza para programación de biomarcadores.
  desarrollo del lenguaje de programación C++.
- [Processing](https://processing.org/) Es un software flexible y un lenguaje para aprender a programar.
- Openfranwors: entorno de programación para hacer apps en C++.
- Swift lenguage: programar cosas en IOS
- Balatros lua
- Turing complete: es un lenguaje que puede hacer todo lo que un computador puede hacer.

### Clases en Arduino ide

[W3schools](https://www.w3schools.com/cpp/cpp_classes.asp)

- Las clases sirven para que el código principal se vea mas limpio
- Tres puntitos -> new tab- > nueva pestaña, para tener otra pestaña en el mismo documento.

Le asignamos un título al nuevo archivo, donde incorporamos .cpp / .h

- Documento.h -> tipo de archivo de C++

#### Ejercicio en clases

Recordar: Las clases en Arduino se guardan en archivo **.h**

#### ARCHIVO.INO

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

#### ARCHIVO.h

**Clase:** Nos permite definir lo que es una persona para hacer varias personas.

- persona con p porque es una clase, solo cuando definamos una clase va un **;**
- dentro de las clases hay varias opciones, primero se parte con **public**
- clase Persona es un molde de galleta
- es el molde; la clase se escribe con mayúscula al principio

**Public:** Es para que cualquier otra clase pueda decir hazlo, quien tiene acceso.

- metodo; es una función dentro de una clase
- metodo constructor
- sirve para crear nuevas instancias
- metodo Persona() nos permite hacer las galletas
- que parametros puedo darle a una persona

```cpp
// es para crear nuevos archivos en c++
// cualquier codigo que incluya este archivo, tendra la información de este archivo
#ifndef PERSONA_H

#define PERSONA_H

#include <Arduino.h>

// clase Persona es un molde de galleta 
class Persona { // nos permite definir lo que es una persona, para hacer varias personas

// es un metodo, es decir, una funcion dentro de una clase
public: // cualquier otra clase pueda decir hazlo, quien tiene acceso

// parametro del constructor es un boolean vida 
//true si esta vivo, false si esta muerto 
Persona(bool vida); // metodo Persona() nos permite hacer las galletas

// destructor
~Persona();
// option + Ñ:~ 

// funcion void; que define la edad 
// necesita parametro int (numero entero)
void setEdad(int nuevaEdad);

//funcion int
// devuelve la edad
int getEdad();

//las personas adentro de la clase, le pusimos un bool que nos dice que está vivo y un int que nos indica la edad
bool estaViva;
int edad;

}; // se debe escribir ; al final de cada } pero solo en las clases

#endif
```

#### ARCHIVO.cpp

```cpp
#include "Persona.h"

// el primer archivo (.h) es para definir, te dice la interfaz
// el cpp es lo más complejo porque dice que es lo que hace el archivo

// constructor
Persona::Persona(bool vida) {
  Persona::estaViva = vida;
}

// destructor
Persona::~Persona();

// set edad
void Persona::setEdad(int nuevaEdad) {
  Persona::edad = nuevaEdad;
}

// get edad
int Persona::getEdad() {
  return Persona::edad;
}
