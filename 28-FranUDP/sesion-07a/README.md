# sesion-07a

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### [Physical computing](https://en.wikipedia.org/wiki/Physical_computing)

Son sistemas interactivos que sienten y responden a fenomenos físicos de su entorno, mediante sensores y actuadores electro-mecánicos. 

### [Modulo<sub>1</sub>](https://afel.cl/products/modulo-rtc-ds3231-reloj-de-tiempo-real?srsltid=AfmBOorXrlfXdtQt1sqvbsxNZMsiro2GZl1JW-KAMuWVLju0_c73MNBp) [RTC<sub>2</sub>](https://en.wikipedia.org/wiki/Real-time_clock)

<img align="left" src="./imagenes/rtc.jpg" alt="RTC" title="Fuente: https://ielectrony.com/en/product/ds3231-rtc-at24c32-iic-module/" width=150>

</br>

El reloj de tiempo real es un dispocitivo electrónico que mide el paso del tiempo con presicion.

</br></br></br>

### [Nixi tubes](https://en.wikipedia.org/wiki/Nixie_tube)

<img align="left" src="./imagenes/Nixie.gif" alt="Nixie" title="Fuente: https://en.wikipedia.org/wiki/Nixie_tube" width=150>

</br>

Display electrónico vintage simiar a un tubo de vacío en apariencia, es utilizado para mostrar números y símbolos. Cuando se le aplica voltaje a uno de sus catodos se ilumína con una luz naranja rojiza

</br></br>

### ["Las llamadas que nunca hice"](https://gam.cl/actividades/las-llamadas-que-nunca-hice-voyager/)

Instalación artística de Juan José Acuña, que consiste de un teléfono público de los años 90, que fue modificado para grabar y reproducir audio. El público interactúa con el teléfono grabando y escuchando los mensajes que graben.

### [DC motor](https://youtu.be/GQatiB-JHdI?si=goIzT3UkHXowmdzj)

<img align="left" src="./imagenes/dcMotor.jpg" alt="Motor corriente continua (DC)" title="Fuente: https://altronics.cl/motor-r130" width=150>

</br></br>

Cuando recive corriente gira en un sentido, cuando se invierte la polaridad gira en la dirección opuesta.

</br></br>

#### [Vibrador](https://youtu.be/3hoBwa0ccys?si=pLKQnPnmO2eaj7h2)

<img align="left" src="./imagenes/vibrator.jpg" alt="Motor vibrador" title="Fuente: https://evakw.com/products/a1447" width=150>

</br></br>

Es un motor DC con un peso desvanceado, al girar el peso se mueve alrededor del motor, generando la vibración.

</br></br>

### [Stepper motor](https://youtu.be/fQsdUhRwCU4?si=ZXM2dHAQC_YXJhkJ)

<img align="left" src="./imagenes/stepper.jpg" alt="Stepper motor" title="Fuente: https://www.cimech3d.cl/producto/motor-stepper-bipolar-nema-17-41n-cm-cable-removible/?srsltid=AfmBOooy5_E2pou2_2MMFTH9PyO7uZ58_cpQ_gv6bzwuqcb5xDNwB6Wv" width=220>

Son motores que rotan de forma continua en ambas direcciones en "pasos", lo que nos permite controlar su velocidad de rotación, distancia e incluso que mantenga su posición.
</br> Son utilizados en aplicaciones donde se requiere de alta presición y la capacidad de rotar continuamente.

Requieren de un driver especializado para controlarlos. Algunos drivers, como los TMC2209, hasta permiten usar el stepper como un sensor, al monitorear la cantidad de corriente que el motor consume en tiempo real, para medir el peso/resistencia contra la cual el motor está actuando.

### [Servo motor](https://youtu.be/1WnGv-DPexc?si=TKe5yXUx39lavBYq)

<img align="left" src="./imagenes/sg90.jpg" alt="Servo" title="Fuente: https://www.mercadolibre.cl/servo-motor-sg90-180-proyectos-arduino-pic-raspberry/up/MLCU120233990" width=160>

Motor similar al stepper, en cuanto a que podemos controlar su posición, sin embargo solo puede rotar desde 0 a 180°.

Hay otro tipo de servos, de rotación continua, que pueden rotar 360°+ continuamente (de ahi el nombre), pero estos a diferencia de los anteriores no nos permiten controlar con presición el ángulo, sino la velocidad de rotación

</br>

### [Solenoide linear](https://www.youtube.com/watch?v=nwVRMU9grSI)

<img align="left" src="./imagenes/solenoid.jpg" alt="solenoide" title="Fuente: https://www.indiamart.com/proddetail/linear-solenoid-2850834230273.html" width=160>

</br>

Es un electroimán que al darle corriente en un sentido empuja con un pistón y al darle energía en el sentido opuesto, tira con el pistón. </br>
Los utilizamos para hacer la [maquina percutora de Sokio](https://github.com/FranUDP/dis8645-2025-02-procesos/tree/main/28-FranUDP/sesion-02a)

</br>

### [Motor síncrono](https://youtu.be/Tk3lNBSAgEg?si=OWlQzhQpb5f_Sxfr)

<img align="left" src="./imagenes/synchronous-motor.jpg" alt="motor síncrono explicación" title="Fuente: https://circuitglobe.com/synchronous-motor.html" width=250>

</br>

Es un motor que combina corriente alterna (AC) y directa (DC), para lograr un motor que siempre gira a la misma velocidad, sin importar la carga o resistencias aplicadas al motor.

La velocidad a la que rota depende de la frecuencia de la corriente alterna que se le aplique.

</br>

### [RGB LED](https://youtu.be/wqzfbImsrPE?si=1A1LxJqlYxCm1sZ2)

<img align="left" src="./imagenes/RGB.png" alt="RGB LED" title="Fuente: https://projecthub.arduino.cc/semsemharaz/interfacing-rgb-led-with-arduino-b59902" width=250>

Es un paquete que combina un LED (Light Emitting Diode) ${\color{red}rojo\ (Red)}$, uno ${\color{green}verde\ (Green)}$ y uno ${\color{cyan}azul\ (Blue)}$. Variando la intensidad de la luz que cada uno de estos "sub-LEDs" emite, podemos controlar el color que el LED RGB produce.

Estos LEDs tienen 4 pines, un ${\color{Red}Vcc}$ o ${\color{Gray}GND}$ común y la patita de la polaridad opuesta de cada "sub-LED".

#### [Neopixel](https://youtu.be/JpHJH5QsbTM?si=ESAErdHxjFRlsaZh)

<img align="left" src="./imagenes/neopixel.webp" alt="Neopixels" title="Fuente: https://microbit-micropython.readthedocs.io/en/v2-docs/neopixel.html" width=230>

</br></br>

Son LEDs RGB donde cada LED puede ser controlado individualmente por un microcontrolador. </br> [Creados por Adafruit](https://learn.adafruit.com/adafruit-neopixel-uberguide/the-magic-of-neopixels).

</br>

-----------------------------------------------------------------------------------------------------------
## Encargo 12 <!-- leer las bitacoras de colegas, encontrar similitudes, diferencias, preguntas y aciertos de sus máquinas saludadoras propuestas. Citar correctamente las fuentes -->
### TITULO


-----------------------------------------------------------------------------------------------------------
## Encargo 13 <!-- buscar 2 referentes asociados a tu proyecto de cada una de estas 4 categorías: 1. lenguaje natural (personas), código, materialidad, documentación. escribir un párrafo por cada uno de los referentes encontrados, citando las fuentes, y explicando por qué lo elegiste, qué te aporta, qué te inspira, o incluso si lo incluyes como antiejemplo -->
### TITULO

https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home

https://howtomechatronics.com/projects/arduino-radar-project/

https://forum.arduino.cc/t/using-3-modified-hc-sr04-to-triangulate-the-position-of-one-or-more-objects/902767

https://www.instructables.com/Accurate-2D-Tracking-Using-Multiple-HC-SR04-Ultras/

https://forum.arduino.cc/t/ultrasonic-sensor-hc-sr04-tracking-and-following-object/1296914

https://macduino.blogspot.com/2013/11/hc-sr04-using-multiple-ultrasonic.html

https://blog.arduino.cc/2018/07/13/dual-ultrasonic-sensors-combine-for-2d-echolocation/