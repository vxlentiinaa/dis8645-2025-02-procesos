# sesion-04b ⋆˚꩜｡

### Investigación: Poetas y su trabajo  

### Allison Parrish  

Poeta y programadora estadounidense especializada en poesía generada por computador. Su trabajo explora cómo los algoritmos, los datos lingüísticos y los procesos automáticos pueden convertirse en material poético. Es conocida por crear textos experimentales mediante bots de Twitter, análisis de corpus y 
técnicas de procesamiento de lenguaje natural. Sus obras cuestionan la autoría en la literatura digital y proponen nuevas formas de entender la poesía a través del código.

**Referencias destacadas**:  
+ *Compasses* (2019) – libro generado algorítmicamente a partir de datos textuales.
  
+ Sus bots de Twitter, que funcionan como poemas en tiempo real.  

────୨ৎ────

### Nick Montfort  
Poeta, artista digital y profesor en MIT. Su trabajo está centrado en la literatura computacional, la poesía generada y los videojuegos textuales. Se le reconoce como una figura clave en el campo de la *poesía generativa*, donde el código mismo es tanto la herramienta como la obra.  

**Características de su trabajo**:  

+ Uso de lenguajes de programación para producir textos poéticos minimalistas.
  
+ Publicación de obras que son, literalmente, programas de pocas líneas de código (ejemplo: *Taroko Gorge*).
  
+ Interés en la relación entre literatura, tecnología y estética algorítmica.  

────୨ৎ────

### Martín Gubbins  
Poeta chileno vinculado a la poesía experimental, visual y sonora. Su práctica incluye la exploración de los límites entre texto, imagen y sonido. Gubbins ha trabajado en proyectos que cruzan poesía concreta, instalaciones y performance, cuestionando la forma tradicional del poema y expandiéndolo a otros lenguajes artísticos.  

**Enfoques principales**:  

+ Poesía visual y sonora.
  
+ Instalaciones y performances que involucran al cuerpo y al espacio.
  
+ Ruptura de la linealidad textual a través de recursos gráficos y sonoros.  

────୨ৎ────

## Apuntes de clase – Martes 02 de septiembre  

### Temas principales  

+ **Programación orientada a objetos (POO)**
  
+ **Ontología orientada a objetos – Graham Harman**
  
+ **Markus Gabriel**: “No podemos acceder a los objetos, los objetos se manifiestan ante nosotros” 
   
+ **Aristóteles y las 10 categorías**: Sustancia, Cantidad, Cualidad, Relación, Lugar, Tiempo, Posición (Situación), Posesión (Hábito), Acción y Pasión (texto: *Problemas*).
  
+ **Otros conceptos**: *Mnemonic norms*, *esolang*.  

✦•┈๑⋅⋯ ⋯⋅๑┈•✦

### Lenguajes de programación vistos  

+ **C**: archivos `.c` (código principal) y `.h` (encabezados).
  
+ **C++**: creado por Bjarne Stroustrup. Según Aarón: “Hay que escribir mucho y ser más específico para que el computador haga menos cosas”.
  
  * [C++ Classes – w3schools](https://www.w3schools.com/cpp/cpp_classes.asp)
    
  * Sirven para mantener el código más limpio y ordenado.
    
  * Buenas prácticas: separar en distintos archivos (.h para la definición, .cpp para el comportamiento).
    
  * Ejemplo de analogía: “una clase es como un molde para hacer galletas”.

    ***
    
+ **OpenFrameworks**: entorno en C++, potente pero complejo de instalar.
  
+ **Swift**: usado en iOS.
  
+ **Lua**: lenguaje ligero, usado en videojuegos.
  
+ **Chuck**: lenguaje de audio en tiempo real. [Sitio oficial](https://chuck.stanford.edu/).
  
+ **Turing Complete**: concepto que indica que un lenguaje puede realizar todo lo que una computadora puede hacer.
  

✦•┈๑⋅⋯ ⋯⋅๑┈•✦


### Notas sobre Clases y Archivos 

+ **Macros en C++**
   
  + `#ifndef` → “si no existe”.
    
  + `#define` → “defínelo”.
    
  + Ejemplo: `CONSTANTES_H` (en mayúscula para destacar importancia).

    
+ **Archivos**
  
  + `.h`: define información, no ejecuta.
    
  + `.cpp`: implementa el comportamiento (usa `{}` en vez de `;`).
    
  + `.ino`: propio de Arduino, no reutilizable en otros proyectos.
    
+ **Buenas prácticas**
  
  + Separar clases en archivos distintos (reutilización).
    
  + Diferenciar entre `"string"` y `"String"`.
    
+ **Ejemplo de clase en C++**
  
  ```cpp
  int Persona::getEdad() {
      return Persona::edad;
  }
  ```

  ### CÓDIGOS ౨ৎ

```CPP
  // archivo constantes.h
#ifndef CONSTANTES_H
#define CONSTANTES_H

const int numEstudiantes = 28;

#endif

```

```CPP
  // incluyo el archivo ""constantes.h""
#include "constantes.h";

void setup() {
  // inicio la comunicacion con el monitor serial
  Serial.begin(9600);
}

void loop() {
  Serial.println(numEstudiantes);
}
```

