# sesion-09a

07 Octubre 2025

## Trabajo en clases
Hoy seguimos trabajando en lo que es nuestro proyecto de idiomas. Aún nos falta configurar el sensor de sonido, el cual va a detectar cuando aplaudimos.

Misa se acercó a ayudarnos, y nos entregó otro sensor de sonido, ya que el que teníamos era difícil calibrar para que solo detectará el sonido fuerte de un aplauso. Nos dio un ejemplo de cómo funciona la detección del sonido. Es un true en el caso de que sobrepase una línea establecida por el potenciómetro dentro del sensor.
Además, Misa nos recomendó buscar código para sonidos consecutivos. Hay que decidir qué hacer con la carcasa. Nos sugirió que tuviera una luz led para que fuera el “corazón” y guiar al usuario para que sepa a qué velocidad aplaudir.

### Código antiguo metronomo 
 
Utilicé un código que hice anteriormente de un metrónomo que funciona con el led que está incorporado en el arduino. Lo cambié para que funcione con un led externo.

```cpp


//Metrónomo con luz led integrada en arduino


// patita del LED
const int ledPin = 13;
// patita del sensor de sonido
const int buttonPin = 2;
 


// declaración bpm
int bpm = 100; // un corazón late a 100 bpm aprox.
int intervalo;


void setup() {
  // declarar led
pinMode(ledPin, OUTPUT);
intervalo = 60000/bpm;


}


void loop() {
  // se enciende
digitalWrite(ledPin, HIGH);
delay(100);
//se apaga
digitalWrite(ledPin, LOW);
delay(intervalo-100);


}


```
Este código funciona bien con el led. La cosa es que ahora encontramos un código con el cual se puede encender y apagar una lámpara con 2 aplausos consecutivos. Por lo que este código puede servir como referencia para ajustarlo a otro patrón.

### doble aplauso

<https://www.instructables.com/Turn-on-and-Off-a-Lamp-Clapping-Twice-Using-Arduin>

```cpp
#define signalToRelayPin 13
#define sensorPin 2

int lastSoundValue;
int soundValue;
long lastNoiseTime = 0;
long currentNoiseTime = 0;
long lastLightChange = 0;
int relayStatus = HIGH;

void setup() {
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

     relayStatus = !relayStatus;
     digitalWrite(signalToRelayPin, relayStatus);
     lastLightChange = currentNoiseTime;
    }

    lastNoiseTime = currentNoiseTime;
 }

 lastSoundValue = soundValue;
}
```

Empecé a investigar qué hacía cada cosa, y entendí qué líneas hay que cambiar para configurarlo según lo que quiero hacer (que se reproduzca sonido y muestre un mensaje en pantalla después de aplaudir.

```cpp
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
      relayStatus = !relayStatus;
      digitalWrite(signalToRelayPin, relayStatus);
      lastLightChange = currentNoiseTime;
     }


     lastNoiseTime = currentNoiseTime;
  }


  lastSoundValue = soundValue;
}
```
Lo probé de forma que se envíe un mensaje por el monitor serial después de aplaudir las dos veces. Prácticamente está listo para adaptarlo al código del proyecto. No funciona el mensaje si le elimino lastNoiseTime = currentNoiseTime; y lastSoundValue = soundValue;

```cpp
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
      Serial.println("wenos dias");
      // lo de aqui abajo es del código anterior
      // para usar la luz led como lámpara
      //relayStatus = !relayStatus;
      //digitalWrite(signalToRelayPin, relayStatus);
      //lastLightChange = currentNoiseTime;
     }


     lastNoiseTime = currentNoiseTime;
  }


  lastSoundValue = soundValue;
}
```
