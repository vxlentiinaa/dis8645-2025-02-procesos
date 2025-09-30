# sesion-07a

Concepción teoría del universo
<https://www.instagram.com/_todalateoriadeluniverso/>

Susana- Chau <https://www.linkedin.com/in/susana-chau/?originalSubdomain=cl>

Charla Yuk Hui filósofo <https://uchile.cl/noticias/224945/entrevista-a-yuk-hui-filosofo-de-tecnologia-hongkones->

Entrega proyecto 2, 17 de octubre, 30 minutos por grupo.  

Encargo para el viernes, traer 10 proyectos por cada grupo de cosas de las que nos podemos inspirar. Comentar semejanzas y diferencias con otros proyectos. 2 ejemplos de códigos, materialidad, documentación y lenguaje natural de humanos (adjetivos, verbos, y adverbios) similares a mi proyecto.

**NFC (Near Field Communication)**, en castellano Comunicación de Campo Cercano, es una tecnología que permite la comunicación de corto alcance entre dos dispositivos inalámbricos de manera cómoda y rápida.

La **computación física** consiste en la interacción entre los mundos digital y físico, creando sistemas que pueden percibir el entorno a través de sensores, actuar sobre él con actuadores y controlar estos procesos con microcontroladores.
<https://itp.nyu.edu/physcomp/>

- módulo RTC DS 1302 real time clock, sensor que mide el tiempo.
- <https://hackaday.com/> página para buscar ejemplos de proyecto.
- <Las llamadas que nunca hice: Voyager | Centro Gabriela Mistral> proyecto que utiliza el sonido y otros componentes.
- módulo grabación reproducción de audio ISD1820
- **motor DC** es rápido y no sabe donde está. <Motores de Alta Velocidad – Afel>
- **motor paso a paso** no sabe donde está y es lento ULN.
- **servo motor SG90** gira a los lados dependiendo de la capacidad que tengo el motor.
- motor síncrono, siempre va a la misma velocidad independientemente del esfuerzo que tiene que hacer, se usa en escaleras eléctricas.
- rotating LED display <https://www.youtube.com/watch?v=tHjmvry00_w&themeRefresh=1> pantalla muy bacan que se lee solo al girar.
  
## Idea definitiva proyecto 2

idea de Sebastián:

Una máquina que, al tener o no tener frío, te saluda agitando un dispositivo que tendrá. Esta máquina te dará un feedback a través de un display para explicar si es que no te va a saludar por el frío o si te va a saludar por el frío. Esta funcionará a partir de un sensor de temperatura, donde el rango de funcionamiento estaría especificado como menos de 20 °C.

Sensor ultrasónico para la presencia del usuario
Saludar con la “mano” es tener la mano en una posición neutra, para luego sacudir, de izquierda a derecha, entre los ángulos 135 y 45 de una circunferencia múltiples veces, entre 3 y 5, para realizar el saludo, y volviendo a la posición neutra para terminar el saludo.

Los sensores y actuadores que quiero que tenga este proyecto deberían ser un display, servomotor, sensor de temperatura, sensor de presencia.

Cotización

- Servomotor: (SG90) $1.990 <https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=e6931ef89&_ss=r>
- LDR: 5u. x $500 (alternativa) <https://afel.cl/products/pack-5-fotoresistores-gl5528-ldr?_pos=1&_sid=ec4cfaec3&_ss=r>
- Sensor Ultrasónico: (HC-SR04) $1.500 <https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?_pos=1&_sid=1a8918b48&_ss=r>
- Pantalla led $6.500 <https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules?_pos=2&_sid=5fbaf1454&_ss=r>
- Sensor de temperatura y humedad DHT11 $2.300 <https://afel.cl/products/sensor-de-temperatura-y-humedad-dht11?_pos=1&_sid=13a5a7b0d&_ss=r>
  
paso a paso

1. Máquina inicia en estado neutro
2. Si no detecta a nadie se mantiene en este estado, en donde ambas manos estarán en suspensión y en la pantalla no se mostrará nada
3. Si detecta a una persona, se esperan 3 segundos para actuar según la temperatura medida en el ambiente
4. Si la temperatura es menor o igual a (15) grados celsius, el servomotor no actuará y mostrará en display un mensaje del porqué no quiere saludar, además de una expresión facial importada a través del Arduino que se puede observar en el display
5. Si la temperatura es mayor a (15) grados celsius, el servomotor actuará para dar el saludo (donde su "brazo" se moverá de lado a lado entre los grados 135 y 45 para simular un saludo de mano como lo realizaría un humano) y se mostrará en display un mensaje de texto para saludar, junto a una expresión facial.
6. El ciclo del saludo se repetirá 3 veces y el mensaje durará 15 segundos en la pantalla
7. La persona al retirarse hará que la máquina vuelva a su estado neutro.
   
## Encargo 12,
 "leer las bitacoras de colegas, encontrar similitudes, diferencias, preguntas y aciertos de sus máquinas saludadoras propuestas. Citar correctamente las fuentes."

El grupo de 05-sofiacartes: querían hacer la máquina que cuenta un secreto, con uso del step motor que está mencionado en sus materiales. 
Similitudes y diferencias: la máquina se comunica con el usuario como la nuestra, por no utilizamos los mismos materiales. 

El grupo de 07-valechavezalb: una máquina dispensadora de chicles que dependiendo del color te daría un mensaje distinto. Similitudes y diferencias: la máquina se da un mensaje a el usuario como la nuestra, por no utilizamos los mismos materiales, ni da el mensaje la misma forma. 

El grupo de 10-brauliofigueroa una máquina que “te persigue” con la mirada y que la oreja de esta máquina se acabase hablando, para añadirle un sentido cómico. Similitudes y diferencias: me gusta que la máquina tenga un poco más personalidad, comparte materiales similares con nuestro grupo. 

El grupo de 12-santiagoClifford quería hacer una máquina que se incomode con la presencia de una persona, medida a través del sonido. Similitudes y diferencias: algo similar podría ser que la máquina tiene personalidad y reacciona acorde a lo que “quiere”, pero no utiliza materiales similares.

## Encargo 13,
"buscar 2 referentes asociados a tu proyecto de cada una de estas 4 categorías: 1. lenguaje natural (personas), código, materialidad, documentación. escribir un párrafo por cada uno de los referentes encontrados, citando las fuentes, y explicando por qué lo elegiste, qué te aporta, qué te inspira, o incluso si lo incluyes como antiejemplo."

- Código (implementaciones de sensores + actuadores interactivos) con ayuda de chat gpt

Ejemplo A: Arduino Controlled Namaste Greeting Robot
  
En este proyecto, un robot saluda (“Namaste”) moviendo servomotores al detectar presencia con un sensor ultrasónico HC-SR04 (da un poco de miedo). Usa múltiples servos para brazos, cabeza, etc., controlados desde Arduino con la librería Servo.
<https://www.electronicsforu.com/electronics-projects/hardware-diy/arduino-controlled-namaste-greeting-robot?utm_source=chatgpt.com>

Ejemplo B: Proyecto “Making Servo Motors React to Sensors”

Un tutorial donde un servo reacciona a un sensor IR: si detecta un objeto, mueve el servo cierto ángulo; si no, lo mueve a otro.
<https://arduinointro.com/articles/projects/making-servo-motors-react-to-sensors?utm_source=chatgpt.com>

- Materialidad (componentes físicos / construcción de la obra) encontrados en google academico
 
Ejemplo A: Ultrasonic sensor explorer. utiliza servo motor y sensor ultrasonico. 
<https://ieeexplore.ieee.org/abstract/document/7542987?casa_token=aK9yCv5gOjkAAAAA:JIewbo_j-7jEo58Oa7PM6m8L53h-f7fY109Fgldq3WJse26VrBCjeXwos2CimxkdltpzsEXBvUOupw>

Ejemplo B: AN ULTRASONIC SENSORY-BASED DEVICE FOR REAL-TIME DETECTION OF TERRORIST THREATS USING ARDUINO-UNO. Utiliza un servo motor para rotar el sensor ultrasónico. 
<https://harvardpublications.com/hijert/article/view/409>

- Documentación (cómo se describe el proyecto, papers o informes) encontrados en google academico 

Ejemplo A: A Fuzzy Controlled Greeting Robot: An Interactive System for Welcoming and Assisting Visitors
<https://ieeexplore.ieee.org/abstract/document/11137744?casa_token=Oees9wQvMdIAAAAA:Bu6zQWp4Xj0GXyo7vmb6O6H8RandvlOFQPzeHsRQ4YUJbv9qCtTfkWHHtjyjfHpU5wNlxF2ayMZnkYM>

Ejemplo B: Design of an Autonomous Greeting Robot
<https://www.proquest.com/openview/16caaee1c6c3729bd805a31205288646/1?pq-origsite=gscholar&cbl=52938>

- Lenguaje natural (cómo se comunica “la experiencia” con adjetivos, verbos, adverbios)  con ayuda de chat gpt

Ejemplo A: “Thermally Speaking” (instalación interactiva de calor-luz)

En la descripción literaria del proyecto se emplean expresiones como “translator of body heat,” “shifting curtain of light,” “responds to body heat,” “interactive dialogue” etc. Se usan adjetivos como “interactive,” “shifting,” “glowing,” verbos como “respond,” “translate,” “evoke,” adverbios como “dynamically,” “gradually.”
<https://kobistudio.com/thermally-speaking-light-art-installation/?utm_source=chatgpt.com>

Ejemplo B: “The Shy Machine” (blog/descripción del artista)

En la narración se describe la escultura como “shy,” “opens and closes depending on noise levels,” “reacts awkwardly,” “slow undulations,” “calmer pulse,” “sensitive time,” etc. Se usan adjetivos: “shy,” “slow,” “nervous,” “calmer.” Verbos: “opens,” “closes,” “reacts,” “learns.” Adverbios: “slowly,” “sensitively,” “midway.” 
<https://daricgill.com/2018/08/25/shy-machine-interactive-art/?utm_source=chatgpt.com>

