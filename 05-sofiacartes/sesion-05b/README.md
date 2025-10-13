# sesion-05b 05/09

## Apuntes clase

- `<>`: Significa que hay que buscar el archivo para colocarlo en el código.
- `.h`: Son las cosas que piuede hacer la pantallita. Las h son los encabecados, me entero de qué exite. Prometo.
- archivo `cpp` : Nos encargamos de que las cosas ocurran, me entero de lo que hace esto. Me hago cargo.
- `""`: Es cuando el archivo está en la misma crapeta  que el archivo principal.

Parte central del código es comentar antes de hacer el código, para saber que es lo que hace el código en si.

- Arquitectura arm: instrucciones para chiquitito
- Adafruit_GFX es una biblioteca grande, para hacer gráficas en general.
- Atributos, son variables

 ```cpp
class Adafruit_SSD1306 : public Adafruit_GFX {
 ```

es como decir el tipo de completo

 ```cpp
class Completo_italiano : public Completo {}
 ```

Completo italiano, es un tipo de completo.

---

- `Inheritance`: te permite que una clase rehuse metodos y atributos de otras clases, dentro de una clase.
- `#indef`: verifica si el código ha estado definido (`define`) antes en un archivo o en un archivo incluido.
- `endif`: es el cierre del código definido.
  
Las clases se usan cuando queremos crear estructuras de datos; cuando no nos cabe en el lenguaje de programación.

Dentro de una clase hay:
- Atributos: Variables
- Métodos: Funciones
  
[w3schools](https://www.w3schools.com/): página WEB que sirve para aprender sobre programación, tiene ejemplos de código y distintas herramientas. 

 ```cpp
#ifndef POEMA_PARRA_H
#define POEMA_PARRA_H

class Texto {}
 ```

### Actividad en clases
Cabe destacar que aún no entiendo bien completamente lo de las clases, si pueden repasarlo algún día, sería de mucha ayuda.

En este caso, hay un archivo principal que es  `lentes.ino ` que tiene varios archivos dentro, como por ejemplo:  `lentesSol.h` , `lentesSol.cpp` , `lentesOpticos.h` y `lentesOpticos.cpp`

Dentro del archivo `lentesOpticos.h` hay dos archivos más, `conRUV.h` y `sinRUV.h`

```cpp
#ifndef LENTESOPTICOS_H
#define LENTESOPTICOS_H

#include "conRUV.h"
#include "sinRUV.h" //no sabemos si va aqui, porque esta en el cpp

class lentesOpticos : public conRUV
{
  public:
      
}
```

```cpp
#include "lentesOpticos.h"

lentes::lentes(bool conRUV) {
  lentes::proteger = conRUV;
}

lentes::~lentes(bool sinRUV) {
  lentes::sinproteger = sinRUV;
}

void lentes::
```

```cpp
#ifndef LENTESSOL_H
#define LENTESSOL_H

#include "vidrioCafe"
#include "VidrioNegro"

class lentesSol : public vidrioCafe
{
public:
    
}
```

También probamos con gatos, pero se nos hizo más complicado entender, de hecho, este fue el primer código que realizamos. Aún así no entendí bien la lógica de las clases. 

Creamos el archivo principal `Gatos.ino` en donde, dentro de este archivo separamos por el sexo de los gatos y luego si es femenino o masculino. 

```cpp
#ifndef SEXOGATOS_H
#define SEXOGATOS_H

#include "femeninoGatos.h"
#include "masculinoGatos.h"

class sexoGatos
{
  public:
  sexoGatos();

  ~sexoGatos();

  femeninoGatos;
  masculinoGatos;

}

#endif
```

Luego, el día miércoles, hice un bosquejo de como irían las clases, para entenderlas mejor, donde tenemos el archivo principal que es `Fruna.ino`, en el cual se separa en dos `dulce.h` y `salado.h` (cada uno con su cpp). 

Luego `dulce.h` se separa en `galletas.h` y `gomitas.h`

- Donde en galletas, tenemos: Serranitas, doblones y tabletones
- Y en gomitas, tenemos: Gomatón, amberries y flippy

Lo mismo para salado, donde se separa en `papas.h` y `suffles.h`

- En papas, tenemos: papas Lays, papas Mom's y papas Marcopolo
- Y en suffles, tenemos: Suflé de aros de cebolla, suflé de queso y suflé tutti-frutti

![Fruna](./imagenes/frunaBitacora.jpg) 

La actividad se hizo junto a Valentina Ruz

## Encargo

### Primus

Escuchar los uno de los dos primeros discos de Primus.

Es una banda estadounidense de funk metal creada en San Francisco, California, en 1984.

"El funk metal es un género musical que surgió con la fusión de la música de la década de los ochenta incorporando los elementos de funk y heavy metal, este último normalmente alternativo, sobre todo en sus inicios."

<https://es.wikipedia.org/wiki/Funk_metal>

Disco escuchado:

#### Primus - Suck On This 1989

Es un debut discográfico atipico, que tiene la escencia muy energética. Su estilo musical es una mezcla entre funk metal, metal alternativo y rock experimental. Sus sonidos se definen por sus beats complejos.
Este álbum les proporcionó el capital para grabar su primer disco de estudio.


<https://es.wikipedia.org/wiki/Primus>

<https://www.discogs.com/es/release/2783944-Primus-Suck-On-This?srsltid=AfmBOorXEcdf_3X060BtMbRU8LZZVy2OH6ggKQ5k14miEOWXNcvVuIb6>

#### Referentes

<https://www.w3schools.com/cpp/cpp_inheritance.asp>
