#ifndef PERSONA_H
#define PERSONA_H

#include <Arduino.h>

class Persona {

public:

  // metodos
  // son funciones dentro de una clase

  // metodo constructor
  // sirve para crear nuevas instancias
  // clase Persona es un molde de galleta
  // metodo Persona() nos permite hacer las galletas
  // parametro del constructor es un boolean lentes
  // true si esta vivo, false si esta muerto
  Persona(bool vida);

  // destructor
  ~Persona();

  // funcion void
  // que define edad
  // necesita parametro int
  void setEdad(int nuevaEdad);

  // funcion int
  // devuelve la edad
  int getEdad();


  // get y set de rut
  String getRut();

  void setRut(String nuevoRut);

  bool estaViva;
  int edad = -1;
  String rut;
};


#endif