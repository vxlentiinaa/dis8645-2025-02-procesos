#include "Persona.h"

Persona::Persona(bool vida){
Persona::vidaState = vida;
}
Persona::~Persona(){

}
void Persona::setEdad(int newEdad){
Persona::edad = nuevaEdad;
}
int Persona::getEdad(){
return Persona::edad;
}
