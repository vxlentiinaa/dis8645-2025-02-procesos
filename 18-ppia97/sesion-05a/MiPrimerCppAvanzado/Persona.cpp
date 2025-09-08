"#include "Persona.h"

//constructor
Persona::Persona(bool vida) {
  Persona::EstaViva = vida;
}

//destructor
Persona::~Persona() {}


//set edad
void Persona::setEdad(int nuevaEdad) {
  Persona::edad = nuevaEdad;
}

//get edad
int Persona::getEdad() {
  return Persona::edad;
}




