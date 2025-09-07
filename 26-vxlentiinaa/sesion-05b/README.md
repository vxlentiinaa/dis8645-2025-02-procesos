# sesion-05b

05-09-2025

## Apuntes

- <>: significa que hay que buscar el archivo para colocarlo en el código.
- .h: significa que estas son las cosas que puede hacer la pantallita, los h son los encabezados; me entero de lo que existen. Prometo.
- archivo cpp: significa que nos encargamos de que las cosas ocurran; me entero de lo que hace esto. Me hago cargo.
- Parte central del código es: Comentar antes de hacer el código, para saber que es lo que hace el código en si.
- se puede incluir bibliotecas dentro de bibliotecas
- los archivos h son muy crudos

---

Adafruit_GFX: es la bilbioteca de las gráficas 

AdafruitSSD1306: es la biblioteca para hacer funcionar la pantalla OLED

```cpp
Adafruitssd1306 : public Adafruit_GFX
```

Es como decir

```cpp
class Completo_italiano : public Completo {}
```
Es decir, Completo italiano es un tipo de completo

 : public (espacio/doble punto/espacio) 
 

 es como decir Completo italiano es un tipo de completo
class Completo_italiano : public Completo {}

https://www.w3schools.com/

Inheritance: te permite que una clase rehuse metodos y atributos de otras clases, dentro de una clase

- las clases se usan cuando queremos crear estructuras de datos; cuando no nos cabe en el lenguaje de programación

 ```cpp
#ifndef POEMA_PARRA_H
#define POEMA_PARRA_H

class Texto {}
