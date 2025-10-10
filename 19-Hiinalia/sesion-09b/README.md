# sesion-09b
10 Octubre 2025

## Más trabajo en clases
Código que quiero adaptar con la ayuda de Aarón:

```cpp

// https://www.instructables.com/Turn-on-and-Off-a-Lamp-Clapping-Twice-Using-Arduin

// luz led
#define signalToRelayPin 13
// sensor de sonido
#define sensorPin 2

// variables de sonido
int lastSoundValue; // ultimo sonido 
int soundValue; // valor actual del sensor (0 o 1)
long lastNoiseTime = 0; // momento de último sonido
long currentNoiseTime = 0; // momento actual
// DEFINIR ESTE PARA SONIDO O PANTALLA
long lastLightChange = 0; //último cambio de luz (por definir)
int relayStatus = HIGH; //estado de parpadeo del led

void setup() {
  Serial.begin(9600); // comunicación serial
  pinMode(sensorPin, INPUT); //entrada es el sensor
  pinMode(signalToRelayPin, OUTPUT); //salida es el led
}

void loop() {

  //lee el valor del sensor
  soundValue = digitalRead(sensorPin);
  // tiempo desde que se encendió el arduino
  currentNoiseTime = millis(); //para medir el tiempo entre aplausos

  if (soundValue == 1) { // si hay sonido...

    if (
       // para evitar detectar el sonido varias veces
      (currentNoiseTime > lastNoiseTime + 200) &&
      // para asegurarse de que no haya sonido antes
      (lastSoundValue == 0) &&
      // segundo aplauso en 0.8 segundos
      (currentNoiseTime < lastNoiseTime + 800) &&
      // evitar un tercer aplauso
      (currentNoiseTime > lastLightChange + 1000)
    ) {
      // CAMBIAR PARA REPRODUCIR SONIDO Y MOSTRAR MENSAJE
      Serial.println("toma mas awa");
      // lo de aqui abajo es del código anterior
      // para usar la luz led como lámpara
      //relayStatus = !relayStatus;
      //digitalWrite(signalToRelayPin, relayStatus);
      //lastLightChange = currentNoiseTime;
     }

     lastNoiseTime = currentNoiseTime;
  }

  lastSoundValue = soundValue;
```

Recuerda **subir el archivo a github** para la proxima. En vez de copiar y pegar al README.

prefijio "vives ahi" para las clases:
variable :: 

#define es demasiado hacker, usar int

### Párrafo como funcionan los aplausos

Aarón me mandó a escribir un parrafo para entender que pasa con los aplausos en el sensor de sonido:

Comienza en el menú de idiomas. Se va girando el encoder y presionando para elegir el idioma. Una vez que se haya elegido un idioma, se despliega un mensaje que diga “Aplaude dos veces consecutivas para reproducir o presiona el botón para volver al menú” Si se detectan los aplausos, se reproduce el audio y el texto en el idioma seleccionado anteriormente. Una vez que se termina de reproducir, aparece de nuevo el mismo mensaje de “Aplaude dos veces consecutivas para reproducir o presiona el botón para volver al menú.” Si se aplaude otra vez, se vuelve a repetir este proceso. En el caso de querer volver al menú anterior, se debe presionar el botón del encoder.

Si hay más o menos de dos aplausos, el sonido detectado se va a ignorar. Por ejemplo, si se aplaude 3 veces, no se considera como aplauso. Si se aplaude 1 vez, no se considera como aplauso. Solo puede funcionar una vez que haya detectado 2 aplausos consecutivos. El tiempo entre el primer aplauso y segundo aplauso debe ser de 0.8 segundos. Para que se detecte el segundo aplauso, debe estar en ese rango de tiempo. Si se detecta un tercer aplauso dentro de ese tiempo, se anula. No se detectan aplausos si ya se está reproduciendo el audio y el texto. Se vuelve a detectar aplausos una vez que se terminó de reproducir.



