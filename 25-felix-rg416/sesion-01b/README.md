# sesion-01b
viernes 08 de abril

- Hay que saber mandar correos
  - Siempre se pone Subject (asunto)
  - Evitar saludos largos (no es necesario "junto con saludar...") en este contexto no es necesario (Aarón quiere correos que vayan directo al punto)
- Siempre hay que documentar y comentar
- [C++ Variabels](https://www.w3schools.com/cpp/cpp_variables.asp)
 
## instalar Arduino IDE

<https://www.arduino.cc/en/software/>

### usando arduino
- void *declaración*() {
  - void =
  - declaración = crea una declaración con ese nombre
  - { = aquí dentro está todo lo que debe ocurrir cuando se llama *declaración*
- <font color="orange">"delay</font>(xxxx)" palabras rojas/naranjas con paréntesis indican **funciones** = palabaras que llaman a otro código
- /* "de aquí en adelante todo es comentario" */ = notas grandes dentro del código
- // = para notas por lineas
- () = paréntesis = parámetros, se separan mediante ", " (incluyendo el espacio)
- {} = murciélago
- [] = corchete
- /n = enter
- ; = fin de las líneas (excepto si es un murciélago)
- verify y uploud
- int tiempoPrendido = 100;
  - int = contenedor
    - int = número entrero
    - bool = sí (1) o no (0)
    - float = numeros decimales
    - char = 1 caracter *´a´*
    - string = palabras *"texto"* 
  - tiempoPrendido = nombre de variable
  - 100 = tiempo que corre
- setup = función que corre desde que se presiona "reset" o cuando se prende la placa
- pinMode(LED_BUILTIN, OUTPUT)
  - pinMode = pin de salida o entrada, siemrpe hay que decirle qué hace
  - LED_BUILTIN = nombre o número del pin (en este caso es el nombre del led integrado en la placa)
  - OUTPUT = es salida o entrada (INPUT)
- loop = función que corre una y otra vez por siemprre
- digitalWrite(LED_BUILTIN, HIGH)
  - digitalWrite = escribe aquí
  - LED_BUILTIN = en este pin
  - HIGH = está encendido o está apagado (LOW)
- delay(1000 / 10)
  - delay = tiempo que se corre el digitalWrite
- Serial.begin(9600); = abre el puerto serial

> No todo lo que está en color está vien hecho, tiene que estar declarado

----

````
se puede poner bloques de código con las comillas invertidas (AltGr + }). Se deben poner 4 al inicio y al final del bloque. Para señalar el lenguaje de código hay que poner "````C++"
````

ejemplo:

````C++
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);      
````

Fuente: <https://www.markdownguide.org/extended-syntax/#fenced-code-blocks>

También vi que se puede poner un enlace hacia un título del texto: [instalar Arduino IDE](#instalar-arduino-ide)

````
Así:
[instalar Arduino IDE](#instalar-arduino-ide)
`````

--

También le puedo cambiar el color a las letras con:

````
<font color="0 255 0">Este texto debería ser verde.</font>
````

Se pueden usar códigos de colores, RGB o el nombre del color en inglés. Los colores no se ven tan bien estando en modo oscuro.

Resultado:
<font color="green">Este texto debería ser verde.</font>

<https://tutorialmarkdown.com/consejos/cambiar-color-texto>

## Encargo-00

Hacer al menos 3 códigos para correr en la placa Arduino. La idea es fallar muchas veces.

Puedo hacer una frase en código morse. Un traductor de código morse.


### Código 01 --> Señal de SOS en código morse

La idea es hacer una señal SOS en código morse. Lo cual sería **.../---/...//**

El plan es que con ``int`` pueda definir el tiempo que el led está encendido si es punto o guión.

Luego, en ``void loop() {`` pedirle al LED_BUILTIN que se mantenga por "punto"/"guion" milisegundos.

#### error 00

El primer error que saltó fue el ``;`` de casi todas las líneas. Fue un error que se repitió mucho, creo que con el tiempo me iré acostumbrando más.

[casi todas las líneas sin punto y coma](./archivos/error.00.png)

````C++
// señal SOS en morse

// setup es la función que corre desde que se envía el código:
void setup() {
// indica el pin que se utilizará, en este caso es el led integrado en la placa
  pinMode(LED_BUILTIN, OUTPUT);
}

// indica el timepo que está encendido para el guión
// cuando ponga delay(guion)
int guion = 1500;
// indica el timepo que está encendido para el punto
// cuando ponga delay(punto)
int punto = 500;

// loop es la función que se repite constantemente una y otr vez
void loop

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);
}
````

#### error 01

El siguiente error fue no decirle cuándo apagarse ni por cuánto tiempo. Al no ponerle ``digitalWrite(LED_BUILTIN, LOW)`` nunca se apagó y se mantuvo encendido todo el tiempo.

[no ponerle LOW para que sepa cuándo apagarse](./archivos/error.01-00.png)

[video sin espacio LOW entre HIGH](./archivos/error01-00.gif)

Así que nombré 2 nuevas funciones ``int`` para que se apague 'a' tiempo entre caracteres y 'b' tiempo entre letras.  

````C++
// funciones que definen el tiempo que está encendido o apagado
// dependiendo de si es "guion", "punto", "espacioCaracter" o "espacio"
int guion = 1000;
int punto = 500;
int entreCaracter = 500;

// loop es la función que se repite constantemente una y otra vez
void loop() {

// llama al led a que se encienda por "punto" milisegundos
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

// llama al led a que se encienda por "entreCaracter" milisegundos
  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

// llama al led a que se encienda por "guion" milisegundos
  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);
  
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);
}
````

[nuevos "int"](./archivos/error.01-01.png)

[video con espacios LOW entre HIGH](./archivos/error01-01.gif)

#### error 02

Noté que el tiempo del punto y guión era muy similar, asíque, en vez de ponerle 500 milisegundos al punto, probé con 250. Lo mismo con los espacios apagados.

##### antes

````C++
// funciones que definen el tiempo que está encendido o apagado
// dependiendo de si es "guion", "punto", "espacioCaracter" o "espacio"
int guion = 1000;
int punto = 500;
int entreCaracter = 500;
...
````

[tiempos muy similares entre los int](./archivos/error02-00.png)

[video de tiempos similares](./archivos/error02-00.gif)

##### después

````C++
// funciones que definen el tiempo que está encendido o apagado
// dependiendo de si es "guion", "punto", "espacioCaracter" o "espacio"
int guion = 1000;
int punto = 250;
int entreCaracter = 250;
...
````

[tiempos distintos entre los int](./archivos/error02-01.png)

[video de tiempos distintos](./archivos/error02-01.gif)

#### error 03

Luego de cambiar ese tiempo, vi que, al reiniciar el loop, en vez de hacer 2 puntos separados (con LOW entremedio), hacía 2 puntos seguidos sin espacio de apagado, lo cual terminón pareciendo otro guión en vez de puntos.

````C++
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);
  
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);
}
````

[sin el LOW al final del código](./archivos/error03-00.png)

[video de puntos seguidos](./archivos/error02-01.gif)

Para cambiarlo puse otro ``espacio`` de LOW para que sea visible el reinicio del loop

````C++
...
int espacio = 1000
...

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);
}
````

[LOW agregado](./archivos/error03-01.png)

[video de espacio entre puntos](./archivos/error03.gif)

--

En los errores anteriores no había una letra definida, estaba sólo probando los tiempos y el orden de las funciones.

Quise ir probando letra por letra para ir con calma.

Dejé el código anterior como nota para no borrar el proceso.

##### Letra S = ...

Primero escribí los `delay(punto);` para los 3 puntos y luego los `delay (entreCaracter);` para los espacios entre caracteres. Esta vez recordé ponerle un espacio al final del código con `delay(espacio);`

[código letra S](./archivos/letraS-00.png)

[video código letra S](./archivos/letraS-01.gif)

````C++
// letra S = ... 
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);
}
````

¡Salió súper bien a la primera! :]

--

##### Letra O = ---

Para la letra O sólo copié y pegué lo de la letra S para sólo tener que cambiar los `delay(punto)` por `delay(guion)`

````C++
// letra O = --- 
  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);
}
````

¡Otra vez salió a la primera!

[video código letra O](./archivos/letraO.gif)

--

##### Código final

[código final](./archivos/SOS.gif)

````C++
// señal SOS en código morse

// setup es la función que corre desde que se envía el código:
void setup() {
// indica el pin que se utilizará, en este caso es el led integrado en la placa
  pinMode(LED_BUILTIN, OUTPUT);
}

// funciones que definen el tiempo que está encendido o apagado
// dependiendo de si es "guion", "punto", "espacioCaracter" o "espacio"
int guion = 1000;
int punto = 500;
int entreCaracter = 500;
int espacio = 1000;

// INICIO SEÑAL SOS
void loop() {

// letra S = ... 
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);

// letra O = --- 
  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);

// letra S = ... 
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);
}
````

¡Salió perfecto!

### Código 02 --> Bienvenida y adiós

Al conectar la placa aparece un mensaje de bienvenida y luego de unos segundos, uno de despedida

### Código 03 --> Número aleatorio

Me basé en este código: <https://docs.arduino.cc/language-reference/en/functions/random-numbers/random/>

Al conectar la placa o al presionar RESET, la placa lanza un número aleatorio en el Serial Moinot

Con ``int`` declaro una variable con el nombre "numeroRandom"

Para abrir el monitor serial lo llamé con ``Serial.begin(9600)`` (el número 9600 es como el genérico para abrirlo según Aarón y la página de arduino)

Luego, con ``random()`` designar el rango de números para lanzar al azar. Por último, con ``Serial print(numeroRandom)`` hacer que aparezca un número en el monitor serial.

#### error 00

[loop setup](./archivos/numeroRandom/error00.png)

No sé de dónde saqué el ``loop setup`` esa función no existe :p

Era cosa de ponerlo como debe ser: ``void loop``

#### error 01

[Serial print mal escrito](./archivos/numeroRandom/error01.png)

No entendía que pasaba, pero al volver a ver el código de referencia, entendí que era porque debe haber un . entremedio: ``Serial.print``

#### error 02

[Números aleatorios sin parar](./archivos/numeroRandom/error02.png)

El código estaba perfecto, pero empezó a lanzar números al azar sin parar. Tuve que desenchufar la placa para detenerlo.

Va a tener que ser con tiempo designado por un ``delay``. Puse que sea en 2 segundos para que se note la diferencia entre números

> Entre este error se me olvidó reconectar la placa y me asusté pensando que había otro error.
>
> NO OLVIDAR RECONECTAR LA PLACA

¡AHORA SÍ FUNCIONÓ!

[Gif](./archivos/numeroRandom/error02-02.gif)

````C++
// RULETA DE NÚMEROS

// Al conectar la placa o resetear el código, 
// aparece un número aleatorio del 0 al 10 en el Monitor Serial

// Designar una variable con el nombre "numeroRandom"
int numeroRandom;

void setup() {
// Llamar al Serial Monitor
  Serial.begin(9600);
}

void loop() {

// Hacer que, al llamar a "numeroRandom", se corra la función "random(10)"
// lo cual lanza un número al azar entre el 0 y el 10
  numeroRandom = random(10);

// Muestra en el monitor serial el número random lanzado por
// "numeroRandom = random(10)"
  Serial.print(numeroRandom);

// tiempo entre números lanzados
  delay(2000);
}
````