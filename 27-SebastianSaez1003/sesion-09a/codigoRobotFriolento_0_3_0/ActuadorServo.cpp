// biblioteca para funcionamiento del servo
#include "ActuadorServo.h"

ActuadorServo::ActuadorServo() {
}

void ActuadorServo::configurar() {
  // configurar en que pin conectar el servo
  actBrazo.attach(9);
}

void ActuadorServo::posicionBrazo() {
}

void ActuadorServo::moverBrazo() {
  actBrazo.write(saludoIzq);
  delay(1000);
  actBrazo.write(saludoDer);
  delay(1000);
  actBrazo.write(saludoNeu);
}