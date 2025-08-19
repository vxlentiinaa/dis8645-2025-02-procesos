#include "Administrador.h"

Administrador::Administrador()
{
    // constructor
    for (int i = 0; i < Administrador::lista.listaEstudiantes.size(); i++)
    {
        Estudiante nuevoEstudiante(Administrador::lista.listaEstudiantes[i], i);
        Administrador::estudiantes.push_back(nuevoEstudiante);
    }
}

Administrador::~Administrador()
{
    // destructor
}
