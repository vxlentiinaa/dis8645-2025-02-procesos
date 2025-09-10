# sesion-05a

-02-09-2025

## Primera parte de la clase: Cómo definimos algo

### 1. Ontología Orientada a Objetos (OOO) – Graham Harman

La OOO sostiene que todos los objetos existen de manera autónoma, sin depender de la mente humana ni de su utilidad. Cada objeto tiene una parte de su ser siempre oculta o retirada, que nunca se agota en cómo lo percibimos o usamos.

### 2. Las 10 categorías de Aristóteles

Aristóteles propuso estas categorías como formas fundamentales de predicar y comprender lo que existe, es decir, los modos en que se puede hablar de un ente o cosa:

- Sustancia = Lo que existe en sí mismo.
 Ejemplo: una mesa, un perro, una persona.

- Cantidad = Cuánto tiene o mide.
 Ejemplo: la mesa mide 1 metro de alto.

- Cualidad = Cómo es, sus características.
 Ejemplo: la mesa es de madera y rectangular.

- Relación = Cómo se vincula con algo más.
  Ejemplo: la mesa es más alta que la silla.

- Lugar = Dónde está.
 Ejemplo: la mesa está en el comedor.

- Tiempo = Cuándo ocurre algo respecto a ella.
 Ejemplo: la mesa se fabricó el año pasado.

- Posición (o Situación) = Cómo está dispuesta.
 Ejemplo: la mesa está puesta de pie, no de lado.

- Posesión (o Hábito) = Qué tiene o lleva consigo.
 Ejemplo: la mesa tiene un mantel encima.

- Acción = Lo que hace.
 Ejemplo: la mesa sostiene los platos.

- Pasión = Lo que recibe o padece.
 Ejemplo: la mesa es rayada por un niño.

## Lenguajes de programación

- C

Año: 1972

Archivos: .c, .h

Paradigma: Procedimental

- C++

Año: 1985

Archivos: .cpp, .hpp

Paradigma: Multi-paradigma (procedimental, orientado a objetos)

- C# (C Sharp)

Archivos: .cs, .csx

Paradigma: Orientado a objetos

- Python

Archivos: .py

Paradigma: Multi-paradigma (procedimental, orientado a objetos, funcional)

- Java

Archivos: .java

Paradigma: Orientado a objetos

- JavaScript / p5.js

Archivos: .js

Paradigma: Multi-paradigma (funcional, orientado a objetos)

Nota: p5.js es una librería para gráficos y arte interactivo

- OpenFrameworks (C++)

Archivos: .cpp, .h

Paradigma: Multi-paradigma

Uso: Creatividad digital, gráficos, multimedia

- Lua

Archivos: .lua

Paradigma: Multi-paradigma (procedimental, funcional)

Uso: Scripting en videojuegos y aplicaciones embebidas

- ChucK

Paradigma: Fuertemente tipado y orientado al tiempo (strongly-timed)

Uso: Síntesis y programación de música en tiempo real

Origen: Desarrollo de tesis doctoral

- Norns

Plataforma basada en scripting (Lua) para música generativa y live coding

---

## Clases

Clases en programación

Una clase es un modelo o plantilla que define cómo se estructura un tipo de objeto en un programa. Piensa en ella como un plano de un objeto: describe qué características tiene (atributos) y qué puede hacer (métodos o funciones).

### Para qué sirven

- Organizar el código: Permiten agrupar datos y funciones relacionadas en un solo lugar.

- Reutilización: Una vez definida, puedes crear muchos objetos iguales sin reescribir todo el código.

- Abstracción: Ocultan los detalles internos y muestran solo lo necesario para usar el objeto.

- Modularidad: Facilitan mantener y actualizar el código, porque cada clase funciona como un módulo independiente.

### EN ARDUINO

1. Abre el archivo .ino.

2. Haz clic en los tres puntitos (⋯) y selecciona “Nueva pestaña” (o Ctrl + Shift + N).

3. Guarda la pestaña como .h o .cpp, según corresponda.

### archivo .h

```cpp
// archivo constantes.h
#ifndef CONSTANTES_H // si no existe
#define CONSTANTES_H // entonces definelo

const int numEstudiantes = 28;

#endif // fin de la definción
```

### Ejemplo

Archivo .h

Contiene declaraciones de funciones, clases y constantes, pero no su implementación.

```cpp
#ifndef PERSONA_H
#define PERSONA_H

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

Archivo .cpp

Contiene la implementación de funciones y métodos de las clases definidas, generalmente vinculadas a un archivo .h.

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

Archivo .ino

Es el archivo principal del proyecto.

Une los distintos archivos del proyecto, como .h y .cpp.

Contiene la configuración (setup()) y el bucle principal (loop()) del programa.

```cpp
#include "constantes.h"
#include "Persona.h"

Persona aristoteles(false);
Persona javieraMena(true);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  aristoteles.setEdad(2025 + 384);
  javieraMena.setEdad(42);

  aristoteles.setRut("1-0");
  javieraMena.setRut("11.111.111-1");
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
}
```
