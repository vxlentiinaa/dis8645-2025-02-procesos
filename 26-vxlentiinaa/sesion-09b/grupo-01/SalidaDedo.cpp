#include "SalidaDedo.h"

SalidaDedo::SalidaDedo() {}

SalidaDedo::~SalidaDedo() {}

void SalidaDedo::configurar() {
  servo.attach(SalidaDedo::patitaServo);
  // posicion inicial 0 grados
  servo.write(0);
}

void SalidaDedo::levantar() {
  // 180 grados
  servo.write(180);
}

void SalidaDedo::bajar() {
  //0 grados
  servo.write(0);
}
