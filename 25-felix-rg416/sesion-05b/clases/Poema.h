#ifndef POEMA_H
#define POEMA_H

#include "Texto.h"

// la clase "Poema" necesita de "Texto"
class Poema : public Texto {
public:

// las clases necesitan un constructor y un destructor 
// constructor
Poema();
// destructor
~Poema();

// como los poemas son Textos, no necesito crear las tipografias
tipografia = "Dramatic Sans";

// no se pone "float" porque la funcion ya ha sido creada en "Textp.h"
nota = 4.0;

};

#endif