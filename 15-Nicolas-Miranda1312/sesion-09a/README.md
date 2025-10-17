# sesion-09a

En clase, junto a **Miguel**, conectamos el **sensor de color** y el **DFPlayer** en un mismo Arduino utilizando la **protoboard**.

![Sensor de color 1](imagenes/Audio_Sensor.jpeg)

Logramos realizar la conexión correctamente, pero en el código tuvimos problemas para **sincronizar la detección de colores** con la **reproducción de los audios**.

Finalmente, lo solucionamos **declarando la variable** `colorDetectado = readColor;`, lo que permitió vincular correctamente la lectura del color con el audio correspondiente.

```cpp
colorDetectado = readColor;

if (colorDetectado == 1) {
  myDFPlayer.playFolder(1, 1);
  Serial.print("Rojo detectado");
  // Rojo
} else if (colorDetectado == 2) {
  myDFPlayer.playFolder(2, 2);
  Serial.print("Azul detectado");
  // Azul
} else if (colorDetectado == 3) {
  myDFPlayer.playFolder(3, 3);
  Serial.print("Amarillo detectado");
  // Amarillo
} else if (colorDetectado == 4) {
  myDFPlayer.playFolder(4, 4);
  Serial.print("Verde detectado");
  // Verde
}
