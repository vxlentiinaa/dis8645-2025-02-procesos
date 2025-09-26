# sesion-07a 23/09

- cosmotécnica/tecnodiversidad
- toda la teoría deu universo <https://www.instagram.com/_todalateoriadeluniverso/>
- Susana- Chau
- liquen lab
- bienal de artes mediales
- begging NFC
- CW&T -> Time Since Launch <https://cwandt.com/products/time-since-launch>
  
---

## encargo viernes

- Cada persona del  grupo traer 4 referentes de internet

arduino.com 

- Comentar qué proyectos se parecen

---

- los botones y/o perillas son buenos para el backstage
- Módulo RTC ds1302 real time clock

### motores

- **motor DC**, es rápido y no sabe dónde está, lo podemos encontrar en drones, ventiladores, ventilador del celular
- **motor paso a paso**, es lento, preciso y no sabe donde está, pero sabe cuanto girar. Se mueve a grados, por ejemplo 1.8° y tienen un torque, el cual es pra saber cuál es la capacidad del peso que puede levantar.
- **servomotor**, SG90, puede girar en 90°,otro en 180° y otro en 360° pero no sabe donde está este. sabe dode está y es relativamente preciso. Tiene la biblioteca en arduino lista, se llama servo.
- **motor sincrono** siempre va a la misma velocidad

### LEDS

-  tiras led
-  LED rgb
-  neopixel
  
#### idea 1 

funcionará mediante la interacción con botones, al apretarlo se reproducirá el saludo en algún idioma. Cada botón tiene un idioma y una gestualidad predeterminado

joystik: restet + arriba un idioma+ abajo + derecha + izquierda

parámetro elegir idiomas/cantidad 

Entrada: Mediante un joystick la persona tendrá diversas interacciones (arriba, abajo, derecha, izquierda y presionar el centro, es reset). 

- reproductor de idiomas  por joystick 
- leguaje diferencia de dialecto
- joystick y repoducir sonido
- buscar una forma que sea mas interactivo

Salida: Al interactuar, se reproducirán audios de saludos en distintos idiomas, como: italiano, español chileno, japonés y portugués. Al mismo tiempo, como respuesta, dependiendo el idioma se moverá de manera representativa, como: japonés-reverencia.
Nos falta como invitar a la persona. 

idea funable, no hacer.

#### idea 2

Entrada: Que al estar lejos te pida acercarse cmediante un movimiento como tiritando, para poder contarte un secreto. 

motor DC , ultrasonico, reproductor, altavoz.

Salida: cuando estes lo suficiente cerca te susurre el secreto. definir: ¿Qué tipo de secreto? ¿Cómo te dice que te acerques?   

- sensor de proximidad que me llame a utilizarlo 
- según la proximidad de la persona, te salude pero de distinto volumen
