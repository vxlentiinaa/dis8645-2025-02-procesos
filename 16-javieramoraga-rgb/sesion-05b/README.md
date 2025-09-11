# sesion-05b ᯓ★

## Conceptos principales

+ **Archivos en C++**
  
  + `.h`: Archivos cortos, donde se **declara** (promesas).
    
  + `.cpp`: Archivos largos, donde se **define** (me hago cargo de las promesas).
  
  + En los `.h` se utiliza:
    
    ```cpp
    #ifndef NOMBRE
    #define NOMBRE
    ...
    #endif
    ```
    
  + *╰┈➤ Esto evita errores al incluir múltiples veces el mismo archivo.*

+ **Comentarios en el código**
  
  Es importante explicar de forma clara lo que se está haciendo, ya que el código se muestra a comisión y debe ser legible.

+ **AVR**
  
  Hace referencia a la arquitectura de computadores.

──── ୨୧ ────

## Clases en C++

+ `class`: Permite crear una clase.
  
  Ejemplo:

 ```cpp
  class Completo_Italiano : public Completo {};
```

 ⋆˚꩜｡Aquí, *Completo_Italiano* hereda de Completo.
 
 ➝ Es una clase que no existe en el vacío, sino que depende de otra.

+ **Atributos:** Variables de una clase.

+ **Métodos:** Funciones de una clase.

 **📖 Para investigar más:**
  
+ W3Schools – Inheritance en C++
  
https://www.w3schools.com/cpp/cpp_inheritance.asp 

────୨ৎ────

## Uso de clases

+ Las clases se usan cuando queremos crear **estructuras de datos** que no caben en los bloques fundamentales del lenguaje.  

+ **⋆˙⟡ Ejemplo de jerarquías:**

1. Una clase general: `Texto`
   
2. Una clase que herede de `Texto`: `Poema`
   
   + Todos los poemas son textos, pero no todos los textos son poemas.

***

+ **⊹ ࣪ ˖Otro ejemplo:**

1. Una clase que contenga un pixel art en imagen.
  
2. Una clase que herede de pixel art y sea una colección de imágenes relacionadas (un `array`).

***

· · ─ ·𖥸· ─ · ·

### Principios ✶⋆.˚

+ **Jerarquías**: Hay que respetarlas.
  
  + Si modificas algo en `Poema`, esto no afecta automáticamente a `Texto` (y viceversa).
    
+ **Ejemplo de atributos comunes a todos los textos ೀ**:
  
 ```cpp
  Tipo tipografia;
  Tinta tinta;
  Autoria autora;
  bool izquierdaADerecha = true;  // Se escribe de izquierda a derecha
  float nota = 1.0;               // Nota asociada al texto
  
```

+ Heredar funciones/atributos:

 * Poema hereda la posibilidad de tener una nota de Texto.


✩₊˚.⋆☾⋆⁺₊✧

### Ejemplos de clases echo por mi: estrellas ⋆˙⟡

+ ✶⋆.˚ Estrella.h

```cpp

#ifndef ESTRELLA_H
#define ESTRELLA_H

#include <Arduino.h>

class Estrella {
protected:
    String color;
    float masa;
    float radio;

public:
    Estrella(String c, float m, float r);
    void mostrarInfo();
};

class Gigante : public Estrella {
private:
    String etapa;

public:
    Gigante(String c, float m, float r, String e);
    void mostrarInfo();
};

class Enana : public Estrella {
private:
    String tipo;

public:
    Enana(String c, float m, float r, String t);
    void mostrarInfo();
};

#endif

```

+ ✶⋆.˚ Estrella.cpp

```cpp

#include "Estrella.h"

Estrella::Estrella(String c, float m, float r) 
  : color(c), masa(m), radio(r) {}

void Estrella::mostrarInfo() {
    Serial.print("Color: "); Serial.println(color);
    Serial.print("Masa: "); Serial.println(masa);
    Serial.print("Radio: "); Serial.println(radio);
}

// estrella Gigante 
Gigante::Gigante(String c, float m, float r, String e)
  : Estrella(c, m, r), etapa(e) {}

void Gigante::mostrarInfo() {
    Serial.println("--- Estrella Gigante ---");
    Estrella::mostrarInfo();
    Serial.print("Etapa: "); Serial.println(etapa);
}

//  estrella Enana 
Enana::Enana(String c, float m, float r, String t)
  : Estrella(c, m, r), tipo(t) {}

void Enana::mostrarInfo() {
    Serial.println("--- Estrella Enana ---");
    Estrella::mostrarInfo();
    Serial.print("Tipo: "); Serial.println(tipo);
}

```

+ ✶⋆.˚ Arduino

```cpp

#include "Estrella.h"

void setup() {
  Serial.begin(9600);

  Gigante giganteRoja("Rojo", 2.0, 100.0, "Gigante Roja");
  Enana enanaBlanca("Blanco", 1.0, 0.01, "Enana Blanca");

  giganteRoja.mostrarInfo();
  Serial.println();
  enanaBlanca.mostrarInfo();
}

void loop() {
  // vacío por ahora pipipi
}

```

⋆｡‧˚ʚ🍓ɞ˚‧｡⋆

## Encargo Investigación sobre Mitchel Resnick  ᯓ★

### Charla Seleccionada  

**Título:** [Let's Teach Kids to Code (TED Talk, 2012)](https://www.ted.com/talks/mitch_resnick_let_s_teach_kids_to_code?subtitle=es)  

**Autor:** Mitchel Resnick – Investigador del MIT Media Lab y creador de **Scratch**.  

⁺‧₊˚ ཐི⋆♱⋆ཋྀ ˚₊‧⁺

### ¿De que trataba la charla? ( ꩜ ᯅ ꩜;)⁭ ⁭

+ **Programar como alfabetización digital:**

  Resnick compara programar con aprender a leer y escribir. No es solo para ingenieros, sino una forma de **expresión personal**, igual que dibujar o escribir.  

+ **Scratch como herramienta creativa:**

  Scratch es una plataforma gratuita y visual que permite crear juegos, animaciones e historias interactivas.  
  Además, tiene una comunidad online para compartir y colaborar en proyectos.  

+ **Beneficios de programar:**
  
  + **Creatividad:** diseñar ideas desde cero.
    
  + **Pensamiento lógico y crítico:** estructurar, organizar y mejorar el código.
    
  + **Resolución de problemas:** aprender de los errores y encontrar soluciones.
    
  + **Colaboración:** trabajar con pares y aprender de otros.  

+ **Crítica a la educación tradicional:**
  
  Resnick dice que el sistema actual se enfoca en memorizar, repetir y cumplir instrucciones.  
  Él propone fomentar la **exploración, el juego, la curiosidad y la pasión por crear**.  

+ **Modelo de los 4P del Aprendizaje Creativo:**
   
  + **Proyectos:** aprender haciendo.
    
  + **Pares:** colaborar con otros.
    
  + **Pasión:** trabajar en lo que nos motiva.
    
  + **Play/Juego:** experimentar y equivocarse como parte del proceso.

+ **Ser creadores, no solo consumidores:**
  
  En la era digital no basta con consumir tecnología, hay que **crear** con ella. Programar es una herramienta poderosa para el presente y el futuro.


⁺‧₊˚ ཐི⋆♱⋆ཋྀ ˚₊‧⁺

###  Comentario ٩꒰｡•◡•｡꒱۶

> Esta charla me pareció muy inspiradora porque pone a la programación como algo cercano y accesible.  
> Coincido con Resnick en que no se trata de formar ingenieros, sino de darle a todas las personas una herramienta para expresarse y crear.  
> Me llamó la atención su comparación entre programar y escribir, ya que pone en perspectiva que programar debería ser parte de la educación básica, como leer y escribir.  
> En mi experiencia, he podido ver cómo la experimentación y el error se vuelven parte natural del aprendizaje, algo que me motiva a diseñar proyectos más creativos.  
> También me hace cuestionar los métodos tradicionales de enseñanza, donde muchas veces se castiga el error en lugar de verlo como una oportunidad para mejorar.  
> Creo que aplicar los **4P** en proyectos de clase haría el proceso más entretenido, colaborativo y útil para el futuro.
