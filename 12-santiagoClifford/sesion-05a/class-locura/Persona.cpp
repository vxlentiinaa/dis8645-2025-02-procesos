#include "Persona.h"

Persona::Persona(bool vida) {
  Persona::vidaState = vida;
}
Persona::~Persona() {
}
void Persona::setEdad(int newEdad) {
  Persona::edad = newEdad;
}
int Persona::getEdad() {
  return Persona::edad;
}


String Persona::getRut(){
return Persona::rut;
}

void Persona::setRut(String nuevoRut){
Persona::rut = nuevoRut;
}
