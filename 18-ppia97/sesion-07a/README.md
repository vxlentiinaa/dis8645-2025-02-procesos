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

#### SOBRE EL PROYECTO ── .✦

**𔓘Entrada**: primero quiero seleccionar un idioma en un menu, y después detectar un sonido

- sensores:

encoder

sensor sonido digital

**𔓘 links de compra:** Distintos lugares.

- Afel Sensor de  sonido $1.000
(https://afel.cl/products/sensor-sonido-digital)

- Mechatronic Store CL Sensor de sonido digital $1990
(https://www.mechatronicstore.cl/sensor-de-sonido-digital-ajustable-hc-20/)

- MercadoLibre Sensor Sonido $2490
(https://articulo.mercadolibre.cl/MLC-437895383-sensor-sonido-microfono-analogo-digital-ky-037-mic-max--_JM)

- Altronics Sensor de sonido $1537
(https://altronics.cl/sensor-sonido-ky-037)

- MercadoLibre Encoder Pulsador $2490
(https://articulo.mercadolibre.cl/MLC-443587887-modulo-encoder-rotatorio-potenciometro-pulsador-max--_JM)

- Afel Encoder presionable $2.000
(https://afel.cl/products/encoder-rotatorio-ky-040-360-grados)

- MCI Electronics Encoder pulsador $2290
(https://mcielectronics.cl/shop/product/modulo-encoder-rotatorio-con-pulsador)

**𔓘Dudas / Ataos**: no sabemos como se conectan

**𔓘Salida**: queremos que se despliegue un menu en una pantallita para elegir un idioma y que salude en el idioma seleccionado a través de sonido y mensaje en pantalla

- sensores:

pantallita OLED

modulo reproductor mp3

**𔓘links de compra:** De distintas páginas.

- Afel pantalla OLED $6500
(https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules)

- MercadoLibre pantalla lcd oled $5435
(https://articulo.mercadolibre.cl/MLC-1673497965-pantalla-lcd-4-pines-128x64-oled-096-para-arduino-_JM)

- MCI Electronics display oled $5490
(https://mcielectronics.cl/shop/product/display-oled-de-128-x-64-pixeles-controlable-por-i2c-29546/)

- Altronics modulo reproductor mp3 $4076
(https://altronics.cl/reproductor-mp3-dfplayer-mini)

- Mechatronics Store modulo reproductor mp3 $3990
(https://www.mechatronicstore.cl/reproductor-mp3-wav-yx5300-micro-sd)

**𔓘dudas/ataos:** se parece mucho a lo que quiere hacer otro grupo, no sabemos si se puede usar palabras con caracteres en otro idioma en la pantallita.


##### ENCARGOS ── .✦

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
  
- [MP3 PLAYER WITH ARDUINO USING DF PLAYER MINI](https://www.instructables.com/MP3-Player-With-Arduino-Using-DF-Player-Mini/)

Elegí este proyecto, ya que su forma de documentación es muy clara y ordenada, nos muestra la lista de componentes y materiales necesarios para el proyecto, te muestra un esquema de conexión para saber cómo conectar el DFPlayer al Arduino, también te entrega el código para poder controlar la reproducción de archivos y tiene las intrucciones paso a paso desde el montaje a la programación.

- [ARDUINO NANO-BASED SMART CLIMATE CONTROL SYSTEM WITH OLED DISPLAY AND ROTARY ENCODER](https://docs.cirkitdesigner.com/project/published/e3bd9d24-3355-4c37-b304-af014f030bb8/arduino-nano-based-smart-climate-control-system-with-oled-display-and-rotary-encoder)

Seleccioné este proyecto, ya que, si bien el enfoque a nuestro proyecto es diferente, en su documentación tiene el propósito y los objetivos del sistema, la lista de componentes y materiales que se necesitan, entrega diagramas que muestran como conectar los componentes, también te entrega el codigo y tiene sus instrucciones paso a paso de como arma todo.
