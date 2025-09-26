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

## Proyecto

Una máquina, que te siga con los ojos (mirada) que posea una oreja que al acercarse emita un sonido pregrabado (No definido).
Se requieren motores, sensores ultrasonicos, micrófono, parlante,

1. La persona ingresa a una habitación (sin muebles).
2. La máquina se activa (corre la corriente, comienza a activarse el arduino) al detectar presencia.
3. La máquina procede a simular el movimiento de unos ojos usando un servomotor que activa un mecanísmo que al moverse simule una mirada.
4. Cuando la persona se acerca a una distancia precisa (x cm) la máquina emite un sonido pregramado de forma aleatoria.

***

### Escritos del discord (Por [@FranUDP](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/28-FranUDP))

entrada:
sensores de distancia triangulan posición de usuario.
Detecta cuando el usuario está a muy corta proximidad.

salida:
actúa un servomotor y sigue al usuario con la mirada.
un parlante emite sonido pre-grabado aleatorio

sensores:
distancia ultrasónico

links de compra:
https://afel.cl/products/sensor-de-ultrasonico-hc-sr04

https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?_pos=10&_sid=9bafdb32f&_ss=r
https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=0b93ebcb6&_ss=r

https://www.mechatronicstore.cl/altavoz-8-ohm-1w/?srsltid=AfmBOorYd_ZdSsyd2QMst1Va9CZJEafOTb68oafW4jWeQ_nzC1nVphqa

dudas / ataos:
¿Cómo obtener lecturas estables del sensor ultrasónico? 

salida:
 Un servomotor mueve unos ojos haciendo que el robot siga al usuario con la mirada.
al detectar que el usuario está a muy corta proximidad, un parlante emite sonido pre-grabado aleatorio

sensores:
distancia ultrasónico

links de compra:
https://afel.cl/products/sensor-de-ultrasonico-hc-sr04

https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?_pos=10&_sid=9bafdb32f&_ss=r
https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=0b93ebcb6&_ss=r

https://www.mechatronicstore.cl/altavoz-8-ohm-1w/?srsltid=AfmBOorYd_ZdSsyd2QMst1Va9CZJEafOTb68oafW4jWeQ_nzC1nVphqa

dudas / ataos:
¿Cómo obtener lecturas estables del sensor ultrasónico?
¿Cómo evitar que los ojos se queden fijos en objetos inmoviles (ambiente)?

***

Revisar las bitácoras de los demás alumos y sus proyectos grupales. A partir de ello comentas semejanzas y diferencias entre estos para poder difereciarse.
A la par, investigar sobre proyectos que puedan servir como referentes de materialidades, códigos, circuitos, modelado, entre otros.

![imagen](./imagenes/a1.png)

▼ Recuperado de: https://github.com/Camila-Parada/dis8645-2025-02-procesos/blob/main/.github/workflows/markdown-lint.yml















Oye santi, tengo una duda.
¿Cómo se si es que alguien me gusta?
















### Posdata

Hoy estoy cansadita, ayer intenté, pero sin razón aparente.

***

°˖✧◝(⁰▿⁰)◜✧˖°
+
3
