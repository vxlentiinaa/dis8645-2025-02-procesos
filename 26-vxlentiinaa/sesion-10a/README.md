# sesion-10a

14-10-2025

## Apuntes

- En esta clase trajimos a nuestro robot 2.0, un nuevo prototipo
- Mis compañeras revisaron el tema de la caja y la vibración del robot
- revisar la librería NewPing

### Librería NewPing

Es una librería de Arduino IDE, que facilita el trabajo de los Ultrasónicos. Contiene la lógica para realizar cálculos de distancia.

FUNCIONES:

`sonar.ping([max_cm_distance]):` envía un ping y obtiene el tiempo de eco (en microsegundos) como resultado. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.

`sonar.ping_in ([max_cm_distance]):` envía un ping y obtiene la distancia en pulgadas enteras. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.

`sonar.ping_cm ([max_cm_distance]):` envía un ping y obtiene la distancia en centímetros enteros. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.

`sonar.ping_median (iteraciones [, max_cm_distance]):` realiza varios pings (predeterminado = 5), descarta los pings fuera de rango y devuelve la mediana en microsegundos. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.

`sonar.convert_in (echoTime):` convierte echoTime de microsegundos a pulgadas.

`sonar.convert_cm (echoTime):` convierte echoTime de microsegundos a centímetros.

`sonar.ping_timer (function [, max_cm_distance]):` envía un ping y llama a la función para probar si el ping está completo. [max_cm_distance] permite establecer opcionalmente una nueva distancia máxima.

`sonar.check_timer ():` comprueba si el ping ha regresado dentro del límite de distancia establecido.

`NewPing :: timer_us (frecuencia, función):` función de llamada cada microsegundos de frecuencia.

`NewPing :: timer_ms (frecuencia, función):` función de llamada cada milisegundos de frecuencia.

`NewPing :: timer_stop ():` detiene el temporizador.

LINKS donde busqué información:

- Github Eliteio: (https://github.com/eliteio/Arduino_New_Ping)

- El Octavo Bit: (https://eloctavobit.com/librerias-arduino/newping)

En Github sale este código como "inicial":

```cpp
#include "New_Ping.h"
New_Ping new_Ping;

void setup() {
  new_Ping.begin();
}

void loop() {
  new_Ping.process();
}
```

---

Le pedimos ayuda a Aarón para que nos ayudara a ordenar el archivo que teníamos del código

Al cambiar nuestro código ".ino" a clases en el sensor ultrasónico tuvimos un problema con esta parte del código:

```cpp
float EntradaUltrasonico::medirDistancia() {
```

Ya que estaba en void no en float, si está en void no nos dejaba "return" la distancia al final del código y necesitabamos eso para poder usar la distancia en otras partes del código.

---

### Proceso de nuevo robot: AND-Y

Decidimos cambiarle el nombre a nuestro robot, antes se llamaba Ram-on y ahora AND-y. Nos causó gracia porque nos acordamos de la compuerta AND que vimos en clases. 

Este día fue intenso por una parte, ya que teníamos problemas con el código. El sensor al medir distancia, reproducía todo el rato el mismo audio. Por lo que pedímos ayuda a Aarón y nos ordenó un poco el código; en el archivo SalidaMotorVibracion teníamos escrito que el motor medía distancia y vibrara, pero el motor no tiene sensores, entonces es poco coherente lo que habíamos puesto ahí 



