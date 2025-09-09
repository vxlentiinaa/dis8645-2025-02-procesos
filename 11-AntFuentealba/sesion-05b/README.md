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

## Encargo

(tengo que poner la foto)

