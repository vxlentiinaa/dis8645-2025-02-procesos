#ifndef GATOS_H
#define GATOS_H

#include <Arduino.h>

class Gatos {

private:
    String nombre;
    int edad;
    bool estaVivo;

public:
    Gatos(String nombreInicial, int edadInicial);
    ~Gatos();

    void setNombre(String nuevoNombre);
    void setEdad(int nuevaEdad);

    String getNombre();
    int getEdad();
    bool isVivo();

    void maullar(String tipoDeMaullido);
    void ronronear();
    void comer(String comida);
    void dormir(int horas);
    void jugar();
};

#endif