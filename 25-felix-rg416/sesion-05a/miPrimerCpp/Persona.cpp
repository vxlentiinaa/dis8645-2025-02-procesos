// luego de definir en "Persona.h"
// le decimoos a las funciones lo que tienen que hacer

#inlcude "Persona.cpp"

// copiamos las funcioones de "Persona.h"
// y se reemplaza los ; por {}

// para que las funciones sepan a qué clase pertenecen
// se les pone "Persona::" antes de  cada función
  Persona::Persona(bool vida){
    Persona::estaViva = vida;
  }
  
  Persona::~Persona(){}

  void Persona::definirEdad(int nuevaEdad){
    Persona::edad = nuevaEdad;
  }

  int Persona::getEdad(){
    
  // return = retorna y escupe la edad dentro de la persona  
  return Persona::edad;
  }