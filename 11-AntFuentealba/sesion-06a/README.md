# sesion-06a
## Apuntes
### Software Creativo y Programación Visual
#### Scratch
- Software desarrollado por MIT Media Lab.
- Se programa con bloques (programación visual).
- Ideal para aprender lógica de programación.
- Sitio oficial: https://scratch.mit.edu/

#### Pure Data (Pd)
- Software libre para programar audios y procesos multimedia.
- Internamente programado en C++.
- Creado por Miller Puckette.
- Conceptos clave:
  - `dac~`: digital a análogo (salida de audio).
  - Cajitas:
    - Arriba = entradas
    - Abajo = salidas
  - Un archivo dentro de Pd es un subpatch.
  - El símbolo `~` indica procesos relacionados al audio.
- [https://puredata.info/](https://puredata.info/)

#### Max/MSP
- Versión comercial de Pd desarrollada y vendida por Cycling ’74.
- Integración avanzada de audio y multimedia.

#### Otros softwares relacionados
- TouchDesigner – Visuales en tiempo real.
- Isadora – Programación de performances interactivas.

#### Herramientas Artísticas
- Lauren Lee McCarthy – Tools for Improved Social Interaction.
- Renata Gaiu – Hysterical Wearable.

#### Configuración y estilos
- YAML: lenguaje para configuración.
  - La indentación indica jerarquía.  
  - Ejemplo:
    ```yaml
    on:
      # Hay un espacio antes para indicar jerarquía
    ```
- En C++ los {} marcan bloques de código (“murciélagos”).
- Lint Hacker: procesos automatizados para limpiar y ordenar estilos.


### Sensores y Actuadores

#### Concepto Caja Negra
- Sensor (Entrada): detecta fenómenos del entorno.
- Actuador (Salida): responde ejecutando una acción.

#### Sensor ultrasónico HC-SR04
- Emite un pulso ultrasónico y mide el tiempo de retorno.
- Capaz de detectar objetos y calcular distancias.
- Rango aproximado: 2 cm a 450 cm.
- Ejemplo de producto: [Sensor HC-SR04 en AfeL](https://afel.cl/products/sensor-de-ultrasonico-hc-sr04)

#### Otros sensores
- Temperatura y humedad atmosférica.
- Gas.
- Luz: fotodiodo.
- Sonido: micrófono integrado en sensor de sonido.
- Lluvia y humedad: sensores pasivos (pueden medir nivel de agua).
- Joystick.
- Potenciómetro (encoder rotatorio de 5 patas): no tiene tope.

## Encargo 11
Investigar sensores vistos en clases, cotizarlos, encontrar referentes que los usen, y describir 3 pequeñas ideas que podamos aplicar a su proyecto-02 de máquinas de saluda.
### Cotización de sensores vistos en clase

Sensor ultrasónico HC-SR04
- Función: Emite un pulso ultrasónico y mide el tiempo de retorno para calcular distancia.
- Rango: 2 cm a 450 cm.
- Cotización:
  - [Afel Ingeniería](https://afel.cl/products/sensor-de-ultrasonico-hc-sr04) – $1.500 CLP (4.7★)
  - [Electrineill Chile](https://electrineilchile.cl/products/modulo-sensor-de-distancia-ultrasonico-hc-sr04) – $1.990 CLP
  - [Altronics](https://altronics.cl/sensor-ultrasonico-hc-sr04) – $1.639 CLP (neto)
  - [MaxElectrónica](https://maxelectronica.cl/movimiento-distancia/87-sensor-de-distancia-ultrasonico-modelo-hc-sr04.html) – $2.490 CLP
  - [MCI Electronics](https://mcielectronics.cl/shop/product/sensor-de-proximidad-de-ultrasonido-hc-sr04-23582/) – $2.590 CLP
  - [Rebeltronics](https://rebeltronics.cl/shop/product/sensor-de-ultrasonido-hc-sr04-278) – $2.500 CLP

Sensor de Temperatura y Humedad  
- Función: Mide temperatura ambiente y humedad relativa.  
- Modelos comunes: DHT11 y DHT22.  
- Cotización:
  - [Afel](https://afel.cl/products/sensor-de-temperatura-y-humedad-dht11) – $2.300 CLP  
  - [Tienda8](https://www.tienda8.cl/s-humedad-y-temperatura/) – $2.900 CLP  
  - [MaxElectrónica (DHT22)](https://maxelectronica.cl/temperatura-y-humedad/892-sensor-de-temperatura-y-humedad-modelo-dht22.html) – $5.990 CLP  

Sensor de Gas (MQ)  
- Función: Detecta gases específicos según modelo (propano, butano, humo, monóxido, calidad del aire, etc.).  
- Modelos comunes: MQ-2, MQ-7, MQ-135 y kits múltiples.  
- Cotización:
  - [Tienda8 (MQ-2)](https://www.tienda8.cl/sensores-de-gases/) – $2.900 CLP  
  - [Arduino.cl (Kit 9 sensores MQ)](https://arduino.cl/producto/kit-de-9-sensores-de-gas/) – $17.990 CLP  
  - [Tienda8 (MQ-7)](https://www.tienda8.cl/sensores-de-gases/) – $3.900 CLP  
  - [Tienda8 (MQ-135)](https://www.tienda8.cl/sensores-de-gases/) – $3.500 CLP

Encoder Rotatorio (potenciómetro sin tope)  
- Función: Dispositivo giratorio que entrega pulsos para medir posición/rotación sin tope mecánico (similar a potenciómetro infinito).  
- Cotización:
  - [Electroart (KY-040 / KY-007)](https://www.electroart.cl/2160/encoder-rotatorio-ky-040-o-ky-007/) – $3.278 CLP  
  - [Afel (KY-040 360°)](https://afel.cl/products/encoder-rotatorio-ky-040-360-grados) – $2.000 CLP  

### Referentes del sensor ultrasónico HC-SR04

- DroneBot Workshop: Tutorial completo de uso del HC-SR04 con Arduino: conexiones, código y consejos.  
- Random Nerd Tutorials: Guía práctica paso a paso aplicable a Arduino, ESP32 y más.  
- Arte interactivo: Rachel De Barros utiliza el HC-SR04 para activar eventos cuando alguien se acerca.  
- Robótica avanzada: El sistema SAPPO usa transductores ultrasónicos similares para posicionamiento interior de alta precisión.  
 
### Ideas para proyecto 2

#### Idea A: Saludo con luz y sonido  
- El sensor HC-SR04 detecta a alguien a < 30 cm.  
- Activa LEDs de colores y reproduce un sonido amistoso con buzzer o pequeño altavoz.  
- Se puede variar color o tono según la distancia.

#### Idea B: Saludo visual interactivo  
- El sensor mide distancia continuamente.  
- Muestra mensajes (“Hola”, “¡Bienvenido!”, “¡Qué gusto verte!”) en display OLED/LCD.  
- Ojos LED que parpadean cuando alguien se aproxima.

#### Idea C: Saludo con movimiento  
- El sensor activa un servo o mecanismo para simular un gesto (levantar brazo, saludo).  
- Velocidad o amplitud del gesto pueden variar según cercanía.


