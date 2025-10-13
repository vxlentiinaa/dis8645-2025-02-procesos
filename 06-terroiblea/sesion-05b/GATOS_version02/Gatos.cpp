#include "Gatos.h"

Gatos::Gatos(String nombreInicial, int edadInicial) : nombre(nombreInicial), edad(edadInicial), estaVivo(true) {
    Serial.println("¡Ha nacido un nuevo gato llamado " + nombre + "!");
}

Gatos::~Gatos() {
    Serial.println("El gato " + nombre + " se ha ido.");
}

void Gatos::setNombre(String nuevoNombre) {
    this->nombre = nuevoNombre;
}

void Gatos::setEdad(int nuevaEdad) {
    if (nuevaEdad > 0) {
        this->edad = nuevaEdad;
    }
}

String Gatos::getNombre() {
    return this->nombre;
}

int Gatos::getEdad() {
    return this->edad;
}

bool Gatos::isVivo() {
    return this->estaVivo;
}

void Gatos::maullar(String tipoDeMaullido) {
    Serial.println(this->nombre + " hace un maullido " + tipoDeMaullido + ": ¡Miau!");
}

void Gatos::ronronear() {
    Serial.println(this->nombre + " está ronroneando suavemente: Prrrrr...");
}

void Gatos::comer(String comida) {
    Serial.println(this->nombre + " está comiendo " + comida + " con mucho gusto.");
}

void Gatos::dormir(int horas) {
    Serial.println(this->nombre + " se fue a dormir por " + horas + " horas. Zzz...");
}

void Gatos::jugar() {
    Serial.println(this->nombre + " está jugando con una pelota de estambre.");
}
