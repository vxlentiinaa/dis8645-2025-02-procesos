# sesion-07a 23/09

## Apuntes clase

- Cosmotécnica/tecnodiversidad
  
Concepto que desarrolla Yuk Hui en su libro The Question Concerning Technology in China. Critica la idea que exista una sola tecnología universal. Propone entender la tecnología como inseparable de un cosmos y una moral: Cada sociedad desarrolla sus técnicas en base a su visión del mundo (cosmos) y sus valores (ethos)

[Toda la teoría del universo](https://www.instagram.com/_todalateoriadeluniverso/)

- [Susana Chau](https://www.linkedin.com/in/susana-chau/?originalSubdomain=cl): Comunicadora social, periodista.
- [Liquen Lab](https://liquenlab.cl/)
- [Yuk Hui](https://cajanegraeditora.com.ar/autores/?autor=hui-yuk): Estudió ingeniería informática y filosofía en la Universidad de Hong Kong.
- Bienal de artes mediales
- begging NFC: Near Field Communication, es una tecnología de comunicación inalámbrica de corto alcance que permite la transferencia de datos entre dos dispositivos acercándolos entres sí. [NFC](https://www.amazon.com/Beginning-NFC-Communication-Arduino-PhoneGap/dp/1449372066)
- CW&T -> [Time Since Launch](https://cwandt.com/products/time-since-launch)
  
---

- Los botones y/o perillas son buenos para el backstage
- Módulo RTC ds1302 real time clock

## Motores

- **motor DC**: Es rápido y no sabe dónde está, lo podemos encontrar en drones, ventiladores, ventilador del celular
- **motor paso a paso**: Es lento, preciso y no sabe donde está, pero sabe cuanto girar. Se mueve a grados, por ejemplo 1.8° y tienen un torque, el cual es pra saber cuál es la capacidad del peso que puede levantar.
- **servomotor**: SG90, Puede girar en 90°,otro en 180° y otro en 360° pero no sabe donde está este. sabe dode está y es relativamente preciso. Tiene la biblioteca en arduino lista, se llama servo.
- **motor sincrono**: Siempre va a la misma velocidad

## LEDS

- tiras led
- LED rgb
- neopixel
  
(<https://www.demasled.cl/cintas-led/>)

---
Poyecto 02 se netrega el 17 de octubre

Integrantes:

`Leonas.ino`

- Yamna Carrión [yamna-bit](https://github.com/sofiacartes/dis8645-2025-02-procesos/tree/main/04-yamna-bit)
- Sofía Cartes
- Millaray Millar
[mmillar95](https://github.com/sofiacartes/dis8645-2025-02-procesos/tree/main/14-mmillar95)
- Vania Paredes
 [21vaniaparedes](https://github.com/sofiacartes/dis8645-2025-02-procesos/tree/main/21-vaniaparedes)
- Valentina Ruz [vxlentiinaa](https://github.com/sofiacartes/dis8645-2025-02-procesos/tree/main/26-vxlentiinaa)

### Ideas proyectos

- Idea 1

Funcionará mediante la interacción con botones, al apretarlo se reproducirá el saludo en algún idioma. Cada botón tiene un idioma y una gestualidad predeterminado

joystik: restet + arriba un idioma+ abajo + derecha + izquierda

parámetro elegir idiomas/cantidad

**Entrada:** Mediante un joystick la persona tendrá diversas interacciones (arriba, abajo, derecha, izquierda y presionar el centro, es reset).

- reproductor de idiomas  por joystick
- leguaje diferencia de dialecto
- joystick y repoducir sonido
- buscar una forma que sea mas interactivo

**Salida:** Al interactuar, se reproducirán audios de saludos en distintos idiomas, como: italiano, español chileno, japonés y portugués. Al mismo tiempo, como respuesta, dependiendo el idioma se moverá de manera representativa, como: japonés-reverencia.
Nos falta como invitar a la persona.

idea funable, no hacer.

- Idea 2

**Entrada:** Que al estar lejos te pida acercarse, mientras el robot tendra un movimiento tiritando, para poder contarte un secreto.

Esto será mediante los siguientes componentes: motor DC , ultrasonico, reproductor y speaker.

**Salida:** Cuando una persona esté lo suficientemente cerca, el robot te susurre el secreto.

Para que te susurre tenemos pensado en regular el sonido del altavoz o utilizar audifonos para escucharlo.

Definir: ¿Qué tipo de secreto? ¿Cómo te dice que te acerques?

- Sensor de proximidad que me llame a utilizarlo.
- Según la proximidad de la persona, te salude pero de distinto volumen.

## Encargo 12

Buscar 2 referentes asociados al proyecto: Lenguaje natural (personas), código, materialidad, documentación.
Escribir un párrafo por cada uno de los referentes encontrados, citando las fuentes, y explicando por qué lo elegiste, qué te aporta, qué te inspira, o incluso si lo incluyes como antiejemplo.

Cada persona del  grupo traer 4 referentes de internet y comentar qué proyectos se parecen

### Referentes
  
- Trata de un robot vibratorio hecho en origami: plegando papel, incorporando un motor vibratorio y una pila (moneda) para generar movimiento.

[kvriet](https://github.com/kvriet/Origami-vibration-robot)

- Interruptor de vibración
  
Enseña cómo usar un sensor de vibración, con una placa Arduino para detectar movimiento o vibración, y activar un buzzer cuando la vibración es detectada.

<https://www.instructables.com/How-to-use-a-vibration-sensor-shake-switch-Arduino/>

- Es un robot casero que responde a estímulos con voz y movimientos, usando Arduino, sensores IR, servos y un módulo de audio.
  
  <https://www.instructables.com/Easy-to-Make-Talking-Humanoid-Robot/>

- idea de construir el robot con legos
  
 <https://makerzoid.cl/products/robot-master-premium?>

 ### Proyectos similares

- [brauliofigueroa2001](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/10-brauliofigueroa2001/sesion-07a) [Bernardita-Jesus](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/13-Bernardita-Jesus/sesion-07a) 
 
Su proyecto trata de una máquina que tiene unos ojos que identifiquen y triangulen la profundidad de dónde está el humano. Cuando la persona se acerque a un espacio, una oreja, le hable con un sonido aleatorio.

- Las similitud es que ambas máquinas dependen de la cercanía e interacción de la distancia de la persona.
- Se utiliza la voz y el sonido.
- Ambas máquinas susurran.

- [santiagoCliffotd](12-santiagoClifford/sesion-07a)

Su proyecto trata sobre crear un robot "creepy", que genere sensación de incomodidad y de "sentirse observado" en los usuarios

- inclusión en la salida de movimiento.
- interacción mas directa con la persona.

Personalmente encuentro ese proyecto similar en comparación a los otros. Cada uno de nosotros partimos con la base de realizar una máquina que salude, pero cada uno vio formas diferentes de hacerla y siento que solo hay partes muy pequeñas en común como:

- outputs
- intputs
- sensores
- cercanía de interacción con la persona.
- que logre generar sentimientos en la presona.
  

