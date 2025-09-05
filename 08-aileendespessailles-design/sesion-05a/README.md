# sesion-05a
Programación orientada a objetos
→ Está hecho de algo
→ Sirve para algo. → graham harman
→ Ontología orientada a objetos.

→ Fenomenología.
→ 10 categorías de Aristóteles. / se pueden aplicar a
cualquier mundo de programación. 

 C language (1972)
→ Sus archivos se llaman .c o .h
→ c Sharp → c#  (2000)
→ C++ → Bjarne Straustrup. (1985) → C ++ 23 se usa actualmente
→C++ 23 (2024)
→ P5.Js. → lenguaje de programación / El computador trabaja más para que los códigos de programación sean más simples. → Trade off.
→ openframeworks.
→ Swift language
→ cada lenguaje es un paradigma distinto.

→ #include → incluye lenguaje y comandos de creados o designados en otro archivo→ Ejemplo: #include “archivo.h"

→ si se incluye un archivo no se pueden volver a crear las mismas variables que ya existen en el archivo. 
como se hacer que eso no sea un problema al programar (esto se escribe dentro de archivo.h)

#ifndef archivo_h
#define archivo_h
const int algo = 30;
#Endif.

* Mayúsculas destaca la importancia de algo, no se necesita hacerlo así, pero es de buenos modales.

Que se puede designar dentro del archivo.h 
→ Class Persona → Determinar lo que es una persona.
→ Personas () → crea parámetros que definen lo que una persona, condición inicial.
→ las funciones siempre están entre paréntesis.

→ crear otro archivo pero esta vez es .cpp
→ se incluye en el archivo .h
→ en este archivo se toman las funciones creadas en el otro archivo .h

→ en persona . h se crea la función bool para determinar si algo es true or false
→ se define en .h
→  En .ino a la clase creado se le pueden hacer subcategorías y a estas otorgarse con true or false 
Ej: #include….
Persona Aristotetes

→ los archivos .h no conoce el lenguaje de arduino se puede agregar poniendo 
#include <arduino.h> 
