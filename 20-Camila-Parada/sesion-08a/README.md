# ⋆₊˚⊹♡ Clase 08a - Vuelta de clases ♡⊹˚₊⋆

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

***

### Estudios para progresar

Quise replicar

***

### Posdata

Hoy estoy cansadita, muchos días quedándome hasta tarde en la u por gusto.

***

°˖✧◝(⁰▿⁰)◜✧˖°
+
3
