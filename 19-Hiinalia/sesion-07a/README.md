# sesion-07a

## Para el proyecto 02

Hoy elegimos los grupos y ver qué materiales va a requerir y utilizar cada uno.
El encargo para el viernes será traer 10 proyectos de internet de cosas en las que nos podemos inspirar para empezar desde ahora a generar la bibliografía del proyecto.

Links para encontrar algunos proyectos:
<https://www.instructables.com/>
<https://projecthub.arduino.cc/>

Hablamos sobre NFC, es una tecnología de comunicación inalámbrica que significa Near-Field Communication, o comunicación de campo cercano. <https://es.wikipedia.org/wiki/Comunicación_de_campo_cercano>

Modulo RTC (Real Time Clock) le permite a un dispositivo saber cual es la hora de inmediato. Funciona de forma que se le descarga la hora de ese mismo instante y se queda con esa información.

<https://hackaday.com/> es un buen lugar para encontrar proyectos también. Hay muchos proyectos muy raros y creativos.

Un módulo reproductor MP3 es capaz de reproducir sonidos con una tarjeta SD.

Nos mostraron un proyecto que se llama “Las llamadas que nunca hice”. Su creador compró un teléfono por MercadoLibre y empezó a entender los tipos de sensores que tenía. Por ejemplo, que sensor detectaba cuando ingresaba una moneda. <https://gam.cl/actividades/las-llamadas-que-nunca-hice-voyager/>
<https://www.instagram.com/lasllamadasquenuncahice/>
<https://www.instagram.com/juanjoacuna/>

En el caso de que queramos utilizar tiras led en nuestros proyectos. Podemos también preguntarle al profe Sergio Majluf porque tiene mucho conocimiento acerca de tiras led. O también sirve si es que queremos una habitación gamer con luces led. <https://demasled.cl/> 


### Motores

Un motor DC es rápido y no sabe dónde está. Un motor es una máquina que funciona con transducción.

Mini motor paso a paso, funciona a grados. Según Gemini, 
Un "mini motor paso a paso" se refiere a un motor eléctrico de tamaño reducido que convierte impulsos eléctricos en movimientos mecánicos precisos y discretos, llamados "pasos".

Micro Servomotor es un motor muy preciso para controlar el movimiento del eje. Usualmente es muy frágil y se rompe con facilidad por lo preciso que es.

Cada motor se usa para distintas cosas, según la necesidad.

Una escalera mecánica utiliza un motor extremadamente caro que se llama motor síncrono. Este motor hace que se mueva siempre a la misma velocidad establecida. Utiliza más energía cuando detecta una persona para poder mantener la misma velocidad.

## Trabajo cotización

entrada: primero quiero seleccionar un idioma en un menú, y después detectar un sonido

sensores:
encoder
sensor sonido digital

links de compra:

Afel Sensor de  sonido $1.000
<https://afel.cl/products/sensor-sonido-digital>

Mechatronic Store CL Sensor de sonido digital $1990
<https://www.mechatronicstore.cl/sensor-de-sonido-digital-ajustable-hc-20/>

MercadoLibre Sensor Sonido $2490
<https://articulo.mercadolibre.cl/MLC-437895383-sensor-sonido-microfono-analogo-digital-ky-037-mic-max--_JM>

Altronics Sensor de sonido $1537
<https://altronics.cl/sensor-sonido-ky-037>

MercadoLibre Encoder Pulsador $2490
<https://articulo.mercadolibre.cl/MLC-443587887-modulo-encoder-rotatorio-potenciometro-pulsador-max--_JM>

Afel Encoder presionable $2.000
<https://afel.cl/products/encoder-rotatorio-ky-040-360-grados>

MCI Electronics Encoder pulsador $2290
<https://mcielectronics.cl/shop/product/modulo-encoder-rotatorio-con-pulsador>

dudas / ataos:
no sabemos cómo se conectan


salida: queremos que se despliegue un menú en una pantallita para elegir un idioma y que salude en el idioma seleccionado a través de sonido y mensaje en pantalla

sensores:
pantallita OLED
modulo reproductor mp3

links de compra:

Afel pantalla OLED $6500
<https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules>

MercadoLibre pantalla lcd oled $5435
<https://articulo.mercadolibre.cl/MLC-1673497965-pantalla-lcd-4-pines-128x64-oled-096-para-arduino-_JM>

MCI Electronics display oled $5490
<https://mcielectronics.cl/shop/product/display-oled-de-128-x-64-pixeles-controlable-por-i2c-29546/>

Altronics módulo reproductor mp3 $4076
<https://altronics.cl/reproductor-mp3-dfplayer-mini>

Mechatronics Store módulo reproductor mp3 $3990
<https://www.mechatronicstore.cl/reproductor-mp3-wav-yx5300-micro-sd>

dudas/ataos:
se parece mucho a lo que quiere hacer otro grupo
no sabemos si se puede usar palabras con caracteres en otro idioma en la pantallita

## Encargo

2 referentes para cada una de las categorías.

### Lenguaje

<https://www.youtube.com/@MarcoMeatball>

MarcoMeatball es un cantante de ópera que ahora trabaja como actor de doblaje y hace videos reaccionando a distintas piezas musicales dentro de la industria de los videojuegos. Personalmente, siento que tiene una manera muy expresiva y agradable de hablar. Eso probablemente se debe a su entrenamiento como cantante. Sería un buen referente en el caso de grabar nuestras propias voces para los saludos, y que no quede plano.

<https://www.youtube.com/@TheInfographicsShow>

The Infographics Show es un canal dedicado a explicar varios temas en distintas áreas, utilizando un lenguaje simple de entender para cualquier persona. Pienso que en presentaciones, hay que considerar que no todo el mundo va a poder entender lenguaje técnico, por lo que es importante saber explicar temas en simples palabras. Me gusta este canal por su simpleza, fácil de entender, preciso y conciso.

### Código
<https://github.com/forntoh/LcdMenu>
Encontré esta biblioteca en GitHub que permite crear sistemas de menús en arduino. Sería muy útil tenerlo a mano para entender cómo funciona un código de un menú y además entender los elementos de la interfaz para que el usuario sea capaz de interactuar de manera eficiente.

<https://www.instructables.com/Clapper-LED-Candle>

Este referente es una vela LED que se prende y se apaga aplaudiendo. La verdad es que no entendí muy bien cuál fue el proceso, los componentes, y el código, ya que hay mucho vocabulario que no entiendo bien. Aún así siento que me inspira para conseguir el resultado de que el arduino reproduzca el sonido cada vez que aplauda. Puede ser un buen acercamiento a lo que sería el proceso.

### Documentación

<https://projecthub.arduino.cc/rexhepmustafovski/build-a-simple-digital-keyboard-that-plays-real-notes-using-arduino-373f0e>

Me gusta la forma en que documenta esta persona. Incluyó una lista de componentes, explicó cómo funciona su sistema, incluyendo diagramas para entender mejor. Mi parte favorita es que incluye una sección donde explica en varios puntos las cosas que puede aprender un estudiante de su proyecto. Me inspira a pensar el proyecto 02 como una oportunidad de enseñar también.

### Materialidad

<https://www.instructables.com/Add-Voice-to-Your-Arduino-Projects-Without-Using-A>

Este referente aporta a mi proyecto directamente en el caso de que quiera usar componentes fuera de lo que se compra. En vez de utilizar un reproductor mp3 con tarjeta SD, enseña como utilizar cualquier parlante en casa para evitar gastos extra. Esta es una buena opción en el caso de no tener disponible el reproductor si quiero que mi arduino reproduzca un sonido.

## Encargo 

Leí de las bitácoras, y la de @santiagoClifford me pareció muy interesante. Con su grupo van a crear una máquina que detecta personas a través del sonido, y que el usuario se sienta observado por sus ojos. Ese sentimiento de incomodidad me parece que sería muy bueno poder manifestarlo a través de una máquina. Me recuerda bastante a una película protagonizada por Jim Carrey, llamada The Truman Show. El protagonista se sentía constantemente observado. Podría ser un buen referente para este proyecto.
Hay una cosa que me genera dudas. La parte de los micrófonos en puntos estratégicos no sabría decir qué tan bien funcionan considerando que hay que usar un espacio más grande. Quizás habría que considerar buscar otra forma de hacer la detección del usuario.
