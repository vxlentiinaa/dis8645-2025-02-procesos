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

La existencia de la inteligencia artificial hoy en dia ha creado en algunas personas la dependencia de estos algoritmos, que realmente solo son unas formulas matematicas estrategicamente diseñadas para dar la respuesta que sea la mas probablemente correcta. En un mundo en el que se crean dialogos con estas "inteligencias" no solo para solucionar problemas, sino que tambien para poder ocuparlas para llenar un vacio y sentir que estan siendo escuchados por otra persona. (Tal vez mencionar un texto de estudio de la dependiencia emocional con la inteligencia artificial hoy en dia).

Pero este no es el unico lado de la inteligencia artificial, ya que existen multiples problemas eticos, como la gran cantidad de energia y agua que son necesarias para el funcionamiento constante de los servidores, la gran cantidad de desinformacion que distribuye de manera masiva, entre mutltiples otras cosas.

Queremos ofrecer una interacción ética, genuina y _ que de respuestas personalizadas e introspectivas al usuario, dándole así un toque humano que la IA no tiene.

## Inputs y outputs

¿Cuál es la interacción? ¿Qué ofrece la máquina de vuelta?

***¿Tal vez hacer un diagrama de flujo?***  

Sebastian Saez no quiere 

Nuestro plan inicial fue tener una conversación con arduino usando la pantalla, el monitor serial y el potenciómetro. Se mostrarian preguntas o planteamientos
que instarán al usuario a tomar una decisión mediante el movimiento de la perilla. Según el sentido al que esta apunte se tomará uno de 2 (o más) caminos
revelando un poema pertinente.

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
