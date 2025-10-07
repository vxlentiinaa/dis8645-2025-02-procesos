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
 
  
 
