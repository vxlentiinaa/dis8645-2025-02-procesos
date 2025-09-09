#ifndef BLOQUE_H
#define BLOQUE_H

#include "Forma.h"
#include "Apariencia.h"
#include "Propiedades.h"

class Bloque {
 Public:
 //Constructor
 Bloque();

 Forma unidadCubica;
 Apariencia textura;
 Propiedades interaccion;
 bool existeDentroDeUnaCuadricula3D = true;
 bool fabricacion = true;


 //Destructor
 ~Bloque();

};

#endif