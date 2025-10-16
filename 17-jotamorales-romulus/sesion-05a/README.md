# sesion-05a

Fecha: 02-09-2025

## Apuntes 

- Para programar algo, primero hay que entenderlo y definirlo claramente.
- Misaa nos habló de POO: Programar usando objetos con sus datos y acciones.
- Todo objeto se compone de materia (de qué está hecho) y forma (su estructura o esencia, para qué sirve).

### Lenguajes 

C (1972): archivos .c y encabezados .h

C++ (1983): Bjarne Stroustrup. Clases y objetos. Archivos .cpp y .h.

C# (C Sharp): usado para aplicaciones y videojuegos, como en Unity.

p5.js: para programación creativa, sobre todo gráficos, animaciones e interactividad. La había utilizado en Programación Creativa Multimedia durante el primer semestre de 2025.

### Arduino 

- Arduino usa C++
  
- En el IDE, el .ino es el archivo principal.

- Se pueden crear nuevas pestañas (tabs) para dividir el código.


- Los archivos se comunican con #include "nombre.h".


- ifndef / define / endif evitan errores si un archivo se incluye más de una vez.


- "archivo.h" busca en el proyecto, <archivo.h> busca en el sistema.

### Clases y objetos
- class SprayAraña { } 

- public: acceso desde otros archivos

- Métodos: funciones (activar(), apuntar())

- Constructor: crea instancias (SprayAraña miSpray;)

- Destructor (~): elimina instancias

- Atributos: datos (nivelQuímico, cantidad)

- set/get: cambian o leen atributos (setCantidad(50), getNivelQuímico())

- void: función que no devuelve nada (void activar();)

- Guardar .h y .cpp separados
