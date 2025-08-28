# sesión-01b

8 Agosto 2025

DIS8645
Mi número en la lista: 19

## Correos

¿Cómo escribir los correos?
Asunto que capte la atención.
Ir al grano con los correos, separar en párrafos si hay muchas ideas.

RESPONDER A TODOS

El “para” es para la persona a la que le va a llegar el correo
“Cc” significa “con copia”.
“Bcc” Le llega a la persona pero está oculto.

##Arduino

Arduino IDE: integrated development environment (IDE) software de desarrollo

Versión legacy: versiones antiguas de un software que aun así se pueden descargar

Dentro de Arduino IDE, hay que instalar la placa que se va a usar.

Archivo - ejemplos - hay varias bibliotecas - basics - blink

dentro de un código, es importante que los espacios, los paréntesis, los murciélagos, y los corchetes estén donde tienen que estar.

La diferencia entre el botón de verificar y upload: verificar es para que te diga en dónde hay errores o problemas dentro del código. Upload es para subirlo o mandarlo al arduino que está conectado al computador. El botón upload primero verifica y después sube.

Una vez que se sube el código al arduino, se va a abrir una consola de “output”. Debería mostrar si la subida del código fue exitosa.

setup y loop en arduino
setup y draw en processing

presionando el botón de reset en el arduino, vuelve a su estado original
El principio es el setup (ocurre una vez, cuando el arduino se prende. Hay que pensarlo como despertar en la mañana cuando abro los ojos.)

Si desconecto el arduino del pc, y cierro arduino ide, una vez que lo conecte de nuevo sin el software, como el código ya está dentro del arduino va a seguir funcionando.

“Arduino” es un dialecto dentro de C + +, el lenguaje de programación.

En general, un arduino es muy resistente cuando el código falla. La única razón por la que se rompería es si lo atropellan.

/* (significa que hay comentario hasta cierta línea) (a Aarón no le gusta un párrafo gigante al principio de comentarios)
// (comentario de una línea) significa que lo que viene a continuación, es un comentario (no es bueno usar un comentario al lado de un código porque se pierde el orden visual.

Después de cada comentario se hace el código para poder tener un orden para saber qué hace cada cosa.

¿Cómo verificar el por que mi arduino no funciona?
El cable quizás es falso
Quizás no instalé el paquete de arduino r4 minima

``pinMode``
``pinMode(LED_BUILTIN, OUTPUT);``

``LED_BUILTIN`` es para establecer cuál pin es.

Ejemplo: quiero que la patita número 13 sea una salida.
Cuando usamos un pin digital, hay que decirle para qué sirve.

loop: ocurre una y otra vez

digitalWrite permite emitir un voltaje donde nosotros queramos. (si o no, 1 o 0, high o low, V o F)
significa escribe “en ese lugar” (led_builtin) high o low
usar “delay” es una muy mala práctica. Es difícil hacer versiones sin delay. Lo que hace el delay es decirle al arduino que se congele, para que mantenga el digitalwrite por el tiempo establecido dentro del delay.
Para cambiar el tiempo, uno usualmente le pediría al computador que calcule, por ejemplo, 1000/10.

Al principio, se pueden establecer parámetros de tiempo prendido y tiempo apagado para que el “1000” no sea estático. Es una variable flexible que puede cambiar según otro código.
int tiempoPrendido = 100;

Palabras acompañadas de paréntesis
Las palabras que vienen antes de un paréntesis se les cambia el color automáticamente porque es una función importante.

¿Cuál es la diferencia entre loop y las palabras que están abajo?
Loop tiene una palabra antes, la cual es void. Además, tiene un paréntesis y un murciélago.
Todo lo que está dentro de un paréntesis son las opciones o parámetros (que pueden cambiar según decisiones, según variables, o en el tiempo) dependiendo del lenguaje de programación. Los parámetros se separan con comas. Ej. (asdffbb, asdf)

El punto y coma se usa para decir que una línea terminó.

## Declaración de funciones

Hay que declarar las palabras utilizando el void para que no sea un problema. Se declara una palabra para avisar que es un alias, que significa otras cosas.
Como la computación tiende a ser secuencial, es importante que esta declaración se haga antes de que se utilice la función.

Los murciélagos ayudan a decirle al computador qué significa la función. Todo lo que esté dentro es lo que significa. Básicamente, todo lo que esté dentro es una declaración de sus funciones.

Las variables que no tienen paréntesis no son funciones.

“float” funciona con decimales
“int” significa número entero. No funcionan las palabras con int.
“char” significa carácter. Solo cabe una letra. Se utiliza comillas simple.
“string” un valor donde quepan muchos subvalores. Se utiliza la doble comillas

Se programan décimas en string para evitar que sea una línea tan larga.
String décimas = “sjkhdfjsjf\n”;
Décimas = décimas + “ndasjdsjf\n”

En las comillas simples, solo cabe una letra. En la doble comillas caben varias.

El igual = en programación se usa de distinta forma. Es “no conmutativo”. No se puede cambiar el orden de derecha a izquierda o viceversa.

En programación, una mayúscula y una minúscula son cosas completamente diferentes, entonces hay que tener ojo al usarlas.

Poema de Alejandra Pizarnik - Te regalaré un abismo.

Puerto serial: USB
Se abre el puerto y se puede usar para enviar mensajes al arduino o que el arduino mande mensajes al computador.

Serial.begin() es una función. (Recuerda que todas las funciones tienen paréntesis.)
Hay que establecerle una velocidad.

Serial.print(poema) para poder imprimir el poema dentro del loop. (Primero se declaró lo que es el poema con string)

Serial.print(\n) línea nueva para que el poema se pueda desplegar.
Serial monitor.

Declaración
tipoDeDato nombreDeFantasia;

el nombre de fantasía debe ser único
función  ();
variables  asd = 1;

se puede asignar a una variable el resultado de llamar a una función
lluvia = preguntaleASepu();

“void” es un tipo de función.

### Encargo

Crear variables dentro del arduino y experimentar. Fotitos de cosas que fallaron y qué pasó. Mínimo 3 códigos que no funcionan. Documentar los fallos.
