# sesion-05a

Las 10 categorías aristotélicas.

C es un lenguaje antiguo, de 1972, se llama así porque antes había un lenguaje que se llamaba B.

Las extensiones principales son .c, y los headings son .h.

No hay que confundirlo con C++ ni con C# (C Sharp). 

C++ tiene un logo “super design”, que salió en 1983, se ocupa mucho para microcontroladores, donde tenemos que escribir mucho y ser muy específicos para que el computador trabaje menos.

También nos mostraron la existencia de p5.js, donde es mucho menos estricto, o al menos así entendí que lo transmitieron, donde podemos escribir muchísimo menos para que algo funcione, pero el computador tiene más pega.

OpenFrameworks es un entorno de programación que se hace en C++, que es una herramienta para crear aplicaciones de manera creativa.

Hay un computador que se llama “Norns”, le gusta mucho a Aaron, que tiene de sistema operativo Linux, que dentro corre un lenguaje llamado SuperCollider, que es super latero de escribir, son muchas líneas, tiene hartas comas, es bien later. Todos los parámetros u “objetos” que son necesarios para que corra se pueden hacer más fáciles con “Lua”, un lenguaje que constantemente conversa con SuperCollider.

Balatro está hecho en "Lua", ¡increíbleeee! 

Chuck fue creado como respuesta a los otros lenguajes para crear música que tienen otros paradigmas. Aarón mencionó que le gusta mucho la tesis que corresponde a este lenguaje, donde el tiempo es lo más importante, donde puedes improvisar. 

Esoland es un carrete de lenguajes de programación esotéricos.

Existe una persona en Instagram que estudia la fonética, donde creó un lenguaje propio para poder hablar en “pájaro”.

Turing complete es un lenguaje que hace todo lo que un computador es capaz de hacer. 

Ahora pasamos a programar en C++.

¿Qué hicimos? Abrimos un sketch de Arduino.

El nombre del proyecto es el mismo nombre de la carpeta del archivo.

En la esquina superior derecha puedo crear una nueva tab, para crear nuevos archivos .ino. Cuando el código sea muy grande, puedes segmentarlo. Con el ejemplo que nos dieron, siendo el grupo de la semana pasada que hizo la animación con el pajarito, podría estar todo el código de las imágenes en una nueva TAB.

Los archivos solo se conocen a sí mismos, no tienen por qué “conocer” al de al lado, deberíamos escribir #include “nombreDeLaOtraTab.h”.

El resto de los tabs de mi proyecto debería tener la sintaxis .h. 

Podemos tener archivos que tengan código auxiliar para aportar al archivo principal.

Lo siguiente es **MUY IMPORTANTE**, ya que esto protege al código de un error de compilación, donde puede estar definido algo múltiples veces.

```cpp

// Si es que no está definido algo, aquí pondría el nombre del tab en mayúsculas, ejemplo WAOS_H.
#ifndef WAOS_H

// definirlo, o sea que escribiría el WAOS_H
#define WAOS_H

// termina el llamar a este archivo, para que no sea llamado 2 veces
// Esto debe estar al final del archivo.
#endif

```

Porque crearon C++ y por qué no se quedaron con C, es porque tiene clases, entre otras cosas.

Solo cuando definamos class, tendrá un punto y coma justo después del murciélago final };

Dentro de las clases hay muchas opciones, y uno parte de las opciones.

Dentro de la industria se utiliza public, para estas clases vamos a hacer todo public. Aquí vamos a escribir funciones, no están llamadas funciones para no confundir a las personas, se llaman métodos, pero son funciones.

Necesitamos una que se llame exactamente como el nombre de la clase, esto es un constructor, sirve para crear nuevas instancias, esto es como el molde de una galleta.

Dentro de esta clase definiremos la existencia de la persona. El constructor dice: "Que necesito sí o sí para empezar a funcionar". 

Así como existe el constructor, existe el destructor, que dice que elimine la existencia de esa persona, donde tendría que escribir el nombre del constructor con una virgulilla (~) antes del nombre del constructor.

Las definiciones dentro de las clases terminan en ;

Luego vamos a crear un archivo que esté anexado como .cpp, donde vamos a traer todas nuestras funciones definidas del .h para poder “echarnos” los “;” para cambiarlos por murciélagos {} y de esta manera definir todo lo que representa cada una de estas funciones. 

## Módulo después del break

Las funciones pueden retornar algo, cuando no queremos que retornen nada, esto será un void.

Una clase es un constructo computacional que agrupa variables. 

Hay una diferencia sutil entre «» y “”, donde las comillas están aquí mismo, mientras que <> significa que lo busque donde quiera que esté del computador. 

La gracia del .cpp, entre otras cosas, es que el orden no importa.

En Chile, para ser persona, tiene que tener WhatsApp y RUT.

Es de buenos modales que mi clase esté en un archivo separado. 


