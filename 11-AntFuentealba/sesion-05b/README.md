# sesion-05b
## Apuntes

### Archivos en C++

- `<>` → Incluir un archivo externo (por ejemplo, una biblioteca).
- `.h` → Son los encabezados. Aquí se declara qué existe (clases, funciones, atributos).
- `.cpp` → Contiene la implementación. Aquí se define lo que realmente hace el código.

### Conceptos Básicos

- Arquitectura ARM → Conjunto de instrucciones optimizadas para procesadores pequeños.
- Adafruit_GFX → Biblioteca base para gráficos en pantallas, usada como punto de partida para otras más específicas.
- Atributos → Variables que pertenecen a una clase.

### Clases y Herencia
```cpp
class Adafruit_SSD1306 : public Adafruit_GFX {};
```
Esto significa que Adafruit_SSD1306 hereda métodos y atributos de `Adafruit_GFX`.

Analogía:
```cpp
class Completo_italiano : public Completo {};
```

Un Completo_italiano es un tipo de Completo, pero con características adicionales.

Herencia = Permite que una clase reutilice métodos y atributos de otra.

### Cuándo usar clases
- Cuando necesitamos estructuras de datos más complejas.
- Cuando el lenguaje por sí solo no alcanza para organizar lo que queremos hacer.

### Ejemplo de declaración de clase
```cpp
#ifndef POEMA_PARRA_H
#define POEMA_PARRA_H

class Texto {};

#endif
```

Más info: W3Schools - C++ Inheritance

## Tarea en clases

```cpp
// Definir clase Guitarra
#ifndef GUITARRA_H
#define GUITARRA_H
#include <Arduino.h>

class Guitarra {
  public:
    String marca;
    int cuerdas;
    bool acustica;

    Guitarra(String m, int c, bool a);
    void afinar();
    void tocar(String cancion);
};

#endif
```

```cpp
// Definir clase GuitarraElectrica
#ifndef GUITARRAELECTRICA_H
#define GUITARRAELECTRICA_H
#include <Arduino.h>

class GuitarraElectrica {
  public:
    String marca;
    int cuerdas;
    bool tienePastillasActivas;

    GuitarraElectrica(String m, int c, bool p);
    void conectarAmplificador();
    void usarDistorsion();
};

#endif
```

```cpp
// Definir clase ModeloGuitarra
#ifndef MODELOGUITARRA_H
#define MODELOGUITARRA_H
#include <Arduino.h>

class ModeloGuitarra {
  public:
    String nombreModelo;
    String color;

    ModeloGuitarra(String n, String c,);
    void mostrarEspecificaciones();
    void cambiarColor(String nuevoColor);
};

#endif
```

## Encargo 9
Escuchar y comentar uno de los tres primeros discos de la banda Primus.


### Frizzle Fry (Primus, 1990)
Contexto:

Frizzle Fry es el primer álbum de estudio de Primus, lanzado en 1990 por el sello Caroline/Prawn Song. Tras su debut en vivo con Suck on This en 1989, este disco marcó la verdadera entrada de la banda al mundo de las grabaciones de estudio. Aquí se consolida el sonido que caracterizaría a Primus: una mezcla de funk metal experimental, virtuosismo en el bajo y letras cargadas de humor y sátira. Es un álbum crudo y directo que puso a la banda en el mapa de la música alternativa de principios de los noventa.

Impresión personal:

Escuchar Frizzle Fry es entrar a un sonido muy distinto y lleno de energía. El bajo de Les Claypool es muy protagonista y le da mucha fuerza a las canciones. Las letras son raras y con humor, y la guitarra y la batería acompañan con un ritmo divertido pero también un poco oscuro. No suena como un disco “perfecto” ni “limpio”, pero justamente eso lo hace sentir fresco, original y con mucha personalidad.

## Encargo 10
Investigar sobre la obra de Mitchel Resnick, leer uno de sus escritos o ver una de sus charlas, y comentarla críticamente.
Contexto:

Mitchel Resnick es un referente en el ámbito de la educación creativa, reconocido por su trabajo en el MIT Media Lab y por ser el creador de Scratch, una plataforma de programación visual que ha transformado la enseñanza de la informática en niños y jóvenes. Su enfoque pedagógico se basa en el concepto de "Jardín de Infancia para toda la vida" (Lifelong Kindergarten), que promueve el aprendizaje a través de proyectos, pasiones, compañeros y juego.

Let's Teach Kids to Code y análisis crítico:

Mitchel Resnick propone que la programación no debe enseñarse únicamente como una habilidad técnica, sino como una herramienta para expresar ideas, resolver problemas y fomentar la creatividad. Resnick destaca la importancia del aprendizaje activo y lúdico, donde los niños puedan experimentar, equivocarse y colaborar, convirtiéndose en creadores activos en lugar de consumidores pasivos de tecnología. Entre las fortalezas de su enfoque se encuentran su carácter inclusivo y accesible, la promoción de habilidades transversales como el pensamiento crítico y la creatividad, y la alineación con metodologías pedagógicas modernas basadas en proyectos. Sin embargo, la implementación efectiva de estas ideas depende del contexto educativo y del apoyo de docentes capacitados; además, aunque herramientas como Scratch son gratuitas, requieren acceso a computadoras e internet, lo que puede limitar su alcance. A pesar de estas limitaciones, la charla ofrece una visión innovadora y transformadora de la educación tecnológica, mostrando que aprender a programar puede ser una experiencia creativa y significativa, siempre que se considere la infraestructura y los recursos necesarios para sostener este tipo de aprendizaje.


