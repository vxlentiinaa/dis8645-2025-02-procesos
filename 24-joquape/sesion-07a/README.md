# sesion-07a
## apuntes 

Encargo para el viernes: Traer 10 proyectos de internet de cosas que se pueden probar, inspirar, usar como herramienta de estudio y bitácora.
https://www.instructables.com/  https://projecthub.arduino.cc/ 
https://itp.nyu.edu/physcomp/ leer 

Motores 
motores dc : es rápido , pero no sabe donde esta se puede ver en ventiladores , la vibración del celular , solo se puede determinar para donde gira 
Motores paso a paso : lento y no sabe donde esta, requiere que le pase energía , el Arduino solo decide cuantas veces se gira en 1.8°
servomotores : sabe donde esta y se mueve con ángulos 90, 180,270,360 

### Trabajo grupal en clase 

#### entrada: primero quiero seleccionar un idioma en un menu, y después detectar un sonido

sensores:
encoder
sensor sonido digital

links de compra:

Afel Sensor de  sonido $1.000
https://afel.cl/products/sensor-sonido-digital

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
no sabemos como se conectan

#### salida: queremos que se despliegue un menu en una pantallita para elegir un idioma y que salude en el idioma seleccionado a través de sonido y mensaje en pantalla

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

Altronics modulo reproductor mp3 $4076
<https://altronics.cl/reproductor-mp3-dfplayer-mini>

Mechatronics Store modulo reproductor mp3 $3990
<https://www.mechatronicstore.cl/reproductor-mp3-wav-yx5300-micro-sd>

dudas/ataos:
se parece mucho a lo que quiere hacer otro grupo
no sabemos si se puede usar palabras con caracteres en otro idioma en la pantallita

## Encargo 

### Lenguaje natural

**1. Text Clock Bilingual (Hackster.io)**
Este proyecto muestra un reloj que muestra la hora en dos idiomas distintos, portugués e inglés. Me pareció interesante porque juega con el lenguaje visual y textual, y muestra cómo un dispositivo puede comunicarse en diferentes idiomas. Eso se conecta con nuestro proyecto porque también queremos que la máquina se exprese en más de un idioma, de una forma clara y sencilla.
<https://www.hackster.io/lagsilva/text-clock-bilingual-en-pt-with-arduino-881a6e?utm_source>

**Podcasts y lenguaje cercano**
Me fijé en cómo los podcasts usan la voz para comunicarse con la audiencia, y en cómo estructuran sus mensajes para que sean claros y cercanos. Según estudios recientes sobre podcasts en español (Delgado, 2023; Ramírez, 2023), los creadores usan entonación, ritmo y un lenguaje simple para conectar mejor con las personas, explicando ideas de manera directa y entretenida. Esto me inspira para nuestro proyecto porque queremos que el saludo de la máquina sea más humano y fácil de entender, no solo técnico. La forma en que un podcaster saluda, invita o explica algo nos sirve como ejemplo de cómo podemos “presentar” nuestro dispositivo de manera atractiva y cercana.
<https://ojs.ual.es/ojs/index.php/ORALIA/article/view/9963/8659>

### Código

**1. BasicOLEDMenu (GitHub)**
Este repositorio tiene un ejemplo súper útil de cómo hacer un menú en pantalla OLED usando un encoder. Lo elegí porque está muy bien explicado y el código se entiende fácil, así que fue clave para entender cómo movernos entre opciones, como los idiomas de nuestro proyecto.
<https://github.com/alanesq/BasicOLEDMenu>

**2. Arduino OLED Encoder Menu (Project Hub)**
Otro proyecto que me ayudó fue uno del sitio Arduino Project Hub, donde usan un encoder para moverse en un menú. Me gustó porque está bien ordenado, con imágenes, pasos y el código comentado. Sirve para ver cómo organizar la parte del menú y evitar errores al girar o presionar el encoder.
<https://projecthub.arduino.cc/yilmazyurdakul/arduino-oled-encoder-simple-menu-system-e998b8>


### Materialidad

**1. Sound Sensor with Arduino**
Este proyecto muestra cómo usar un sensor de sonido con Arduino, explicando bien las conexiones y cómo responde el sensor al ruido. Me gustó porque explica con ejemplos simples y eso me ayudó a pensar cómo el circuito puede reconocer un aplauso.
<https://projecthub.arduino.cc/m_karim02/arduino-sound-sensor-module-sound-sensor-with-arduino-f5d6ef>

**2. Arduino Sound Clap Detector**
El tutorial oficial de Arduino sobre detectar aplausos es muy claro y directo. Lo tomé como referencia porque explica paso a paso cómo hacer que un aplauso active algo, justo lo que queremos hacer en nuestro proyecto para que empiece el saludo.
<https://www.arduino.cc/en/Tutorial/ArduinoSoundClapDetector>


### Documentación

**1. Artículo de IOP Science (2018)**
Leí un artículo académico sobre sistemas embebidos con Arduino. No lo tomé tanto por el contenido técnico, sino por cómo está escrito y organizado. Me sirvió para ver cómo se estructura una documentación formal, con objetivos, método y resultados, lo que puede ayudar a dejar más clara la presentación final del proyecto.
<https://iopscience.iop.org/article/10.1088/1742-6596/970/1/012025/meta>

**2. Formato de Arduino Project Hub**
Me fijé también en cómo la gente presenta sus proyectos en Arduino Project Hub. Me gusta ese formato porque es visual, directo y fácil de leer. Tiene secciones claras para materiales, conexiones y código, algo que podríamos usar nosotros para presentar nuestro proyecto de forma más ordenada.
<Arduino Project Hub](https://projecthub.arduino.cc/>

