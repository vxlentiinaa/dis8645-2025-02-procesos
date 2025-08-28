# sesion-04a
Como contenido de clase, los profes nos enseñaron cómo colocar un potenciómetro hacia nuestra protoboard, y de esa manera estar interconectada hacia nuestra pantalla y nuestro Arduino.

También nos enseñaron la función interna de la protoboard, donde cada columna numerada tendrá la misma conexión, como si fuese un cable continuo.

Si existe una entrada análoga, debería solo recibir una sola señal, es de super malos modales el conectar más de una cosa.

“Las cosas que son reales son análogas”. Aarón Montoya 2025

No podemos hacer que pase de los 10 bits en este instante, o sea que tendremos 1024 valores para este trabajo.

El valor que tenga mi potenciómetro no importa, debido a que es proporcional al mismo potenciómetro la cantidad que será leída por el analog in; esta siempre será entre el 1 y el 1023.

Como ya tenía mencionado en mi investigación sobre cómo funcionaban los potenciómetros para su uso con Arduino en la tarea de la sesión 03b, no repetiré lo mismo.

## progreso para el proyecto 1

Como idea de cómo podíamos llevar a cabo nuestra idea de las distintas conversaciones del usuario con nuestro Arduino, sabíamos que la parte más esencial del codigo seria los “if” statements, para poder diferenciar los caminos tomados por el usuario, según las opciones elegidas después de cada pregunta dada por el Arduino, donde dependiendo de la distinta respuesta que dé el usuario, saldrian distintas preguntas, osea que no todas las personas tendrían la misma experiencia al momento de tener la conversación con nuestro Arduino.

A partir de los conocimientos que tenemos actualmente con las clases que nos han sido impartidas, los ejemplos de los profesores, y ciertos conocimientos previos, hicimos un pequeño código de prueba para ver si es que, como concepto podría funcionar, el cual fue el siguiente, que también puede ser encontrado con más detalle en el repositorio de Angela O’Ryan @hiinalia donde dejamos todo con mayores detalles del paso a paso, que yo explicare algunas de las razones de las decisiones del porqué tomamos cada opción del este “esqueleto” que está presentado a continuación: 

```cpp
// a la derecha, mayor el número
//a la izquierda, menor el número
bool conversa1 = true;

// se le aplica al angulo del potenciometro
// donde false es 512 o menos y true es 513 o más
// potenciometro apuntando a la derecha es true
// potenciometro apuntando a la izquierda es false
bool potevalor = true;

// hasta que no se cumpla la primera
// y el valor que queremos que se cumpla
// no se activarían sus valores inscritos
bool conversa2 = false;


//para que las respuestas sean almacenadas y no causen problemas retroactivamente en conversas despues
bool respCon2Izq = false;
bool respCon2Der = false;

bool conversa3 = false;
bool respCon3Izq = false;
bool respCon3Der = false;

bool conversa4 = false;
bool respCon4Izq = false;
bool respCon4Der = false;

bool conversa5 = false;
bool respCon5Izq = false;
bool respCon5Der = false;


void setup() {
  // para que sea posible la comunicación
  // entre arduino y potenciometro
 Serial.begin(9600);
 String conversa2 = "waos";
}

void loop() {
  // put your main code here, to run repeatedly:
 // cuando la conversa1 es verdadera
  // y el potenciometro está apuntando a la izq
  // y ninguna de las dos respuestas de la conversa2 es verdadera
  // se podrá llevar a cabo este if statement
  if(conversa1 == true && potevalor == true && !respCon2Der == true && !respCon2Izq == true){
    // se despliega el texto de la conversa2
    String(conversa2);
    // esperamos 5 segundos para la siguiente conversa
    delay(5000);
    // ra respuesta sera almacenada para que no se puedan causar problemas
    respCon2Der = true;
  }
    if(respCon2Der == true && potevalor == true && !respCon3Der == true && !respCon3Izq == true){
      String(conversa4);
      respCon4Izq = false;
      delay(5000);
      }
    }

```

Lo primero que queríamos hacer era el tener múltiples conversaciones o preguntas con nuestro Arduino, así que tenemos que asignar un nombre para cada una de ellas, las cuales serían conversa1, conversa2, etc. Sucesivamente, hasta que llegáramos al número de conversaciones específicas que queríamos, o si es el caso de que la memoria de nuestro Arduino acabara ocupada al máximo de lo que pueda almacenar.

Como esto fue hecho a memoria, para poder equivocarnos, pero también para demostrar lo que nos hacía sentido en el minuto, estas fueron escritas al principio del código como variables booleanas, ya que en un principio pensábamos que eso sería lo único necesario para poder “almacenar” la respuesta de cada pregunta y pasar a la siguiente, lo cual incluso en este código podemos observar que ya pensamos más allá, así que en la siguiente iteración del código serán borradas como booleanas, tan solo siendo asignadas como sus strings específicas en void setup().

```cpp
// booleana innescesaria
bool conversa1 = true;

// se ocuparan com strings para almacenar las conversaciones
 String conversa2 = "waos";
```
