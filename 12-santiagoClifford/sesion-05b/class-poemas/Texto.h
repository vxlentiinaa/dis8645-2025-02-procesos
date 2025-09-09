#ifndef TEXTO_H
#define TEXTO_H

#include "Tipo.h"
#include "Tinta.h"
#include "Autoria.h"


class Texto {
public:
  Texto();

  ~Texto();

  Tipo tipografia; 
  Tinta tinta;
  Autoria autora;
  bool izqAder = true;
  float nota = 1.0;
};

#endif