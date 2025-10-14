# sesion-09b

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### ${\color{cyan}Visual\ programming}$

Durante la semana recordé los conceptos de [literate programming](https://en.wikipedia.org/wiki/Literate_programming), de Donald Knuth, y [transpilación](https://es.wikipedia.org/wiki/Transpilador), temas que vimos en las sesiones [06a](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/28-FranUDP/sesion-06a) y [06b](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/28-FranUDP/sesion-06b), además de los programas y lenguajes de programación visual...

Ahí fue cuando se me ocurrió la idea de escribir un flow chart con [Mermaid.js](https://mermaid.js.org/), donde se describe y muestra el funcionamiento del código en detalle:

[![](https://mermaid.ink/img/pako:eNqNU8tu2zAQ_BWCJ4VwAju2bFmHBqnzaNo8gCS9FLosRNphK5IqKTqJH5_UUz6gQPNjXVKNnVzaXgSR2tmZ2VktaWm4oDmdVua-vAPbkNujQp8kN8LOzTVwsKQ0Sgq9ACI0qYDUxslSPj9pIjW-QEUYAz3zlbmQmrEdsrv7jhwW-nD56-exe4uAsvEIkLPwhC0QHhg7WEfk6tKsyPuWn8AcAjFjNTjDGJlZ4MYhErtyYQUqbvlWt8IqqcMtUWYurBMrMkl81VhEok5DlMRvXLoGNKpuYUfJqQfL0VpF5lAZS8DJmUYSggIjG3asiAtqIiQYaxlvnn-syPF_CJWL714KZPmL1NPk8z-kfkgmRtVggSjB346zNDEY0I2w0oTArBWuNppjbo0IVpR0ClXGabf9zpY3AYYi91vrwrW5CHcQOjrUYEHjABhTYGdCH1trLGPrQp9tk_qYXAQPWBRndPXVOLQf0o1cpPSPSPFCwOUUJyH0zqZHO0VS6Ek8f9oszcZ-9IsRST1t7ZlX-xOqDj2XZrs_seN5ci1qa7gvBfE6hBitQih1MVJV96PMBVhUc9qyb31dJJeG2D89pG2RWHgeSy5RphOkiUk-P4X2r2qxeyxvFbWCrhIuHOYl5_GP0qgqyIBHNIFbHHYmhht-uEYKVccN9A7XU0b5EvckJndCO3RmJad5Y73oUIUiIBzpstCEFLS5E0oUNMdX7PatoIVeI6YG_cUY9QKzxs_uaD6FyuHJ1xwacSQBF1dtbjEpXIKJ8bqheZaNhrELzZf0gea9_dHeuDseZtm4m6bDQX_UoY943d1Lh920Nxr0s2zYG6T9dYcuInF3bzwaZf00HWdpt9cfZPvr30GIhTQ?type=png)](https://mermaid.live/edit#pako:eNqNU8tu2zAQ_BWCJ4VwAju2bFmHBqnzaNo8gCS9FLosRNphK5IqKTqJH5_UUz6gQPNjXVKNnVzaXgSR2tmZ2VktaWm4oDmdVua-vAPbkNujQp8kN8LOzTVwsKQ0Sgq9ACI0qYDUxslSPj9pIjW-QEUYAz3zlbmQmrEdsrv7jhwW-nD56-exe4uAsvEIkLPwhC0QHhg7WEfk6tKsyPuWn8AcAjFjNTjDGJlZ4MYhErtyYQUqbvlWt8IqqcMtUWYurBMrMkl81VhEok5DlMRvXLoGNKpuYUfJqQfL0VpF5lAZS8DJmUYSggIjG3asiAtqIiQYaxlvnn-syPF_CJWL714KZPmL1NPk8z-kfkgmRtVggSjB346zNDEY0I2w0oTArBWuNppjbo0IVpR0ClXGabf9zpY3AYYi91vrwrW5CHcQOjrUYEHjABhTYGdCH1trLGPrQp9tk_qYXAQPWBRndPXVOLQf0o1cpPSPSPFCwOUUJyH0zqZHO0VS6Ek8f9oszcZ-9IsRST1t7ZlX-xOqDj2XZrs_seN5ci1qa7gvBfE6hBitQih1MVJV96PMBVhUc9qyb31dJJeG2D89pG2RWHgeSy5RphOkiUk-P4X2r2qxeyxvFbWCrhIuHOYl5_GP0qgqyIBHNIFbHHYmhht-uEYKVccN9A7XU0b5EvckJndCO3RmJad5Y73oUIUiIBzpstCEFLS5E0oUNMdX7PatoIVeI6YG_cUY9QKzxs_uaD6FyuHJ1xwacSQBF1dtbjEpXIKJ8bqheZaNhrELzZf0gea9_dHeuDseZtm4m6bDQX_UoY943d1Lh920Nxr0s2zYG6T9dYcuInF3bzwaZf00HWdpt9cfZPvr30GIhTQ)

Envié el flow chart por Discord al resto del equipo, para que estuviéramos todos en la misma página en cuanto al funcionamiento del código, y luego se lo di a Gemini 2.5 Pro, para que me asistiera en continuar desarrollando el código, sin los problemas de interpretación que habíamos estado teniendo.

Para el final de la clase tenía un código que ${\color{#b0e6e6}movía}$ el servo, luego ${\color{#b0e6e6}medía}$, ${\color{#b0e6e6}guardaba}$ la medición, ${\color{#b0e6e6}movía}$ el servo, ${\color{#b0e6e6}medía}$, ${\color{#b0e6e6}guardaba}$ la medición, etc.

### [Pointers](https://arduinogetstarted.com/es/reference/arduino-reference)

La IA me recomendó que utilizara punteros en el código para que funcionaran el servo y el sensor ultrasónico en conjunto.

Un puntero se utiliza para indicar una ${\color{#b0e6e6}ubicación}$ en la memoria, es como decirle a un programa en el PC (Windows, Linux, etc.) que ${\color{#b0e6e6}acceda\ al\ archivo\ ubicado\ en}$ `C:usuario/descargas/archivo`. En este caso, "`C:usuario/descargas/archivo`" no es el ${\color{#b0e6e6}archivo}$ en sí, nomás es el ${\color{#b0e6e6}puntero}$ que le indica dónde buscarlo.

En el archivo principal tenemos declarados 2 objetos distintos, el sensor y el servo:
````ino
#include "SensorUltrasonico.h"
#include "Rotador.h"

Rotador rotador;
SensorUltrasonico ultrasonico;

void setup() {
  Serial.begin(115200);
  ultrasonico.configurar();
  rotador.configurar(&ultrasonico); 
}

void loop() {
  rotador.radar();
}
````
Para hacer que el servo pueda ${\color{#b0e6e6}comunicarse}$ con el sensor, utilizamos punteros para hacer que el servo ${\color{#b0e6e6}acceda}$ a las variables y funciones ${\color{#b0e6e6}propias\ del\ objeto}$ `ultrasonico`.

La línea dentro de `rotador.h` crea un puntero dentro del objeto `rotador` que corresponde al `SensorUltrasonico` (aún no sabe su ubicación):
````cpp
SensorUltrasonico* sensor;
````

En el archivo `.ino`, la siguiente línea le da al rotador la ${\color{#b0e6e6}ubicación}$ del sensor ultrasónico, al utilizar `&`:

````cpp
rotador.configurar(&ultrasonico);
````

Luego, dentro de `rotador.cpp`, la siguiente línea toma la dirección anterior y se guarda en el puntero `s` (variable temporal solo utilizable ${\color{#b0e6e6}dentro}$ de la función):

````cpp
void Rotador::configurar(SensorUltrasonico* s) {
````

Para hacer que la dirección del sensor ultrasónico "${\color{#b0e6e6}escape}$" de la función y pueda ser utilizada por el objeto `rotador` de cualquier forma que nos ${\color{#b0e6e6}plazca}$, se utiliza la siguiente línea, que toma la dirección y la ${\color{#b0e6e6}guarda}$ en una ${\color{#b0e6e6}variable\ del\ objeto}$ `rotador`:

````cpp
sensor = s;
````
</br>

### ${\color{cyan}Después\ de\ clase...}$

Después, durante la tarde, en el LID, logré implementar la funcionalidad de comparar la medición antigua con la nueva para determinar si hubo movimiento. Sin embargo, noté que hay ${\color{#b0e6e6}ruido}$ en las mediciones; a veces la diferencia entre la medición original y la nueva es de más de 200 cm.

Voy a intentar hacer que el ${\color{#b0e6e6}tiempo\ de\ espera}$ se aplique ${\color{#b0e6e6}después}$ de mover el servo y ${\color{#b0e6e6}antes}$ de volver a medir, para darle una superficie estable al sensor, ya que al sostenerlo en mi mano, evitando que el sensor se mueva mientras el servo era libre de rotar, resultó en mediciones consistentes.

### El lunes

Al final implementé la función `ping_median(4, 50);` de la biblioteca NewPing, para tomar múltiples mediciones y sacar el promedio, para solucionar el problema de las falsas detecciónes.

