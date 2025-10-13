#include <Servo.h>

Servo motorcillo;
Servo motorcilloNeck;

void moverMotorcillo(int angulo, int tiempo) {
  motorcillo.write(angulo);
  Serial.print("el ángulo es:");
  Serial.println(angulo);
  delay(tiempo);
}
void moverMotorcilloNeck(int angulo, int tiempo) {
  motorcilloNeck.write(angulo);
  Serial.print("el ángulo es:");
	@@ -17,16 +10,16 @@ void moverMotorcilloNeck(int angulo, int tiempo) {
}

void setup() {
  motorcillo.attach(9);
  motorcilloNeck.attach(10);
  Serial.begin(9600);
}

void loop() {
  moverMotorcilloNeck(0, 1000);
  moverMotorcillo(0, 200);
  moverMotorcillo(70, 200);
  moverMotorcilloNeck(100, 1000);
  moverMotorcillo(0, 200);
  moverMotorcillo(70, 200);
}