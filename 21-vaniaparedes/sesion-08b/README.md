# sesion-08b 07.10.25

"." significa "dentro de"
Archivo cpp: Nos hacemos cargo de las promesas.

## Proyecto 02 - "RAMón"

Después de varias pruebas e iteraciones decidimos cambiar la distancia mínima de 2-10cm a 2-18cm ya que pensabamos que hasta 10 era muy poquito.
**¿Qué necesitamos?:*** Sensor ultrasónico, Servo Motor, Motor DC, Reproductor mp3, Trnasistor, resistencias y Altavoz 

+ **Entrada:** Mediante el sensor ultrsónico la máquina detecta presencia y detalles de distancia de esta presencia (idealmente humana:P)
+ **Salida:** Al detectar la distancia de la presencia la máquina reacciona de diferentes maneras:

Cuando detecte una presencia esta comenzará a temblar (de nervios) mediante el motor DC el tembleque aumentará entre más cerca estés. 😋
+ El sensor detectará presencia en 3 instancias: 2 - 18cm, 40 - 60cm, 80 - 100cm
+ En cada parámetro la máquina reproduce un audio de voz distinto mediante la microSD en el reproductor MP3 y el altavoz.
+ Los parametros son:
    + 80 - 100cm = Te "grita" que vengas diciendo: "Hola humano ¿Por qué estás tan lejos? Acércate." ("hola1.mp3")
    + 40 - 60cm = Te grita de nuevo pidiendo que te acerque más, diciendo: "Hola! No seas timido, ven más cerca, no tengo virus... creo jiji" ("hola2.mp3")
    + 2 - 10cm = Levanta un "dedo" usando el servo motor, este se moverá de los 0 grados a los 180 mientras estés a esa distancia. Al mismo tiempo te dirá el dato1, 2, 3, 4,5 o 6.mp3 como: 
   + **dato1:** "¿Sabías qué? El primer mause era de madera... Seguro también servía de leña jajaj"
   + **dato2:** "¿Sabías qué? El error 404 es mi manera de hacerme el leso... jajaja"
   + **dato3:** "¿Sabías qué? La nube no existe, son computadores de otro... pero no se lo digas a nadie"
   + **dato4:** "¿Sabías qué? Los datos nunca se borran, solo se esconden... igual que tus calcetines"
   + **dato5:** "¿Sabías qué? Apagar y prender arregla todo, y sino, un golpecito y como nuevo"
   + **dato6:** "¿Sabías qué? El porcentaje exacto de 99,999999999999... Nah, inventé jajaja pero aún sigues aquí ¿no?" 🤓☝🏻
 
![RAMon](./imagenes/RAMoncito.png)

En la clase lo que hicimos fue Probar nuestro código ya hecho con el prototipo impreso en 3D de RAMon, ahí nos dimos cuenta de cosas que necesitabamos arreglar como el tamaño para poder colocarle el altavoz dentro, jugamos con las distancias, el color, que queremos que tenga codo, etc etc.

Luego comenzamos a editar el código con el que hicimos funcionar el altavoz con mp3 antes, para así añadir nuestros audios. (código en files)

Logramos que dijera lo que queriamos pero aún habian fallos, nos pasaba que no decia bien los audios según distancia y al sentir precencia en la distancia mínima (2 to 18cm) decía los datos pero si te mantenías a esta distancia no dejaba de decir "Sabías qué, Sabias qué, Sabias qué", tenías que alejarte para que terminara de hablar.

Queremos usar booleanas para arreglar eso ;p

### TRABAJO EN EL LAB
![LAB](./imagenes/IMG_2268.jpeg)

<https://sensorpartners.com/en/knowledge-base/everything-about-the-operation-principles-of-ultrasonic-sensors/>

Entendí que RAMon no podía simplemente decir un audio cada vez que sentía algo a 10 cm, porque el sensor ultrasónico lee decenas de veces por segundo. Si no controlaba eso, el sensor decía “oh, todavía está a 10 cm” y repetía y repetía como loro.

Entonces con booleanas (estas variables que solo pueden ser true o false) para controlar el flujo lógico.

+ Video de ayuda: <https://www.youtube.com/watch?v=Ger5LCtyhyo> "Uso de lógica booleana con Arduino"

#### Primera booleana estudiada
```cpp
bool audioEnCurso
```

+ Según Gemini: "Para implementar una "booleana en curso de audio" en Arduino, debes usar una variable de tipo bool para almacenar si un audio está reproduciéndose o no, combinando esta variable con lógica para activar o desactivar funcionalidades o estados dentro de tu programa, como controlar otros componentes o indicar un estado en el monitor serie."

Su función es **bloquear nuevas reproducciones** mientras ya hay un audio sonando.

Cómo se implementa:

 + Cuando empieza un audio → audioEnCurso = true;
 + Mientras el DFPlayer sigue reproduciendo (mp3Player.isPlaying() es verdadero), no se puede reproducir otro.
 + Cuando el DFPlayer termina de hablar, cambia de nuevo a false y el robot queda libre para hablar otra vez.
 
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

#### Segunda booleana estudiada
```cpp
bool presenciaActiva
```

Segun chatgpt: Sirve para detectar si ya habló con una presencia actual (alguien que está cerca), o sea, evita que diga otro audio mientras la persona sigue ahí.

Cómo se usa:

 + Cuando detecta presencia cercana por primera vez → presenciaActiva = true;
 + Mientras siga cerca, no hace nada.
 + Cuando se aleja → presenciaActiva = false; (así la próxima vez podrá hablar de nuevo).

Esta es para resolver el problema que diga un solo audio cada vez que te acercas y nos e queda hablando infinitamente.

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

#### Entero Estudiado

"siguienteDato"

Según chatgpt: Su función es recordar qué audio viene después.

En este caso nos ayuda a que los datos vayan en orden y no de manera random, empieza en 3 (el dato1) y cada vez que reproduce uno, suma +1.
Cuando llega al 8, vuelve a 3.

```cpp
siguienteDato++;
if (siguienteDato > 8) siguienteDato = 3;
```

#### En resumen:

+ El sensor detecta algo cerca (2–18 cm).
+ El robot revisa:
   + Está ya hablando? (audioEnCurso == true) → entonces espera.
   + Ya habló con esta misma persona? (presenciaActiva == true) → entonces espera.
+ Si ambos están false → puede hablar.
+ Reproduce el audio.
   + Marca audioEnCurso = true y presenciaActiva = true.
   + Mientras el DFPlayer sigue reproduciendo, no pasa nada más.
   + Cuando el audio termina (!mp3Player.isPlaying()), se libera audioEnCurso.
+ Cuando la persona se aleja, se libera presenciaActiva.

La próxima vez que se acerque, puede hablar de nuevo con el siguiente dato.

 
