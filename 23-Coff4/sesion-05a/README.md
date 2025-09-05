# sesion-05a


Por temas de solemnes y demás, no creo que pueda actualizar para este día. El viernes me pondré las pilas (o incluso ver si avanzo mañana).

Solo quiero entender de qué tratan las "Clases" ....φ(・∀・*)

Por lo que recuerdo, son carpetas que tienen instrucciones fijas, con las cuales podemos hacer diferentes perfiles en otro documento diferente.
(Cuando investigue mejor, me extenderé más).

---

Actualización demoníaca

*ME ENFERMÉ de nuevo (˘▽˘)*

Esta vez me perdonarán por escribir un poco menos de lo habitual.

"Class"

Las clases son grupos de variables y funciones recopiladas, para terminar de unirse.

Según los profes: *Es como un molde de galletas.*

Lo que significaría que adentro de este molde estaría la masa y las decoraciones.

*Pero lo importante de esto es que las galletas pueden cambiar su masa y decoraciones para hacer diferentes combinaciones,
pero siguiendo la misma forma del molde.*

¿Para qué sirven las clases?

- Organizarse mejor con los archivos.

- No tener que escribir y repetir más líneas de código de lo normal.

- Pueden utilizarse en otros proyectos, ahorrando mucho tiempo.

- Y pueden ser compartidas // Siempre es bueno compartir con el de al lado.

¿Cómo se crean las clases?

Para esto necesitaremos 3 "páginas":

1. .ino

2. .h

3. .cpp

- Ino: En esta página se dispondrá de los códigos de la página .h y .cpp, en donde se podrán cambiar diferentes variables.

- h: En .h se declaran las diferentes categorías que se usarán para la clase.
En palabras del profe: Aquí hacemos la promesa de que existen cosas, pero que no lo están aún.

- cpp: Aquí se viene la parte de la programación, en donde esas promesas se cumplen (se debe importar .h a este archivo).

Esto, al ser parte de C++, no entiende el lenguaje de Arduino, por lo tanto debe ser importado con <<include>> y no con "include".

... O sea que <<>> hace que no se vea el texto, pero espero se entienda.

Ahora esto lo traspasaré al ejercicio hecho en clases sobre las personas.

Todo comienza creando las 3 páginas. Nos centraremos en .h por ahora.

Ya estando en la página, crearemos las categorías de estas personas:

edad + rut

Tenemos la promesa lista:
```cpp
#ifndef PERSONA_H // si no se encuentra "PERSONA_H" se busca
#define PERSONA_H // al encontrarlo se define y se acopla al documento

class Persona {
  private: // sirve para que nadie pueda cambiar aquellos datos de la clase
    String rut;   
    int edad;    

  public: // esto declara que esto puede ser cambiado por cualquiera
    // Constructor: sirve para dar los valores iniciales de cada persona y siempre se llamará igual que la clase
    Persona(String r, int e);

    void mostrarDatos();
    void setEdad(int nuevaEdad);
    int getEdad();
    String getRut();
};
#endif // en vez de terminar con el murciélago y el punto y coma, se termina con endif
```

Con ello nos iríamos a .cpp para poder hacer el código en donde se utilizará Serial.println y diferentes comandos:

```cpp
void Persona::setEdad(int nuevaEdad) {
  edad = nuevaEdad;
}


En estos casos se debe poner la clase con ::. // Cabe aclarar que aquí me perdí demasiado, así que solo seguiré con lo que entiendo y en algún momento volveré a retomar.

String Persona::getRut() {
  return rut;
}
```

Y en estos casos se llamará a la String y se debe poner return para que "vomite" la info.

Una vez se tenga todo programado, nos iremos al archivo inicial .ino en donde crearemos nuestras personas:

```cpp
#include "Persona.h"

Persona aristoteles("0-1", 25); 
Persona felipito("8.714.763-0", 30);
```

(esto está demasiado simplificado (ノ＞＜)ノ)

Pero con las clases podemos designar los RUTs y los años, y cambiarlos las veces que queramos sin arruinar el código o extenderlo de aquí al otro lado de la Tierra.

---

(　҂` ﾛ ´)☞ GITHUB, TE APUNTO A TI Y SOLO A TI.
¡OTRA VEZ TUVE QUE BORRAR TODO POR TUS SINCRONIZACIONES, GRRRRR!

¿Una chica no puede demorarse más de 20 minutos (...creo que he estado más de 20) en actualizar su bitácora?

