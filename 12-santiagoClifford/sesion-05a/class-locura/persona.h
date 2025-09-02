#ifndef PESONA_H
#define PERSONA_H

//clases
class Persona {

public:

  //métodos
  //son funciones dentro de una clase

  //método constructor
  //sirve para crear nuevas instancias

  //clase persona es un molde de galleta
  // metodo perdona nos permite hacer las galletas
  // parámetro del constructor es bool lentes
  Persona(bool vida);

  //destructor
  ~Persona();

  // funcion
  void setEdad(int newEdad);

  // funcion int
  int getEdad();

  bool vidaState;
  int edad; 
};

#endif
