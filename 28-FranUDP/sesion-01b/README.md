# sesion-01b

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### [Arduino IDE (Integrated Development Environment)](https://aws.amazon.com/what-is/ide/)
<img align="left" src="./imagenes/arduinoLogo.png" width=200> 
Un IDE (Entorno de Desarrollo Integrado) es una aplicación que hace el desarrollo de software más eficiente, al integrar funciones como edición de código, compilación, pruebas y empaquetado en un único entorno.

En el caso del Arduino IDE, este programa facilita el trabajo con varios microcontroladores, no solo con placas Arduino, al integrar un lenguaje de programación simple (basado en ${\color{lightblue}C/C++}$), compatibilidad con múltiples chips, un gestor de librerías que se conectan directamente con repositorios como GitHub, herramientas de depuración, códigos de ejemplo, etc.

<br/>

### Elementos del Código
**Comentarios**: <br/> 
Texto dirigido a la persona que lee el código, utilizado para explicar lo que hace una determinada línea, cómo modificarla, entre otras cosas. El microcontrolador ignora por completo estas líneas.

````
pinMode(text, example); // comentario arduino y javascript
pinMode(text, example); # comentario python
pinMode(text, example); <!-- comentario markdown -->
````
${\color{orange}setup}$(): <br/> **Función** que ejecuta las líneas de código desde arriba a abajo **una sola vez**, es decir, sin repetirlas. <br/> Es lo primero que se ejecuta al resetar o darle poder a un microprocesador

Se utiliza para configurar el comportamiento inicial del programa, como designar si los pines **GPIO** (**G**eneral **P**urpose **I**nput/**O**utput) son **INPUT** o **OUTPUT**, iniciar la comunicación serial por **USB** (**U**niversal **S**erial **B**us), etc.
````
void setup () {
    linea 1; // Comienza ejecutando el código desde aquí
    linea 2; // line 2
    linea 3; // line 3
    (...)
    linea 69; // Aquí termina setup y pasa a correr la funcion loop
}
````

${\color{orange}loop}$(): <br/> **Función** similar a setup(), pero como su nombre indica, se ejecuta en un **bucle infinito**. El programa corre las líneas de código de arriba a abajo y, al llegar al final, vuelve a empezar desde la primera línea de esta función.
````
void loop () {
    linea 1; // Comienza ejecutando el código desde aquí
    linea 2;
    linea 3; // Cuando termine de correr esta línea, el código vuelva a correr desde la línea 1
````
<br/>

### Comandos de arduino
${\color{orange}pinMode}$(): <br/>
determina si un pin **GPIO** es **INPUT** o **OUTPUT** 
````
pinMode(13, OUTPUT); // pin 13 emite voltaje
pinmode(12, INPUT); // pin 12 recive voltaje
````

${\color{orange}digitalWrite}$(): <br/>
Hace que un pin definido como OUTPUT emita o no una señal (voltaje) cuando le indiquemos
````
digitalWrite(13, HIGH); // pin 13 emite voltaje (5V o 3.3V)
digitalWrite(11, LOW); // pin 11 no emite voltaje (0V)
````

${\color{orange}delay}$(): <br/>
El código va corriendo a **miles de líneas por segundo**, el comando delay() actúa como un lomo de toro, **frenando** por un tiempo determinado la ejecución del código en una **línea específica**.

El tiempo se especifica en **milisegundos** (1000 milisegundos = 1 segundo).
````
void loop () {
    digitalWrite(LED, HIGH); // LED encendido
    delay(1000); // se frena por 1 segundo, es decir, el LED se mantiene encendido
    digitalWrite(LED, LOW); // LED apagado
    delay(2000); // LED se mantiene apagado por 2 segundos antes encenderse
}
````

<br/>

### Variables
${\color{cyan}int}$: <br/>
Se usa para **declarar** variables que almacenarán **números enteros** (sin decimales).
````
int tiempoEncendido = 1000; // variable
int tiempoApagado = 5000; // variable

void loop () {
    digitalWrite(LED, 1); // LED encendido
    delay(tiempoEncendido); // LED se mantiene encendido por 1 sec
    digitalWrite(LED, 0); // LED apagado
    delay(tiempoApagado); // LED se mantiene apagado por 5 segundos
}
````

${\color{cyan}float}$: <br/>
Se usa para variables que almacenarán **números con decimales**.
````
float numeroDecimal = 6.9;
````

${\color{cyan}bool}$: <br/>
Almacena un valor booleano: **TRUE** o **FALSE**.
````
bool notFalse = true;
bool truen't = false;
````

${\color{cyan}char}$: <br/>
Almacena un **único carácter** (character). Se escribe entre comillas simples.
````
char letra = 'A';
````

**String**: <br/>
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
> ### Funciones:
> Una función es un bloque de código reutilizable que realiza una tarea específica. Se la identifica por un ${\color{orange}nombre}$ seguido de **paréntesis ()**. En lugar de llamar a un valor (como una variable), se "llama" a un **bloque de código** para que se ejecute.
>
> Dentro de los paréntesis van los **parámetros**, que son los datos que la función necesita para trabajar.
````
void loop() {}
void setup() {}
digitalWrite()
delay()
etc() // no es una funcion real .... aún
````
>
> La palabra ${\color{cyan}void}$ antes del nombre de una ${\color{orange}función}$ indica que esta no devuelve ningún valor al finalizar. El código que pertenece a la función se escribe entre **llaves {}**.
````
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
## Encargo XX <!-- documentar intentos de código -->
### TITULO


