void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("holi probando"); // texto + salto de línea
  delay(2500); // espera 2.5seg antes de repetir
  Serial.println("esto sería el siguiente texto?");
  delay(1000);

}
