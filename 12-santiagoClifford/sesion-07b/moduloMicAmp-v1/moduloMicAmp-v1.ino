int valorMic;
void setup() {
  Serial.begin(9600);
}

void loop() {
  valorMic = analogRead(A0);
  valorMic = constrain(valorMic, 511, 1023);
  Serial.println(valorMic);
  delay(500);
}
