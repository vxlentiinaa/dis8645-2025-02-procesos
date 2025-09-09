#ifndef BLOQUECOMPACTADO_H
#define BLOQUECOMPACTADO_H

#include "Bloque.h"
#include "Uso.h"
#include "Fabricacion.h"


class BloqueCompactado : public Bloque {
  Public:
   //Constructor
   BloqueCompactado();

   Uso almacenamiento;
   Fabricacion variosObjetosIguales;
   bool Fabricacion = true;

   //Destructor
   ~BloqueCompactado();



};

#endif