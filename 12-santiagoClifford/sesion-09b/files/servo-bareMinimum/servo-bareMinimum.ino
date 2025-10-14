#include <Servo.h>

Servo motorcillo;
Servo motorcilloNeck;

void moverMotorcillo(int angulo, int tiempo) {
  motorcillo.write(angulo);
  Serial.print("el ángulo es: ");
  Serial.println(angulo);
  delay(tiempo);
}

void moverMotorcilloNeck(int angulo, int tiempo) {
  motorcilloNeck.write(angulo);
  Serial.print("el ángulo del neck es: ");
  Serial.println(angulo);
  delay(tiempo);  // ✅ ahora espera el tiempo indicado
}

void setup() {
  // motorcillo.attach(9);
  motorcilloNeck.attach(10);
  Serial.begin(9600);
}

void loop() {
  moverMotorcilloNeck(0, 2000);
  moverMotorcilloNeck(120, 2000);
}

unsigned long lastUpdate = 0;
int velocidad = 20; // milisegundos entre pasos

void Motorcillo::actualizarPosition() {
  if (!amenaza && millis() - lastUpdate >= velocidad) {
    position += direction * incremento;
    if (position >= posMax) direction = -1;
    if (position <= posMin) direction = 1;

    servo.write(position);
    lastUpdate = millis();
  }
}
