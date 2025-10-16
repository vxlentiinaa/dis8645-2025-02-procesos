# Proyecto 02

## Grupo-05 "Waos" : Integrantes

- [Morgan Aravena Arze](https://github.com/Mosswhosmoss)
- [Aileen Guiselle D'Espessailles Rojas](https://github.com/aileendespessailles-design)
- [Carla Andrea del Carmen Pino Barrios](https://github.com/Coff4)
- [Sebastián Alejandro Sáez Olivares](https://github.com/SebastianSaez1003)

## Presentación textual

### Introducción

El proyecto, de manera general, consiste en hacer una máquina saludadora.

Para la ideación del proyecto usamos la propuesta de [SebastianSaez1003](https://github.com/SebastianSaez1003), que quería usar un servomotor desde el semestre pasado.

Nuestro proyecto se centra en desarrollar un robot que te salude dependiendo de la temperatura.

El saludo se define como ["Un acto comunicacional (entre humanos), en el que una persona hace notar a otra su presencia" - Wikipedia](https://es.wikipedia.org/wiki/Saludo).

En nuestro caso, los sensores serían un sensor de temperatura, humedad y presión y un sensor ultrasónico, y los actuadores, dos servomotores y una pantalla.

### Friolin

Friolin, nuestro robot friolento, funciona con un sensor ultrasónico HC-SR04, que usaremos para detectar si hay o no hay alguien frente al robot; un sensor DHT11, que es de temperatura, humedad y presión; en nuestro caso solo utilizaremos la función de temperatura; una pantalla OLED SSD1306, para mostrar una retroalimentación visual con características faciales; y un servomotor, para que cometa el acto de saludar con el brazo.

Paso a paso del proyecto

1. Máquina inicia en estado neutro
2. Si no detecta a nadie se mantiene en este estado, en donde ambas manos estarán en suspensión y en la pantalla no se mostrará nada
3. Si detecta a una persona, se esperan 3 segundos para actuar según la temperatura medida en el ambiente
4. Si la temperatura es menor o igual a (15) grados celsius, el servomotor no actuará y mostrará en display un mensaje del porqué no quiere saludar, además de una expresión facial importada a través del Arduino que se puede observar en el display
5. Si la temperatura es mayor a (15) grados celsius, el servomotor actuará para dar el saludo (donde su "brazo" se moverá de lado a lado entre los grados 135 y 45 para simular un saludo de mano como lo realizaría un humano) y se mostrará en display un mensaje de texto para saludar, junto a una expresión facial.
6. El ciclo del saludo se repetirá 3 veces y el mensaje durará 15 segundos en la pantalla
7. La persona al retirarse hará que la máquina vuelva a su estado neutro.

Mapa de flujo

![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/mapa%20de%20flujo.png)

### Desarrollo

Para poder programar a friolin de manera más fácil partimos con el desarrollo del pseudocódigo donde se separaron las funciones de cada sensor y actuador  en archivos .h y .cpp para que el archivo .ino quedará todo ordenado, se partió con la ideación de los parámetros de cada sensor sensor, para poder comenzar con la investigación exacta de que queríamos hacer.
En este punto del pseudocódigo también se definieron las clases, donde, con la ayuda de Aarón Moraga pudimos definir cada una de las acciones que queríamos que se desarrollaran.

(Las clases se hicieron en el archivo .cpp y los parámetros en .h)

Luego de ver todos los parámetros nos separamos por investigación de sensor/actuador y por la persona que uniría todo en el código madre.

### Avances de pseudocódigo

#### Pseudocódigo V0

En esta versión del pseudocodigo se hizo la separacion de tabs dentro del archivo, por el momento solo con archinos .ino

![carpeta pseudocodigo](imagenes/pseudocodigoV0.png)

#### Pseudocódigo V0_1_4

Esta es la versión final del pseudocódigo, hay muchos errores y con la ayuda de Aaron Montoya Moraga empezamos a ordenar y resumir los archivos  llegando a la primera versión de codigoRobotFriolento.INO

#### codigoRobotFriolento_0_1_0

#### Carcasa e imágenes

(antes de eso lo habíamos visto como un robot amigable, similar a nuestro moodboard, después de varios bocetos se dio la idea de que sea friolin)
La idea principal de la carcasa es que contenga y exponga todos los componentes de manera eficiente, también su forma de hombre de nieve hace alusión de forma irónica a su miedo al frío. Además, su forma geométrica se eligió para ser similar al pixel art de las imágenes. También se realizaron piezas extras como sus orejeras y brazo para personificar y dar mayor personalidad al proyecto.

![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/cara%201.png)
![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/cara%202.png)
![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/cara%203.png)
![Test Image 3](https://github.com/aileendespessailles-design/dis8645-2025-02-procesos/blob/main/00-proyecto-02/grupo-05/imagenes/descuartizado.png)
![Test Image 3](https://raw.githubusercontent.com/aileendespessailles-design/dis8645-2025-02-procesos/refs/heads/main/00-proyecto-02/grupo-05/imagenes/cables.jpeg)

### Comentarios finales

El desarrollo de Friolín nos permitió explorar de forma creativa la relación entre tecnología y comportamiento. Más que un simple ejercicio técnico, el proyecto nos llevó a pensar cómo un conjunto de sensores y servomotores puede transmitir intención y carácter.

Aunque hubo ajustes y errores en el camino, el resultado refleja un proceso de aprendizaje colectivo donde cada decisión —desde el código hasta la carcasa— aportó a darle identidad al robot. Friolín no solo saluda: también muestra cómo la temperatura puede influir en la forma en que interactuamos, incluso con las máquinas.
