# sesion-08a

martes 30 de septiembre

Para saber la posición del sonido se compara la intensidad de cada micrófono

El sonido tiene:

- Frecuencia: Cuantas veces se repite una onda por segundo. Cuántas ondas cabe en un segundo
- Amplitud: Qué tan alto llega la onda del sonido

Para nosotros es importante la amplitud

Módulos:

- MAX4466 lounders

## Calibrar los micrófonos

Los micrófonos de fábrica no leen exactamente lo mismo. Por eso es necesario calibrarlos.

La idea es que estén en la misma amplitud (Misa lo explicó de una forma muy técnica que no caché mucho)

Para calibrarlos Aarón me ayudó a cómo buscar el código que pueda ayudarme.

Desde Afel llegamos al siguiente enlace: <https://learn.adafruit.com/adafruit-microphone-amplifier-breakout/measuring-sound-levels>

El código está en la carpeta "codigos" de esta sesion

Era importante leer el datasheet del micrófono porque debe ser conectado a 3.3V 

## Proyecto

Para nuestro proyecto necesitamos comparar la amplitud de ambos micrófonos para saber de dónde viene el sonido.

Si valor B es mayor que A, el sonido viene de B

## Párpados

Para los párpados vamos a usar un servo motor que mueva ambos con un eje común.

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
