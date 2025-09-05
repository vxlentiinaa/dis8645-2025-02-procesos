# sesion-05b

5 Septiembre 2025

## Repaso clase pasada

Vamos a repasar lo que se vió la semana pasada. (Yo estuve ausente así que agradezco el repaso.)
Hay que entender bien que la programación no es solo programar, sino que todo el proceso detrás. Es un estilo de vida.

El #include significa “anda al computador y busca donde sea que exista.”

Existen archivos .cpp y .h
En el .h dice que cosas puedo hacer con la pantallita. Es corto. Este archivo **promete**.
El .cpp hace que las cosas ocurran. Es largo. Este archivo **cumple**.

El #ifndef evita que haya problemas al llamar a un archivo más de una vez.

<https://www.reddit.com/r/cpp_questions/comments/j7wfef/what_is_the_need_for_ifndef_define_endif_inside/?tl=es-419>
Aquí hay una página para entenderlo mejor. Además de proteger, también es útil para la compilación condicional.

El arduino R4 Minima funciona con arm

Recordatorio que GFX significa efectos gráficos.

```cpp
class Completo_Italiano : public Completo {{
```
Significa que todos los completos son parte de un completo italiano

Una clase es un tipo de data definido por el usuario. 

w3schools tienen tutoriales buenos para hacer código web, pero también tiene unos buenos para C++.

La herencia le permite a una clase reutilizar un atributo y métodos de otra clase. 
Toda la parte de clases es para abordar proyectos más complejos que requieren más archivos.

Las clases se usan para crear estructuras de datos cuando no nos cabe en los lenguajes de programación que ya tenemos. Cuando no nos sirven las variables booleanas, los integers, etc, podemos usar las clases. Esto es como hacer una subestructura.

Volviendo a la parte de archivos .h y .cpp, vimos que es bueno crear esqueletos crudos de código para entenderlos. Vimos un esqueleto para texto.

```cpp
#ifndef TEXTO_H
#define TEXTO_H

class Poema : public Texto
  {
  public:
// constructor
Poema()

// destructor
~Poema();

// definiendo que es un texto
Tipo tipografia;

// la dirección en el cual se va a leer el texto
bool izquierdaADerecha = true;

// algunas otras cosas que incluye un texto
// Tinta es el tipo y tinta es el nombre de la variable
Tinta tinta;
Autoria autora;
};

#endif

```

No relacionado, pero no tan no relacionado, hoy es el cumpleaños de Nicanor Parra (yipee)

En contexto de C++, se usa true o false para variables booleanas. Dentro del contexto de arduino se utiliza high y low.

Puedo hacer dos archivos .h
Aarón hizo dos que se llaman Poema.h y PoemaParra.h
Se pueden crear algoritmos distintos.

Este código: class Poema : public Texto
Está llamando a Texto.h

Vamos a hacer una tareita de dibujo en la sala de interacción.

