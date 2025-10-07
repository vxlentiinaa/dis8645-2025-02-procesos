# 🌷 sesion-08b

Martes 7 de octubre de 2025

## 🪩 Apuntes de clase 
- Un archivo .ino con todo lo que ocurre en la máquina.
- Las demás configuraciones deben estar en archivos.h para que contengan los parámetros de lo que queremos hacer.
- void configurar() son las cosas que quiero que haga mi sensor, (funciones).
- bool esta cerca = false

## Dispensador de chicles (cambiar nombre)
Nuestro proyecto se basa en un dispensador de chicles en forma de monstruo, donde manualmente puedes girar una manilla y caerá el chicle. Dependiendo del color del chicle, es la animación y el sonido que se va a reproducir, dependiendo además de las emociones que significa cada color que se detallan a continuación:

Inicialemente teniamos los siguientes colores:
- 🔴 ➜ Enojo
- 🟡 ➜ Felicidad
- 🟢 ➜ Locura 
- 🔵 ➜ Tristeza

Pero al ejecutar el código, el amarillo el sensor no lo captaba, se cambió por el color naranjo.

✦ Tenemos los siguientes colores:
- 🔴 ➜ Enojo
- 🟠 ➜ Felicidad
- 🟢 ➜ Locura 
- 🔵 ➜ Tristeza

✦ Audios:
- 🔴 Enojo ➜
- 🟠 Felicidad ➜
- 🟢 Locura ➜
- 🔵 Tristeza ➜

✦ Animaciones:
- 🔴 Enojo ➜
- 🟠 Felicidad ➜
- 🟢 Locura ➜
- 🔵 Tristeza ➜

### 🔮 Probando pantalla circular
La forma que tiene nuestro proyecto es de un monstruo, por ende, lo escencial es que tenga ojos, por lo que usar una pantalla circular es la mejor opción, ya que simula un cíclope, pero de aspecto tierno.

➜ Conexiones de la pantalla y arduino

| Arduino | GC9A01 |
|---------|--------|
| 5V      | VCC    |
| GND     | GND    |
| 11      | DIN    |
| 13      | CLK    | 
| 10      | CS     |
| 7       | DC     |
| 8       | RST    |
| 9       | BL     |

Conectamos la pantalla mediante este video en youtube (https://www.youtube.com/watch?v=k2c2zCmC_X0&t=396s), la pantalla prende, pero no se muestra la animación. En el código no muestra error, por lo que puede ser la pantalla o las conexiones.

El grupo de Sebastián, vio que teniamos el mismo problema que tuvieron ellos, y ellos ya lo habían solucionado, por lo que nos compartió su documentación para poder ejecutarla en nuestra pantalla. Además nos compratió estos links:
- (https://eazytronic.com/gc9a01-with-arduino/)
- (https://dronebotworkshop.com/gc9a01/)
  
➜ Posibles soluciones a las fallas encontradas:
- (https://www.reddit.com/r/arduino/comments/1mqbvl5/arduino_uno_gc9a01_helloworldgfxfont_fail/)
- (https://www.reddit.com/r/arduino/comments/1j74i6c/using_a_gc9a01128_tft_display_with_arduino_uno/)

🔘 Decidimos comprar otra pantalla, ya que quizás es problema de la pantalla, porque otro grupo también tuvo el mismo problema, así que optamos por comprar esta: (https://www.mechatronicstore.cl/pantalla-tft-lcd-redonda-de-1-28/)
