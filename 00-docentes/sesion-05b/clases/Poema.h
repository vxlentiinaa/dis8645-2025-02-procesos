#ifndef POEMA_H
#define POEMA_H

#include "Texto.h"

class Poema : public Texto
{
public:
    // constructor
    Poema();

    // destructor
    ~Poema();

    tipografia = "Dramatic Sans";
    nota = 4.0;
};

#endif