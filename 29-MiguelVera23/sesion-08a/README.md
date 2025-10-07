# sesion-08a

## Reproductor mp3 DF Player Mini

Después de hacer que el mp3 funcionara correctamente y reproduciera audio de la tarjeta SD es momento de ajustarlo a lo que necesitamos. Habrán 4 escenarios posibles de color de dulce y cada uno tiene un saludo asociado. Mediante if y else if podemos cubrir cada uno y asociarlo a un archivo de audio numerado. Descubrimos que los audios de la tarjeta se clasifican en función al orden y se pueden reproducir en suceción o de manera aislada. El código base que usamos para hacerlo funcionar <https://projecthub.arduino.cc/munir03125344286/play-audio-in-arduino-d64363> reproduce una cantidad determinada de cada archivo de audio y pasa al siguiente en orden. A parte de aportar líneas de código esenciales y complicadas para que funcione, este referente ayudó a que entendieramos los controladores y la lógica del reproductor. También ofrece una función adicional que comunica los problemas y el estado de la pieza en el monitor serial que podríamos añadir al nuestro pero de manera reducida pues no es esencial.

revisar prueba2audio

## Un audio por color

<https://www.hackster.io/mertarduino/talking-color-detect-system-arduino-dfplayer-gy-31-tcs-315423?utm_source=chatgpt.com#overview>

Encontramos un referente que hace esencialmente lo mismo que nosotros y junto a correcciones y ajustes con chatgpt conseguimos una iteración del referente que podemos entender y es facil de manipular usando las clases. Aún estoy en proceso de integrarla al código para que compile (y ojalá funcione) pero al revisarla me hace sentido y usa else if en vez de case que no manejo.


En el último archivo subido intenté configurar el mp3 usando la fórmula que ya funcionó anteriormente, la lista de comandos de DFPlayer mini y correcciones puntuales de chat gpt. Hay elementos específicos que no comprendo totalmente como las partes que declaran tx y rx o comandos de setup (que al eliminar impiden la compilación) pero creo tener bastante claro el resto. Para separar cada caso con sus condiciones correspondientes usé un int provisional que reemplaza la info del sensor de color y ligué con if y else if los 4 audios. Al intentar subirlo al arduino el error 74 no me lo permitió incluso después de probar y reiniciar harto por lo que espero funcione mañana. Lo importante es que compiló y creo que debería funcionar.

```cpp
void loop(){
static bool reproduciendo = false;
//evita que se repita
colorDetectado = 3;
if (reproduciendo = false){
//si no se está reproduciendo nada  
  if (colorDetectado = 1){
  myDFPlayer.play(1);
//elige el archivo 1 en la tarjeta SD
reproduciendo = true;
//se reproduce
}
else if (colorDetectado = 2){
  myDFPlayer.play(2);
  reproduciendo = true;
}
else if (colorDetectado = 3){
  myDFPlayer.play(3);
  reproduciendo = true;
}
else if (colorDetectado = 4){
  myDFPlayer.play(4);
  reproduciendo = true;
}
}

}
```

Falta agregar un apartado que devuelva al estado original el reproductor en cuanto termine el audio (mediante el bool reproduciendo). Lo bueno de este código es que podemos agregar el complemento del sensor de color en otra pestaña sin hacer muchos cambios y también se reproducirá cada audio completo aunque la duración sea diferente sin anexos adicionales (creo). 

El siguiente paso es configurar el sensor de color según los parámetros RGB que nos dé cada dulce, sumarlos a la función y asignarles un número.
```cpp
int colorDetectado;
```
