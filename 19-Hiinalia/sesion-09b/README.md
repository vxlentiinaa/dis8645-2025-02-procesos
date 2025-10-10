# sesion-09b

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
