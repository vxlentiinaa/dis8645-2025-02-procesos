#include "Persona.h"

// el primer archivo es para definir, te dice la interfaz
// el cpp es lo más complejo porque dice que es lo que hace el archivo

Persona::Persona(bool vida) {
  Persona::estaViva = vida;
}

Persona::~Persona();

void Persona::setEdad(int nuevaEdad) {
  Persona::edad = nuevaEdad;
}

int Persona::getEdad() {
  return Persona::edad;
}