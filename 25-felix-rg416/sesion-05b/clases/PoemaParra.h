#ifndef POEMA_H
#define POEMA_H

#include "Poema.h"

// la clase "PoemaParra" necesita de "Poema"
class PoemaParra : public Poema {
public:

// las clases necesitan un constructor y un destructor 
// constructor
PoemaParra();
// destructor
~PoemaParra();

tipografia = "Parriana";
nota = 7.0;

};

#endif