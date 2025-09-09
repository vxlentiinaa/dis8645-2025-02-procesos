# sesion-05a

## Clase 5a: 02/09 MÁQUINAS COMPUTACIONALES

Nota: Hoy no fui a clases por motivos personales, de todas formas me vi la clase grabada. Estuvo algo intensa, pero lo bueno es que gracias a los videos puedo repetir cosas que no me quedan claras para poder aprender a mi ritmo. Muchas gracias por eso, ayuda bastante :).

El inicio de la grabación comienza abriendo un *sketch* nuevo en Arduino con terminación `.ino`, en el cual se pueden abrir más carpetas en el proyecto para generar orden al momento de ir haciendo los códigos.

**EJEMPLO**: Archivo cpp

Proyecto principal-> Miprimercpp.ino

```cpp
 #include "Constante.h"

void setup() {
// put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:

  Serial.println(numEstudiantes);
}
```


Dentro se puede subdividir-> Constante.h 

```cpp

// Variable 
// Todo dentro del archivo lo protege de futuras equivocaciones (respaldo) 
// Siempre tiene un incio y un término 

#ifndef  CONSTANTE_H
#define  CONSTANTE_H 

const int numEstudiantes= 29; 

#endif 
```

Conceptos clave

`cpp`-> Programación estructurada (principal)

`.h`-> Variable

`clase`-> Molde

Tipo de anotaciones
- x_x-> underscore/subrayar
- estoEsAnotaciónCamello

En palabras de Aaron "Todo lo chileno es español, pero no todo lo español es chileno"

arduino-> Chileno

c++-> Español

Esto sirve principalmente para que en un mismo proyecto de Arduino se puedan generar más archivos `.h` para asignarle un orden al código que se esté creando y que en un futuro no sea un problema. Estos cumplen la función de variables o anotaciones adicionales que se pueden ocupar o no en el archivo principal, porque de todas formas se tiene que declarar o incluir en la principal para utilizarlo.

Nota extra: Nunca había ocupado tanto los caracteres de un computador XD y aún sigo pasando apuntes :) 
