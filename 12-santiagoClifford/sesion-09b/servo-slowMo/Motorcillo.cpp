#include "Motorcillo.h"
Motorcillo::Motorcillo(){
}

void Motorcillo::setMotorcillo(){
  motorcillo.attach(3);  // asignamos el pin 3 al servo.
}

void Motorcillo::moverCuello(){
}

void Motorcillo::actualizarServo() {
  motorcillo.write(position);
}

void Motorcillo::actualizarPosition() {
  if (!amenaza) {
    position = position + incremento * direction;
    if (position >= posMax) {
      direction = -1;
    }
    if (position <= posMin) {
      direction = 1;
    }
  }
}