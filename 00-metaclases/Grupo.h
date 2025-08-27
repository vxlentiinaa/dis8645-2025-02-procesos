#ifndef GRUPOH_H
#define GRUPOH_H

#include <string>
#include <vector>

#include "Estudiante.h"

class Grupo
{

public:
    Grupo();
    agregarEstudiante(Estudiante agregade);

private:
    std::vector<std::string> estudiantes;
};

#endif
