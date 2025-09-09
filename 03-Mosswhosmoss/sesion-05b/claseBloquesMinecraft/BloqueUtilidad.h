#ifndef BLOQUEUTILIDAD_H
#define BLOQUEUTILIDAD_H

#include "Bloque.h"
#include "Funcion.h"
#include "Funcion.h"

class BloqueUtilidad : public Bloque {
  Public:
   //Constructor  
   BloqueUtilidad(); 
   Objetivo interactividad;
   Funcion particular;
   bool creacion = true;
   bool interactividad = true;
   bool ayudaUsuario = true;

   //Destructor 
   ~BloqueUtilidad();


};

#endif