# sesion-01a

## Diseño de Maquinas Computacionales

High si

Low No

Vamos a programar variables.

delay=malo

1000 milisegundos

setup: inicio de arduino

/* comentarios */

//comentarios

función(opciones/parámetros)

escribe(donde/que)

; la línea terminó

void: declarar que algo es (no ocurre)

void avisarQueTodoOk(){

}

*nivéles de abstracción

*mayúsculas y minusculas son muy distintas

*anotaciónCamello

*se declara una vez y después se usa el nombre

*C++ variables

Lienzo/Sketch

Setup (chico)

Loop (grande)

int: número entero (no decimal)

float: decimal

bool: binario (si/no) 

char: carácter (1)

String: colección de carácteres secuenciales

/n: enter

'a': cabe una letra

"abc": caben más letras

=: separa lugar y contenido

Serial.


int tiempoPrendido = 100;

int tiempoApagado = 300;

String poema = "te regalaré un abismo"

Serial.begin(9600);

Serial.print(poema);

Serial.print("/n");


NO (en setup

String decimas = "En casa hallaba consuelo/n";

decimas = decimas + "con mis trapitos jugaba/n";

decimas = decimas + "uno tras otro juntaba/n";

decimas = decimas + "para formar un pañuelo/n";

decimas = decimas + "lo hilvano con mucho esmero/n";

decimas = decimas + "de ver sus lindos colores/n";

decimas = decimas + "igual que jardín de flores/n";

decimas = decimas + "me brilla en el pensamiento/n";

decimas = decimas + "para contar este cuento/n";

decimas = decimas + "pañuelo de mis amores/n";


En vez de borrar comentar //

"En casa hallaba consuelo

con mis trapitos jugaba

uno tras otro juntaba

para formar un pañuelo

lo hilvano con mucho esmero

de ver sus lindos colores

igual que jardín de flores
me brilla en el pensamiento
para contar este cuento
pañuelo de mis amores"
