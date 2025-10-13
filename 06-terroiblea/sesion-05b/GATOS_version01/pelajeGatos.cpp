#include "pelajeGatos.h"

pelajeGatos::pelajeGatos(String colorInicial, String longitudInicial, String patronInicial, String texturaInicial)
    : color(colorInicial), longitud(longitudInicial), patron(patronInicial), textura(texturaInicial) {
    Serial.println("Se ha definido un tipo de pelaje.");
}

pelajeGatos::~pelajeGatos() {}

void pelajeGatos::setColor(String nuevoColor) {
    this->color = nuevoColor;
}

void pelajeGatos::setLongitud(String nuevaLongitud) {
    this->longitud = nuevaLongitud;
}

void pelajeGatos::setTextura(String nuevaTextura) {
    this->textura = nuevaTextura;
}

void pelajeGatos::setPatron(String nuevoPatron) {
    this->patron = nuevoPatron;
}

String pelajeGatos::getColor() {
    return this->color;
}

String pelajeGatos::getLongitud() {
    return this->longitud;
}

String pelajeGatos::getTextura() {
    return this->textura;
}

String pelajeGatos::getPatron() {
    return this->patron;
}

void pelajeGatos::describir() {
    Serial.println("--- Descripcion del Pelaje ---");
    Serial.println("Color: " + this->color);
    Serial.println("Longitud: " + this->longitud);
    Serial.println("Patron: " + this->patron);
    Serial.println("Textura: " + this->textura);
    Serial.println("-----------------------------");
}