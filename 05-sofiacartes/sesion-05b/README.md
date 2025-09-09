# sesion-05b 05/09

## Apuntes clase

- *<>* : Significa que hay que buscar el archivo para colocarlo en el código.
- **.h** : Son las cosas que piuede hacer la pantallita. Las h son los encabecados, me entero de qué exite. Prometo.
- **archivo cpp** : Nos encargamos de que las cosas ocurran, me entero de lo que hace esto. Me hago cargo.

Parte central del código es comentar antes de hacer el código, para saber que es lo que hace el código en si.

- Arquitectura arm: instrucciones para chiquitito
- Adafruit_GFX es una biblioteca grande, para hacer gráficas en general.
- Atributos son variables

 ```cpp
class Adafruit_SSD1306 : public Adafruit_GFX {
 ```

es como decir el tipo de completo

 ```cpp
class Completo_italiano : public Completo {}
 ```

Inheritance: te permite que una clase rehuse metodos y atributos de otras clases, dentro de una clase

las clases se usan cuando queremos crear estructuras de datos; cuando no nos cabe en el lenguaje de programación

 ```cpp
#ifndef POEMA_PARRA_H
#define POEMA_PARRA_H

class Texto {}
 ```

<https://www.w3schools.com/cpp/cpp_inheritance.asp>
