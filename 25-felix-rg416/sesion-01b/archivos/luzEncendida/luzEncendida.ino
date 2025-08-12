// Encendido y apagado mediante chat

// Al escribir en el monitor serial "luz encendida"
// el led de Arduino se enciende
// Al escribir en el monitor serial "luz apagada"
// el led de Arduino se apaga

void setup() {
  // Llama al monitor serial
  Serial.begin(9600);

  // Llama al led integrado en Arduino
  pinMode(LED_BUILTIN, OUTPUT);
}
/*
void loop() {
  digitalWrite(LED_BUILTIN, LOW);
// Al recibir un texto con "luz encendida"
// el led se enciende
  if ("luz encendida") {
    digitalWrite(LED_BUILTIN, HIGH);
  }
    else if ("luz apagada") {
    digitalWrite(LED_BUILTIN, LOW);
  }
} */

void loop() {

// Al iniciar mantiene apagado el led 
  digitalWrite(LED_BUILTIN, LOW);

// Si recive un texto que dice "luz encendida"
// el led se enciende por dos segundos
  if Serial.readString("luz encendida /n") {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2000);

// le tuve que poner "delay(2000)" pensando que no
// alcanzaba a verlo encendido, pero luego no se apagó nunca
  }
}