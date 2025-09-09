#ifndef PERSONA_H
#define PERSONA_H

#include <Arduino.h>

class Persona {

  //cualquier persona tiene acceso a esta clase
public:
  // aqui se escriben las funciones
  // las funciones dentro de una clase se llaman metodo
  // este seria el metodo constructor
  // sirve para crear nuevas instancias
  // es decir clase Persona es un molde de galleta
  // y el metodo seria lo que nos permite hacer las galletas
  // cada metodo tiene un parametro distinto
  // el metodo constructor seria el parametro inicial

  //parametro constructor si la persona esta viva o muerta
  //true si esta vivo, flase si esta muerto
  Persona(bool vida);

  // como hay un constructor tambien existe un destructor
  ~Persona();

  // funcion void
  // que define edad
  // necesita parametro int
  // para definir esta el parametro set
  // (int nuevaEdad) parametro que funciona solo dentro del void
  void setEdad(int nuevaEdad);

  // funcion int
  // para recolectar debe ser get
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