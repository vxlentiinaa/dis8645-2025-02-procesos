#include "Parpados.h"

Parpados::Parpados() {}
Parpados::~Parpados() {}

void Parpados::configurar() {
  Parpados::motorcillo.attach(7);
}

 void Parpados::moverMotorcillo(int angulo, int tiempo) {
  motorcillo.write(angulo);
//   Serial.print("el ángulo del párpado es:");
//   Serial.println(angulo);
  delay(tiempo);
 }

// // referente de como reducir el código
// // <https://arduino.stackexchange.com/questions/66378/servo-motor-in-function>