# sesion-04a

Como contenido de clase, los profes nos enseñaron cómo colocar un potenciómetro hacia nuestra protoboard, y de esa manera estar interconectada hacia nuestra pantalla y nuestro Arduino.

También nos enseñaron la función interna de la protoboard, donde cada columna numerada tendrá la misma conexión, como si fuese un cable continuo.

Si existe una entrada análoga, debería solo recibir una sola señal; es de malos modales el conectar más de una cosa.

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

Para la siguiente variable, que en este caso sí tiene sentido que sea booleana, fue escrita como tal ya que vamos a querer solo 2 formas de su uso, las cuales son atribuidas a true o false, donde dividiremos en una funcion que sera escrita, que el potenciometro que tenemos está apuntando hacia la izquierda o hacia la derecha donde la opción izquierda seria su valor del Analog Read desde 0 a 511 y la opción derecha sería desde 512 hasta 1023, esta decisión fue pensada para que los “if” statements que serán ocupados para las conversaciones no tuviesen que estar escritos múltiples veces, sino que acortarlo a true o false, donde un if statement, donde estará definido el “lado izquierdo” del potenciómetro, el potevalor sea true, mientras que el “else if” statement será que el pote valor sea falso, debido a que estará en el rango de la posición de la derecha del potenciómetro

```cpp
// para poder definir que este valor de pote necesitamos que sea tan solo 2 valores, si o no
bool potevalor = true;

// si es que la medida del puerto Analogo es menor que 512
// potevalor no se cumplira
if (analogRead(A0) < 512){
potevalor = false
}
// si es que la medida del puerto Analogo es mayor que 512
// potevalor si  se cumplira
else if (analogRead(A0) > 511){
potevalor = true
}
```

Las siguientes variables booleanas que fueron declaradas fueron respuestas específicas para cada una de las conversaciones, donde cada conversación tendrá 2 distintas respuestas, que seria la izquierda o la derecha, estas variables existen con la intención de hacer que nuestros “if” statements no puedan causar problemas con el código en su funcionamiento.

Con lo que nos referimos con esto es el hecho de que si no tuviéramos estas respuestas guardadas, digamos que estamos en la conversación 3, que se llegaba al elegir la respuesta derecha en la conversación número 1, ¿que es lo que previene el hecho de cambiar el estado del potenciómetro a la izquierda, mientras que se está realizando la 3ra conversación, y de esta manera cambiase el estado y se fuese a la conversación 2? de la manera hipotética siguiente:

```cpp
void loop() {
// que se cargue la conversacion 1
string (conversa1)
 // cuando el pote este hacia la derecha
if (valorpote == true){

// cargaremos la conversacion 2
string (conversa2)

 // cuando este el potenciometro a la derecha
if (valorpote == true){

// la conversacion 4 sera cargada
  string (conversa4)
}

// la conversacion 5 sera cargada
if (valorpote == false){
  string (conversa5)
}

}

// cuando este el potenciometro a la izquierda
else if (valorpote == false){
string (conversa3)
}

}
```

La respuesta sería nada, o alumnos que se nos ocurra que impida este problema por sí mismo, sería un mundo de cambios constantes que el arduino procesaría de una manera que no comprendemos, el cual igual dejamos como ejemplo de prueba, pero con el monitor serial, para verlo de una manera más precisa con tiempo específico de cada acción:

```cpp
// carga del codigo sin almacenamiento de respuestas
// y su problema de funcionamiento

```

con las variables booleanas de cada respuesta para cada conversación, podemos hacer que cada pregunta sólo se pueda reproducir si es que ciertas condiciones son cumplidas, entre estas, que una respuesta de de misma pregunta NO ha sido recibida, osea que una vez se dé la respuesta de digamos la conversa3, la conversa 3 no se podrá a volver a repetir ya que es un requisito el no tener una respuesta activa, solo puede seguir adelante con el código y el siguiente “if” statement, como se puede ver en el código de “base” que escribimos para nuestro proyecto:

```cpp
if(conversa1 == true && potevalor == true && !respCon2Der == true && !respCon2Izq == true){
    // se despliega el texto de la conversa2
    String(conversa2);
    // esperamos 5 segundos para la siguiente conversa
    delay(5000);
    // ra respuesta sera almacenada para que no se puedan causar problemas
    respCon2Der = true;
  }
    if(respCon2Der == true && potevalor == true && !respCon4Der == true && !respCon4Izq == true){
      String(conversa4);
      respCon4Izq = false;
      delay(5000);
      respCon4Der = true;
      }
    }

```

lo que está queriendo decir este encadenamiento de los if statements es, una vez la conversa1 sea haya sido cargada, el valor del potenciómetro está en la dirección derecha, osea en su estado true, **y no ha recibido ni la respuesta izquierda del pote, ni la respuesta derecha del pote** podrá continuar a la conversa4, que tambien solo avanzara cuando reciba la siguiente respuesta correspondiente

Ahora, con un entendimiento de cómo confiamos en el encadenamiento de las acciones, pasaremos a incluir nuestra pantalla OLED y el potenciómetro para poder confirmar que el funcionamiento sea el correcto, así que incluimos las librerías de Adafruit, con una base de el ejemplo de la [sesion-03b](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/00-docentes/sesion-03b/ejemploPantallita01) donde tomaremos los datos de el setup de la pantalla, para no complicarnos haciendolo desde 0, la posicion de donde aparecera el texto y el tamaño del texto, donde quedaria de la manera siguiente con 7 distintas opciones de conversaciones, al identificar lo confuso que era el hecho de hacer que cada conversación tuviese una opcion izquierda o derecha, creamos una variable que fuese la respuesta de esa opcion, donde quedo el codigo de la siguiente forma:

```cpp
// librerias para funcionamiento de pantallita
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// denifir el ancho de la pantalla
#define SCREEN_WIDTH 128
// definir el alto d ela pantalla
#define SCREEN_HEIGHT 64
// que se resetee REVISAR REVISAR REVISAR REVISAR REVISAR
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// potenciometro a la derecha es true
// potenciometro a la izquierda es false
// a la derecha, mayor el número
// a la izquierda, menor el número
// donde false es 512 o menos y true es 513 o más
bool potevalor = true;

// hasta que no se cumpla la primera
// y el valor que queremos que se cumpla
// no se activarían sus valores inscritos
//para que las respuestas sean almacenadas y no causen problemas retroactivamente en conversas despues
bool respCon2 = false;

bool respCon3 = false;

bool respCon4 = false;

bool respCon5 = false;

bool respCon6 = false;

bool respCon7 = false;

void setup() {
  // para que sea posible la comunicación
  // entre arduino y potenciometro
 Serial.begin(9600);

 if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    for(;;);
  }

  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);
}

void loop() {

// conversacion que envia el arduino al usuario
String conversa1 = "waos1";

String conversa2 = "waos2";

String conversa3 = "waos3";

String conversa4 = "waos4";

String conversa5 = "waos5";

String conversa6 = "waos6";

String conversa7 = "waos7";


  // Limpiamos toda la pantalla
  pantallita.clearDisplay(); 

  //tamaño del texto
  pantallita.setTextSize(1); 
  
  // punto de donde aparece el texto
  int16_t x1, y1;
  // REVISAR REVISAR REVISAR
  uint16_t w, h;


pantallita.display();

  pantallita.println(conversa1);

  delay(3000);


 // cuando la conversa1 es verdadera
  // y el potenciometro está apuntando a la izq
  // y ninguna de las dos respuestas de la conversa2 es verdadera
  // se podrá llevar a cabo este if statement
  if(potevalor == false && !respCon2 == true && !respCon3 == true){
    // se despliega el texto de la conversa2
    pantallita.println(conversa2);

    // esperamos 5 segundos para la siguiente conversa
    delay(5000);

    // ra respuesta sera almacenada para que no se puedan causar problemas
    respCon2 = true;

    // revisar si es necesario REVISAR REVISAR REVISAR REVISAR
    //pantallita.display();

          if(respCon2 == true && potevalor == false && !respCon4 == true && !respCon5 == true){
              pantallita.println(conversa3);
              respCon4 = true;
              delay(5000);
             }

          if(respCon2 == true && potevalor == true && !respCon4== true && !respCon5 == true){
              pantallita.println(conversa4);
              respCon5 = true;
              delay(5000);
             }
      }

    else if(potevalor == true && !respCon2 == true && !respCon3 == true){
      // se despliega el texto de la conversa2
      pantallita.println(conversa3);

      // esperamos 5 segundos para la siguiente conversa
      delay(5000);

      // ra respuesta sera almacenada para que no se puedan causar problemas
      respCon3 = true;

          if(respCon3 == true && potevalor == true && !respCon6 == true && !respCon7 == true){
                  pantallita.println(conversa6);
                  respCon6 = true;
                  delay(5000);
                }

          if(respCon3 == true && potevalor == true && !respCon6 == true && !respCon7 == true){
              pantallita.println(conversa7);
              respCon7 = true;
              delay(5000);
             }
         }

}

```

Tambien añadiremos el Analog Read del potenciometro, como nos enseñaron en la sesion-04a a través de la coneccion a partir de una protoboard:

```cpp
// librerias para funcionamiento de pantallita
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


// denifir el ancho de la pantalla
#define SCREEN_WIDTH 128
// definir el alto d ela pantalla
#define SCREEN_HEIGHT 64
// que se resetee REVISAR REVISAR REVISAR REVISAR REVISAR
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


// potenciometro a la derecha es true
// potenciometro a la izquierda es false
// a la derecha, mayor el número
// a la izquierda, menor el número
// donde false es 512 o menos y true es 513 o más
bool poteValor = true;


// hasta que no se cumpla la primera
// y el valor que queremos que se cumpla
// no se activarían sus valores inscritos
//para que las respuestas sean almacenadas y no causen problemas retroactivamente en conversas despues
bool respCon2 = false;


bool respCon3 = false;


bool respCon4 = false;


bool respCon5 = false;


bool respCon6 = false;


bool respCon7 = false;


void setup() {
  // para que sea posible la comunicación
  // entre arduino y potenciometro
 Serial.begin(9600);


 if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    for(;;);
  }
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);
}


void loop() {
pantallita.clearDisplay();


//tamaño del texto
  pantallita.setTextSize(3);


// el angulo del potenciometro sera leido
//en el pin A0 del Analog In
int anguloDelPote = analogRead(A0);
delay(1);


// cuando
if (anguloDelPote < 512){
  poteValor = true;
}


else if (anguloDelPote > 512){
  poteValor = false;
}


// conversacion que envia el arduino al usuario
String conversa1 = "waos1";


String conversa2 = "waos2";


String conversa3 = "waos3";


String conversa4 = "waos4";


String conversa5 = "waos5";


String conversa6 = "waos6";


String conversa7 = "waos7";
 
  // punto de donde aparece el texto
  int16_t x1, y1;
  // REVISAR REVISAR REVISAR
  uint16_t w, h;


    pantallita.println(conversa1);


  delay(3000);






 // cuando la conversa1 es verdadera
  // y el potenciometro está apuntando a la izq
  // y ninguna de las dos respuestas de la conversa2 es verdadera
  // se podrá llevar a cabo este if statement
  if(poteValor == false && !respCon2 == true && !respCon3 == true){
    // se despliega el texto de la conversa2
    pantallita.println(conversa2);


    // esperamos 5 segundos para la siguiente conversa
    delay(5000);


    // ra respuesta sera almacenada para que no se puedan causar problemas
    respCon2 = true;


    // revisar si es necesario REVISAR REVISAR REVISAR REVISAR
    //pantallita.display();


          if(respCon2 == true && poteValor == false && !respCon4 == true && !respCon5 == true){
              pantallita.println(conversa3);
              respCon4 = true;
              delay(5000);
             }


          if(respCon2 == true && poteValor == true && !respCon4== true && !respCon5 == true){
              pantallita.println(conversa4);
              respCon5 = true;
              delay(5000);
             }
      }


    else if(poteValor == true && !respCon2 == true && !respCon3 == true){
      // se despliega el texto de la conversa2
      pantallita.println(conversa3);


      // esperamos 5 segundos para la siguiente conversa
      delay(5000);


      // ra respuesta sera almacenada para que no se puedan causar problemas
      respCon3 = true;


          if(respCon3 == true && poteValor == true && !respCon6 == true && !respCon7 == true){
                  pantallita.println(conversa6);
                  respCon6 = true;
                  delay(5000);
                }


          if(respCon3 == true && poteValor == true && !respCon6 == true && !respCon7 == true){
              pantallita.println(conversa7);
              respCon7 = true;
              delay(5000);
             }
         }
  pantallita.display();
}

```

Pero ocurrió un pequeño problema, donde sólo aparece una de las pantallas que se quieren observar, así que tenemos que hacer una revisión de cuál sería la razón del porque pasa esto, donde solo aparece el mensaje de waos1, waos3 y waos 6.

Este código está increíblemente desordenado, al punto donde ni siquiera entendía que eran las variables que tenia que cambiar, no cambiar, realmente era un desastre, así que para empezar busque en internet a alguien que tenía un problema similar al mio, mi búsqueda específica fue la siguiente: “in if statements is it necessary to put == true for a boolean for c++”, lo cual me llevó a esta respuesta en un foro:

<https://stackoverflow.com/a/8844632>

donde aprendí que, al menos con las variables booleanas dentro de los if statements, no es necesario el escribir == true, o == false, sino que el mero hecho de mencionar la variable como !waos, donde eso significa waos == false, ahorrando un poco de dolor de cabeza de asegurarme que todo esté perfectamente escrito, y hace un poco más agradable a la vista cada If statement

```cpp
// de esto, desordenado
if(poteValor == false && respCon2 == !true && respCon3 == !true){}
// a esto un poco más ordenado
if(respCon2 && !poteValor && !respCon4 && !respCon5){}

```

También fueron eliminadas las montoneras de if statements, ya que necesito identificar el problema de funcionamiento de porque salen todos las conversaciones directamente al mandarlo a mi arduino como se pudo observar en la foto de antes

Lo que personalmente más me molestaba era el hecho de que el texto apareciera uno al lado de otro unas veces, otras veces abajo, (aunque si sabia que estas eran causadas por el hecho de haber escrito pantallita.println();) asi que busque, que era lo que me estaba faltando así que me puse a revisar el ejemplo que hicieron los profesores, previamente mencionado, buscando en google cada una de las líneas que no comprendía, para ver si justo era lo que me faltaba, hasta encontrarme con esto:

<https://forums.adafruit.com/viewtopic.php?t=107808#top>

lo que me faltaba era la función .setCursor, que hará que cada una de las cargas en el display sean a partir de un punto que yo pondré, donde es primero la coordenada de izquierda a derecha, y después desde arriba hacia abajo, así que poniéndola antes de cada texto este se posiciona a la esquina superior izquierda cuando le ponga el valor de (0,0)

```cpp

// donde pantallita es mi display estara arriba a la izquierda
pantallita.setCursor(0,0)

// donde pantallita  es mi display, este se encontrara en la 
// mitad horizontal del display de 128 pixeles
pantallita.setCursor(64,0)

```

Ahora el siguiente problema era que quedaba cargado la conversación anterior en, el display de la pantalla OLED, con los ejemplos me imaginaba que pantallita.clearDisplay() podía ayudar, pero solo era en parte, debido  que una vez ponia eso, nada más volvió a salir, pero me di cuenta de la existencia de pantallita.display(); en el código de los profes que tenía el siguiente comentario // Actualiza la pantalla

de esta manera intente aplicar que una vez todo lo del momento ha hecho display, le pondré un .clearDisplay, y en el siguiente if statement pondré un pantallita.display(); que funciona justo como yo quería

```cpp

if(respCon2 && !poteValor && !respCon4 && !respCon5){
          pantallita.setCursor(0, 0);
          pantallita.println(conversa4);

// permite que el mensaje sea observado en la pantalla
          pantallita.display();
          delay(3000);
          respCon4 = true;
// borra el mensaje, ya que llego al final de su funcionamiento
          pantallita.clearDisplay();

             }

```

Ahora por fin, llegue a un código, que aunque relativamente simple, lograba llegar a los parámetros que nos imaginamos, después de muchas neuronas cansadas, que sería el siguiente:

```cpp

// donde pantallita es mi display estara arriba a la izquierda
pantallita.setCursor(0,0)

// donde pantallita  es mi display, este se encontrara en la 
// mitad horizontal del display de 128 pixeles
pantallita.setCursor(64,0)

```

Ahora el siguiente problema era que quedaba cargado la conversación anterior en, el display de la pantalla OLED, con los ejemplos me imaginaba que pantallita.clearDisplay() podía ayudar, pero solo era en parte, debido  que una vez ponia eso, nada más volvió a salir, pero me di cuenta de la existencia de pantallita.display(); en el código de los profes que tenía el siguiente comentario // Actualiza la pantalla

de esta manera intente aplicar que una vez todo lo del momento ha hecho display, le pondré un .clearDisplay, y en el siguiente if statement pondré un pantallita.display(); que funciona justo como yo quería

```cpp

if(respCon2 && !poteValor && !respCon4 && !respCon5){
          pantallita.setCursor(0, 0);
          pantallita.println(conversa4);

// permite que el mensaje sea observado en la pantalla
          pantallita.display();
          delay(3000);
          respCon4 = true;
// borra el mensaje, ya que llego al final de su funcionamiento
          pantallita.clearDisplay();

             }

```

Ahora por fin, llegue a un código, que aunque relativamente simple, lograba llegar a los parámetros que nos imaginamos, después de muchas neuronas cansadas, que sería el siguiente:

```cpp
// librerias para funcionamiento de pantallita
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// denifir el ancho de la pantalla
#define SCREEN_WIDTH 128
// definir el alto d ela pantalla
#define SCREEN_HEIGHT 64
// que se resetee REVISAR REVISAR REVISAR REVISAR REVISAR
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// potenciometro a la derecha es true
// potenciometro a la izquierda es false
// a la derecha, mayor el número
// a la izquierda, menor el número
// donde false es 512 o menos y true es 513 o más
bool poteValor = true;

// hasta que no se cumpla la primera
// y el valor que queremos que se cumpla
// no se activarían sus valores inscritos
//para que las respuestas sean almacenadas y no causen problemas retroactivamente en conversas despues
bool respCon2 = false;

bool respCon3 = false;

bool respCon4 = false;

bool respCon5 = false;

bool respCon6 = false;

bool respCon7 = false;

bool eleccion1 = false;

bool comenzarConversa = false;

// si se quieren crear mas conversaciones no van aqui, sino que por strings en void loop()


void setup() {
  // para que sea posible la comunicación
  // entre arduino y potenciometro
 Serial.begin(9600);

// mensaje de error en caso de que la pantalla no estuviese conectada correctamente
 if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    // que se repitiera indefinidamente
    for(;;);
  }
}

void loop() {
      // que se borre cualquier cosa que quede en el display
      pantallita.clearDisplay();
      // que las letras esten en el color "blaco" del OLEd, que en nuestro caso seria azul/amarillo
      pantallita.setTextColor(SSD1306_WHITE);
      // para poder setear las coordenadas de donde sale el texto
      pantallita.setCursor(0, 0);
      //tamano del texto
      pantallita.setTextSize(1); 

    // el angulo del potenciometro sera leido
    //en el pin A0 del Analog In
    int anguloDelPote = analogRead(A0);

    // cuando el valor del potenciometro esta a la izquierda, poteValor sera true
    if (anguloDelPote < 512){
      poteValor = true;
    }
    // cuando el valor del potenciometro esta a la derecha, poteValor sera false
      else {
      poteValor = false;
    }

// conversacion que envia el arduino al usuario
// aqui estaran todas los poemas y conversaciones que el arduino tendra
// con el usuario, debido  que son mas largas que 1 caracter
// estas deben estar delcaradas como String
// conde el texto entre comillas "" es lo que sera mostrado en el display
String conversa1 = "waos1";
String conversa2 = "waos2";
String conversa3 = "waos3";
String conversa4 = "waos4";
String conversa5 = "waos5";
String conversa6 = "waos6";
String conversa7 = "waos7";
  

delay (5000);
  // cambio la variable comenzarConversa apenas el arduino tiene el codigo
  // para realizar el encadenamiento de statements despues
  comenzarConversa = true;

    // cuando comenzarConversa es verdadero
    if (comenzarConversa){
        // se obtendra el dato la string de nombre conversa1
        pantallita.print(conversa1);
        // esto permite que aparezca la conversa1 en el display OLED
        pantallita.display();
      // esperamos un acantidad de tiempo para que se pueda leer el mensaje de conversa1
      delay(1000);
      // pasara a la eleccion1 donde el valor del potenciometro sera relevante
      eleccion1 = true;
      // para que no siga el display constantemente apareciendo, la variable sera falsa
      comenzarConversa = false;
      // el setear las respuestas a falso, permitira que una vez terminen todos los if statements
      // este pueda hacer otro ciclo
      respCon2 = false;
      respCon3 = false;
      // esto borrara l display de conversa1, para que no aparezca en siguientes conversaciones
      pantallita.clearDisplay();
    }


  // cuando la eleccion1 es verdadera
  // y el potenciometro está apuntando a la izq
  // y ninguna de las dos respuestas de la eleccion es verdadera
  // esto se hace para que una vez se obtenga una respuesta, esa misma 
  // respuesta bloquee el que se vuelva a cumplir este if statement
  if(eleccion1 && !poteValor && !respCon2 && !respCon3){
        // para que no quede en el aire el texto
        // con la posicion proporcional al texto de la conversa1
        // esto se tendra que repetir en cada una de las strings
        pantallita.setCursor(0, 0);
        // se despliega el texto de la conversa2
        pantallita.print(conversa2);
        // esto tambien hay que volver a hacerlo, ya que borramos
        // el display de la conversa anterior
        pantallita.display();
        // esperamos 3 segundos para la siguiente conversa
        delay(3000);
        // la respuesta sera almacenada, donde esta repsuesta
        // elige el camino que se tomara a continuacion
        respCon2 = true;
  }

    // esto es lo mismo que el if statement anterior
    // pero si es que el potenciometro estara en la direccion opuesta
    if(eleccion1 && poteValor && !respCon2 && !respCon3){
          pantallita.setCursor(0, 0);
          // se despliega el texto de la conversa2
          pantallita.println(conversa3);
          pantallita.display();
          // esperamos 3 segundos para la siguiente conversa
          delay(3000);
          // la respuesta sera almacenada para que no se puedan causar problemas
          respCon3 = true;
    }

          if(respCon2 && !poteValor && !respCon4 && !respCon5){
              pantallita.setCursor(0, 0);
          // se despliega el texto de la conversa2
          pantallita.println(conversa4);
          pantallita.display();
          // esperamos 5 segundos para la siguiente conversa
          delay(3000);
          // la respuesta sera almacenada para que no se puedan causar problemas
          respCon4 = true;
             }

          if(respCon3 && !poteValor && !respCon4 && !respCon5){
              pantallita.setCursor(0, 0);
          // se despliega el texto de la conversa2
          pantallita.println(conversa5);
          pantallita.display();
          // esperamos 3 segundos para la siguiente conversa
          delay(3000);
          // la respuesta sera almacenada para que no se puedan causar problemas
          respCon5 = true;
             }

}


```
