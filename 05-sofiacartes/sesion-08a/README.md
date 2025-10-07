# sesion-08a 30/08

## Proyecto 02- Robot que cuenta datos curiosos

Componentes aque utilizaremos:

Sensor ultrasónico, Servo Motor, Motor DC, Reproductor mp3 y Altavoz.

Entrada: Mediante el sensor ultrsónico la máquina detecta presencia y detalles de distancia de esta presencia humana.

Salida: Al detectar la distancia de la presencia la máquina reacciona de diferentes.

maneras:

1. Cuando detecte una presencia esta comenzará a temblar (de nervios) mediante el motor DC el tembleque aumentará entre más cerca estés.
2. El sensor detectará presencia en 3 instancias: 2 - 10cm, 40 - 60cm, 80 - 100cm.
3. En cada parámetro la máquina reproduce un audio de voz distinto mediante la microSD en el reproductor MP3 y el altavoz.
4. Los parametros son: 80 - 100cm = Te "grita" que vengas diciendo: "HOLA HUMANO, VEEEN!" 40 - 60cm = Te grita de nuevo pidiendo que te acerque más, diciendo: "HOOLAA, MÁS CERCA!" 2 - 10cm = Levanta un "dedo" usando el servo motor, este se moverá de los 0 grados a los 180 mientras estés a esa distancia. Al mismo tiempo te dirá algún dato interesante.

### Diálogo

- Decir "hola humano, ¿porqué estas tan lejos?. Acércate" 
- Que tirite con el motor DC al momento de no acercarse hacia el robot.
- "Hola, no seas tímido, más cerca. no tengo, virus creoo"

Datos curiosos que dirá:

- “¿Sabías que?, los 99% de los problemas se arreglan reiniciando.”
- “La nube no existe, son computadores de otro.”
- “Los datos nunca se borran, sólo se esconden.”
- “El error 404 es mi manera de hacerme el leso.”
- “El primer mouse era de madera.”

BUSCAR FUENTE DE DÓNDE SE ESACARON ESTOS DATOS CURIOSOS

### Cosas faltantes:

1. Mecanismo
2. Carcasa
3. Motor DC
4. Unir código
5. Diálogo (listo)
6. Tipo de voz: artificial (listo)

### Desarrollo en clases

- Código para usar el mp3 y el altavoz funcionó gracias a janis y mateo, el cual es de esta fuente: <https://github.com/DFRobot/DFRobotDFPlayerMini>
- Logramos hacer funcionar el sensor ultrasónico junto al servomor, fotito arriba y el código está adjunto en files.
- Preparamos los diálogos y los audios de estos.

Fuente de descarga de voces <https://aivoice-es.vidnoz.com/text-to-speech>

![trabajoEnClases1](./imagenes/.jpg)

![trabajoEnClases2](./imagenes/.jpg)

#### Busqueda de motor DC y referentes de carcasa

- Ayuda de como conectarlo: "Conexión de un transistor NPN a un motor DC y a un Arduino" <https://www.youtube.com/watch?v=O-kuwPfpCng>
- Referente robot <https://www.ottodiy.com/>




