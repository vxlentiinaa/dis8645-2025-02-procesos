# ⋆₊˚⊹♡ Clase 05a - "Clases" (class) en C++ (cpp) ♡⊹˚₊⋆

Martes 2 Septiembre 2025

***

## Observaciones

(<https://www.w3schools.com/cpp/cpp_classes.asp>)
Todo objeto tiene cualidades.
Programación orientada a objetos: su materia y su forma. (de qué es y como se usa)
Ontología orientada a juegos.

Aristoteles -> las cosas poseen 10 categorías.

Libro: Preguntas - Aristoteles.

- Language
<https://es.wikipedia.org/wiki/Bjarne_Stroustrup>
js ->p5jd,s
Frameworks.
Swift -> android

<https://monome.org/docs/norns/>

<https://supercollider.github.io/>
<https://www.lua.org/(balatro)>

Lenguajes distintos, paradigmas distintos.
Chuck
<https://chuck.cs.princeton.edu/doc/language/overview.html>
<https://thelivinglib.org/the-computers-that-made-the-world/>
TPara crear un lenguaje es necesario sabe un lenguaje de programación.
<https://esolangs.org/wiki/Main_Page>

Turing complete

Creación de carpetas o vinculos:
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/1e874dd1-23b2-49ed-88ea-8334b9b38e86" />
Multiple ino files.

constantes.h (tipo de archivo c++). no sabe que son vecinos.

```cpp
include "constantes.h"

Compilación de imformación.

#ifndef CONSTANTES_H

#define CONSTANTES_H

#endif
// termina de usar los recursos
```

c++ contenido extendibles.

```cpp
class Persona {}
public:
//metodos: funciones dentro de una clase.
Persona(bool lentes); //Constructor

~Persona(); //Destructor

void setEdad (int edad);

int getEdad ();
boolnestaViva;
int edad;

};
```

***
Persona.h solo incluye o define información, no hace nada.
Se crea una carpeta con el mismo nombre pero en formato "cpp", en el que muestran como se corportan. Se reemplazan los ";" por "{}". Hay que decir de que tipo de clases son (contexto).

int Persona:: getEdad() {}

return Persona::edad; //termina con un retorno, un valor entero.

`#include <Arduino.h>` //Entre comillas (ahí mismito), con signo <> es que está al lado. Implica todas las cosas con las que se maneja arduino (librerias y recursos)

Buscar diferencia entre "string" y "String"
Persona:: //declarar la clase

Es de buena educación el tener una clase como un archivo extra o separado del original, puesto que este tipo de contenidos son reutilizados muchas veces. (Por ejemplo las bilbiotecas)

El archivo .ino no se puede abrir en otro proyecto, no como otro tipo.

### Apuntes escritos del día

Tras hablar en equipo llegamos al consenso de que crearíamos un circuito que trabajara con dos pantallas oled, en la cuál una se mostraría una interface con texto y otra con imagen. Para ello decidí encargarme de averiguar sobre las conexiones necesarias para poder hacer ambas pantallas puedan funcionar conectadas al arduino y que procesen información distinta pero en paralelo.

***

### Posdata

Espacio para ideas y pensamientos varios ૮₍ ´ ꒳ `₎ა

***

°˖✧◝(⁰▿⁰)◜✧˖°
