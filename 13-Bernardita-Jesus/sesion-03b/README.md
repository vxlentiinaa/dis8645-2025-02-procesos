# Sesión-03

Viernes 22 de agosto , 2025

## Trabajo en clase

### Cosas que hablamos en la mañana

- Hablamos de las pantallas y la cantidad de pixeles que tienen, y cómo eso influye en la resolución y en cómo hay que programar.

- El Arduino puede enviar datos a las displays. Displays con menos píxeles, con segmentos, por ejemplo el de 7 segmentos que estudiamos el semestre pasado.

- Nos mostraron un ejemplo de un diseñador que utiliza esas pantallas, pero tienen unos códigos diferentes.

### Displays

Matriz LED 8x8, display de puntos, se utiliza con un chip MAX7219.

Daniel Cruz, artista que utilizó una pantalla y la conectó a LEDs dentro de botellas.

<https://www.artesmediales.uchile.cl/academico/daniel-cruz/>

Hace monitos con los registros de actividad de GitHub.

<https://github.com/gelstudios/gitfiti>

<https://web.archive.org/web/20160208093950/http://www.masivo.cl/>

Coloquio Posthumanamente hablando II <https://www.nucleofair.org/agenda/coloquio-posthumanamente-hablando-ii/>

Va a haber una charla el 27 y 28 de agosto en el MAC Parque Forestal, de 10:30 a 13:00 hrs y de 15:00 a 17:30 hrs.

Hablamos de unidades de medida, Nano.

Iniciamos sesión en Tinkercad.

Wokwi, aquí comenzamos a ver cómo podríamos controlar nuestro Arduino con una pantalla.

Chip 1306.

I2C simplifica la manera de conectar dispositivos; Arduino es capaz de comunicarse.

Board SSD1306 Reference, cuenta con cuatro salidas.

#### Pin names Board SSD1306

| Name | Description    | Arduino Uno pin |
| ---- | -------------- | --------------- |
| GND  | Ground         | GND             |
| VCC  | Supply voltage | 5V              |
| SCL  | I2C clock line | A5              |
| SDA  | I2C data line  | A4              |

Saqué la tabla de [aquí](https://github.com/wokwi/wokwi-docs/blob/main/docs/parts/board-ssd1306.md?plain=1)

<https://www.youtube.com/watch?v=j25tkxg5Vws>

### bibliotecas de codigo

Ada fruit library <https://github.com/adafruit/Adafruit-GFX-Library>

Ladyada, Limon Fried, tesis de protección de los espacios tecnológicos. <https://dspace.mit.edu/handle/1721.1/33151>

GFX

SSD1306, el resto es la resolución 128x64.

Hay lugares donde dibujas a mano los píxeles y los exportan a código.

Aaron nos estaba mostrando un código en Wokwi, pero no funcionó. A la vuelta del receso se dieron cuenta de que algo estaba mal escrito.

Números hexadecimales: es mucho más fácil aprender primero binario.

Hablamos un poco de cómo convertir binario a hexadecimal.

Es importante fallar y poner anotaciones.

Display, la pantalla tiene cuatro parámetros: altura, ancho y dos cosas más.

Nuestro computador es nuestro taller. Para utilizar las bibliotecas, es importante descargarlas en una parte específica, porque al utilizar el código busca la dirección donde las guardaste. Si las mueves de lugar, es probable que no las encuentre y, por tanto, que el código no funcione. Eso te lo va a indicar el programa.

Es difícil hacer que funcionen los códigos en nuestros computadores, pero es aún más difícil hacer que nuestros códigos funcionen en otros computadores.

---

### Referentes

- https://es.wikipedia.org/wiki/Esc%C3%A1ndalo_Sokal

- https://www.youtube.com/watch?v=JukTvlrh-Wk&rco=1

- https://www.instagram.com/nrmbnt/?hl=es tesis de flores en pantallas que se mueven

### Palabras importantes

---

## Encargo

Avanzar con el proyecto-01

grupo 05 ARRAY

- Aileen D'Espesailles
- Bernardita Lobo
- Carla Pino
- Félix Rodríguez

Estudiar números decimales (tarea impuesta por mí).
