#include "Criatura_Marina.h"

//constructor
Criatura_Marina::Criatura_Marina(bool esCalamar){
  Criatura_Marina::isSquid = esCalamar;
}
//destructor
Criatura_Marina::~Criatura_Marina(){ 
}

//set longitud
void Cefalopodo::setLongitud(int nuevaLongitud){
  Cefalopodo::Longitud = nuevaLongitud;
}

void Cefalopodo::getLongitud(){
  return Cefalopodo::Longitud;
}

void Cefalopodo::setEspecie(String nuevaEspecie){
  Cefalopodo::Especie = nuevaEspecie;
}

void Cefalopodo::getEspecie(){
  return Cefalopodo::Especie; //retorna, pero se debe hacer con numeros enteros
}