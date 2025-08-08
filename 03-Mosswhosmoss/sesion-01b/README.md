# sesion-01b

## Vocabulario

 **Cc**
“significa copia”

 **Bcc**
“Le llega a un grupo de personas pero no saben a quien más le llego”

 **IDE**
“Integrated Development Environment”

## Arduino

Según Google, Arduino, creado en 2005, es una plataforma de *hardware* y *software* de código abierto, que permite a los usuarios a crear objetos electronicos interactivos.
El origen de Arduino es ***wiring***, que fue creada en 2003 en **Interaction Design Institute Ivrea** con el objetivo de facilitar la interacción con el entorno atravez de sensores y acuadores.

- Sensores = Dispositivo que detecta y mide estímulos del entorno, como la luz, la temperatura, la presión, o el movimiento, y los convierte en una señal que puede ser interpretada por otros dispositivos.
- Actuadores = dispositivo que convierte energía (generalmente eléctrica, neumática o hidráulica) en movimiento o fuerza mecánica.

**Wiring fue desarrollado por *Hernando Barragán, Massimo Banzi y Casey Reas***

**Arduino fue desarrollado por *Massimo Banzi, David Mellis y David Cuartielles***

### Declaración de una función.[^1]

**void** = Reservado para la declaración de funciones sin valor de retorno.

**boolean** = Este tipo de variable esta reservado a dos valores posibles (verdadero o falso).
El valor guardado en una variable booleana ocupa siempre un byte de memoria.

**char** = Se utiliza para declarar variables que almacenan caracteres individuales. Una variable de tipo char ocupa 1 byte (8 bits) de memoria, lo que es suficiente para representar la mayoría de los caracteres ASCII y otros caracteres extendidos.

**unsigned char** = Es un tipo de dato que representa un entero **sin signo** de 8 bits. Se utiliza comúnmente para representar datos binarios, como bytes individuales, o cuando se necesita un rango de valores positivos específico para un entero de 8 bits.

**byte** = El valor que puede tomar un dato de este tipo es siempre un número entero entre 0 y 255. Los valores de una variable byte no pueden ser negativos.

**int** = Es un tipo de dato entero que se utiliza para declarar variables que almacenan números enteros, tanto positivos como negativos, sin decimales. El valor que puede tomar una variable de este tipo es un número entero entre -32768 (-215) y 32767 (215-1), gracias a que utilizan 2 bytes (16 bits) de memoria para almacenarse.

**"word"** = Es un espacio de almacenamiento con nombre en la memoria que se utiliza para guardar un valor de un tipo de dato específico. Este tipo de dato nos permite almacenar un número entero entre 0 y 65535. Utiliza 2 bytes (16 bits) de memoria para almacenarse. No puede tener signo negativo.

**long** = Se utiliza para declarar enteros de mayor tamaño que un entero estándar (int). Este tipo de dato nos permite almacenar un número entero comprendido en el rango de -2147483648 a 2147483647. Utiliza 4 bytes (32 bits) de memoria.

**unsigned long** = Similar que la variable *long* se utiliza para almacenar números enteros grandes, la diferencia es que no puede almacenar números negativos, lo que le permite representar un rango de valores positivos más amplio, teniendo un rango desde 0 a 4294967295 (2^32-1). Normalmente se utiliza para almacenar los resultados de la función millis() de Arduino.

**float** = Es un tipo de dato que se utiliza para almacenar números de punto flotante, es decir, números con decimales. Los números de punto flotante a menudo se usan para aproximar valores analógicos y continuos porque tienen mayor resolución que los enteros.

**string** = Es un tipo de dato que permite almacenar un conjunto de caracteres como un objeto, además tiene asociados funciones que se usan con dichos datos.

### Funciones

### Tarea

Crear variables dentro del arduino. fotos de las cosas que fallaron y que paso.
Minimo 3 códigos
**documentar los fallos**

[^1]: Los datos sacados para hacer esta definición los saque de acá [Declaración de una función](https://eloctavobit.com/lenguaje-programacion-para-arduino/tipos-de-variables)
