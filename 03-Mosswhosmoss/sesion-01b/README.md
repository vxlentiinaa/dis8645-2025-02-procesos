# sesion-01b

## Vocabulario

### Cc

“Significa copia”.

### Bcc

“Le llega a un grupo de personas, pero no saben a quién más le llegó”

### IDE

“Integrated Development Environment”

## Arduino

Según Google, Arduino, creado en 2005, es una plataforma de hardware y software de código abierto, que permite a los usuarios crear objetos electrónicos interactivos.

El origen de Arduino es ***wiring***, que fue creada en 2003 en Interaction Design Institute Ivrea con el objetivo de facilitar la interacción con el entorno a través de sensores y actuadores.

- Sensores = Dispositivo que detecta y mide estímulos del entorno, como la luz, la temperatura, la presión, o el movimiento, y los convierte en una señal que puede ser interpretada por otros dispositivos.

- Actuadores = dispositivo que convierte energía (generalmente eléctrica, neumática o hidráulica) en movimiento o fuerza mecánica.

Wiring fue desarrollado por Hernando Barragán, Massimo Banzi y Casey Reas.

Arduino fue desarrollado por Massimo Banzi, David Mellis y David Cuartielles.

### Declaración de una función.[^1]

**void** = Reservado para la declaración de funciones sin valor de retorno.

**boolean** = Este tipo de variable está reservado a dos valores posibles (verdadero o falso).

El valor guardado en una variable booleana ocupa siempre un byte de memoria.

**char** = Se utiliza para declarar variables que almacenan caracteres individuales. Una variable de tipo char ocupa 1 byte (8 bits) de memoria, lo que es suficiente para representar la mayoría de los caracteres ASCII y otros caracteres extendidos.

**unsigned char** = Es un tipo de dato que representa un entero sin signo de 8 bits. Se utiliza comúnmente para representar datos binarios, como bytes individuales, o cuando se necesita un rango de valores positivos específico para un entero de 8 bits.

**byte** = El valor que puede tomar un dato de este tipo es siempre un número entero entre 0 y 255. Los valores de una variable byte no pueden ser negativos.

**int** = Es un tipo de dato entero que se utiliza para declarar variables que almacenan números enteros, tanto positivos como negativos, sin decimales. El valor que puede tomar una variable de este tipo es un número entero entre -32768 (-215) y 32767 (215-1), gracias a que utilizan 2 bytes (16 bits) de memoria para almacenarse.

**"word"** = Es un espacio de almacenamiento con nombre en la memoria que se utiliza para guardar un valor de un tipo de dato específico. Este tipo de dato nos permite almacenar un número entero entre 0 y 65535. Utiliza 2 bytes (16 bits) de memoria para almacenarse. No puede tener signo negativo.

**long** = Se utiliza para declarar enteros de mayor tamaño que un entero estándar (int). Este tipo de dato nos permite almacenar un número entero comprendido en el rango de -2147483648 a 2147483647. Utiliza 4 bytes (32 bits) de memoria.

**unsigned long** = Similar a la variable long, se utiliza para almacenar números enteros grandes, la diferencia es que no puede almacenar números negativos, lo que le permite representar un rango de valores positivos más amplio, teniendo un rango desde 0 a 4294967295 (2^32-1). Normalmente, se utiliza para almacenar los resultados de la función millis() de Arduino.

**float** = Es un tipo de dato que se utiliza para almacenar números de punto flotante, es decir, números con decimales. Los números de punto flotante a menudo se usan para aproximar valores analógicos y continuos porque tienen mayor resolución que los enteros.

**string** = Es un tipo de dato que permite almacenar un conjunto de caracteres como un objeto; además, tiene asociadas funciones que se usan con dichos datos.

### Funciones

### Encargo 3

Crear variables dentro del Arduino. Fotos de las cosas que fallaron y qué pasó.

Mínimo 3 códigos.

Documentar los fallos.

### Desarrollo encargo 3 

Haré que con código Morse diga "Instrucciones para llorar" del libro "Historias de cronopios y famas" de Julio Cortázar, con el LED integrado en el pin 13 de Arduino.

#### REFERENTES

[ejemplo-01](https://www.instructables.com/Morse-code-with-arduinoLED)

[ejemplo-02](https://www.arduino.cc/education/morse-code-project)

[ejemplo-03](https://forum.arduino.cc/t/blinking-led-morse-code-arduino-uno/695484)

[ayuda-01](https://github.com/kying18/morse-code/blob/master/sos.ino)

[ayuda-01 Video](https://youtu.be/6mLytyKEU5Q?si=NARBFvCrfxlxyM5f)

#### PRUEBAS

Estoy formando la palabra a base de este código.

```cpp

//Proyecto decir en código morse "Instrucciones para llorar"

//Alfabeto para la palabra

//I = · ·

//N = — ·

//S = · · ·

//T = —

//R = · — ·

//U = · · —

//C = — · — ·

//O = — — — 

//E = ·

//P = · — — ·

//A = · —

//L = · — · ·

//Ahora voy a definir las variables

int LED = LED_BUILTIN;

//Esta variable es para lo que define el tiempo de ·

int tiempoCorto = 300;

//Esta variable es para lo que define el tiempo de —

int tiempoLargo = 900;

void setup() {

  //Se va a definir la led integrada del pin 13 como un OUTPUT

pinMode(LED, OUTPUT);

}

void loop() {

 //La letra "I"

 switchLED(tiempoCorto);

 switchLED(tiempoCorto);

 //Delay para generar un espacio entre letras

 delay(tiempoLargo);

 

 //La letra "N"

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "S"

 switchLED(tiempoCorto);

 switchLED(tiempoCorto);

 switchLED(tiempoCorto);

 

 delay(tiempoLargo);

 //La letra "T"

 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "R"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "U"

 switchLED(tiempoCorto);

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 delay(tiempoLargo);

  

 //La letra "C"

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "C"

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoCorto); 

 delay(tiempoLargo);

 //La letra "I"

 switchLED(tiempoCorto);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "O"

 switchLED(tiempoLargo);

 switchLED(tiempoLargo);

 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "N"

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "E"

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "S"

 switchLED(tiempoCorto);

 switchLED(tiempoCorto);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "P"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoLargo); 

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "A"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "R"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "A"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "L"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "L"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "O"

 switchLED(tiempoLargo);

 switchLED(tiempoLargo);

 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "R"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "A"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "R"

 switchLED(tiempoCorto);

 switchLED(tiempoLargo);

 switchLED(tiempoCorto);

 delay(tiempoLargo);

}

//Esta función es para el cambio de voltaje en el LED integrado

void switchLED (int timing) {

    // Esta funcion hara que el LED prenda

  digitalWrite(LED, HIGH);

  // Esto retrasara la siguiente linea de codigo, y que se pueda cambiar por cuanto tiempo el LED se encuentra encendido

  delay(timing);

  // Esta funcion hara que el LED se apague

  digitalWrite(LED, LOW);

   // Esto retrasara la siguiente linea de codigo, y que se pueda cambiar por cuanto tiempo el LED se encuentra apagado

  delay(tiempoCorto);

}

```

[^1]: Los datos sacados para hacer esta definición los saqué de acá: [Declaración de una función.](https://eloctavobit.com/lenguaje-programacion-para-arduino/tipos-de-variables)

