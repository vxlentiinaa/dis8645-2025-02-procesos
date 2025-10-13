#ifndef PELAJEGATOS_H
#define PELAJEGATOS_H

#include <Arduino.h>

class pelajeGatos {

private:
    String color;
    String longitud;
    String textura;
    String patron;

public:
// constructor
    pelajeGatos(String colorInicial, String longitudInicial, String patronInicial, String texturaInicial);

// destructor
    ~pelajeGatos();

    void setColor(String nuevoColor);
    void setLongitud(String nuevaLongitud);
    void setTextura(String nuevaTextura);
    void setPatron(String nuevoPatron);

    String getColor();
    String getLongitud();
    String getTextura();
    String getPatron();

    void describir();
};

#endif