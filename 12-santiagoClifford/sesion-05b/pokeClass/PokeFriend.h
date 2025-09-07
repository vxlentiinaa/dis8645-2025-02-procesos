#ifndef POKE_FRIEND_H
#define POKE_FRIEND_H

#include "Tipo.h"
#include "Estadistica.h"

#define MAX_TIPOS 2
#define MAX_MOVS 2

class PokeFriend {
public:
  PokeFriend(String especie);

  String nombre = "";
  String especie;
  int nivel;

  Estadistica[] stats;
  String[] tipos;
  Movimientos[] moves;



  agregarStat(statAgregada);
}