#ifndef TRAINER_H
#define TRAINER_H

#include "PokeFriend.h"
#include <Arduino.h>

#define MAX_TEAM_SIZE 6

class Trainer {
public:
  //constructor
  Trainer(String gamerTag);
  //destructor
  ~Trainer();

  //nombre del entrenador
  String gamerTag;
  PokeFriend pkmnOnTeam[MAX_TEAM_SIZE];
  //número actual de Pokémon en el equipo
  int teamSize;  
  
  int medallas;

  bool agregarPkmn(PokeFriend pokemon);  // Debería retornar éxito/fracaso
  bool quitarPkmn(int index);            // Quitar por posición en el equipo
  int getTeamSize() const;               // Getter para el tamaño del equipo
};
#endif