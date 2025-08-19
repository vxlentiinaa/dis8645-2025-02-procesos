# sesion-01b

## Apuntes

### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$

### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$

### [Arduino IDE (Integrated Development Environment)](https://aws.amazon.com/what-is/ide/)

Un IDE es una aplicación que hace el desarrollo de software más eficiente, mediante la integración de funciones como edición, construcción, testeo y empaquetado de código en un mismo lugar

En el caso del Arduino IDE, este programa facilita trabajar con microcontroladores varios, no solo placas arduino, al integrar un lenguaje de programación simple (C/C++), compatibilidad con múltiples chips, compatibilidad con librerías de códigos que el programa descarga directamente de github, herramientas de debug, códigos de ejemplo, etc.

### Elementos del Código

Comentarios:  display.clearDisplay();                // Borrar pantalla
  display.setTextSize(1);                // Tamaño del texto
  display.setTextColor(SSD1306_WHITE);   // Color del texto
  display.setCursor(0, 10);              // Posición del texto
  display.println(F("¡Hola Mundo!"));   // Texto a mostrar
  display.display();

Texto humano dirigido al humano que está viendo el código, utilizado para explicar lo que hace cierta línea de código, cómo modificarla, entre otras cosas.

```cpp
pinMode(text, example); // comentario arduino y javascript
pinMode(text, example); # comentario python
pinMode(text, example); <!-- comentario markdown -->
```

setup():

Función que ejecuta las líneas de código desde arriba a abajo una sola vez, es decir, sin repetirlas.

Es lo primero que se ejecuta al resetar o darle poder a un microprocesador

Se utiliza para designar el comportamiento de los pines GPIO (General Purpose Input Output), si son input o output, hacer que se conecte mediante USB serial (Universal Serial Bus), etc.

```cpp
void setup () {
    linea 1; // Comienza ejecutando el código desde aquí
    linea 2; // line 2
    linea 3; // line 3
    (...)
    linea 69; // Aquí termina setup y pasa a correr la funcion loop
}
```

loop():

Funcion similar a setup, pero como su nombre indica, corre las líneas de código y al llegar al final vuelve a comenzar a correrlas de nuevo.

```cpp
void loop () {
    linea 1; // Comienza ejecutando el código desde aquí
    linea 2;
    linea 3; // Cuando termine de correr esta línea, el código vuelva a correr desde la línea 1
```

### Comandos de arduino

pinMode:

determina si un pin GPIO es input o output

```cpp
pinMode(13, OUTPUT); // pin 13 emite voltaje
pinmode(12, INPUT); // pin 12 recibe voltaje
```

digitalWrite:

Hace que un pin definido como OUTPUT emita o no una señal (voltaje) cuando le indiquemos

```cpp
digitalWrite(13, HIGH); // pin 13 emite voltaje
digitalWrite(11, LOW); // pin 11 no emite voltaje
```

delay:

si el código va corriendo a 1000 lineas por segundo, por poner un ejemplo, el comando delay actúa como un lomo de toro, frenando por un tiempo determinado de tiempo la ejecución del código en una línea específica

El comando funciona en milisegundos

```cpp
void loop () {
    digitalWrite(LED, HIGH); // LED encendido
    delay(1000); // se frena por 1 segundo, es decir, el LED se mantiene encendido
    digitalWrite(LED, LOW); // LED apagado
    delay(2000); // LED se mantiene apagado por 2 segundos antes encenderse
}
```

int:

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

### Other things: <!-- Things to organize + random stuff -->
>
> ### Funciones
>
> definidas como una palabra seguida de un parentesis, es similar a una variable en que usa algo que fue definido por una palabra, pero en lugar de llamar un valor, llama un código ya escrito en otra parte, cómo una librería descargada.
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
> void antes de una funcion, define la función como lo que está dentro de los "{ }"

```cpp
void etc() {
    linea 1; // función "etc()" es definida por el
    linea 2; // código que está dentro de los "{ }"
}

etc() // función ya definida
```

> ### Niveles de abstracción
>

-----------------------------------------------------------------------------------------------------------

## Encargo XX <!-- TEXT -->

### TITULO

-----------------------------------------------------------------------------------------------------------

## Encargo YY <!-- TEXT -->
