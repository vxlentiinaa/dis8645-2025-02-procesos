# sesion-06b

Viernes 12 de Septiembre, 2025

Nota del día: Viernes antes de la semana de receso por fiestas patrias, lamentablemente falté porque estaba muy enferma (tengo licencia). 

## Referentes (y otras cosas)

- **Sam Lavinge** (según Wikipedia, es un artista y educador residente en Nueva York. Su trabajo trata sobre tecnología, datos, vigilancia, procesamiento de lenguaje natural y automatización. página oficial: <https://lav.io/>)
- **Why Do We Work So Hard?** (de Sam levine. <https://lav.io/projects/why-do-we-work-so-hard/>)
- **sistema WIMP** (En la interacción humano-ordenador, WIMP es sinónimo de "ventanas, iconos, menús y puntero", que denota un estilo de interacción con estos elementos de la interfaz de usuario. - *"Este estilo de sistema mejora la interacción persona-ordenador (HCI) mediante la emulación de las interacciones del mundo real y ofrecer una mejor facilidad de uso para los usuarios —usuarios tanto novatos como avanzados. Los usuarios pueden llevar a la habilidad en una interfaz estandarizada de una aplicación a otra"*)
- **Flutter** (para hacer apps móviles - marco de código abierto para crear hermosas aplicaciones multiplataforma compiladas de forma nativa a partir de una única base de código. <https://flutter.dev/>)
- **Material Design 3** (biblioteca de componentes para crear interfaces, botones, tipografías. Se puede diseñar la interfaz de Figma y luego pasarlo a flutter para llevarlo a su ejecucuión. Para correrlo se necesita un simulador de teléfono, ya sea de Android o IOS. <https://m3.material.io/>)
- **NLP - Natural Language Processing** (campo de las ciencias de la computación, de la inteligencia artificial y de la lingüística que estudia las interacciones entre las computadoras y el lenguaje humano, así como los detalles computacionales de las lenguas naturales.)
- **SpaCy**: (biblioteca de python y de código abierto para el procesamiento del lenguaje natural)
- **Grep**: (Permite buscar un texto - te permite buscar palabras o cadenas de texto en archivos o en la entrada estándar de la terminal.)

## Qué ví hoy

### Tesis Mateo

Tipográfica Propagandística es un proyecto de investigación, archivo y exhibición digital desarrollado por Mateo Arce.

Explora la historia de las letras y tipografías en la propaganda política y cultural de Chile y América Latina desde 1930 hasta la actualidad.

El proyecto combina curaduría visual, análisis tipográfico y herramientas digitales para construir una lectura crítica del diseño como lenguaje político.

- <https://github.com/matbutom/typo-grafica-propagandistica>

A destacar/apuntes:

- Tipografía en la propaganda política chilena.
- Serif, display y rotulos, sans serif.
- Compilar: pasar de lenguaje legible de humano a maquina.
- Transpilar: compilar algo que estaba en python.
- Shuffle: es un código que sirve para que las cosas no se repitan a cada rato y sea al azar.
- Es importante comentar siempre en el código antes de programarlo.

### Tesis Janis 

AUNA es un proyecto de diseño y tecnología inspirado en la neuralgia del trigémino, una enfermedad crónica caracterizada por un dolor intenso pero invisible.

El sistema combina un amuleto portátil con una aplicación móvil para registrar y visualizar experiencias de dolor.

Con un toque, el amuleto permite registrar una crisis, indicando en la app:

- Intensidad del dolor (escala de 1 a 10).
- Duración en segundos.
- Notas opcionales.
  
La aplicación organiza esta información en un calendario y la traduce en un espacio visual vivo, inspirado en los jardines: su crecimiento continuo, sus ciclos de apertura y recogimiento, y su imperfección natural.

- <https://github.com/janisepulveda/auna>

A destacar/apuntes: 

- Neuralgía del trigemino, *como desde el diseño podemos transformar lo invisible en algo visible*.
- Es un amuleto para ver el tema de las crisis, tener contactos con neurólogos, etc.
- Flutter: Sirve para programar apps. Tiene acceso a Materials design de Google, donde se puede usar iconografías o tipografías.
- Está trabajando con una placa ESP-32, que es muy chiquita.
- Bluetooth Low Energy: utiliza baja energía.
- BlE: se usa para cosas muy técnicas

## Qué hice hoy

Ejercicio: Especificar ideas proyecto 02 descritas en sesión 06a, hacer una versión iterada.

### Idea 01 

Sensor de color para demostrar emociones + respuesta divertida.
- Dispositivo que “lee tu emoción” según el color que le muestres y te responde con una frase o reacción divertida.

Funciona con tarjetas de colores, cada color esta asignado a una emoción (psicología del color o como en intensamente).
Ejemplo distribución colores: rojo - enojado, azul - triste, amarillo - feliz, verde - desagrado, etc.

la interacción parte preguntandole a la persona cómo se siente, en base a su respuesta debe rotar la ruleta o mostrar la tarjeta que corresponda a su emoción correspondiente. El sensor de color va identificar el color y le dara una respuesta divertida en base a este (es decir cada color tendrá su propia respuesta)

1. La persona se acerca a la máquina. es una carcasa cuadrada con la pantalla al fente, tiene un pequeña apertura al lado para que se posicione la tarjeta de color y adentro tiene el sensor que lo detecta.
2. La pantalla está en modo stand by, mostrando un texto: “¿Cómo te sientes hoy?”
3. El usuario elige un color que represente su emoción (tarjetas). - hay un instructivo que muestra que signfica cada tarjeta de color (rojo - enojado, azul - triste, amarillo - feliz, verde - desagrado, naranja - ansioso, morado - creativo)
4. La persona inserta su tarjeta en la ranura especificamente diseñada para eso.
5. El sensor de color lo detecta y registra su valor RGB.
6. El programa traduce ese color a una emoción según rangos establecidos.
7. La pantalla muestra una respuesta divertida personalizada a cada color que se activa cuando se detecta el color (se muestra una pequeña carita animada en la pantalla), y esta respuesta esta acompañada de un sonido (mensaje hablado).
8. Después de 10 segundos de haberse detectado el color vuelve al modo stand by.

Ejemplo:

- Si detecta azul - "Ya no hay buenos días Bart, solo días"
- Si detecta amarillo - "buenos días estrellitas, la tierra les dice hola" 

Si el sensor no reconoce el color:
- puede responder algo como: “¿Y eso qué color es po? ¿Inventaste uno nuevo?”

Componentes a utilizar:

- Sensor de color TCS3200.
- Pantalla LCD Oled 1.3" 128x64.
- Altavoz (para respuestas de voz o sonido).
- Arduino UNO r4 minima.
- Botón de reinicio o cambio de estado.                    

### Idea 02 

Una máquina que “interpreta tu suerte” o “tu destino del día” según el color del dulce que saques.
El color activa una reacción con voz o pantalla: algo así como un horóscopo de dulces.

Funciona con un dispensador de dulces de colores variados (como chubbis), cada color tiene un signficado asociado (reacción).

la interacción parte haciendo que la persona dispense el dulce (manual) y al momento de que este caiga el color será identificado con el sensor y dará paso a una respuesta divertida (hablada), cada color tendría su propia respuesta.

1. La persona se acerca a la máquina, en apariencia es la tipica maquinita dispensadora de dulces (la que le pones una moneda, girar la perilla y te dispensa el dulce), en la parte frontal arriba tiene una pantalla. 
2. El usuario gira una manivela para liberar un dulce.
3. El dulce cae frente al sensor de color, que lo detecta.
4. Según el color del dulce, la máquina reacciona con un mensaje hablado y una animación en pantalla.
5. Cuando deja de reproducirse la animación y el audio la maquina espera 5 segundos y vuelve al estado inicial.

Ejemplos de respuesta según color de dulce:

- Rojo - "mmm... un poco de control de emociones no te vendría mal"
- Verde - "Tómate un respiro, parece que lo necesitas"
- Azul - "Piensa profundo… o mastica más lento"
- Amarillo - "¡Alegría garantizada, será una increible semana!"

Componentes a utilizar:

- Sensor de color TCS3200.
- Pantalla LCD Oled 1.3" 128x64.
- Altavoz (para respuestas de voz o sonido).
- Arduino UNO r4 minima.

### Idea 03 

El usuario debe realizar una secuencia secreta de movimientos (arriba, abajo, izquierda, derecha + botón) para desbloquear una respuesta especial.
Cada movimiento puede generar una animación intermedia (una carita reaccionando en pantalla).

basado en el episodio de Hora de Aventura, "Los Guardianes del Sol": Donde Finn y Jake entran a un videojuego y Finn debe realizar un "Movimiento Combo" para vencer al enemigo Flojo Sam. (ver desde el segundo 40 https://www.youtube.com/watch?v=-Wico7X18uw)

Con el joystick generar patrones o movimientos al azar (tipo: izquierda, izquierda, arriba, abajo, abajo, etc pero siempre en eje x,y) y al momento de apretar el botón (eje z) este termina de grabarse (como el código que se desarrolla con la interacción) y se desbloquea una respuesta como un mensaje hablado o en una pantalla.

Ya que las posibilidades pueden ser infinitas se puede hacer que el maximo de movimientos sean 5 antes de apretar el botón y se dejan establecidas las respuestas en base a que movimiento se va realizando por cada etapa.

1. La persona se acerca a la máquina. Se ve como un mini juego de arcade, por una parte esta la pantalla y en la otra el joystick.
2. la pantalla se encuentra en modo standby, se ve un pequeño monito/personaje sentado esperando aburrido o durmiendo.
3. El usuario comienza a mover el joystick, la animación queda en blanco esperando la respuesta total.
4. Cada dirección (x/y) se guarda como parte del “patrón”.
5. Cuando presiona el joystick (botón Z), el sistema interpreta que el código está completo (máx. 5 movimientos).
6. Según la secuencia ingresada, el monito de la pantalla responde con una acción distinta seguida de un pequeño sonido.
7. Despues de reproducirse la animación espera 5 segundos y vuelve al modo stanby. 

Ejemplos de respuestas: 

- ↑ ↑ ↓ ↓ → - el monito responde bailando en la pantalla y el sonido es musica de fiesta. 
- ← → ← → → → - el monito sale mareado y el sonido es de vomito. 
- ↓ ↑ ↑ → ← - el monito sale tomando sol y el sonido es de playa.

Es como que cada movimiento le desbloquea al personaje/monito un final distinto a su aburrimiento. 

Componentes a utilizar:

- Joystick Analógico de 3 Ejes (X, Y, Z)
- Pantalla LCD Oled 1.3" 128x64.
- Altavoz (para respuestas de voz o sonido).
- Arduino UNO r4 minima.
