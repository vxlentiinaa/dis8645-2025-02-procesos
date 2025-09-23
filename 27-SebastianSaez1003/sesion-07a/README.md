# sesion-07a

Concepción teoría del universo
<https://www.instagram.com/_todalateoriadeluniverso/>

Susana- Chau <https://www.linkedin.com/in/susana-chau/?originalSubdomain=cl>

Charla Yuk Hui filósofo <https://uchile.cl/noticias/224945/entrevista-a-yuk-hui-filosofo-de-tecnologia-hongkones->
Entrega proyecto 2, 17 de octubre, 30 minutos por grupo.

Encargo para el viernes, traer 10 proyectos por cada grupo de cosas de las que nos podemos inspirar. Comentar semejanzas y diferencias con otros proyectos. 2 ejemplos de códigos, materialidad, documentación y lenguaje natural de humanos (adjetivos, verbos, y adverbios) similares a mi proyecto.
**NFC (Near Field Communication)**, en castellano Comunicación de Campo Cercano, es una tecnología que permite la comunicación de corto alcance entre dos dispositivos inalámbricos de manera cómoda y rápida.

La **computación física** consiste en la interacción entre los mundos digital y físico, creando sistemas que pueden percibir el entorno a través de sensores, actuar sobre él con actuadores y controlar estos procesos con microcontroladores. <https://itp.nyu.edu/physcomp/>

- módulo RTC DS 1302 real time clock, sensor que mide el tiempo.
- <https://hackaday.com/> página para buscar ejemplos de proyecto.
- <Las llamadas que nunca hice: Voyager | Centro Gabriela Mistral> proyecto que utiliza el sonido y otros componentes.
- módulo grabación reproducción de audio ISD1820
- **motor DC** es rápido y no sabe donde está. <Motores de Alta Velocidad – Afel>
- **motor paso a paso** no sabe donde está y es lento ULN.
- **servo motor SG90** gira a los lados dependiendo de la capacidad que tengo el motor.
- motor síncrono, siempre va a la misma velocidad independientemente del esfuerzo que tiene que hacer, se usa en escaleras eléctricas.
- rotating LED display DIY Rotating LED Display: An Arduino-Powered Time and Weather Display Project. POV Propeller Display pantalla muy bacan que se lee solo al girar.

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
