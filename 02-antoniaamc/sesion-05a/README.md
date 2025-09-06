# sesion-05a

Nota: las cosas que estan en mayusculas no siempre necesitan estar asi, puede ser por “buenos modales”
*Cómo hacer bibliotecas en arduino (buscar pq llegue tarde)

Limpiar código principal: incluir constantes, ej: anda a aprenderte todo lo que está acá y vuelve
EJ:

`#ifndef constantes.h`
`#define constantes.h`

Solo para los archivos -H
todo lo .ino es C/C++, no todo lo C/C++ lo puedes hacer en .ino

APRENDER A PLANEAR
Conceptualizar

CLASE

1) PRIMER ARCHIVO: SE HACE

Solo definiendo cosas, no haciendo que ocurran, solo diciendo, esto existe.

(Código incompleto)

Crear personas:
Persona: define, no hace, para hacer, usar otro archivo
Persona (bool vida)

`#ifndef constantes.h`
`#define constantes.h`

Órdenes: definir edad
// función void
// que define edad
// que necesita parámetro int
void definirEdad (int edad) ;

Void definirEdad (int nuevaEdad) ;

// función int
// devuelve la edad
int getEdad ( ) ;

Public: cualquier persona tiene acceso

2 NUEVO ARCHIVO: CÓMO SE HACE
cuando llame a persona el archivo cpp te dice que hace
pegar a persona.h
Persona: : Persona (bool vida) {

}

Persona: :~Persona ( ) {}

void Persona : : setEdad (int nuevaEdad) {
Persona : : edad = nuevaEdad;
}

int Persona : :

void setEdad (

Cada persona tiene (estas) dos variables.

Acá solo aprende lo que se hace, cuando corre arduino hace loop loop loop loop.

Persona es con mayúscula porque es una clase: constructo computacional; variables, funciones
yo creo una clase y de esa clase sacó instancias
cada variable es distinta.
