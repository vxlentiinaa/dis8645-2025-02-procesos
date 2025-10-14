# ⋆⭒˚.⋆ └[∵┌] - Máquina de saludo - Nombre del Proyecto - [┐∵]┘ ⋆.˚⭒⋆

Viernes 17 Octubre 2025

***
## Grupo-04 "nombre del grupo" : Integrantes

- [Braulio Figueroa Vega](https://github.com/brauliofigueroa2001)
- [Bernardita Lobo Baeza](https://github.com/Bernardita-lobo)
- [Jose Morales Berríos](https://github.com/jotamorales-romulus)
- [Camila Parada Vasquez](https://github.com/Camila-Parada)
- [Francisco Stephens González](https://github.com/FranUDP)

***
## Introducción

Este proyecto se centra en desarrollar una "caja negra" que pueda "saludar".
El saludo de define como ["Un acto comunicacional (entre humanos), en el que una persona hace notar a otra su presencia" - Wikipedia](https://es.wikipedia.org/wiki/Saludo). Por otra parte, ["El saludo es un gesto de la vida cotidiana y profesional, una señal de respeto y consideración hacia los demás"](https://123emprende.com/blog/la-importancia-de-saludar-correctamente/).

Al comienzo del trabajo no hubo una idea clara sobre qué dispositivo desarrollar. Ante ello se creó una propuesta a partir de todas las propuestas proveniente por parte de los integrantes, es que se decidió en conjunto el crear un mecanismo que posea ojos y que siga con la "mirada" al usuario a través de un sensor de presencia que detecte su posición en el espacio. Al identificar que la persona se encuentra a cierta distancia, una de las partes de la máquina comienza a emitir sonido de forma aleatoria, sin un orden establecido.

¿Por qué hacer que se reproduzca un sonido [aleatorio](https://es.wikipedia.org/wiki/Azar#:~:text=El%20azar%20es%20una%20casualidad,Azar%20en%20matem%C3%A1ticas)?
Pues el hecho que el usuario no poder predecir o saber que “esperar” de esta máquina genera un factor "sorpresa", puesto que depende del artefacto el elegir qué sonidos va a transmitir.


***

## Presentación textual de la propuesta

Nuestra máquina (nombre de la máquina) consiste en un dispositivo funcional que está planeado para ser montado en las paredes y ser utilizado de a una persona a la vez.
Esta trabaja detectando la presencia de una persona a través de un “radar” compuesto por un [“sensor ultrasónico HC-SR04”]( https://www.alldatasheet.com/html-pdf/1132204/ETC2/HCSR04/110/1/HCSR04.html) y un [“servomotor SG90”](https://arduino.cl/producto/micro-servo-motor-sg90-9g/?srsltid=AfmBOopUK1FSSvEOeee794pcjIBccD8B2MQF36GlEjuMTAzqI4rHkSnN) que se encuentra en constante movimiento, rotando continuamente desde 0 a 180 grados.

Cuando el usuario ingresa al rango de “reconocimiento” (compuesto por la rotación del servomotor más la distancia del ultrasónico) los “ojos” de la máquina se mueven a la posición aproximada en la que se encuentra la persona, siguiéndole con la “mirada”.

Cuando la persona se acerca a una distancia (x cm) del dispositivo el apéndice, que posee un [“Modulo Reproductor MP3 DFPlayer Mini”](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?_pos=1&_psq=mp3&_ss=e&_v=1.0), comienza a emitir sonidos de forma aleatoria hasta que la persona se aleje lo suficiente como para salir del rango de sonido.

Los ojos no dejan de funcionar en ningún momento, por lo que persiguen a la persona hasta que salga del rango de reconocimiento.

Por el lado conceptual, la máquina posee una carcasa compuestas por un "cangrejo" (figura 1) y una "concha marina" (figura 2).

La primera pieza se compone de una imitación de un “cangrejo”, una réplica de una criatura asociada con la costa por su presencia en dicho sector a lo largo de todo Chile. La segunda parte se compone de una “concha de mar”, un objeto común de encontrar en las playas y que posee el mito de permitir a las personas escuchar sonidos semejantes al oleaje del mar y viento de las costas ( efecto conocido como [Resonancia de las conchas de Gastrópodos](https://es.wikipedia.org/wiki/Resonancia_de_las_conchas_de_Gastr%C3%B3podos)).

***

## Desarrollo

Para poder ser más estratégicos en cuanto al aprendizaje y desarrollo es que cada integrante fue aprendiendo sobre cómo hacer funcionar un sensor o actuador. Ello requirió de procesos personales de prueba y error.


***

## Comentarios finales 


***

## Bibliografía 

- https://www.instructables.com/Animatronic-Eyes-Double-and-Single-Fully-3D-Printe/
- https://web.archive.org/web/20240421145837/https://cursos.mcielectronics.cl/2023/06/28/como-utilizar-un-servo-motor-con-arduino/
- https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep/
- https://www.instructables.com/Animatronic-Face-of-Ed-From-Good-Burger/
- https://www.instructables.com/Face-With-Animatronic-Eyes-Motion-Detection-and-Vo/
- https://es.wikipedia.org/wiki/Resonancia_de_las_conchas_de_Gastr%C3%B3podos
- https://wolles-elektronikkiste.de/en/arduino-controlled-dfplayer-mini
- https://www.instructables.com/Controlling-a-Servo-With-an-Ultrasonic-Sensor-Usin/
- https://www.youtube.com/watch?v=5X0v0MOrQiI



***

°˖✧◝(; ^ ;)◜✧˖°




