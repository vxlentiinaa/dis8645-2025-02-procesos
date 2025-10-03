# sesion-08a
Patra saber la posición del sonido se compara la intensidad de cada micrófono

El micrófono mide amplitud 

Frecuencia: Cuantas veces se repite una onda por segundo. Cuántas ondas cabe en un segundo



Amplitud: Qué tan alto llega la onda del sonido

Ecuación de la onda

Módulos:

- MAX4466 lounders

## Calibrar los micrófonos

Los micrófonos de fábrica no leen exactamento lo mismo.

La idea es que estén en la misma amplitud (Misa lo explicó de una forma muy técnica que no caché mucho)

Para calibrarlos Aarón me ayudó a cómo buscar el código que pueda ayudarme.

Desde Afel llegamos al siguiente enlace: <https://learn.adafruit.com/adafruit-microphone-amplifier-breakout/measuring-sound-levels>

El código está en la carpeta "codigos" de esta sesion

Era importante leer el datasheet del micrófono porque debe ser conectado a 3.3V 

Comparación

Si valor B es mayor que A, el sonido viene de B



Para probar el movimiento del párpado usamos [este código](https://github.com/felix-rg416/dis8645-2025-02-procesos/blob/main/12-santiagoClifford/sesion-07b/servoLearn-v1/servoLearn-v1.ino)

```cpp 
void loop() { 
  angulo= 70;
  myservo.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000);  

  angulo=180;
  myservo.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000); 
}
```
![Prueba de párpados](./archivos/parpadosTEST.gif)
