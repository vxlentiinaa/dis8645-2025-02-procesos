#include "Rotador.h"

Rotador::Rotador() {}
Rotador::~Rotador() {}

void Rotador::configurar() {
  Rotador::servo.attach(Rotador::patitaServo);
}


void Rotador::rotar() {
  // mover a la derecha
  for (int nuevaPos = Rotador::anguloActual; nuevaPos < Rotador::anguloMax; nuevaPos += paso) {
    Rotador::servo.write(nuevaPos);
    delay(deltaTiempo);
  }
  // mover a la izquierda
  for (int nuevaPos = Rotador::anguloActual; nuevaPos > Rotador::anguloMin; nuevaPos -= paso) {
    Rotador::servo.write(nuevaPos);
    delay(deltaTiempo);
  }
}