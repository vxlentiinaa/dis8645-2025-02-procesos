#include <Servo.h>
//int angulo;
Servo motorcilloNeck;

void moverMotorcilloNeck(int angulo, int tiempo) {
  motorcilloNeck.write(angulo);
  Serial.print("el ángulo es:");
  Serial.println(angulo);
  delay(tiempo);
}

void setup() {
  motorcilloNeck.attach(10);
  Serial.begin(9600);
}

void loop() {
  if (angulo < 1) {
    moverMotorcilloNeck(int angleRight, 10);
    angleRight++;
  } else if (angulo > 170) {
    moverMotorcilloNeck(int angleLeft, 10);
    angleRight--;
  }
}