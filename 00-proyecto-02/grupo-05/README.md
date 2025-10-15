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

Friolin, nuestro robot friolento, funciona con un sensor ultrasónico HC-SR04, que usaremos para detectar si hay o no hay alguien frente al robot; un sensor DHT11, que es de temperatura, humedad y presión; en nuestro caso solo utilizaremos la función de temperatura; una pantalla OLED SSD1306, para mostrar una retroalimentación visual con características faciales; y dos servomotores, para que cometa el acto de saludar con el brazo.

### Desarrollo

Para poder programar a Friolin de manera más fácil, partimos con el desarrollo del pseudocódigo, donde se separaron las funciones de cada sensor y actuador en archivos .h y .cpp para que en el archivo .ino quedara todo ordenado. Se partió con la ideación de los parámetros de cada sensor para poder comenzar con la investigación exacta de qué queríamos hacer.

En este punto del pseudocódigo también se definieron las clases, donde, con la ayuda de Aarón Moraga, pudimos definir cada una de las acciones que queríamos que se desarrollaran.

(Las clases se hicieron en el archivo .cpp y los parámetros en .h).

Luego de ver todos los parámetros, nos separamos por investigación de sensor/actuador y por la persona que uniría todo en el código madre.

### Avances de pseudocódigo

#### Pseudocódigo V0

En esta versión del pseudocódigo se hizo la separación de tabs dentro del archivo, por el momento solo con archivos .ino.

![carpeta pseudocodigo](imagenes/pseudocodigoV0.png)

#### Pseudocódigo V0_1_4

Esta es la versión final del pseudocódigo; hay muchos errores y, con la ayuda de Aaron Montoya Moraga, empezamos a ordenar y resumir los archivos, llegando a la primera versión de codigoRobotFriolento.ino. 

#### codigoRobotFriolento_0_1_0



### Comentarios finales







