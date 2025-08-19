# sesion-01b

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### [Arduino IDE (Integrated Development Environment)](https://aws.amazon.com/what-is/ide/)
Un IDE es una aplicación que hace el desarrollo de software más eficiente, mediante la integración de funciones como edición, construcción, testeo y empaquetado de código en un mismo lugar

En el caso del Arduino IDE, este programa facilita trabajar con microcontroladores varios, no solo placas arduino, al integrar un lenguaje de programación simple (C/C++), compatibilidad con múltiples chips, compatibilidad con librerías de códigos que el programa descarga directamente de github, herramientas de debug, códigos de ejemplo, etc.

### Elementos del Código
Comentarios: <br/> 
Texto humano dirigido al humano que está viendo el código, utilizado para explicar lo que hace cierta línea de código, cómo modificarla, entre otras cosas.

````
pinMode(text, example) // comentario arduino y javascript
pinMode(text, example) # comentario python
pinMode(text, example) <!-- comentario markdown -->
````
setup: <br/> Función que ejecuta las líneas de código desde arriba a abajo una sola vez, es decir, sin repetirlas. <br/> Es lo primero que se ejecuta al resetar o darle poder a un microprocesador <br/> 
Se utiliza para designar el comportamiento de los pines GPIO (General Purpose Input Output), si son input o output, hacer que se conecte mediante USB serial (Universal Serial Bus), etc.
````
void setup () {
    linea 1 // Comienza ejecutando el código desde aquí
    linea 2 // line 2
    linea 3 // line 3
    (...)
    linea 69 // Aquí termina setup y pasa a correr la funcion loop
}
````

loop: <br/> Funcion similar a setup, pero como su nombre indica, corre las líneas de código y al llegar al final vuelve a comenzar a correrlas de nuevo.
````
void loop () {
    linea 1 // Comienza ejecutando el código desde aquí
    linea 2
    linea 3 // Cuando termine de correr esta línea, el código vuelva a correr desde la línea 1
````
### Comandos de arduino
pinMode: <br/>
determina si un pin GPIO es input o output
````
pinMode(13, OUTPUT); // pin 13 emite voltaje
pinmode(12, INPUT); // pin 12 recive voltaje
````

digitalWrite: <br/>


### Other things: <!-- Things to organize + random stuff -->
> ### SUB_SUBTITULO

-----------------------------------------------------------------------------------------------------------
## Encargo XX <!-- TEXT -->
### TITULO


-----------------------------------------------------------------------------------------------------------
## Encargo YY <!-- TEXT -->
### TITULO