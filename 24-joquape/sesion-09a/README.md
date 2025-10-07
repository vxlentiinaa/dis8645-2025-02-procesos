# sesion-09a
## Trabajo en clase 

Trabajo con [@Hiinalia](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/19-Hiinalia)
para ver el funcionamiento del sensor de sonido , estos codigos son un ejemplo que editamos 



```cpp
#define signalToRelayPin 13
// sensor de sonido
#define sensorPin 2

int lastSoundValue;
int soundValue;
long lastNoiseTime = 0;
long currentNoiseTime = 0;
long lastLightChange = 0;
int relayStatus = HIGH;

void setup() {

  //se enciende 
  pinMode(sensorPin, INPUT);
  pinMode(signalToRelayPin, OUTPUT);
}

void loop() {
  soundValue = digitalRead(sensorPin);
  currentNoiseTime = millis();

  if (soundValue == 1) { // if there is currently a noise

    if (
      (currentNoiseTime > lastNoiseTime + 200) && // to debounce a sound occurring in more than a loop cycle as a single noise
      (lastSoundValue == 0) &&  // if it was silent before
      (currentNoiseTime < lastNoiseTime + 800) && // if current clap is less than 0.8 seconds after the first clap
      (currentNoiseTime > lastLightChange + 1000) // to avoid taking a third clap as part of a pattern
    ) {

      digitalWrite(signalToRelayPin, HIGH);   // Enciende el relé o luz
      delay(700);                             // Espera 500 milisegundos (medio segundo)
      digitalWrite(signalToRelayPin, LOW);    // Apaga el relé o luz
      lastLightChange = currentNoiseTime;     // Actualiza el último cambio

     }

     lastNoiseTime = currentNoiseTime;
  }

  lastSoundValue = soundValue;
}
```
