# sesion-05a
## ⤷ ゛APUNTES  ˎˊ

> Mi primer Cpp.ino

✿ En arduinos, en caso de que mi proyecto tenga muchas imágenes, apretar los tres puntos en la esquina superior derecha, colocar "New Tab", se crea un nuevo archivo y colocamos el nombre de "Imágenes", y eso crea un "imagenes.ino", en un mismo archivo de arduinos podemos tener muchos archivos ino.

✿ Ejemplo de otro Tab que se puede crear, con nombre "creditos", y se ponen las citaciones, la fecha, notas, algo que el otro quiera leer, etc. Utilizando //.

> "Los archivos solo se conocen a si mismos, no tienen por qué conocer al que esta alado". 

✿ .h es un tipo de archivo de c++

### EJEMPLO

#### MiPrimerCpp.ino

```cpp
//incluir #include "constantes.h" para que funcione.

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

 Serial.printIn(numEstudiantes);

}
```
##### constantes.h

```cpp
const int numEstudiantes = 29;
```

✿ El archivo .h no aparece en el Cpp original a pesar de que aparezcan uno al lado del otro, no saben que son vecinos (tira error). Hay que poner en el Cpp #include "constantes.h"

✿ Podemos crear archivos donde podemos definir constantes o codigo auxiliar que sirvan para el archivo principal con archivo.h. Archivo peligroso sin ver +, asi que hay que ponerle #ifndef CONSTANTES_H ; #define CONSTANTES_H ; y al final de todo #endif.

✿ Esto, para que los archivos (otros) también llamen al .h, incluso más de una vez, ya que si no tira error. Por eso en los archivos .h de bibliotecas o proyectos se utilizan los # de arriba (constructos).

✿ Explicación constructos de arriba (los tres): 
si es que no existe algo que se llame CONSTANTES_H (debe ir todo en mayúsculas, muy importantes) entonces, definelo y al final fin de if (equivalente a }). Esto asegura que nunca se pueda llamar a ese archivo 2 veces.

Quedaría: 

MiPrimerCpp.ino

```cpp

#include "constantes.h"


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

 Serial.printIn(numEstudiantes);

}

```

Constantes.h

```cpp
#ifndef CONSTANTES_H
#define CONSTANTES_H

const int numEstudiantes = 29;

#endif

```

✿ Esos # protegen de que si yo en MiPrimerCpp.ino, pongo dos veces #include "constantes.h" #include "constantes.h", no lance error.

✿ El _h es porque no se puede colocar .h en el código, asi que lo sustituye.

✿ Lo que esta en mayúsculas es porque es HORRIBLEMENTE IMPORTANTE.

> Arduino es Chileno, C++ es español a secas.
> No todo lo C++ lo puedes hacer en Ino.


✿ Clases: es un molde de galletas para hacer galletas, entonces definimos una persona para hacer varias personas (en el ejemplo de arduino). Persona va con Mayúscula al inicio porque es una clase. **Solo cuando definamos las clases el murcielago termina en ;.**

✿ Adentro de las clases hay muchas opciones, uno parte por las opciones. Ejemplo de opciones: public, private; estas son ciertas seguridades como los #. Nosotros por ahora haremos todo PUBLIC.

✿ Luego de public vamos a escribir funciones, que son las que vienen con los paréntesis. **A las funciones se les llama métodos.**

> ¿Qué es un método? Es una función pero dentro de una clase.

✿ La primera función se debe llamar igual que la clase, en este caso Persona();
Esta es el método constructor, el que dice sacate una persona, y sale una persona. Sirve para crear nuevas instancias. En este caso, parametro del constructor es un boolean lentes, true si usa lentes, false si no usa lentes.

> clase Persona es un molde de galleta. metodo Persona() nos permite hacer la galleta.

✿ Esa clase nos va a permitir definir qué es una persona.

✿ Luego existe el destructor, que le dice olvidate de esa persona, que deje de existir, se ocupa ~Persona();, porque la memoria es finita, debemos destruirla en algún momento. Todo esto va dentro de la clase public:

✿ función de tipo void: void definirEdad(int edad); : a las personas les podemos definir edad, para eso debemos darle una edad, y eso cuando lo hace no hace nada después, ocurre nomás. También pueden aparecer como void setEdad(int edad); 

✿ Otra función puede ser con int, ejemplo: int getEdad(); , esa solo devuelve la edad.

✿También se pueden definir cosas que no sean funciones, que sean valores. Ejemplo: boolEstaViva; aqui estoy diciendo que las personas dentro de ellas, dentro de la clase, tienen un booleano que dice si esta viva o no y tiene un entero que dice su edad int edad;
