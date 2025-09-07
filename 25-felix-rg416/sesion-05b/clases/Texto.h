#ifndef TEXTO_H
#define TEXTO_H

#include "Tipo.h"
#include "Tinta.h"
#include "Autoriah"

class Texto {
public:
// las clases necesitan un constructor y un destructor
 
// constructor
Texto();

// destructor
~Texto();

Tipo tipografia;
Tinta tinta;
Autoria autora;
bool izquierdaADerecha = true;
float nota = 1.0; 

};

#endif