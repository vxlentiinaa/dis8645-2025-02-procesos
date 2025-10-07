# sesion-09a
## taller clase 7 de octubre

### investigación

- documentación investigación de dfplayer mini, módulo mp3

- generar alguna especie de índice en la que aparezcan los audios que quiero reproducir

- lograr detectar cuando la persona se acerca, si está cerca, tira un dado, elige un sonido aleatorio

- switch case, una especie de if más estructurado, switch case, if pasa algo, hay un case (caso) para eso

### dudas, apuntes

- debemos lograr la "aleatoriedad" en la lista de reproducción del mp3, por ejemplo, sonido 1, sonido 2, sonido 3
- la aleatoriedad quizá no existe como tal en el sentido de que las palabras que utilizaremos no tienen conexión entre sí, pero de igual manera debemos intercalar las cosas para que no sea tan repetitivo, ej: 1,3,2,5,3,1,4

- del código que reproduce la lista de sonidos, cómo veo cuál sonido está reproduciendo dentro del código? cuál es el parámetro que me indica la lista de sonidos? veo la lista de sonidos?

- vamos a establecer que a cierta distancia sea cierto sonido? o sea habrán distancias a las que se activen ciertas cosas y otras no?

**preguntas a chatgpt que pudieran servir**

- qué función cumple el "playfolder"
- La función playFolder() es parte de la librería DFRobotDFPlayerMini y sirve para reproducir un archivo MP3 específico dentro de una carpeta concreta de la tarjeta SD del DFPlayer Mini.
- ¿hay que crear distintas carpetas que contengan distintas pistas de audio?
- ejemplo: carpeta 1: tiene sonido 1 y sonido 2, carpeta 2: tiene sonido 3 y 4
- estoy haciendo una comparación entre: myDFPlayer.play(1); // play the first mp3 y myDFPlayer.playfolder(1,2) para ver cuál puede servir para establecer una lista aleatoria
