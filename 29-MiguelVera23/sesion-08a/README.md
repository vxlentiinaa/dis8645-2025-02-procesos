# sesion-08a

## Reproductor mp3 DF Player Mini
Después de hacer que el mp3 funcionara correctamente y reproduciera audio de la tarjeta SD es momento de ajustarlo a lo que necesitamos. Habrán 4 escenarios posibles de color de dulce y cada uno tiene un saludo asociado. Mediante if y else if podemos cubrir cada uno y asociarlo a un archivo de audio numerado. Descubrimos que los audios de la tarjeta se clasifican en función al orden y se pueden reproducir en suceción o de manera aislada. El código base que usamos para hacerlo funcionar <https://projecthub.arduino.cc/munir03125344286/play-audio-in-arduino-d64363> reproduce una cantidad determinada de cada archivo de audio y pasa al siguiente en orden. A parte de aportar líneas de código esenciales y complicadas para que funcione, este referente ayudó a que entendieramos los controladores y la lógica del reproductor. También ofrece una función adicional que comunica los problemas y el estado de la pieza en el monitor serial que podríamos añadir al nuestro pero de manera reducida pues no es esencial.

revisar prueba2audio

## Un audio por color
<https://www.hackster.io/mertarduino/talking-color-detect-system-arduino-dfplayer-gy-31-tcs-315423?utm_source=chatgpt.com#overview> 

Encontramos un referente que hace esencialmente lo mismo que nosotros y junto a correcciones y ajustes con chatgpt conseguimos una iteración del referente que podemos entender y es facil de manipular usando las clases. Aún estoy en proceso de integrarla al código para que compile (y ojalá funcione) pero al revisarla me hace sentido y usa else if en vez de case que no manejo.


