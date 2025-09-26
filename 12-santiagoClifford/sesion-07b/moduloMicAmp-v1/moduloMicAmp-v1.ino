int valorMic;
void setup() {
  Serial.begin(9600);
}

void loop() {
valorMic = analogRead(A0);
Serial.println(valorMic);
delay(500);
}
