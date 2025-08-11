# sesion-01b
## Módulo de la mañana

Alias es un nombre, el cual le colocamos a una colección de datos.

Empezamos hablando de la buena comunicación, sobre todo por cómo deberíamos enviar y tomar en cuenta los correos electrónicos.

Debería ocupar el Reply All, para que todas las personas dentro de una conversación se puedan enterar.

Vamos a instalar Arduino IDE desde la página arduino.cc, un lugar donde nos quieren vender productos; el Arduino IDE 2.x será el que ocupemos para esta clase.

IDE es Integrated Development Environment.

 Control+coma es para abrir las preferencias.

Las cosas open source son aquellas que pueden ir más allá de la compañía, debido a que personas que leen absolutamente todo el código, y si llega a existir algún peligro de seguridad, se puede hacer saber al desarrollador para mejorar la seguridad y/o funcionamiento.

Tenemos que instalar el Board Manager de la placa R4 para poder ser capaces de usar este Arduino.

Piruetasxyz (Aarón Montoya) está creando librerías de sus proyectos para que puedan llegar a más personas. La biblioteca te permite hacer funciones preprogramadas, para que otras personas no tengan que volver a pasar por ese proceso tan largo.

File-01.Basics-Blink, donde parte haciendo nada, donde existen los comentarios que indican el funcionamiento de las determinadas líneas de código…

() paréntesis

{} murciélagos

[] corchetes

En la esquina superior izquierda hay 2 botones; un check es donde verifica si el código está funcionando, mientras que upload es lo que enviará el código al Arduino siempre y cuando esté conectado y seleccionado el Arduino que específicamente vamos a usar.

Cada vez que presiono el botón de reset, vuelve a su estado original, de la misma manera en la que funcionaría si es que el cable fuese conectado y desconectado.

Si presiono dos veces rápidamente el botón reset, se va a un estado… 

Todo Arduino es C, todo C no es Arduino… 

/* es para indicar que todo es un comentario hasta que se encuentre el */ al menos Aarón Montoya prefiere escribir cada línea individualmente, que sería con //.

El comentario, como buen modal, debería ir una línea anterior a donde iría a pasar, por ejemplo:

// Aquí iría el color…

color(255,132,201)

Muy importante documentar, para no tener que pelear en contra de nuestra propia memoria…

El digitalWrite nos permite emitir un voltaje donde nosotros queramos de manera binaria; serían HIGH y LOW (1,0). 

Usar delay es una muy mala práctica; hay que usar unas 20 líneas de código para que quede elegante.

Int (¿integrales?) Antes del setup pondremos los datos de tiempo de prendido y apagado.

Las palabras que son seguidas por un paréntesis son funciones.

Las funciones son palabras que agarran código que esté en otra parte.

Los parámetros que van dentro de las funciones se separan de cada uno con una coma. 

## Módulo después del break

Declarar es extremadamente importante en computación.

Con void estaré creando mi declaración.

En este programa en específico no importa el orden de qué voy a declarar.

Las int son variables, pero no son void.

char letrita = '1'; (Entra solo un carácter, sea un número, símbolo o letra).

String poema = "‘Te regalaré un abismo" (con mayúscula y con doble comilla)…

Comillas simples ‘ ’ solo entra 1 letra…

Comillas dobles “ “ entra cualquier cantidad de caracteres que queramos…

Él igual = no es conmutativo, funciona de izquierda a derecha; el lugar de la memoria que se llama como está a la izquierda, adentro de eso vive el valor de la derecha…

Nuestras variables no deberían partir de un número, no deberían tener un espacio.

Serial es muy importante, donde se pueden encontrar muchas cosas distintas; entre esas, Serial.begin(9600) haría que al momento de pasar 9600 milisegundos se abra el Serial, donde se pueden transmitir mensajes.

Serial.print(poema); 

“\n” es una nueva línea de texto en la consola.

// declaración

// tipoDeDato nombreDeFantasia

Para tener una variable o una función, primero debo declararla una vez; ese nombre de fantasía debe ser único.

Después de declararlo, puedo usarlo.

C++ W3Schools 

La tarea de hoy es romperlo de maneras raras, crear variables, documentar errores. 

Fallar con al menos 5 códigos que no nos funcionen.

