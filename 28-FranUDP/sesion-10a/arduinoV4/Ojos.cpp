#include "Ojos.h"

Ojos::Ojos() {}
Ojos::~Ojos() {}

void Ojos::configurar() {

  // Conecta el servo a esta patita
  servoOjos.attach(patitaServoOjos);
  // Comienza con el servo mirando al centro
  servoOjos.write(90);
}

void Ojos::apuntar(int anguloObjetivo) {
  // Mira al angulo obtenido de la funcion procesarDeteccion()
  servoOjos.write(anguloObjetivo);
}
