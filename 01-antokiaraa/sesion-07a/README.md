# sesion-07a

## Grupo para robotcito que saluda

### Grupo 03 - Chispop

01-antokiaraa
16-javieramoraga-rgb
18-ppia97
19-Hiinalia
24-Joquape

## Qué vamos a utilizar?

### Actuadores

- Modulo reproductor mp3

entrada: primero quiero seleccionar un idioma en un menu, y después detectar un sonido

### Sensores requeridos

- Encoder con boton
- Microfono (sensor de sonido)

### links de compra sensores

Afel Sensor de  sonido $1.000
[AFEL](https://afel.cl/products/sensor-sonido-digital)

Mechatronic Store CL Sensor de sonido digital $1990
[MECHATRONIC](https://www.mechatronicstore.cl/sensor-de-sonido-digital-ajustable-hc-20/)

MercadoLibre Sensor Sonido $2490
[MERCADO LIBRE](https://articulo.mercadolibre.cl/MLC-437895383-sensor-sonido-microfono-analogo-digital-ky-037-mic-max--_JM)

Altronics Sensor de sonido $1537
[ALTRONICS](https://altronics.cl/sensor-sonido-ky-037)

MercadoLibre Encoder Pulsador $2490
[MERCADO LIBRE](https://articulo.mercadolibre.cl/MLC-443587887-modulo-encoder-rotatorio-potenciometro-pulsador-max--_JM)

Afel Encoder presionable $2.000
[AFEL](https://afel.cl/products/encoder-rotatorio-ky-040-360-grados)

MCI Electronics Encoder pulsador $2290
[MCI](https://mcielectronics.cl/shop/product/modulo-encoder-rotatorio-con-pulsador)

dudas / ataos:
no sabemos como se conectan

## Salida

queremos que se despliegue un menu en una pantallita para elegir un idioma y que salude en el idioma seleccionado a través de sonido y mensaje en pantalla

### actuadores

pantallita OLED
modulo reproductor mp3

### links de compra actuadores

Afel pantalla OLED $6500
[AFEL](https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules)

MercadoLibre pantalla lcd oled $5435
[MERCADO LIBRE](https://articulo.mercadolibre.cl/MLC-1673497965-pantalla-lcd-4-pines-128x64-oled-096-para-arduino-_JM)

MCI Electronics display oled $5490
[MCI](https://mcielectronics.cl/shop/product/display-oled-de-128-x-64-pixeles-controlable-por-i2c-29546/)

Altronics modulo reproductor mp3 $4076
[ALTRONICS](https://altronics.cl/reproductor-mp3-dfplayer-mini)

Mechatronics Store modulo reproductor mp3 $3990
[MECHATRONICS](https://www.mechatronicstore.cl/reproductor-mp3-wav-yx5300-micro-sd)

dudas/ataos:
no sabemos si se puede usar palabras con caracteres en otro idioma en la pantallita

### Encargo 12

"leer las bitacoras de colegas, encontrar similitudes, diferencias, preguntas y aciertos de sus máquinas saludadoras propuestas. Citar correctamente las fuentes."

## Encargo 13

"buscar 2 referentes asociados a tu proyecto de cada una de estas 4 categorías: 1. lenguaje natural (personas), código, materialidad, documentación. escribir un párrafo por cada uno de los referentes encontrados, citando las fuentes, y explicando por qué lo elegiste, qué te aporta, qué te inspira, o incluso si lo incluyes como antiejemplo."

### Código

- Este proyecto muestra cómo conectar y programar un módulo DFPlayer Mini para reproducir archivos de audio desde una tarjeta microSD utilizando un Arduino. Muestra las conexiones mediante una visualización similar a la de Wokwi por lo que me da ayuda con la idea de como se podría armar, también el autor incluye el código a utilizar que se podría probar directamente en Wokwi y ver cómo funciona, solamente que no explica mucho para que sirve cada cosa ya que casi no tiene comentarios.

Instructables. (2021). MP3 Player With Arduino Using DF Player Mini. <https://www.instructables.com/MP3-Player-With-Arduino-Using-DF-Player-Mini/>

- Biblioteca de arduino para implementar un de menú. Podria servir para ver de qué manera se debe armar el código para la visualización del menú o usarlo como base en caso de que nos sirva, al no haber referencias visuales es un poco complicado saber cómo funciona.

[Menu system](https://github.com/jonblack/arduino-menusystem/tree/master)

### Lenguaje

- Robot nao: Este es un robotcito de asistencia personal programable usado principalmente en la educación, en particular encontré un vídeo donde traduce lo que se le muestra, lo tomé ya que nos sirve para entender la interacción entre persona y robotcito, el tipo de voz que usa y la manera en la que se comunica.

[Robot Nao traduciendo en tiempo real](https://youtu.be/ZWb24EQ9Oa4?si=fuAkUPDflMSAVE8M)

### Materialidad

- Robot otto: Se muestra como el robotcito está armado por partes y piezas, la implementación de una personalidad incluyendo piezas impresas en 3D y sensores también como parte del diseño.

[Robot otto](https://www.ottodiy.com)
