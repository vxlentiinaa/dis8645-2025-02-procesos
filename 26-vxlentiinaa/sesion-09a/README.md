# sesion-09a

07-10-2025

## Apuntes

Subir las cosas al Github y actualizar para corregir las bitácoras.

Ordenar códigos y hacer diagrama de flujo

- Al tener la carpeta principal con un `.ino`, dentro de esta va a estar cada estructura del código (.h / .cpp)
  - Un archivo `.h` (declaraciones) significa que contiene las declaraciones de las funciones, clases y variables
  - Mientras que el archivo .cpp (fuente) significa que contiene el código real, como el cuerpo de las funciones y variables

Dejé en files todos los códigos de prueba que hicimos, en el cual no están ordenados por fecha, ya que me confundí en guardar las carpetas y no les coloqué la fecha correspondiente 😞 Así que subí todo aquí de los códigos anteriores que hemos hecho 

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

`Entrada:` Mediante el sensor ultrsónico la máquina detecta presencia y detalles de distancia de esta presencia

`Salida:` Al detectar la distancia de la presencia la máquina reacciona de diferentes maneras:
- Cuando detecte una presencia esta comenzará a temblar (de nervios) mediante el motor DC el tembleque aumentará entre más cerca estés. 😋

El sensor detectará presencia en 3 instancias: 2 - 18cm, 40 - 60cm, 80 - 100cm

- En cada parámetro la máquina reproduce un audio de voz distinto mediante la microSD en el reproductor MP3 y el altavoz.
  - Los parametros son: 80 - 100cm = Te "grita" | 40 - 60cm = Te grita de nuevo pidiendo que te acerque más | 2 - 10cm = Levanta un "dedo" usando el servo motor, este se moverá de los 0 grados a los 180 mientras estés a esa distancia. Al mismo tiempo te dirá el dato
 
---

`ULTRASÓNICO`

- Configurar
- Medir distancia
- Mostrar consola

`DEDO`

- Configurar
- Levantar
- Bajar

`MOTOR VIBRACIÓN`

- Configurar
- Vibra
- No vibra

`VOZ`

- Configurar
- 3 instancias
- Saluda
- Te dice que te acerques
- Cuenta datos curiosos

---

NO OLVIDAR --- el motor del joystick!!!!!!

Cuando el sensor hace todo lo que debe hacer bool estaCerca=false;

Le colocamos nombre a nuestro robot el cual es RAMón

Ver como hacer que vibre el moto DC y ver como colocar el parlante en la carcasa

---

### Trabajo en clases

Avanzamos en la unión de los códigos para ver como interactuaban entre sí, ya sea, los sensores y componentes. Uno de los problemas que vimos en esta clase fue que reproducía los audios de manera aleatoria y no consecutivamente. Además, los audios no los reproducía por completo.

Por otra parte, ajustamos el volumen del audio del código, el ángulo que debe rotar el motor (dedo) que es 180° y la distancia para que levante la mano con el ultrasónico sea de 2 cm a 18 cm.

Por otro lado, en la clase lo que hicimos fue: Probar nuestro código ya hecho con el prototipo impreso en 3D de RAMon; pero nos dimos cuenta que necesitabamos arreglar el tamaño para poder colocarle el altavoz dentro; jugamos con las distancias, el color, que queremos que tenga codo, etc. Luego comenzamos a editar el código con el que hicimos funcionar el altavoz con mp3 antes, para así añadir nuestros audios. (código en repositorio de [VaniaParedes](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/21-vaniaparedes/sesion-09a)

Logramos que reproduciera los audios pero aún habían fallos; como por ejemplo: no decía bien los audios según la distancia; y al sentir presencia en la distancia mínima (2 to 18cm) decía los datos pero si te mantenías a esta distancia no dejaba de decir "Sabías qué, Sabias qué, Sabias qué", tenías que alejarte para que terminara de hablar.

- Nos habían recomendado usar Booleanas para arreglar eso
- Entonces con booleanas (estas variables que solo pueden ser true o false) para controlar el flujo lógico.
  - Video de ayuda: ["Uso de lógica booleana con Arduino"](https://www.youtube.com/watch?v=Ger5LCtyhyo)
 
`Booleana estudiada por Vania`

```cpp
bool presenciaActiva
```

Segun chatgpt: Sirve para detectar si ya habló con una presencia actual (alguien que está cerca), o sea, evita que diga otro audio mientras la persona sigue ahí.

`¿Cómo se usa?:`

- Cuando detecta presencia cercana por primera vez → presenciaActiva = true;
- Mientras siga cerca, no hace nada.
- Cuando se aleja → presenciaActiva = false; (así la próxima vez podrá hablar de nuevo).

Esta booleana es para resolver el problema de que diga un solo audio cada vez que te acercas, y no se queda hablando infinitamente.

```cpp
if (distancia >= 2 && distancia <= 18) {
  if (!presenciaActiva && !audioEnCurso) {
    presenciaActiva = true;
    audioEnCurso = true;
    mp3Player.play(siguienteDato);
  }
}
else {
  presenciaActiva = false; // se alejó, puede volver a hablar después
}
```

Por otro lado...

```cpp
bool audioEnCurso
```

Según Gemini: "Para implementar una "booleana en curso de audio" en Arduino, debes usar una variable de tipo bool para almacenar si un audio está reproduciéndose o no, combinando esta variable con lógica para activar o desactivar funcionalidades o estados dentro de tu programa, como controlar otros componentes o indicar un estado en el monitor serie."
Su función es bloquear nuevas reproducciones mientras ya hay un audio sonando.

Cómo se implementa:

- Cuando empieza un audio → audioEnCurso = true;
- Mientras el DFPlayer sigue reproduciendo (mp3Player.isPlaying() es verdadero), no se puede reproducir otro.
- Cuando el DFPlayer termina de hablar, cambia de nuevo a false y el robot queda libre para hablar otra vez.

```cpp
if (audioEnCurso && mp3Player.isPlaying()) return;  
// Esto significa: si ya hay audio en curso, sal del código y espera.
```

```cpp
if (audioEnCurso && !mp3Player.isPlaying()) {
  audioEnCurso = false; // ya terminó de hablar, libero el candado
}
```

Así se evita que se interrumpa todo el tiempo

insertar imagenes de ese dia 
