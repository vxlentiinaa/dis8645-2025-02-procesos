# sesion-03a

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### [Juice (Software)](https://juce.com/#:~:text=JUCE%20is%20the%20most%20widely%20used%20framework%20for,VST%2C%20VST3%2C%20AU%2C%20AUv3%2C%20AAX%20and%20LV2%20plug-ins.)
Framework open source para el desarrollo de aplicaciones de audio

### Proyecto 01
Tendremos que hacer un proyecto, que hace uso de un display y un potenciómetro, que además deberá tener alguna relación con poemas

Hay que documentar procesos. Se entrega la sesión 04b

### [Condicionales](https://www.youtube.com/watch?v=cHrd2lWT2hI) 
Nos permiten cambiar el comportamiento del código, haciendo que reaccione a situaciones y variables.

${\color{9E34EB}if}$: <br> <!-- subtitulo -->
Si X condición es verdadera entonces rorre este código.

````cpp
if (condicion) {comandos;}
````

Por ejemplo, si queremos que el arduino encienda un LED si un switch es presionado

````cpp
if (switchPulsado == true) { // Si el valor de la izquierda coincide con el de la derecha...
    digitalWrite(LED, true); // Hacer esto
}
````

Importante recordar que el operador = asigna un valor, mientras que == compara si el valor de la izquierda coincide con el de la derecha

${\color{9E34EB}else}$: <br> <!-- subtitulo -->
En caso que la condición no se cumpla, haz esta otra cosa.

````cpp
if (condicion) {comandos;}
else {comandos;}
````

Por ejemplo, en caso que el botón no esté siendo pulsado, exigele al humano que lo pulse.

````cpp
if (switchPulsado == true) { // Si el valor de la izquierda coincide con el de la derecha...
    digitalWrite(LED, true); // Hacer esto
} else { // Si la condición no se cumple, hacer esto otro
    Serial.println("¡¡¡Humano, apreta el botón!!!"); // Gritale al humano por el monitor serial
}
````

${\color{9E34EB}else \ if}$: <br> <!-- subtitulo -->
en caso de que el primer if no se cumpla, se ejecuta otro ${\color{9E34EB}if}$.

Por ejemplo, si uno abre la llave del agua, sale agua, en caso de que salga agua, dependiendo de si la giramos a la derecha o izquierda saldrá caliente o fria.

````cpp
if (LlaveDeAguaCerrada == true) { // Si la llave esta cerrada....
    noHacerNada(); // ejecuta la funcion "noHacerNada"
} else if (llaveGiradaDerecha == true) { // si la llave NO esta cerrada, ve si la llave esta girada a la derecha
    aguaCaliente(); // si está girada a la decha, sale agua caliente
} else { // en caso que no esté a la derecha...
    aguaFria(); // sale agua fria
}
````

### Operador ${\color{yellow}!}$:
Operador booleno, significa lo opuesto de.

Ej: <br>
&nbsp; hay = hay <br>
${\color{yellow}!}$ hay = no hay

### millis( ):
Cuenta los milisegundos que pasann desde que el arduino comienza a correr el sketch.

````cpp
Serial.println(millis()) // muestra en el monitor serial el tiempo transcurrido
````

### [Modificadores de tipo de data](https://www.programiz.com/cpp-programming/type-modifiers)

${\color{cyan}long}$: <br>
Similar a ${\color{cyan}int}$, pero almacena un valor de hasta 4 bytes (mucho más grande).

Guarda información en el rango de -2bytes a 2bytes.

${\color{cyan}unigned \ long}$: <br>
Almacena la misma cantidad de información que ${\color{cyan}long}$, pero guarda información desde el 0, lo que le permite almacenar el doble de información (4 bytes) que ${\color{cyan}long}$.

### [Operadores lógicos](https://www.w3schools.com/cpp/cpp_operators_logical.asp)

Se utilizan dentro de las declaraciones ${\color{9E34EB}if}$

${\color{yellow}AND}$: <br> <!-- subtitulo -->
Si condición1 y condición2 son verdaderas, entonces la declaración ${\color{9E34EB}if}$ se cumple.

Por ejemplo, si yo enchufo una lámpara ${\color{yellow}Y}$ apreto su botón de encendido, esta se enciende, pero si no hago alguna de estas 2 cosas no se va a encender. 

Se utiliza **&&** en el código para usar el operador.

````cpp
if (lamparaEnchufada == true && botonEncendido == true) { // Si está enchufada y fue pulsado el botón...
    encenderLampara(); // Encender la lampara
}
````

${\color{yellow}OR}$: <br> <!-- subtitulo -->
Si alguna de las condiciones es verdadera, entonces la declaración ${\color{9E34EB}if}$ se cumple.

Por ejemplo, si tenemos 2 arduinos con el mismo código, mientras uno de ellos funcione, nos sacamos un 7 en la entrega.

Se utiliza **||** en el código para usar el operador.

````cpp
if (arduinoUnoR3Funciona == true || arduinoUnoR4Funciona == true) { // Si alguno de estos arduinos funciona...
    montoyamoragaNosPoneBuenaNota(); // Aaron nos pone buena nota :)
}
````

### [Módulo " % "](https://www.geeksforgeeks.org/cpp/modulo-operator-in-c-cpp-with-examples/)

El operador módulo es un operador aritmético. El modulo produce **lo que queda** de una división de números enteros.

Se utiliza **%** en el código para usar el operador.

````cpp
6 % 2; // 6/2=3 se divide y no queda nada, % = 0
5 % 2; // 5/2=2.5 el 2 cabe 2 veces en el 5 y queda 1, % = 1
````

Se puede utilizar para ver si un número es par o impar.

-----------------------------------------------------------------------------------------------------------
## Encargo XX <!-- Investigar NAND, NOR y XOR -->
### Logic gates
${\color{yellow}NAND}$: <br> <!-- subtitulo -->
Equivalente a ${\color{yellow}!AND}$.

La N es por NOT, "NOT AND"

Si AND = 1 entonces NAND = 0.

${\color{yellow}NOR}$: <br> <!-- subtitulo -->
Equivalente a ${\color{yellow}!OR}$.

${\color{yellow}XOR}$: <br> <!-- subtitulo -->
Exclusive OR, es similar a OR, pero si ambos INPUTS son verdaderos, el resultado es 0.

En otras palabras, XOR = 1 mientras alguno de los inputs sea 1, pero no ámbos.