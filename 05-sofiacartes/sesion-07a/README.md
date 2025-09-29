# sesion-07a 23/09

- Cosmotécnica/tecnodiversidad
- Toda la teoría deu universo <https://www.instagram.com/_todalateoriadeluniverso/>
- Susana- Chau
- Liquen lab
- Bienal de artes mediales
- begging NFC
- CW&T -> Time Since Launch <https://cwandt.com/products/time-since-launch>
- Los botones y/o perillas son buenos para el backstage
- Módulo RTC ds1302 real time clock

## Motores

- **motor DC**, es rápido y no sabe dónde está, lo podemos encontrar en drones, ventiladores, ventilador del celular
- **motor paso a paso**, es lento, preciso y no sabe donde está, pero sabe cuanto girar. Se mueve a grados, por ejemplo 1.8° y tienen un torque, el cual es pra saber cuál es la capacidad del peso que puede levantar.
- **servomotor**, SG90, puede girar en 90°,otro en 180° y otro en 360° pero no sabe donde está este. sabe dode está y es relativamente preciso. Tiene la biblioteca en arduino lista, se llama servo.
- **motor sincrono** siempre va a la misma velocidad

## LEDS

-  tiras led
-  LED rgb
-  neopixel
  
### ideas proyectos

- Idea 1 

funcionará mediante la interacción con botones, al apretarlo se reproducirá el saludo en algún idioma. Cada botón tiene un idioma y una gestualidad predeterminado

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

## Encargo

Cada persona del  grupo traer 4 referentes de internet y comentar qué proyectos se parecen
  
- Trata de un robot vibratorio hecho en origami: plegando papel, incorporando un motor vibratorio y una pila (moneda) para generar movimiento.

[kvriet](https://github.com/kvriet/Origami-vibration-robot)

- Interruptor de vibración
  
Enseña cómo usar un sensor de vibración, con una placa Arduino para detectar movimiento o vibración, y activar un buzzer cuando la vibración es detectada.

<https://www.instructables.com/How-to-use-a-vibration-sensor-shake-switch-Arduino/>

- Es un robot casero que responde a estímulos con voz y movimientos, usando Arduino, sensores IR, servos y un módulo de audio.
  
  <https://www.instructables.com/Easy-to-Make-Talking-Humanoid-Robot/>

- idea de construir el robot con legos
  
 <https://makerzoid.cl/products/robot-master-premium?>

