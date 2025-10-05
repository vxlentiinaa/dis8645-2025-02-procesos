# sesion-07a

## Clase 07a: 23/09 MÁQUINAS COMPUTACIONALES

Nota: Comenzamos hablando sobre dónde comprar los sensores, qué proyectos se pueden hacer y sobre los distintos sensores que quieren ocupar mis compañeros para sus proyectos. Encontré muy interesante lo que se podía lograr por ejemplo lo del te.  

Links de la clase
 <https://afel.cl/collections/modulos>  
 <https://hackaday.com/>  
 <https://books.google.cl/books?id=ScuYAgAAQBAJ&printsec=copyright&redir_esc=y#v=onepage&q&f=false>  

### Tipos de motores

`Motor DC` → Es un motor que se mueve en una sola dirección de manera continua.  

`Motor paso a paso` → Es un motor que se mueve por grados según las indicaciones computacionales (presente en las impresoras 3D).  

`Servo motor` → Un motor con alta precisión de movimiento (90-180-360°). Genera ruido; los mejores son con engranajes **metálicos** y cuentan con una **biblioteca en Arduino**.  

`Motor lineal` → Un motor elegante, con capacidad de moverse con alta y baja velocidad de manera precisa y controlada.  

### Conceptos clave

`Neopixel`-> Conjunto de LEDs inteligentes controlados por una conexión de energía. *(Dato: el nombre fue puesto por Adafruit).*  

`Actuadores`-> Dispositivo que recibe energía y la transforma en movimiento o fuerza.

`Sensores`-> Dispositivo que detecta y responde a algún tipo de entrada del entorno físico.  

### Luces led

- Led RGB
- Neopixel 
- Cintas led

### Formación de grupo

Leonas.ino

- Yamna.h
- Sofía.h  
- Millaray.h  
- Vania.h 
- Valentina.h  

Sensores y actuadores discutidos para el proyecto

Para el desarrollo del proyecto, comenzamos compartiendo nuestras propuestas personales. En esta etapa inicial, nos llamó especialmente la atención la posibilidad de trabajar con una grabadora de voz, ya que Millaray presentó un proyecto personal en el que estaba explorando esta tecnología. A partir de esa inspiración, decidimos combinarla con un sensor de proximidad ultrasónico, con el objetivo de crear un saludador con temática de idiomas: un pequeño robot que “cuenta un secreto” dependiendo de la distancia a la que se encuentre la persona.

La interacción se basa en **rangos de proximidad** y **variaciones de sonido.** El comportamiento del robot sería:

- Si estás lejos, te habla con un sonido más alto, diciendo “¿Por qué estás lejos?”.

- Si te acercas, te va diciendo: “Acércate más, te quiero contar un secreto”.

- Si estás lo suficientemente cerca, te cuenta un secreto casi susurrando.
  
Además, planteamos la posibilidad de complementar la experiencia sonora con respuestas físicas, utilizando un **servo motor** o **motor DC** (vistos al inicio de la clase). De esta forma, el robot no solo reaccionaría con la voz, sino también mediante movimientos, logrando una interacción más completa y dinámica con la persona.

### Sensores y actuadores

`Ultrasónico`
 
`Módulo de grabación`

`Servo motor`

`Motor DC`

### Links de cotización

Servo motor

<https://www.mercadolibre.cl/servomotor-micro-servo-9g-sg90-arduino-pic-raspberry-pi/p/MLC2038767621#polycard_client=search-nordic&search_layout=stack&position=1&type=product&tracking_id=1e649202-a740-46b0-9fc6-27db1979b68a&wid=MLC598099503&sid=search>  

Módulo de grabación

<https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini>  

Ultrasónico 

<https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?srsltid=AfmBOor6vtAKdhRpW2UWRI4_YHz11omtTBKl3sQ-sZjjOWUD6Yi5ctvU>  

Joystick  

<https://afel.cl/products/joystick-palanca-de-mando?utm_term=&utm_campaign=%40+Display+AFEL&utm_source=adwords&utm_medium=ppc&hsa_acc=1808722794&hsa_cam=2084383571&hsa_grp=&hsa_ad=&hsa_src=x&hsa_tgt=&hsa_kw=&hsa_mt=&hsa_net=adwords&hsa_ver=3&gad_source=1&gad_campaignid=21521040934&gbraid=0AAAAADBMsFSPe1s_0H2EbgxLgQPHXExCE&gclid=Cj0KCQjw0NPGBhCDARIsAGAzpp2f-IqMpCP0waAsTeeMZ7XxofKVJ983uSyAbw3YcjfU-8UjzbVBFTgaAnKqEALw_wcB>  

---
### Encargo 12 

Leer las bitacoras de colegas, encontrar similitudes, diferencias, preguntas y aciertos de sus máquinas saludadoras propuestas. Citar correctamente las fuentes.

### Similitudes

Todos los proyectos que leí buscan generar interacción con el usuario a través de sensores y respuestas automáticas.

Los sensores utilizados en su mayoria son sensores de proximidad o distancia y módulos de audio para emitir sonidos o mensajes.

Varios incluyen movimiento físico o visual (ojos móviles, servomotores) para complementar la interacción y generar una experiencia completa.

### Diferencias
 
- Nuestro proyecto se centra en la voz y los secretos, que cambian según la distancia.

- El grupo de brauliofigueroa2001 hizo algo más irónico y visual, con ojos que siguen al usuario y una oreja que habla.

- El grupo de Nicolas-Miranda1312 hizo un dispensador de chicles alien, donde el sensor de color define qué mensaje decir y una pantalla con un ojo animado muestra expresiones.

- El grupo de Hiinalia mezcla detección de calor con sensor infrarrojo, seguimiento ocular y sonidos aleatorios dentro de una habitación vacía.

 
### Preguntas 
 
¿Cómo hago que la persona le resulte interesante mantenerse en la interacción?

¿Cómo logran que los movimientos y el sonido se vean naturales al mismo tiempo?
 
¿Cómo calibrar los sensores para que no fallen como por ejemplo la distancia?

### Aciertos de sus máquinas saludadoras propuestas

Todas las máquinas logran interacciones originales y divertidas (en mi opnión).

Se nota creatividad al combinar sensores y sonido con movimiento o elementos visuales (como los colores, audios, ojos, orejas).

Cada proyecto tiene su propio estilo: secretos susurrados, interacción irónica con la oreja, personaje alien con chicles, seguimiento ocular térmico.

Buena planificación al pensar en las limitaciones técnicas y cómo solucionarlas.

### Conclusión

Al revisar estas bitácoras me hizo ver que aunque cada grupo tiene ideas distintas, todos buscan sorprender y generar interacción. Los proyectos muestran distintas formas de mezclar sensorialidad, sonido y movimiento, y sirven para inspirar mejoras y nuevas ideas

---

### Encargo 13 

### Actualizacón del proyecto 02

Es un robot que detecta a las personas usando un sensor de proximidad. Dependiendo de qué tan lejos estés, reacciona diferente: si estás lejos, empieza a moverse un poco y te habla con un sonido más fuerte; si te acercas, te invita a acercarte más; y cuando estás muy cerca, levanta un dedo y te susurra un dato curioso sobre computación. Después de contarte ese dato, se reinicia y puede repetirlo con hasta tres datos diferentes. Todo combina movimiento y sonido para que la interacción sea divertida.

### 1. Lenguaje natural (personas)

Referente 1: Sugata Mitra – “Build a School in the Cloud”
<https://www.ted.com/talks/sugata_mitra_build_a_school_in_the_cloud>

Elegí esta charla porque me gustó cómo Sugata explica ideas complejas de manera sencilla y motivadora. Su lenguaje es cercano y usa ejemplos claros, de manera que personas sin conocimientos previos puedan entender conceptos tecnológicos. Me inspira la forma en que comunica interacción y aprendizaje, algo que quiero aplicar para que cualquiera que use mi máquina entienda cómo funciona.

El segundo Referente 2: Mitchel Resnick – “Let's teach kids to code” escogido por un encargo de la clase pasada ya que siento que es una persona que sabe explicar muy bien sus ideas y procesos.

<https://www.ted.com/talks/mitch_resnick_let_s_teach_kids_to_code>

Me gustó mucho la claridad con la que Resnick explica conceptos de programación y robótica. Su manera de hablar es muy cercana y transmite entusiasmo, lo que hace que sea fácil de comprender incluso para quienes no saben nada de tecnología. Me inspira a usar un lenguaje así cuando explique mi proyecto.

### 2. Código

Referente 1: Controlar un servo con un sensor ultrasónico usando Arduino

<https://www.instructables.com/Controlling-a-Servo-With-an-Ultrasonic-Sensor-Usin> 

Este tutorial me sirvió para entender porque explica paso a paso cómo controlar un servomotor con un sensor ultrasónico usando Arduino. Tiene diagramas claros y el código está comentado, lo que me ayuda a entender cómo funcionan los componentes y cómo integrarlos en mi proyecto.

Referente 2: Arduino Nano - Ultrasonic Sensor - Servo Motor

<https://newbiely.com/tutorials/arduino-nano/arduino-nano-ultrasonic-sensor-servo-motor> 

Este tutorial también me ayudó mucho porque detalla cómo usar Arduino Nano para controlar un servomotor con un sensor ultrasónico. Me sirve para entender la lógica del código y cómo hacer que los actuadores reaccionen según la distancia que detecta el sensor.

### 3. Materialidades

Referente 1: Robot impreso en 3D — “Otto DIY”

<https://www.ottodiy.com>

Otto DIY es un robot educativo hecho completamente con impresión 3D. Todas sus piezas están pensadas para encajar fácilmente, sin usar tornillos complicados, y dejan espacio para instalar servomotores, sensores ultrasónicos y una placa Arduino en su interior. (característica increíblemente maravillosa).

Me gusta este referente porque demuestra cómo la impresión 3D permite crear estructuras precisas y personalizadas, integrando bien la electrónica. Me ayuda a imaginar una carcasa que no solo funcione como protección, sino que también ayude a darle identidad al proyecto.


### 4. Documentación

Referente 1: Arduino Servo Motor: Reference Code and Wiring Example

<https://www.build-electronic-circuits.com/arduino-servo-motor>

Este artículo es un buen ejemplo de cómo documentar un proyecto con Arduino. Muestra el código, los diagramas de conexión y explicaciones claras. Me ayuda a pensar en cómo quiero organizar y explicar los pasos de mi propio proyecto.

Referente 2: Tutorial Tinkercad – Simulación de servo con sensor ultrasónico

<https://www.tinkercad.com/things/fDOppDhlBT5-servomotor-con-sensor-ultrasonico-hc-sr04>

Este tutorial me gustó porque permite simular los circuitos de manera visual y probar el código antes de implementarlo. Me gustó porque me inspira a documentar mi proyecto de manera que sea fácil de entender y replicar, incluso para quienes no tienen experiencia previa como yo al inicio del semestre (aunque aún me cuesta entender de manera rápida).
