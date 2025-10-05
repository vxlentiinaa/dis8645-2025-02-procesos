# sesion-06a / Clase 10 / 09.09.2025

## Bloque de la mañana 

Ponerme al día con Taller 

## Inicio de clase 

### Programación Softwares

[Scratchhttps](//scratch.mit.edu/): Permite el aprendizaje de programacion de una manera y grafica más facil sin necesidad de tener conocimientos profundos sobre codigos.

[Pure datahttps](//puredata.info/): Software para programar audio, lenguaje de programación visual desarrollado por Miller Puckette

[LaTeX](LaTeX): Segun Wikipedia es un sistema de composición de textos orientado a la creación de documentos escritos que presenten una alta calidad tipográfica. Por sus características y posibilidades, se usa de forma especialmente intensa en la generación de artículos y libros científicos que incluyen, entre otros elementos, expresiones matemáticas.


### Miller Puckette 
- (Matemático y programador estadounidense).
- Es el autor de los lenguajes de programación Max/MSP y Pure Data (Pd), ampliamente utilizados para crear música y obras multimedia interactivas.
- Desde 1994, ha sido profesor de música en la Universidad de California, San Diego (UCSD).
- Cultura computacional 

![Miller](./imagenes/Miller.jpg)

Las contribuciones de Miller Puckette han tenido un impacto duradero en el campo de la música electrónica y el arte multimedia. Sus entornos de programación han democratizado el acceso a herramientas sofisticadas de creación musical, permitiendo a una amplia gama de artistas y entusiastas explorar las posibilidades del sonido y la interacción.

## Investigación de sensores 

### Reproducción de audio ISD1820

- Dispositivo de grabación/reproducción de multiples mensajes.
- Grabador de voz en un solo chip. 
- Duración de grabación (Lab Interacción) 20 segundos.
- Voltaje de Operación: 3.3V DC. No es compatible con 5V.
### Partes del reproductor 

N° | Nombre                 | Función                              |
---|--------------          |--------------                        |
1  | VCC                    | Fuente de alimentación de 3,3 V      |
2  | GND                    | Conexión a tierra de la alimentación |
3  | REC                    | Entrada REC es una señal de grabación activa en ALTO    |
4  | PLAYE                  | Reproducción: activada por borde                        |
5  | PLAYL                  | Reproducción: nivel activado, cuando pasa de BAJO a ALTO, se inicia un ciclo de reproducción                  |
6  | SALIDAS DE ALTAVOZ     | Los pines SP+ y SP- proporcionan accionamiento directo para altavoces con impedancias tan bajas como 8 Ω.     |
7  | MIC                    | Entrada de microfono, transfiere sus señales al preamplificador en el chip.                                   |
8  | FT                     | Al conectar el mini puente, este modo permite que el micrófono controle el altavoz directamente.              |
9  | P-E                    | Conectando el mini jumper, reproduce los discos sin parar.                                                    |

![Modulo01](./imagenes/Modulo.png)

### Sensor de Gas MQ2

- Módulo de alta sensibilidad y respuesta rápida para detectar gases combustibles y humo.
- Ideal para monitoreo de fugas y seguridad doméstica/industrial
- Voltaje de operación: 5 V
- Gases detectables: butano, propano, metano, alcohol, hidrógeno, humo (entre otros)
- Alarmas de humo y sistemas de seguridad

  ### Partes del sensor
  
N° | Nombre                 | Función                              |
---|--------------          |--------------                        |
1  | VCC                    | Fuente de alimentación de 5 V        |
2  | GND                    | Conexión a tierra de la alimentación |
3  | D0                     | Output                               |
4  | A0                     | Output                               |

![Sensor01](./imagenes/Sensor.png)
