# sesion-05a
## Introducción de la clase
Cuando se explica algo a alguien que no sabe nada, primero se dice:
- De qué está hecho.
- Para qué sirve.
## Apuntes 
Hoy dia vamos a aprender lenguaje c++ o cpp

- `#ifndef` → Se usa para comprobar si algo no está definido.
- `#endif` → Indica el final del bloque `#ifndef`.
- `public` → Los miembros declarados aquí son accesibles desde cualquier parte del programa.
### Ejemplo

```cpp
#ifndef CONSTANTES_H
#define CONSTANTES_H

const int numEstudiantes = 29;

#endif
```
**¿Qué significa?**

`#ifndef CONSTANTES_H`

- Significa: "si NO está definido CONSTANTES_H..."
- Sirve para evitar que este archivo se incluya más de una vez en el programa.

`#define CONSTANTES_H`

- Ahora se define CONSTANTES_H, marcando que el contenido ya se incluyó.
- Si se intenta incluir otra vez, se ignora para no duplicar código.

`const int numEstudiantes = 29;`

- Declara una constante entera llamada numEstudiantes que siempre vale 29.
- No se puede cambiar su valor en ninguna parte del programa.

`#endif`

- Indica el final del bloque de protección iniciado con #ifndef.

**¿Por qué se usa?**

Para evitar errores de compilación cuando el mismo archivo .h se incluye varias veces.

## Clases
Archivos `.h`

```cpp
#ifndef PERSONA_H
#define PERSONA_H

class Persona {

public:
  // Métodos
  Persona(bool vida);  // Constructor
  ~Persona();          // Destructor
  void setEdad(int nuevaEdad);  // Establece la edad
  int getEdad();                // Devuelve la edad

  // Atributos
  bool estaViva;
  int edad;

};

#endif
```
**¿Qué es?**
- Es un molde para crear objetos del tipo Persona.
- Los objetos tendrán atributos y métodos.

### Metodos
#### Constructor

```cpp
Persona(bool vida);
```
Se ejecuta al crear un objeto.
- Vida indica:

true → persona viva.

false → persona muerta.

#### Destructor

```cpp
~Persona();
```
Se ejecuta al destruir un objeto.

#### Setters y getters

- `void setEdad(int nuevaEdad);` → Asigna edad.

- `int getEdad();` → Devuelve edad.

#### Atributos

- `bool estaViva;` → Estado de vida.

- `int edad;` → Edad de la persona.
---
Archivos `.cpp`

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
```

- Contiene la implementación de los métodos declarados en el `.h`.

- Aquí se escribe qué hace cada función en detalle.




## Información importante
- Cuando algo está en mayúsculas significa que es muy importante (ojito).
- Las clases comienzan con mayúscula.
  



 
