#ifndef PERSONA_H
#define PERSONA_H

class Persona {

public:

  //metodos
  //son funciones dentro de una clase
  //metodo constructor
  //sirve para crear nuevas instancias
  //clase Persona es un molde de galleta
  //metodo Persona() nos permite hacer la galleta.
  //parametro del constructor es un boolean vida.
  //true si esta vivo, false si esta muerto
  Persona(bool vida);


  //destructor
  ~Persona();

  //funcion void
  //que define edad
  //necesita parametro int
  void definirEdad(int edad);

  //funcion int
  //devuelve la edad
  int getEdad();

  bool estaViva;
  int edad;

  
};


#endif