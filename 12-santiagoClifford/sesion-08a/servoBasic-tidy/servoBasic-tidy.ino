#include <Servo.h>

Servo motorcillo;

void moverMotorcillo(int angulo, int tiempo) {
  motorcillo.write(angulo);
  Serial.print("el ángulo es:");
  Serial.println(angulo);
  delay(tiempo);
}

void setup() {
  motorcillo.attach(3);
  Serial.begin(9600);
}

void loop() {
  moverMotorcillo(0, 3000);
  moverMotorcillo(70, 2000);
}