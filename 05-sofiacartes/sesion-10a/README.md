# sesion-10a 14/10

## Libreria NewPing

"Es una librería para el IDE de arduino que facilita el trabajo con sensores ultrasónicos. Esta librería ya contiene toda la lógica para realizar los cálculos de distancia con nuestro sensor HC-SR04, lo cual simplifica nuestro código." 

### Funciones

- `sonar.ping ([max_cm_distance]):` envía un ping y obtiene el tiempo de eco (en microsegundos) como resultado. `[max_cm_distance]` permite establecer opcionalmente una nueva distancia máxima.

- `sonar.ping_in ([max_cm_distance]):` envía un ping y obtiene la distancia en pulgadas enteras. `[max_cm_distance]` permite establecer opcionalmente una nueva distancia máxima.

- `sonar.ping_cm ([max_cm_distance]):` envía un ping y obtiene la distancia en centímetros enteros. `[max_cm_distance]` permite establecer opcionalmente una nueva distancia máxima.

- `sonar.ping_median (iteraciones [, max_cm_distance]):` realiza varios pings `(predeterminado = 5), descarta los pings fuera de rango y devuelve la mediana en microsegundos. [max_cm_distance]` permite establecer opcionalmente una nueva distancia máxima.

- `sonar.convert_in (echoTime):` convierte echoTime de microsegundos a pulgadas.

- `sonar.convert_cm (echoTime):` convierte echoTime de microsegundos a centímetros.

- `sonar.ping_timer (function [, max_cm_distance]):` envía un ping y llama a la función para probar si el ping está completo. `[max_cm_distance]` permite establecer opcionalmente una nueva distancia máxima.

- `sonar.check_timer ():` comprueba si el ping ha regresado dentro del límite de distancia establecido.

- `NewPing :: timer_us (frecuencia, función):` función de llamada cada microsegundos de frecuencia.

- `NewPing :: timer_ms (frecuencia, función):` función de llamada cada milisegundos de frecuencia.

- `NewPing :: timer_stop ():` detiene el temporizador.


Sacado de: <https://eloctavobit.com/librerias-arduino/newping>

