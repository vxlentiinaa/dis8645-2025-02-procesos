# sesion-06a

**Scratch**, consiste en que permite el desarrollo de habilidades mentales mediante el aprendizaje de la programación sin tener conocimientos profundos sobre el código.

**Pure data**, es un lenguaje de programación visual desarrollado por Miller Puckette durante los años 90 para la creación de música por ordenador interactiva y obras multimedia.

**VVVV (software)**, es un entorno de programación híbrido (visual y textual) diseñado para el diseño de gráficos en tiempo real, síntesis de video, instalaciones interactivas y visualización de datos.

**Lint (o la acción de linting)** se refiere a una herramienta de análisis estático de código que verifica la fuente de un programa para encontrar errores, fallos de estilo y construcciones sospechosas antes de que se ejecute. (o sacar pelusas en inglés). 

**Acción** es un bloque de código o un conjunto de instrucciones que realiza una tarea específica, como cambiar variables, invocar funciones, leer o escribir datos, o desencadenar un proceso.

**Actions**, workflows que corren automáticamente, revisa los update y con lint te avisa si hay errores. <https://github.com/arduino/compile-sketches> 

**LaTeX** es un sistema de software para la composición tipográfica de documentos, LaTeX gestiona el contenido para su procesamiento, proporciona a los autores comandos listos para usar para requisitos de formato y maquetación. 

**Overleaf** es un software que ejecuta un editor colaborativo de LaTeX en la nube, utilizado para escribir, editar y publicar documentos. 

- viernes 17 de octubre entrega, detectar presencia y hacer cosas al respecto, interacción con el usuarios,   ej: greeting machine arduino

metáfora caja negra: algo entra - funciona - sale 

**sensores**, saber la distancia, temperatura, luz, movimiento,  etc. 
- ultrasónico, emite un sonido y detecta cuánto se demora en volver a la otra entrada 
- sensor de temperatura y humedad tht11 
- sensor de gas, co2 
- encoder rotatorio 
- sensor de agua 
- potenciómetro como joystick 
- sensores de sonido con micrófono 

actuadores, parlantes, pantallas

## Encargo 11 

"investigar sensores vistos en clases, cotizarlos, encontrar referentes que los usen, y describir 3 pequeñas ideas que podamos aplicar a su proyecto-02 de máquinas de saludar"));

**Sensor Ultrasónico**, HC-SR04  miden la distancia mediante el uso de ondas ultrasónicas. El cabezal emite una onda ultrasónica y recibe la onda reflejada que retorna desde el objeto. Los sensores ultrasónicos miden la distancia al objeto contando el tiempo entre la emisión y la recepción. <https://youtu.be/BAfZWXbKrf0?feature=shared>
Ideas para usarlo: 
- medir la distancia de una de algo y según eso hacer una acción o decir algo 
- si alguien se acerca a cierta distancia, un parlante dice “¡Hola!” o muestra un mensaje en pantalla.

**Sensor de joystick analógico**,  KY-023 permite controlar movimientos en dos ejes (X e Y) mediante dos potenciómetros, además de detectar una pulsación (eje Z) al presionar la palanca.

**Sensor de temperatura y humedad** THT11, detecta y mide la temperatura y la humedad relativa del ambiente circundante, y transmite estos datos de forma digital a un microcontrolador como un Arduino. Utiliza un sensor de humedad capacitivo y un termistor para convertir los cambios físicos del ambiente en una señal digital que puede ser leída por el microcontrolador. 
Ideas para usarlo: 
- sensor que determine cuánta humedad hay en el ambiente y si es recomendable o no alisarse el pelo. 
 según la temperatura, pantalla muestra “¡Abrígate!” o “¡Está fresco pero soportable!”.

**Sensor de Gas MQ-2** módulo detecta gases combustibles y humo, como GLP, butano, propano, metano, alcohol, hidrógeno y humo. Funciona variando su resistencia eléctrica en presencia de estos gases y emitiendo una señal analógica y una digital.
Ideas para usarlo: 
- sensor que diga algo cuando detecte humo de persona esté fumando o quemando algo. (podrían ser distintas respuesta dependiendo del tipo de humo) 

**Codificador rotatorio** es un sensor que convierte el movimiento de un eje o perilla en señales digitales o analógicas, permitiendo determinar la posición, la velocidad y la dirección de ese movimiento. Sirve como un traductor de movimiento mecánico a electrónico, informando a los sistemas de control sobre el desplazamiento angular de un objeto para controlar su comportamiento de forma precisa.
Ideas para usarlo: 
- girar para elegir opciones en pantalla, presionar para confirmar.

**Sensor de nivel de agua** Fd10, es un módulo electrónico diseñado para medir la cantidad de agua en un tanque o recipiente, detectando el nivel de un líquido mediante alambres paralelos que interactúan con el agua para generar una señal analógica que Arduino puede leer.
Ideas para usarlo: 
- Detector de vaso vacío: si el nivel de agua baja, LED rojo parpadea y pantalla dice “¡Rellena!”.

**Sensor Analógico de Sonido**  KY-037 es un módulo de detección de audio con salida analógica y digital, que permite medir niveles de sonido y activar sistemas electrónicos en función del ruido ambiente. Posee ajuste de sensibilidad mediante potenciómetro y es compatible con plataformas como Arduino. 
Ideas para usarlo: 
- Luz por aplauso: aplaudir una vez → LED se enciende, otra vez → LED se apaga.
- Medidor de ruido ambiente: barra de LEDs que sube o baja según la intensidad del sonido.

