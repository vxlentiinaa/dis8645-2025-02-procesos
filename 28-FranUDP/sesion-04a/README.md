# sesion-04a

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### SUBTITULO


### SUBTITULO


### Other things: <!-- Things to organize + random stuff -->
> ### SUB_SUBTITULO

-----------------------------------------------------------------------------------------------------------
## Avance proyecto <!-- TEXT -->
### Morse
Desde la primera clase tenía la idea de hacer un código al que uno le introdujera un String, lo separase en sus distintos caracteres y fuese uno por uno viendo a que secuencia de puntos y rayas corresponde.

Yo ya sabiendo que morse es básicamente código binario, supuse que hacer un programa que tome una palabra, procese sus caracteres y haga parpadear el LED del arduino sería más facil que un programa que procesa 3 versos caracter por caracter y luego guardando la traducción final.

Comencé con la idea de definir el valor del punto y la raya como variables, para utilizarlas junto a un delay, pero no estaba seguro de si esto funcionaría.

Le pregunté a misaaaaaa durante la sesión cómo se podría hacer y me explicó rápidamente que tendría que usar funciones que definan que ocurre con un punto y qué ocurre con una raya, al igual de una función para cada letra del abecedario.

````cpp
const int LED = 13;
const int Vdot = 200; // duracion de un punto (valor)
const int Vdash = dot * 3; // duracion raya (valor)
const int gap = dot; // espacio entre letras/caracteres
const int bigGap = dot * 7; // espacio entre palabras

void dot() {            // definiendo punto
  digitalWrite(LED, 1);
  delay(Vdot)
  digitalWrite(LED, 0);
  delay(gap);
}

void dash() {            // definiendo raya
  digitalWrite(LED, 1);
  delay(Vdash)
  digitalWrite(LED, 0);
  delay(gap);
}

void A() {            // definiendo letra A
  dot();
  dash();
}

void B() {            // definiendo letra A
  dash();
  dot();
  dot();
}

void C() {            // definiendo letra A
  dash();
  dot();
  dash();
  dot();
}
(...)
````

Después de corregir algunos errores en este código inicial, me puse a investigar cómo extraer los caracteres del String y sortearlos.

encontré que la función .length( ) arroja la cantidad de caracteres que conforma un String. Esta función se podría utilizar en conjunto con la declaración for para ir letra por letra, hasta que el valor de i fuese igual al de la cantidad de caracteres

````cpp
// for continua hasta que i ya no sea inferior al largo del mensaje (cantidad de caracteres), cada pasada, se agrega 1 al valor de i
for (int i = 0; i < mensaje.length(); i++) {
````

Para determinar que caracter estaba ubicado en la posición equivalente al valor de i, utilizé la función .charAt(i), que hace justo lo que necesitaba.

````cpp
String mensaje = "abccba";


const int LED = 13;
const int Vdot = 200; // duracion de un punto (valor)
const int Vdash = Vdot * 3; // duracion raya (valor)
const int gap = Vdot; // espacio entre letras/caracteres
const int bigGap = Vdot * 7; // espacio entre palabras

void dot() {            // definiendo punto
  digitalWrite(LED, 1);
  delay(Vdot);
  digitalWrite(LED, 0);
  delay(gap);
}

void dash() {            // definiendo raya
  digitalWrite(LED, 1);
  delay(Vdash);
  digitalWrite(LED, 0);
  delay(gap);
}

void A() {            // definiendo letra A
  dot();
  dash();
}

void B() {            // definiendo letra B
  dash();
  dot();
  dot();
}

void C() {            // definiendo letra C
  dash();
  dot();
  dash();
  dot();
}


void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < mensaje.length(); i++) {
  char caracterActual = mensaje.charAt(i);
  Serial.println(caracterActual);
  }
}
````

Viendo que el código funcionaba, pues en el monitor serial salian los caracteres del String separados, le di el código a Gemini 2.5 Pro, tras decirle explícitamente que no generara código y se limitase a darme feedback y sugerencias.

Tras recivir confirmación que entendía lo que intentaba hacer le pregunté si tendría que hacer una declaración if gigantesca para sortear las letras o si había una forma más facil.

Me sugirió utilizar la declaración switch y explicó que esta declaración compara el caso dado con una lista de casos y al encontrar un match, ejecuta el código correspondiente a ese caso

Tras buscar cómo utilizar switch obtuve esto:
````cpp
String mensaje = "abccba";


const int LED = 13;
const int Vdot = 200; // duracion de un punto (valor)
const int Vdash = Vdot * 3; // duracion raya (valor)
const int gap = Vdot; // espacio entre letras/caracteres
const int bigGap = Vdot * 7; // espacio entre palabras

void dot() {            // definiendo punto
  digitalWrite(LED, 1);
  delay(Vdot);
  digitalWrite(LED, 0);
  delay(gap);
}

void dash() {            // definiendo raya
  digitalWrite(LED, 1);
  delay(Vdash);
  digitalWrite(LED, 0);
  delay(gap);
}

void A() {            // definiendo letra A
  dot();
  dash();
}

void B() {            // definiendo letra B
  dash();
  dot();
  dot();
}

void C() {            // definiendo letra C
  dash();
  dot();
  dash();
  dot();
}


void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < mensaje.length(); i++) {
  char caracterActual = mensaje.charAt(i);
  Serial.println(caracterActual);
  traductor(caracterActual);
  }
}

void traductor(char sorter) {
  switch (sorter) {
  case 'A':
    A();
      break;
  case 'B':
    B();
      break;
  case 'C':
    C();
      break;
  }
}
````
Después de unos minutos intentando ver porqué no funcionaba, me di cuenta que había puesto los casos en mayúsculas.

Tras corregir eso vi que el LED parpadeaba, pero lo hacía sin parar, por lo que añadí una declaración if, para evitar que for corriera tras terminar la primera vez.

````cpp
bool messageDone = false; // flag

void loop() {
  if (messageDone == false) {
    for (int i = 0; i < mensaje.length(); i++) {
  char caracterActual = mensaje.charAt(i);
  Serial.println(caracterActual);
  traductor(caracterActual);
  messageDone = true; //cambia el valor al terminar de correr
  }
  
  }
}
````
[Código morse final](./arduino/morse/)

### Traductor binario

Comencé definiendo las variables necesarias para lidiar con 3 Strings que hay que traducir.

````cpp
String linea1 = "txt1"; // linea 1 del poema
String linea1 = "txt2"; // linea 2 del poema
String linea2 = "txt3"; // linea 3 del poema
String binario1 = ""; // traduccion de linea 1
String binario2 = ""; // traduccion de linea 2
String binario3 = ""; // traduccion de linea 3

bool linea1Done = false;
bool linea2Done = false;
bool linea3Done = false;
````

Seguido por modificar el void loop para ir agregando los valores retornados por la función traductor

````cpp
void loop() {
  if (linea1Done == false) {
    for (int i = 0; i < linea1.length(); i++) {
  char caracterActual = linea1.charAt(i);
  String binChar1 = traductor(caracterActual);
  binario1 = binario1 + binChar1;
  Serial.println(caracterActual);
  linea1Done = true;
  Serial.println("Linea 1:");
  Serial.println(binario1);
  }
  }
}
````

Y comenzando a modificar la función traductor()
````cpp
void traductor(char sorter) {
  switch (sorter) {
    case 'a':
      A();
      break;
    case 'b':
      String "01100010";
      break;
(...)
````

Le di el código a Gemini para pedirle feedback antes de escribir las 500 lineas de funciones y 500 lineas de casos, para ver si mis alteraciones estaban bien.

Me sugirió agregar:
````cpp
binario1 = binario1 + " ";
````
justo después de:
````cpp
binario1 = binario1 + binChar1;
````
Para separar los codigos binarios de cala caracter con un espacio, haciéndolo más legible en el monitor serial.

Y que modificara la función traductor(), que al ser void, puede ejecutar una función, pero no puede enviar información, como un String, a una variable en otra función (loop), a diferencia de la función String.

y que debería usar el comando return en lugar de String, para enviar un texto en respuesta.

````cpp
String linea1 = "txt1"; // linea 1 del poema
String linea2 = "txt2"; // linea 2 del poema
String linea3 = "txt3"; // linea 3 del poema
String binario1 = ""; // traduccion de linea 1
String binario2 = ""; // traduccion de linea 2
String binario3 = ""; // traduccion de linea 3


bool linea1Done = false;
bool linea2Done = false;
bool linea3Done = false;


void setup() {
  Serial.begin(9600);
}

void loop() {
  if (linea1Done == false) {
    for (int i = 0; i < linea1.length(); i++) {
  char caracterActual = linea1.charAt(i);
  String binChar1 = traductor(caracterActual);
  binario1 = binario1 + binChar1;
  binario1 = binario1 + " ";
  // Serial.println(caracterActual);
  }
  linea1Done = true;
  Serial.println("Linea 1:");
  Serial.println(binario1);
  }
}

String traductor(char sorter) {
  switch (sorter) {
    case 'a':
      return "01100001";
      break;
    case 'b':
      return "01100010";
      break;
(...)
````

Después de recivir feedback de que break; es redundante, ya que return cumple su misma función, copié, pegué el bloque if y le cambié los números, para poder traducir las otras 2 lineas.

Tras arreglar errores ocacionados por pegar dentro y fuera de los murcielagos "{}" adecuados y agregar comentarios, envié el código a mi grupo para que lo integrasen

![Monitor serial binario](./imagenes/elPoema.jpg)
![Verificación de traducción](./imagenes/elPoema2.jpg)


[TraductorBinarioV1](./arduino/traductorBinario/)

Tras agregarlo, Aaron nos ayudó a modificar el código para que funcionara, pues al ser ahora una librería, habian funciones de arduino que habia que darle, como String, problemas al tener múltiples void loops, el programa de la pantalla tomando las variables de la traducción cuando están vacías (antes de realizar la traducción), etc.