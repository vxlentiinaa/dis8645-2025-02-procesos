#include <Servo.h>

Servo motorcillo;

void moverMotorcillo(int angulo, int tiempo) {
  motorcillo.write(angulo);
  Serial.print("el ángulo es:");
  Serial.println(angulo);
  delay(tiempo);
}


void setup() {
  motorcillo.attach(9);
  Serial.begin(9600);
}

void loop() {
  moverMotorcillo(0, 1000);
  moverMotorcillo(90, 1000);
}