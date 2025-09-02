// luego de definir en "Persona.h"
// le decimoos a las funciones lo que tienen que hacer
#include "Persona.h"

// copiamos las funcioones de "Persona.h"
// y se reemplaza los ; por {}

// para que las funciones sepan a qu clase pertenecen
// se les pone "Persona::" antes de  cada función
// constructor
Persona::Persona(bool vida) {
  Persona::estaViva = vida;
}

// destructor
Persona::~Persona() {}

// set edad
void Persona::setEdad(int nuevaEdad) {
  Persona::edad = nuevaEdad;
}

// get edad
int Persona::getEdad() {
  return Persona::edad;
}

// get y set de rut
String Persona::getRut(){
  return Persona::rut;
}

void Persona::setRut(String nuevoRut){
  Persona::rut = nuevoRut;
}