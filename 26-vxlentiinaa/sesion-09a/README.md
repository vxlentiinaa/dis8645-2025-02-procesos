# sesion-09a

07-10-2025

## Apuntes

Subir las cosas al Github y actualizar para corregir las bitácoras.

Ordenar códigos y hacer diagrama de flujo

- Al tener la carpeta principal con un `.ino`, dentro de esta va a estar cada estructura del código (.h / .cpp)
  - Un archivo `.h` (declaraciones) significa que contiene las declaraciones de las funciones, clases y variables
  - Mientras que el archivo .cpp (fuente) significa que contiene el código real, como el cuerpo de las funciones y variables

---

### Retroalimentación

- Configurar la manito del robot, es decir, cambiar el ángulo para que quede recto. (180°) y no lo tomen como algo fascista jaja
- Cambiar la distancia del sensor ultrasónico a 18 cm para que tenga mayor rango de medición
- Nos dimos cuenta que el servomotor solo llega a 180°, así que lo dejamos así, la solución que encontramos fue colocar el brazo más adelante cuando esté en 0° así cuando se suba, llega preciso a los 180°

`Archivo.ino que creó el profe para nosotras.`

El profe en esta clase, creó un archivo ordenado del código que teníamos nosotras, es decir que separó cada instancia en .cpp y .h para que las clases quedaran ordenadas, también ordenó los nombres de los archivos (como entradas y salidas)

1. Parte incluyendo en el archivo principal, los archivos que creó, es decir,  la entrada y salidas. 
2. Instancias: Programación orientada a objetos (existe una entrada tanto y salida tanto)
3. Setup: configuó entrada y salida (al final ordenó lo que teníamos). La clase `ultrasónico` y clase `dedo`, no saben que existen entre si, ya que están en distintos arhcivos; pero para que compilen entre sí se deben colocar ambos en la carpeta `.ino`; los datos de como se configuran estan ocultos, uno en cada carpeta.
4. Loop: lo hizo en orden, primero las cosas del sensor y luego del actuador
5. Ultrasónico esta cerca: dedo levanta... si no hay alguien cerca: dedo baja
6. EntradaUltrasonico.H : archivos H son formulas "ifndef" si es que no existe, "define" hace que exista
7. Include arduino.h
8. Class ultrasónico (en la clase viene el punto y coma despues de los murciélagos)
9. Bool: definió si algo esta cerca o no
10. Que valores tiene internamente; y las funciones () que tiene, que sabe y que puede hacer
11. Cpp: se hace cargo de las promesas; ej: patita tanto es entrada y patita tanto es salida
12. El punto significa dentro de en el ino
13. SalidaDedo.h: las clases pueden tener clases adentro

Tal vez no se entienda tanto los puntos de arriba, pero lo anoté a medida que iba escuchando la corrección

---

- Aarón dejó como incentivo, ir al lab a trabajar y así nos ganamos una decima hasta 1 punto
- Sería bueno realizar el diagrama de flujo de la parte del parlante y así visualizar el problema

---

### Proyecto 02 - RAM-ón

Después de varias pruebas e iteraciones decidimos cambiar la distancia mínima de 2-10cm a 2-15cm ya que pensabamos que hasta 10 era muy poquito. 

¿Qué necesitamos para el motor de vibración?
  - Para conectar el motor de vibración utilizamos transistor IRFZ44N, resistencias de 1k y de 100k, un diodo IN4007

¿Qué necesitamos para el Servomotor?
- Necesitamos el servomotor, el cable naranjo se conecta a pin 9; GND y VCC a sus respectivos pines

¿Qué necesitamos para conectar el ultrasónico?
- Necesitamos el sensor ultrasónico HC-SR04, donde el GND y VCC del sensor va a gnd y vcc de la protoboard; el ECHO va al pin 12 del arduino y el TRIG va al pin 11 del arduino 

¿Qué necesitamos para conectar el Altavos y el reproductorMP3?
- Necesitamos el altavos y el Modulo Reproductor MP3 DFPlayer Mini. Utilizamos el lado izquierdo del reproductor para conectar lo que necesitemos

insertar imagen del modulo 
 
Entrada: Mediante el sensor ultrsónico la máquina detecta presencia y detalles de distancia de esta presencia (idealmente humana:P)
Salida: Al detectar la distancia de la presencia la máquina reacciona de diferentes maneras:
Cuando detecte una presencia esta comenzará a temblar (de nervios) mediante el motor DC el tembleque aumentará entre más cerca estés. 😋

El sensor detectará presencia en 3 instancias: 2 - 18cm, 40 - 60cm, 80 - 100cm
En cada parámetro la máquina reproduce un audio de voz distinto mediante la microSD en el reproductor MP3 y el altavoz.
Los parametros son:
80 - 100cm = Te "grita" que vengas diciendo: "Hola humano ¿Por qué estás tan lejos? Acércate." ("hola1.mp3")
40 - 60cm = Te grita de nuevo pidiendo que te acerque más, diciendo: "Hola! No seas timido, ven más cerca, no tengo virus... creo jiji" ("hola2.mp3")
2 - 10cm = Levanta un "dedo" usando el servo motor, este se moverá de los 0 grados a los 180 mientras estés a esa distancia. Al mismo tiempo te dirá el dato1, 2, 3, 4,5 o 6.mp3 como:
dato1: "¿Sabías qué? El primer mause era de madera... Seguro también servía de leña jajaj"
dato2: "¿Sabías qué? El error 404 es mi manera de hacerme el leso... jajaja"
dato3: "¿Sabías qué? La nube no existe, son computadores de otro... pero no se lo digas a nadie"
dato4: "¿Sabías qué? Los datos nunca se borran, solo se esconden... igual que tus calcetines"
dato5: "¿Sabías qué? Apagar y prender arregla todo, y sino, un golpecito y como nuevo"
dato6: "¿Sabías qué? El porcentaje exacto de 99,999999999999... Nah, inventé jajaja pero aún sigues aquí ¿no?" 🤓☝🏻

NO OLVIDAR --- el motor del joystick!!!!!!
