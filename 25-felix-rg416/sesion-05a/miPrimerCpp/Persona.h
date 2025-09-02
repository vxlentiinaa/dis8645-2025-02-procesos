// creamos el archivo "Persona.h"
// este archivo es para definir

// se crea una berma para que no se muera el codigo
#ifndef PERSONA_H
#define PERSONA_H

#include <Arduino.h>
// se crea la clase "Persona"
// con mayúscula porque es importante
class Persona {

  // public = cualquier persona tiene acceso a esto
public:
  // se escribiran metodos
  // (funciones dentro de una clase)

  // es el metodo constructor
  // sirve para crear nuevas instancias
  // clase "Persona" es un molde de galletas
  // metodo "Persona()" nos permite hacer las galletas

  // parametro del constructos es un bool "vida"
  // "true" si está vivo, "false" si esta muerto
  Persona(bool vida);

  // destructor "olvidate de esa persona, que deje de existir"
  ~Persona();

  // funcion "void"
  // que define "edad"
  // necesita parametro "int"
  void setEdad(int nuevaEdad);

  // funcion "int"
  // dice que edad tiene - devueleve la edad
  int getEdad();

  // get y set de rut
  String getRut();

  void setRut(String nuevoRut);

  bool estaViva;
  int edad;
  String rut;
// ESTO PERMITE INCLUIRLO EN "miPrimerCpp.ino"

  // sólo cuando se hace una clase
  // se debe poner };
};

#endif