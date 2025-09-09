# sesion-05a - martes 2 de septiembre ⋆ 𐙚 ̊

## Intro a clases

- utilización de archivos ".h" para almacenar parte del código en un archivo aparte

### Ejemplo 1

archivo "miPrimerCpp.ino"

```cpp
#include "constantes.h"


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(numEstudiantes);
}
```
archivo "constantes.h"

```cpp
#ifndef CONSTANTES_H // en mayúsculas ya que es muy importante, no se pone un . se pone un _
#define CONSTANTES_H

const int numEstudiantes = 29;

#endif
```
### Ejemplo 2: Persona

archivo "Persona.h"

```cpp
#ifndef PERSONA_H // en mayúsculas ya que es muy importante, no se pone un . se pone un _
#define PERSONA_H

 // con P mayúscula ya que es una clase
 // sólo para las clases se coloca un punto y coma luego del murciélago

 class Persona {

 public:

 // métodos es una función dentro de una clase
 // por lo menos una que se llame exactamente igual que la clase
 // constructor
 // clase Persona es un molde de galleta
 // método Persona() nos permite hacer las galletas
 // parámetro del constructor es un boolean lentes

 // Persona(bool lentes); 
 // ejemplo si usa lentes o no
 // true si usa lentes, false si no usa lentes

 // true si está vivo, false si está muerto
 Persona(bool vida);

 // función porque salen los paréntesis

 // destructor
 ~Persona();

 // función void
 // que define edad
 // necesita parámetro int
 //void definirEdad(int edad); 
 void setEdad(int nuevaEdad); // es un parámetro de la función


 // función int
 // devuelve la edad
 int getEdad();

 bool estaViva;
 int edad; // tiene que ver con la clase persona


};

#endif
```
archivo "Persona.cpp"

```cpp
#include "Persona.h"

Persona::Persona(bool vida) {
  Persona::estaViva = vida;

 }
 // sacar los puntos y coma
 // reemplazar por murciélagos

Persona::~Persona() {}

void Persona::setEdad(int nuevaEdad) {
  Persona::edad = nuevaEdad;
}


int Persona::getEdad() {
  return Persona::edad;
}
```
