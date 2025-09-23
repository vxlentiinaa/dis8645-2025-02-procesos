# sesion-06b
## Apuntes
### Revisión de trabajos de tesis de Janis y Mateo

En la revisión de los trabajos de tesis de Janis y Mateo se abordaron diversas herramientas y conceptos relacionados con la programación y el procesamiento de datos.

### Herramientas y conceptos

- FFmpeg  

  Utilidad muy potente para la manipulación de archivos de video. Permite conversión de formatos, extracción de fragmentos y recomposición de contenidos de manera automatizada desde la línea de comandos.

- Sam Lavigne  
  [https://lav.io/about/](https://lav.io/about/)  
  Artista y programador que desarrolla proyectos en torno a la recolección, el análisis y la visualización de datos.

- Grep 

  Comando clásico de interfaces textuales. Sirve para buscar información específica dentro de grandes volúmenes de datos o archivos de texto.

- Videogrep  

  Herramienta que combina FFmpeg y grep. Permite localizar frases o fragmentos concretos dentro de videos de cualquier duración y generar automáticamente clips con esos contenidos.

- WIMP  

  “Windows, Icons, Menus, Pointer”. Describe el estilo de interacción con interfaces gráficas basado en ventanas, íconos, menús y punteros. Es típico de la mayoría de sistemas operativos modernos.

- OS 

  Significa sistema operativo. Es el software base que gestiona los recursos del hardware y sobre el que corren las aplicaciones.

### Aprendizaje y buenas prácticas

- Aprender Python  

  Lenguaje de programación versátil y ampliamente utilizado tanto en análisis de datos como en desarrollo de aplicaciones.

- Transpilación de datos 

  Cualquier tipo de dato puede transpilarse o transformarse. Esto significa convertirlo de un formato a otro o de un lenguaje a otro para facilitar su procesamiento.

- Esqueleto del programa  

  Antes de escribir código es conveniente elaborar un esqueleto del programa mediante comentarios. Esto describe paso a paso lo que debería ocurrir y ayuda a planificar la lógica antes de implementarla.

- Flutter  

  Herramienta multiplataforma para el desarrollo de aplicaciones móviles y de escritorio. Permite programar interfaces modernas de manera más sencilla.

## Idea explicada

### Ojos LED que parpadean cuando alguien se aproxima.

#### Descripción del funcionamiento.

- Estado inicial: La pantalla muestra ojos cerrados en reposo.

- Detección de proximidad: Un sensor mide continuamente la distancia a cualquier objeto/persona.

- Cambio de estado:

  - Si detecta que alguien está a ≤30 cm, la pantalla hace una animación de ojos abriéndose y luego muestra ojos abiertos parpadeando de forma natural.
  - Si la persona se aleja (>30 cm), la pantalla reproduce la animación de ojos cerrándose y vuelve al estado inicial.
 
#### Componentes principales:

- Microcontrolador (Arduino Uno).
- Sensor de proximidad: Ultrasónico (HC-SR04)
- Pantalla OLED (128×64 o 128×32, I2C).
- Resistencias, cables y protoboard o PCB.
- Fuente de alimentación (5 V para Arduino y pantalla).

#### Lógica de control:
Estado inicial (reposo)

- Pantalla OLED muestra ojos cerrados.
- Microcontrolador lee continuamente la distancia del sensor de proximidad.
---
  Detección de presencia

   Si el sensor detecta un objeto/persona a ≤30 cm:

- Ejecutar animación de ojos abriéndose en la pantalla.
- Cambiar estado a “activo”.
- Iniciar temporizador de parpadeo (2 s) y temporizador de guiño (10 s).
---
Estado activo (persona detectada)

- Parpadeo regular: cada 2 segundos se reproduce la animación de parpadeo (ojos cerrarse y abrirse rápido).

- Guiño: al cumplirse 10 segundos continuos con la persona presente, reproducir animación de guiño (un solo ojo).

  - Tras el guiño, reiniciar el temporizador de 10 s para poder repetirlo si la persona sigue allí.

- Mantener ojos abiertos y seguir parpadeando mientras el sensor detecte la presencia.
---
Pérdida de presencia

   Si el sensor detecta >30 cm durante un lapso breve (por ejemplo 500 ms para evitar falsos positivos):

- Ejecutar animación de ojos cerrándose en la pantalla.

- Cambiar estado a “reposo”.

- Reiniciar temporizadores.
---
Reinicio del ciclo

- El microcontrolador vuelve al paso 1 y espera nueva detección.




























