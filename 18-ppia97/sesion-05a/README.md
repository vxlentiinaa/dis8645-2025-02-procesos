# sesion-05a
## APUNTES ||

Mi primer Cpp.ino
En arduinos, en caso de que mi proyecto tenga muchas imágenes, apretar los tres puntos en la esquina superior derecha, colocar "New Tab", se crea un nuevo archivo y colocamos el nombre de "Imágenes", y eso crea un "imagenes.ino", en un mismo archivo de arduinos podemos tener muchos archivos ino.

Ejemplo de otro Tab que se puede crear, con nombre "creditos", y se ponen las citaciones, la fecha, notas, algo que el otro quiera leer, etc. Utilizando //.

> "Los archivos solo se conocen a si mismos, no tienen por qué conocer al que esta alado". 

.h es un tipo de archivo de c++

**EJEMPLO**

**MiPrimerCpp.ino**
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
**constantes.h**
```cpp
const int numEstudiantes = 29;
```
El archivo .h no aparece en el Cpp original a pesar de que aparezcan uno al lado del otro, no saben que son vecinos (tira error). Hay que poner en el Cpp #include "constantes.h"
