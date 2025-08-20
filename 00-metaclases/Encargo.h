#ifndef ENCARGO_H
#define ENCARGO_H

#include <string>

class Encargo
{
public:
    // constructor
    Encargo();

    // destructor
    ~Encargo();

    void asignarNumero(int numero);
    void asignarFecha(std::string sesion);
    void asignarTexto(std::string texto);
};

#endif
