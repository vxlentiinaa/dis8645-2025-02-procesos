# sesion-01b

## Apuntes

### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$

### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$

### [Arduino IDE (Integrated Development Environment)](https://aws.amazon.com/what-is/ide/)
<img align="left" src="./imagenes/arduinoLogo.png" width=200> 
Un IDE (Entorno de Desarrollo Integrado) es una aplicación que hace el desarrollo de software más eficiente, al integrar funciones como edición de código, compilación, pruebas y empaquetado en un único entorno.

En el caso del Arduino IDE, este programa facilita el trabajo con varios microcontroladores, no solo con placas Arduino, al integrar un lenguaje de programación simple (basado en ${\color{lightblue}C/C++}$), compatibilidad con múltiples chips, un gestor de librerías que se conectan directamente con repositorios como GitHub, herramientas de depuración, códigos de ejemplo, etc.

<br/>

### Elementos del Código

**Comentarios**:  <!--subtitulo-->
Texto humano dirigido al humano que está viendo el código, utilizado para explicar lo que hace cierta línea de código, cómo modificarla, entre otras cosas.

```cpp
pinMode(text, example); // comentario arduino y javascript
pinMode(text, example); # comentario python
pinMode(text, example); <!-- comentario markdown -->
```

${\color{orange}setup}$( ): </br> <!--subtitulo-->
**Función** que ejecuta las líneas de código desde arriba a abajo **una sola vez**, es decir, sin repetirlas.

Es lo primero que se ejecuta al resetar o darle poder a un microprocesador

Se utiliza para configurar el comportamiento inicial del programa, como designar si los pines **GPIO** (**G**eneral **P**urpose **I**nput/**O**utput) son **INPUT** o **OUTPUT**, iniciar la comunicación serial por **USB** (**U**niversal **S**erial **B**us), etc.

```cpp
void setup () {
    linea 1; // Comienza ejecutando el código desde aquí
    linea 2; // line 2
    linea 3; // line 3
    (...)
    linea 69; // Aquí termina setup y pasa a correr la funcion loop
}
```

${\color{orange}loop}$( ): </br> <!--subtitulo-->
Funcion similar a setup, pero como su nombre indica, corre las líneas de código y al llegar al final vuelve a comenzar a correrlas de nuevo.

```cpp
void loop () {
    linea 1; // Comienza ejecutando el código desde aquí
    linea 2;
    linea 3; // Cuando termine de correr esta línea, el código vuelva a correr desde la línea 1
```

### Comandos de arduino

${\color{orange}pinMode}$( ): </br> <!--subtitulo-->
determina si un pin GPIO es input o output

```cpp
pinMode(13, OUTPUT); // pin 13 emite voltaje
pinmode(12, INPUT); // pin 12 recibe voltaje
```

${\color{orange}digitalWrite}$( ): </br> <!--subtitulo-->
Hace que un pin definido como OUTPUT emita o no una señal (voltaje) cuando le indiquemos

```cpp
digitalWrite(13, HIGH); // pin 13 emite voltaje
digitalWrite(11, LOW); // pin 11 no emite voltaje
```


${\color{orange}delay}$( ): </br> <!--subtitulo-->
El código va corriendo a **miles de líneas por segundo**, el comando delay() actúa como un lomo de toro, **frenando** por un tiempo determinado la ejecución del código en una **línea específica**.
si el código va corriendo a 1000 lineas por segundo, por poner un ejemplo, el comando delay actúa como un lomo de toro, frenando por un tiempo determinado de tiempo la ejecución del código en una línea específica

El tiempo se especifica en **milisegundos** (1000 milisegundos = 1 segundo).

```cpp
void loop () {
    digitalWrite(LED, HIGH); // LED encendido
    delay(1000); // se frena por 1 segundo, es decir, el LED se mantiene encendido
    digitalWrite(LED, LOW); // LED apagado
    delay(2000); // LED se mantiene apagado por 2 segundos antes encenderse
}
```

${\color{cyan}int}$: </br> <!--subtitulo-->
Variable, una palabra corresponde a un valor

```cpp
int tiempoEncendido = 1000; // variable
int tiempoApagado = 5000; // variable

void loop () {
    digitalWrite(LED, 1); // LED encendido
    delay(tiempoEncendido); // LED se mantiene encendido por 1 sec
    digitalWrite(LED, 0); // LED apagado
    delay(tiempoApagado); // LED se mantiene apagado por 5 segundos
}
```

${\color{cyan}float}$: <br/> <!--subtitulo-->
Se usa para variables que almacenarán **números con decimales**.
````
float numeroDecimal = 6.9;
````

${\color{cyan}bool}$: <br/> <!--subtitulo-->
Almacena un valor booleano: **TRUE** o **FALSE**.
````
bool notFalse = true;
bool truen't = false;
````

${\color{cyan}char}$: <br/> <!--subtitulo-->
Almacena un **único carácter** (character). Se escribe entre comillas simples.
````
char letra = 'A';
````

**String**: <br/> <!--subtitulo-->
Almacena una **secuencia de caracteres o texto**. Se escribe entre comillas dobles.
````
String mensaje = "Lorem ipsum dolor sit amet...";
````

<br/>

### Comunicación serial
El Arduino (o el microcontrolador de preferencia) se **comunica con nuestro PC** a través del cable USB. Esto nos permite ver los valores que lee un sensor, hacer debugging, darle instrucciones, etc.
````
void setup () {
    // Iniciar comunicación serial y definir la velocidad (baud rate).
    Serial.begin (9600);
}

void loop () {
    // Envía un mensaje al Monitor Serial del PC.
    Serial.print(mensaje que se enviará al monitor serial);
}
````


### Other things: <!-- Things to organize + random stuff -->
>
> ### Funciones
>
> definidas como una palabra seguida de un parentesis, es similar a una variable en que usa algo que fue definido por una palabra, pero en lugar de llamar un valor, llama un código ya escrito en otra parte, cómo una librería descargada.
> ### Funciones:
> Una función es un bloque de código reutilizable que realiza una tarea específica. Se la identifica por un ${\color{orange}nombre}$ seguido de **paréntesis ()**. En lugar de llamar a un valor (como una variable), se "llama" a un **bloque de código** para que se ejecute.
>
> dentro del parentesis van el o los parámetros que definen cómo se va a comportar la función

```cpp
void loop() {
}
void setup() {
}
digitalWrite()
delay()
etc() // no es una funcion real .... aún
```
>
> La palabra ${\color{cyan}void}$ antes del nombre de una ${\color{orange}función}$ indica que esta no devuelve ningún valor al finalizar. El código que pertenece a la función se escribe entre **llaves {}**.
````cpp
void etc() {
    linea 1; // función "etc()" es definida por el
    linea 2; // código que está dentro de los "{ }"
}

etc() // función ya definida
````
> ### Niveles de abstracción:
> Las líneas de código que escribimos **no son leídas directamente por el microcontrolador**. El IDE las compila, es decir, las procesa y **convierte en código máquina** (una serie de 1s y 0s) que el chip sí puede entender. Este archivo compilado es el que se envía al microcontrolador.
>
> Es posible transferir este código máquina de un microcontrolador a otro (si son idénticos), pero es prácticamente **imposible recuperar el código original** partir de él.

-----------------------------------------------------------------------------------------------------------
## Encargo <!-- TEXT -->
### Errores de Arduino
### Pulsando LED V1

````cpp
const int LED = 13; // Pin 13 ahora se llama LED
bool state = 0; // Para definir si LED esta On/Off (inicia off)
int time = 1; // Tiempo variable 

void setup() {
  pinMode(LED, OUTPUT); // Pin LED es output
}

void loop() {
  time = time + 5; // Aumentando time con el paso del tiempo
  state = 1; // bool state = 1
  digitalWrite(LED, state); //led = on
  delay(time); // on time
  state = 0; // bool state = off
  digitalWrite(LED, state); // led = off
  delay(!time); // oposite time
}
````
Quería hacer que el tiempo que se mantiene **encendido** el **LED** del **pin 13** fuese **aumentando** con el paso del tiempo y que el tiempo que se mantiene **apagado vaya decreciendo**.

Sin embargo, el comportamiento del **LED** no es el que esperaba, **se mantiene encendido y no se apaga**.

Pensé que el operador ${\color{yellow}!}$ haría que el valor de la variable ${\color{cyan}time}$ fuese el **opuesto**, mas, según mi modelo de IA preferido para codificar, el operador ${\color{yellow}!}$ se usa para ${\color{cyan}booleanos}$, por lo que al ser ${\color{cyan}time}$ un valor superior a **0**, o en términos booleanos, **verdadero**, al poner el operador ${\color{yellow}!}$ frente a la variable ${\color{cyan}time}$, obtenemos siempre un **output** **falso**, por lo que el **LED** se apaga por un total de **0 milisegundos**.

### V2
````cpp
const int LED = 13; // Pin 13 ahora se llama LED
bool state = 0; // Para definir si LED esta On/Off (inicia off)
int time = 1000; // Tiempo que dura un ciclo
int on = 1; // Tiempo encendido variable

void setup() {
  pinMode(LED, OUTPUT); // Pin LED es output
  Serial.begin(9600);
}

void loop() {
  on = on + 15; // Aumentando el valor de "on" con cada loop
  time = time - on; // Calculando el valor del tiempo de apagado
  Serial.print("on"= on );
  Serial.println("time"= time);
  state = 1; // bool state = 1
  digitalWrite(LED, state); // led = on
  delay(on); // on time
  state = 0; // bool state = off
  digitalWrite(LED, state); // led = off
  delay(time); // oposite time
}
````
Tras el fallo anterior, intenté utilizar la siguiente fórmula para hacer que el tiempo que el **LED** permanece apagado decrezca mientras el tiempo que se mantiene encendido aumenta:

````cpp
Ciclo = "tiempo apagado" - "tiempo encendido"
````

El código parece funcionar según lo esperado (sin serial print), aunque parece que "acelera" más rápido de lo que debería, por lo que agregué:

```cpp
 Serial.print("on"= on );
 Serial.println("time"= time);
```

Pero me salieron estos errores:

````cpp
error: assignment of read-only location '"on"' Serial.print("on"= on );
error: incompatible types in assignment of 'int' to 'const char [3]'
error: assignment of read-only location '"time"' Serial.println("time"= time);
error: incompatible types in assignment of 'int' to 'const char [5]'
````

Los cuales se debían a que el programa pensaba que quería **asignar** un **valor** con el operador ${\color{yellow}=}$.

### V2.1
````cpp
const int LED = 13; // Pin 13 ahora se llama LED
bool state = 0; // Para definir si LED esta On/Off (inicia off)
int time = 1000; // Tiempo variable 
int on = 1; // Tiempo encendido variable

void setup() {
  pinMode(LED, OUTPUT); // Pin LED es output
  Serial.begin(9600);
}

void loop() {
  on = on + 15; // Aumentando el valor de "on" con cada loop
  time = time - on; // Calculando el valor del tiempo de apagado
  Serial.print("on: ");
  Serial.print(on);
  Serial.print(" time: ");
  Serial.println(time);
  state = 1; // bool state = 1
  digitalWrite(LED, state); // led = on
  delay(on); // on time
  state = 0; // bool state = off
  digitalWrite(LED, state); // led = off
  delay(time); // oposite time
}
````

Se arreglaron los errores anteriores al cambiar ${\color{yellow}=}$ por ${\color{yellow}:}$ y separar el texto ${\color{#b0e6e6}"on: "}$ de la variable ${\color{cyan}on}$.

Sin embargo, tras revisar el **output** del **monitor serial** me percaté de que el código no está funcionando según lo esperado, sí está acelerando más de lo que debería:

````py  <!-- python, pq me gustó como destaca los números -->
on: 16 time: 984  # 16 + 984 = 1000
on: 31 time: 953  # 31 + 953 = 984
on: 46 time: 907  # 46 + 907 = 953
on: 61 time: 846  # 61 + 846 = 907
````

El valor de la variable ${\color{cyan}time}$ va **disminuyendo** en lugar de ser **constante**.

Esto se podría arreglar agregando la siguiente línea al final de ${\color{orange}loop}$( ):

````cpp
time = time + on; // Resetea el valor de la variable time
````

Pero no es una solución muy elegante.

### V2.2
````cpp
const int LED = 13; // Pin 13 ahora se llama LED
bool state = 0; // Para definir si LED esta On/Off (inicia off)
const int cycle = 1000; // Tiempo total on + off 
int offTime; // declarando variable para el tiempo de apagado
int onTime = 1; // Tiempo encendido variable

void setup() {
  pinMode(LED, OUTPUT); // Pin LED es output
  Serial.begin(9600);
}

void loop() {
  onTime = onTime + 30; // Aumentando el valor de "on" con cada loop
  offTime = cycle - onTime; // Calculando el valor del tiempo de apagado
  Serial.print("onTime: ");
  Serial.print(onTime);
  Serial.print(" offTime: ");
  Serial.print(offTime);
  Serial.print(" ");
  Serial.print("ciclo: ");
  Serial.println(onTime + offTime);
  state = 1; // bool state = 1
  digitalWrite(LED, state); // led = on
  delay(onTime); // on time
  state = 0; // bool state = off
  digitalWrite(LED, state); // led = off
  delay(offTime); // oposite time
}
````

En esta iteración modifiqué los nombres de las ${\color{cyan}variables}$ para hacerlas más entendibles, hice la variable ${\color{cyan}cycle \ constante}$ (antes llamada ${\color{cyan}time}$), y agregué la variable ${\color{cyan}offTime}$, cuyo valor es el resultado de la operación:

````cpp
offTime = cycle - onTime;
````

Lo cual evita el problema anterior, al **mantener el valor** de ${\color{cyan}cycle}$, a diferencia de la versión anterior:

````cpp
cycle = cycle - onTime; //version anterior con nombres actualizados
````

A pesar de que en esta versión el parpadeo se comporta según lo deseado, cuando ${\color{cyan}onTime}$ > ${\color{cyan}cycle}$, y coincidentemente ${\color{cyan}offTime}$ es un **valor negativo**, el **LED** en lugar de permanecer encendido **permanentemente**, se apaga de vez en cuando.

monitor serial:
````cpp
onTime: 931 offTime: 69 ciclo: 1000
onTime: 961 offTime: 39 ciclo: 1000
onTime: 991 offTime: 9 ciclo: 1000
onTime: 1021 offTime: -21 ciclo: 1000
onTime: 1051 offTime: -51 ciclo: 1000
````
De acuerdo a la IA, el parpadeo del **LED** se debe a que el programa no es capaz de entender y ejecutar un ${\color{orange}delay}$( ) de un valor negativo de tiempo.