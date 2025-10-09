# ⋆₊˚⊹♡ Clase 07a - Vuelta de clases ♡⊹˚₊⋆

Martes 23 Septiembre 2025

***

## Observaciones

El día anterior, mediante discord, se nos enviaron los siguientes links a modo de tener antecedentes de lo que veremos.
Primero se enviaron una sere de componentes nuevos para aplicar al Arduino: un [shield (escudo) para arduino](https://afel.cl/products/shield-data-logger-para-arduino-uno-mega) y un [módulo de reproductor](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini) que se puede conectar. La primera pieza es un circuito que cumple la función para poder registrar datos, mientras que el otro es un reproductor de audio MP3. Además de ello, se nos compartió la estrucutra para poder trabajar en el próximo [encargo grupal](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/00-proyecto-02).

Hoy, a la vuelta comenzaron hablando y mencionando varios referentes. Primero, nombraron colectivos:
- Toda la teoria del universo (Concepción): https://www.instagram.com/_todalateoriadeluniverso/
- Susana Chau (Coordinadora TTU): https://www.instagram.com/robot_infame/
- Yuk Hui : https://uchile.cl/noticias/224945/entrevista-a-yuk-hui-filosofo-de-tecnologia-hongkones-
- Liquen Lab (Magallanes): https://liquenlab.cl/
- Museo del Hongo: https://www.instagram.com/museodelhongo/?hl=es

Encargo para el viernes: Traer 10 proyectos de internet de cosas que se pueden probar, inspirar, usar como herramienta de estudio y bitácora.
Se puede buscar en páginas como [Instructables](https://www.instructables.com/) o [Projecthub de Arduino](https://projecthub.arduino.cc/) (entregados por Jannis <3).

A la par se mostró un libro que va a servir de referencia y aprendizaje ["Beginning NFC: Near Field Communication with Arduino, Android, and PhoneGap"](https://books.google.cl/books?id=ScuYAgAAQBAJ&printsec=copyright&redir_esc=y#v=onepage&q&f=false).

Además, hablamos de sensores y módulos que nos pueden interesar, a ver cómo serán costeados, las oportunidades de negociar.

Luego se nos mostraron varios referentes: 

- https://itp.nyu.edu/physcomp/
- https://hackaday.com/ (https://hackaday.com/2023/02/23/sneaky-clock-displays-wrong-time-if-it-catches-you-looking/)
- https://cwandt.com/

* Motor DC: es muy rápido, pero no sabe donde está.
* Step Motor: Se mueve a grados según una indicación de los pasos.
* Servomotor: Sabe donde está y es relativamente preciso. Hay distinto según los ángulos de rotación
* Solenoides: Movimiento líneal (Actuadores lineales). Usan mucha corriente
* Motor síncrono: Se usa en escaleras mecánicas.

## Proyecto para la solemne 02

Una máquina, que te siga con los ojos (mirada) que posea una oreja que al acercarse emita un sonido pregrabado (No definido).
Se requieren motores, sensores ultrasonicos, micrófono, parlante,

1. La persona ingresa a una habitación (sin muebles).
2. La máquina se activa y "abre los ojos" (el dispositivo se encuentra siempre funcionando) al detectar presencia (usando un sensor infrarrojo que detecte el calor).
3. La máquina procede a simular el movimiento ocular usando servomotortes, como una forma de demostrar que funciona y "está despierto".
4. Cuando la persona se acerca a una distancia precisa de x cm, un sensor de proximidad activa otra parte de la máquina.
5. Este segmento de la máquina emite una serie de sonidos pregrabados de forma aleatoria.
6. Una vez la persona se aleja la máquina cierra los ojos.

***

### Escritos del discord (Por [@FranUDP](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/28-FranUDP), editados para que tenga coherencia)

Entrada (input): 2 Sensores de ultrasonido (distancia) para triangular posición del usuario en el espacio (eje x e y). Detecta cuando la "persona" se encuenta a muy corta distancia.

Salida (output): actúa una serie de servomotores en un mecanísmo que simulan ojos humanos. Estos siguen al usuario con la "mirada". Al acercarse a cierta distancia un parlante emite sonido pre-grabado, perteneciente a una lista de archivos, de forma aleatoria.

Sensores: Ultrasónico, infrarrojo (para averiguar).

Links de compra:
- https://afel.cl/products/sensor-de-ultrasonico-hc-sr04
- https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?_pos=10&_sid=9bafdb32f&_ss=r
- https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=0b93ebcb6&_ss=r
- https://www.mechatronicstore.cl/altavoz-8-ohm-1w/?srsltid=AfmBOorYd_ZdSsyd2QMst1Va9CZJEafOTb68oafW4jWeQ_nzC1nVphqa

Dudas / ataos: ¿Cómo obtener lecturas estables del sensor ultrasónico?, ¿Cómo evitar que los ojos se queden fijos en objetos inmoviles (ambiente)?

***

### encargo-12: Análisis de Bitácoras

"Revisar las bitácoras de los demás alumos y sus proyectos grupales. A partir de ello comentas semejanzas y diferencias entre estos para poder difereciarse.
A la par, investigar sobre proyectos que puedan servir como referentes de materialidades, códigos, circuitos, modelado, entre otros."

***

### encargo-13: Referencias para el proyecto

"Buscar 2 referentes asociados a tu proyecto de cada una de estas 4 categorías: 1. lenguaje natural (personas), 2. código, 3. materialidad, 4. documentación. escribir un párrafo por cada uno de los referentes encontrados, citando las fuentes, y explicando por qué lo elegiste, qué te aporta, qué te inspira, o incluso si lo incluyes como antiejemplo."

#### 1. Lenguaje natural:

- [Animatronic Eyes](https://www.instructables.com/Animatronic-Eyes-Double-and-Single-Fully-3D-Printe/): Este es un proyecto que se centra en el desarrollo de unos ojos mecánicos. No utiliza un sensor para actuar, pero es un apoyo a la hora de entender cómo es el funcionamiento de este tipo de piezas compuestas (construcción, materiales, código, etc).
Por la parte conceptual, la mirada es un acto de presencia. La conexión que ocurre al visualizar los ojos con alguien nos da la sensación de ser presenciados, de existir. Para ello leí este [artículo de wikipedia](https://es.wikipedia.org/wiki/Mirada_(Psicolog%C3%ADa)) para usarlo como parte de una investigación, con la finalidad de definir proximamente si la mirada se centrará en el sujeto, o si talvez jugar y crear una máquina que rechaza el mirar qué es lo que se ubica delante suyo.

#### 2. Código.

- [Audio Player Using Arduino With Micro SD Card](https://www.instructables.com/Audio-Player-Using-Arduino-With-Micro-SD-Card/): Un referente realizado hace 8 años. Es por su antiguedad que se ha podido crear una serie de comentarios de otros "makers" sobre dudas y sus soluciones con código. Puede ayudar a entender cómo es la parte de codificación del arduino para poder emplear audio utilizando una tarjeta SD. No he profundizado en el conocimiento sobre audio, pero tengo la esperanza que este contenido nos sirva para el desarrollo.

#### 3. Materialidad.

- [Nombre del proyecto](link):

#### 4. Documentación.

- [Talking Milk Jug Toy](https://www.instructables.com/Talking-Milk-Jug-Toy/): El desarrollo de dicho objeto me ha gustado bastante. Al querer conseguir una creación centrada en la fabricación de máquinas que trabajan con audio, pues me pillé por curiosidad con esta páguina. Considero que el orden que posee es atractivo, desconozco si este elemento se dispone por el sitio web que lo contiene. Todo comienza con un video presentación en el que se muestra el desarrollo de este juguete por etapas, partiendo por la idea inicial, el desarrollo del diseño, la construcción, el testeo y finalizando con unas conclusiones. Me gustó que tuviera una buena producción audiovisual y fotográfica, y posteriormente compartir las instrucciones de forma textual, indicando qué piezas comprar, el proceso de diseño para las piezas (gráfico, conceptual, funcional, etc), disponer los archivos para imprimir, enseñar el montaje de las partes, además de tener vínculos a documentación complementaria que ayuda a profundizar el entendimiento. Considero que es un proyecto bastante completo, simple de entender y de montar.

***

### Estudios para progresar

Quise replicar [este referente](https://www.instructables.com/Animatronic-Eyes-Double-and-Single-Fully-3D-Printe/), puesto que en el registro y desarrollo del proyecto cuenta con un ejercicio para controlar un sólo ojo. De partida, tuve que imprimir las piezas del modelo de un sólo ojo, además de conseguir las piezas restantes (algunas personales, otras conseguidas del [lid](https://www.instagram.com/lid.udp/)). Para la primera parte de la fabricación decidí utilizar PLA en color blanco y negro, imprimiendo en la máquina "Ender 3 V3KE" dentro del laboratorio. Tras casi 2 horas y unos minutos pude conseguir un prototipo bastánte resistente. Como otra observación, el ejemplo utiliza 3 servo motores, de los cuales recomienda los MG90S (no los pude conseguir) o los SG90. Estos últimos se mencionan como unos actuadores más complejos que el primero. Al indagar sobre estos puedo destacar que el primero supera en calidad al segundo por sus engranajes de metal (lo que permite una mayor resistencia y duración), además de emplear un motor que permite ["una alta velocidad y un ángulo de rotación de 180 grados"](https://avionesteledirigidos.com/servos-mg90-o-sg90-para-mi-avion-rc/). Por otra parte, los servo SG90 suelen poseer piezas metálicas, un motor menos potente y un ángulo de movimiento en 90 grados.

  A continuación busqué los archivos de fabricación de ambos servos: [MG90S](https://www.alldatasheet.com/datasheet-pdf/pdf/1132104/ETC2/MG90S.html) y [GS90](https://www.alldatasheet.es/html-pdf/1572383/ETC/SG90/59/1/SG90.html). Ambos son archivos incompletos, por lo que requieren de una mayor recolipación de información a modo de complemento.

Dado que este es un prototipo, pues utilicé lo que tenía a mano. Por temas de tiempo es que decidí descansar y ensamblar el modelo en la sala de clases.

***

### Posdata

Hoy estoy cansadita, muchos días quedándome hasta tarde en la u por gusto.

Estoy intentando esforzarme lo más que puedo... me da miedo que mi mente no lo soporte.
Se que nadie me fuerza. Mis ansias de ser más.

***

°˖✧◝(⁰ ^ ⁰)◜✧˖°
