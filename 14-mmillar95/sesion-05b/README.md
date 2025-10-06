# sesion-05b / Clase 09 / 05.09.2025
## Conversación en la mañana

En la primera parte de la clase se habló sobre la entrega 01, promedios de nuestras notas y avance en la bitácora.

La universidad es una instancia en la que podemos errar y aprender de ello. Los proyectos son principalmente muy personales, por ende el ego es algo que nos puede jugar en contra y hay que trabajar en eso para que no sea un impedimento para poder desarrollar nuestros intereses.

## Inicio de clases
- .h prometo
- .cpp me hago cargo
- <> buscar el archivo para colocarlo en el código
- El código debe tener comentarios
- Todo debe estar ordenado (así se puede entender más fácil)
- La parte central del código es comentar que hace el código en sí 

---

## Clases

Adafruit_GFX → Es una librería muy usada para pantallas gráficas la cual permite dibujar texto, líneas, formas, etc.

Adafruit_SSD1306 → Para pantallas OLED (proyecto 01).

Ambas deben ir juntas.

```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
```

Ejemplo

```cpp
class Adafruit_SSD1306 : public Adafruit_GFX 
```
```cpp
class Completo_italiano : public Completo {}
```
Completo_italiano es un tipo de completo.
