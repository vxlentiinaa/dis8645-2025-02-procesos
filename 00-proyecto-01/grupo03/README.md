# proyecto-01

## Acerca del proyecto

- Grupo: 03
- Nombre de grupo: WAOS
- Integrantes:
  - Morgan Aravena
  - Angela O'Ryan
  - Sebastian Saez
  - Miguel Vera

## Presentación textual

Plantea aquí el problema de diseño que abordaste. Menciona el texto de referencia.

La existencia de la inteligencia artificial hoy en día ha creado en algunas personas la dependencia de estos algoritmos, que realmente solo son unas fórmulas matemáticas estratégicamente diseñadas para dar la respuesta que sea la más probablemente correcta. En un mundo en el que se crean diálogos con estas "inteligencias" no sólo para solucionar problemas, sino que también para poder ocuparlas para llenar un vacío y sentir que están siendo escuchados por otra persona. (Tal vez mencionar un texto de estudio de la dependencia emocional con la inteligencia artificial hoy en día).

Pero este no es el único lado de la inteligencia artificial, ya que existen múltiples problemas éticos, como la gran cantidad de energía y agua que son necesarias para el funcionamiento constante de los servidores, la gran cantidad de desinformación que distribuye de manera masiva, entre múltiples otras cosas.

Queremos ofrecer una interacción ética, genuina y que entregue respuestas personalizadas e introspectivas al usuario, dándole así un toque humano que la IA no tiene.

## Inputs y outputs

El input para entre proyecto es realizada a partir de un potenciómetro montado sobre una protoboard, donde el ángulo en el que se encuentre el potenciómetro, se le permitirá al usuario elegir entre 2 opciones que se le entregarán, una siendo hacia la izquierda y la otra hacia la derecha.

El output es observado en la pantalla OLED, donde el usuario leerá la conversación que se está llevando a cabo con el arduino, las opciones que se le serán presentadas, como también los poemas finales, una vez lleguen al final de la conversación.

## Bocetos de planificación

Fotografías y dibujos de maquetas y pruebas

## Etapas del código

Pruebas de código de [@SebastianSaez1003](https://github.com/SebastianSaez1003/dis8645-2025-02-procesos/tree/main/27-SebastianSaez1003) [@Hiinalia](https://github.com/Hiinalia/dis8645-2025-02-procesos/tree/main/19-Hiinalia)

Está considerado como un árbol de respuestas.

Dejamos listas las variables booleanas que vamos a usar

teníamos una buena idea de cómo debíamos llevarlo a cabo, la mayoría de las cosas las escribimos por pensamiento lógico de cómo me hacía sentido el posible funcionamiento de las cosas, pero al probar la compilación nos mandaron unos cuantos problemas, el código que escribimos es el siguiente:

```cpp


// potenciometro a la derecha es true
// potenciometro a la izquierda es false
// a la derecha, mayor el número
// a la izquierda, menor el número

bool conversa1 = true

bool potevalor = true


// hasta que no se cumpla la primera
// y el valor que queremos que se cumpla
// no se activarían sus valores inscritos

bool conversa2 = false

bool conversa3 = false

bool conversa4 = false

bool conversa5 = false


void setup() {
  // put your setup code here, to run once:
 
}


void loop() {
  // put your main code here, to run repeatedly:


}



```

```cpp


// potenciometro a la derecha es true
// potenciometro a la izquierda es false
// a la derecha, mayor el número
//a la izquierda, menor el número

bool conversa1 = true;

// se le aplica al angulo del potenciometro
// donde false es 512 o menos y true es 513 o más

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

 if(conversa1 == true AND potevalor == true AND !respCon2Der == true AND !respCon2Izq == true){

    // se despliega el texto de la conversa2
    String(conversa2);

    // esperamos 5 segundos para la siguiente conversa
    delay(5000);

    // La respuesta sera almacenada para que no se puedan causar problemas
    respCon2Der = true;
  }

 if(respCon2Der == true AND potevalor == true AND !respCon3Der == true AND !respCon3Izq == true){
      String(conversa4);
      conversa4 = true;
      delay(5000);
      }
    }
  }
}

```

Nos dimos cuenta de cuál era el error al leer la pestaña de output de los errores, el uso de AND al parecer no era el correcto, así que los cambiamos por los ampersands (&&). Una vez lo cambiamos, empezó a funcionar.

```cpp
if(conversa1 == true && potevalor == true && !respCon2Der == true && !respCon2Izq == true){


```

También eliminamos varios caracteres que estaban extra y no eran necesarios

Este código no presenta ningún error al momento de verificarlo. La lógica es correcta, y tenemos el esqueleto de nuestro proyecto.

```cpp
// potenciometro a la derecha es true
// potenciometro a la izquierda es false
// a la derecha, mayor el número
//a la izquierda, menor el número

bool conversa1 = true;

// se le aplica al angulo del potenciometro
// donde false es 512 o menos y true es 513 o más

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

Ahora solo nos faltaría solo probar que funcione con el potenciómetro y con la pantalla integrada, así que vamos a integrar las librerías de adafruit y otras variables. Nos basamos a partir de el ejemplo de
[sesion-03b/ejemploPantallita01](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/00-docentes/sesion-03b/ejemploPantallita01)


Avances y pruebas de código de [@SebastianSaez1003](https://github.com/SebastianSaez1003/dis8645-2025-02-procesos/tree/main/27-SebastianSaez1003) 


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


## Roles del equipo

- Documentación = [@Mosswhosmoss](https://github.com/Mosswhosmoss/dis8645-2025-02-procesos/tree/main/03-Mosswhosmoss)

- Conceptualización = [@MiguelVera23](https://github.com/MiguelVera23/dis8645-2025-02-procesos)

- Investigación = [@Mosswhosmoss](https://github.com/Mosswhosmoss/dis8645-2025-02-procesos/tree/main/03-Mosswhosmoss) [@MiguelVera23](https://github.com/MiguelVera23/dis8645-2025-02-procesos) [@SebastianSaez1003](https://github.com/SebastianSaez1003/dis8645-2025-02-procesos/tree/main/27-SebastianSaez1003) [@Hiinalia](https://github.com/Hiinalia/dis8645-2025-02-procesos/tree/main/19-Hiinalia)

- Programación = [@SebastianSaez1003](https://github.com/SebastianSaez1003/dis8645-2025-02-procesos/tree/main/27-SebastianSaez1003) [@Hiinalia](https://github.com/Hiinalia/dis8645-2025-02-procesos/tree/main/19-Hiinalia) [@MiguelVera23](https://github.com/MiguelVera23/dis8645-2025-02-procesos)

## Fotografías y videos del proyecto funcionado

Subir fotos y videos

El video debe estar subido a youtube y mencionado en un enlace para ahorrar espacio en el repositorio

## Bibliografía

Citas en APA de repositorios y enlaces de los cuales se inspiraron. Bibliotecas, tutoriales, etc.
