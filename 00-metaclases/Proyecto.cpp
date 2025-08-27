#include "Proyecto.h"

Proyecto::Proyecto(int numero)
{
    Proyecto::numero = numero;
}

Proyecto::agregarGrupos()
{
    Grupo nuevo;
    grupos.push_back(nuevo);
}

Proyecto::~Proyecto()
{
}
