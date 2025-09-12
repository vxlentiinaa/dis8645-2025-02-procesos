# ⋆₊˚⊹♡ Clase 06a - Lint hacker (Pelusas) y sensores ♡⊹˚₊⋆

Martes 9 Septiembre 2025

***

## Observaciones

Este día llegué tarde a la sala (16 min.) por lo que estaba en parte perdida.
Al preguntar al Fran me comentó que estaban viendo [Scratch](https://scratch.mit.edu/), que nos permite hacer OOP (Object-oriented programming o Programación orientada a objetos).

A la par se hablaron de forma superficial de otros software o programas como ["Touchdesigner"](https://youtu.be/-74dFi6jViQ?si=4BeW3M68PW1OzBnq) Y ["VVVV"](https://vvvv.org/).
A la par comenzamos a revisar la carpeta "Actions" dentro de la copia personal del repositorio del curso. Para ello se activo la opción para poder manejar los "flujos de trabajo" (workflows). Tras la activación nos dirigimos a la carperta ".github", para poder encontrar un archivo de tipo [YAML](https://es.wikipedia.org/wiki/YAML) y analizar en qué consiste.


![imagen](./imagenes/a1.png)

▼ Recuperado de: https://github.com/Camila-Parada/dis8645-2025-02-procesos/blob/main/.github/workflows/markdown-lint.yml

![imagen](./imagenes/a2.png)

▼ Recuperado de: https://github.com/Camila-Parada/dis8645-2025-02-procesos/actions/runs/17583174461/job/49944243470

A la par se fueron nombrando referencias de proyectos.

- https://en.wikipedia.org/wiki/LaTeX
- https://es.wikipedia.org/wiki/The_Art_of_Computer_Programming
- https://weavingxcoding.studio/
- https://es.overleaf.com/
- https://www.craftwork.today/work
- https://github.com/creativeinquiry

- Sensor Logger.

***

### Descubriendo sensores

En esta sección de la clase se nos presentaron algunos sensores de Arduino con los cuales podemos trabajar para el siguiente proyecto. Los profesores nos instaron a escoger uno (por equipo) y estudiarlo.

Personalmente quise escoger un sensor que mide la “presencia” de agua.

Este se compone de un transistor NPN ["J3Y"](https://www.alldatasheet.net/datasheet-pdf/view-marking/226239/BILIN/S8050.html), un mini led, una resistencia 102 (1k ohm) y dos resistencias 101 (100 ohm), además de un panel (que presenta varias líneas de un material conductor) que al entrar en contacto con líquidos arroja datos e información que se traduce a señales analógicas al Arduino.

Pese a intentar conseguir el “datasheet” (documento oficial del fabricante con toda la información de la pieza) solo pude recuperar el [manual de uso]( https://curtocircuito.com.br/datasheet/sensor/nivel_de_agua_analogico.pdf). En este se expone información básica como los usos, parámetros específicos e instrucciones para poder testear el producto.

De igual forma llegué a la conclusión de que no existe un documento completo puesto que no tiene un nombre oficial (k-0135, SL067), siendo más conocido como “Water Level Detection Sensor Module”.

![imagen](./imagenes/a3.png)

▼ Recuperado de: https://forum.arduino.cc/t/tutorial-sensor-de-fugas-de-agua-con-aviso-a-telegram/594948

![imagen](./imagenes/a4.jpg)

▼ Recuperado de: https://es.aliexpress.com/item/32763218957.html

![imagen](./imagenes/a5.png)

▼ Recuperado de: https://www.adrirobot.it/water_sensor/sensore_livello_circuito/

Tras ello estuve indagando sobre como poder hacer funcionar dicho sensor.

https://lastminuteengineers.com/water-level-sensor-arduino-tutorial/

***

### Posdata

Hoy estoy un poco bajoneada, pero sin razón aparente.

***

°˖✧◝(⁰▿⁰)◜✧˖°
