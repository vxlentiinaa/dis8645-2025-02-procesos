#include "Cuello.h"

Cuello::Cuello() {}

Cuello::~Cuello() {}

void Cuello::configurar() {
  Cuello::motorcillo.attach(10);
}

void Cuello::moverMotorcillo(int angulo, int tiempo) {
  motorcillo.write(angulo);
  Serial.print("el ángulo del cuello es:");
  Serial.println(angulo);
  delay(tiempo);
}
