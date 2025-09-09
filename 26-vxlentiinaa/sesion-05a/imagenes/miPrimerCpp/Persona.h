// es para crear nuevos archivos en c++
#ifndef PERSONA_H
#define PERSONA_H

#include <Arduino.h>

// la clase nos permite definir lo que es una persona para hacer varias personas 
// persona con P pq es una clase, solo cuando definamos una clase va un ;
// dentro de las clases hay muchas opciones, se parte primero con public

class Persona { // es el molde

public: // cualquier otra clase pueda decir hazlo, quien tiene acceso 
// metodo 
// es una funcion dentro de una clase
// constructor
// metodo constructor
// sirve para crear nuevas instancias
// clase Persona es un molde de galleta 
// metodo Persona() nos permite hacer las galletas 
// que parametros puedo darle a una persona 
// parametro del constructor es un boolean vida 
//true si esta vivo, false si esta muerto 
Persona(bool vida);
// destructor
~Persona();
// option + Ñ:~ 

// funcion void 
// que define la edad 
// necesita parametro int 
void setEdad(int nuevaEdad);

//funcion int
// devuelve la edad
int getEdad();

bool estaViva;
int edad;
String rut

};


#endif