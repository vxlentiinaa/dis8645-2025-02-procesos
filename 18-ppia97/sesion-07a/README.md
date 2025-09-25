# sesion-07a
## APUNTES CLASE 23.09.25 ── .✦

⟡ Teoría del Universo/ Cosmotecnica/tecno diversidad. YUK HUI.

⟡ Liquen Lab: Bienal de Artes Medievales.

⟡ Encargo viernes: Traer 10 proyectos de internet de cosas que se puedan probar, inspirar, usar como herramienta de estudio y bitácora.

### Grupo "Chispop" -`♡´-
- Antonella Aguilar
- Javiera Moraga
- Pía Orellana
- Angela O'Ryan
- Josefa Quape

### SOBRE EL PROYECTO ── .✦
⟡ Enconder (y su botón), Pantalla y Micrófono

⟡ Encoder: Encoder rotatorio KY-040 360 grados, $2.000 la unidad en AFEL. [ENCODER](https://afel.cl/products/encoder-rotatorio-ky-040-360-grados?_pos=2&_sid=9dcf28df1&_ss=r)

⟡ Pantalla: Pantalla LCD Oled 1.3" 128x64 caracteres azules. $6.500 la unidad en AFEL. [PANTALLA](https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules?utm_term=&hsa_kw=&hsa_mt=&gad_campaignid=1711725544)

⟡ Sensor Sonido: Sensor Sonido Digital. $1.000 la unidad en AFEL. [SENSOR SONIDO](https://afel.cl/products/sensor-sonido-digital)

⟡ Modulo Reproductor: Modulo Reproductor MP3 DFPlayer Mini. $2.990 la unidad en AFEL. [MODULO REPRODUCTOR](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini)

#### ENCARGOS ── .✦

**I. Leer las bitacoras de colegas, encontrar similitudes, diferencias, preguntas y aciertos de sus máquinas saludadoras propuestas. Citar correctamente las fuentes.**

  ⟡ Similitudes: 
- Muchos de los proyectos utilizan recursos de reproducción de audio para que el robot hable, quizás porque se genera una interacción mucho más cercana al oír que solo leer un saludo.
- En general se espera que los robots comiencen en estado de reposo para luego activarse mediante un estímulo externo (presencia, temperatura, presionar algo, por un ruido, etc)
- Todos utilizaran más de un sensor y agregado (sonido, pantalla, voz, movimiento, etc).

  ⟡ Diferencias:
- Todos los proyectos tienen distintos objetivos de interración de saludo, algunos más complejos, otros más simples.
- Algunos proyectos buscan personificar más al robot, que tenga ojos, se muevan, quizás que tenga más personalidad con eso.
- Hay proyectos que tienen propuestas más ambiciosas y complejas, mientras otros tienen unas más simples y amigables.

  *⟡ ¿Que un proyecto sea más complejo/ambicioso lo hace mejor?* 

**II. Buscar 2 referentes asociados a tu proyecto de cada una de estas 4 categorías: 1. lenguaje natural (personas), código, materialidad, documentación. escribir un párrafo por cada uno de los referentes encontrados, citando las fuentes, y explicando por qué lo elegiste, qué te aporta, qué te inspira, o incluso si lo incluyes como antiejemplo.**

  ⟡ Lenguaje Natural:
  - f

  ⟡ Código:
- [ARDUINO+OLED+ENCODER SIMPLE](https://projecthub.arduino.cc/yilmazyurdakul/arduino-oled-encoder-simple-menu-system-e998b8)
  
Elegí este proyecto, ya que se está implementando la lógica de navegación por menú que queremos implementar en nuestro proyecto para que el usuario pueda seleccionar entre los distintos idiomas, usando el encoder rotatorio y la pantalla OLED que también queremos utilizar. En el proyecto se usa la librería SSD1306 (Adafruit) para manejar la pantalla OLED, y un interrupt para leer los pulsos del encoder, también manteniendo un "menuCount" para saber que opción del menú esta seleccionada en el momento.

- [DFPLAYENCODER](https://github.com/experimentool/dfplayencoder/)

Elegí este otro proyecto, ya que se utiliza un Arduino junto a un DFPlayer que reproduce audio desde una tarjeta SD y un encoder rotatorio para poder cambiar de archivos, además de una pantalla OLED 128x64 para que puedas ver que archivo es el que se reproduce. Esto nos ayuda en nuestro proyecto ya que podemos seguir esa lógica pero que cada idioma sea un archivo de saludo en la SD numerado, también para saber como usar el enconder a la hora de elegir y ya nosotros deberiamos cambiar la opción de presionar el botón para reproducir una pista a que esta se reproduzca al activarse con un ruido fuerte.

  ⟡ Materialidad:

  ⟡ Documentación:
