//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;
int cadaCuanto = 4;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long segundos = millis() / 1000;

  Serial.print("vamos en el segundo ");
  Serial.print(segundos);
  Serial.print(" y parpadeamos cada ");
  Serial.print(cadaCuanto);
  Serial.println(" segundos");

  if (segundos%cadaCuanto == 0){
    estadoLed = true;
  } else {
    estadoLed = false;
  }

  digitalWrite(LED_BUILTIN, estadoLed);
}