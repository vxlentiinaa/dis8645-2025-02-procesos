# sesion-01b

Viernes 08 de Agosto - 2025

Nota del día: no fui a la clase porque estaba enferma, así que ando algo perdida con la materia.

## Qué aprendí hoy

### ARDUINO IDE

#### Consideraciones del programa 

- "Interfaz grafica, tiene varios software que conviven entre si"
- Plataforma de hardware y software de código abierto que permite construir proyectos electrónicos interactivos.
- Dialecto, se llama **código abierto**, lo quee nos permite crear proyectos electrónicos que podemos conservar en este y al conectarlo ya esté.
- **IDE:** entorno de desarrollo integrado.
- **circulo con ticket:** para verificar el código.
- **circulo con flecha:** para enviar el código a la placa por el cable usb; esto activa el funcionamiento de lo que se realizó en el código.
- **cuadrado con lupa y puntos:** "serial motor" o monitor de serie. todo lo que tenga serial o secuencia pasa por aquí.
- **para abrir la configuración de ARDUINO (para editar por ejemplo la apariencia o el idioma):** CTRL + , (coma)
  
#### En la placa: ARDUINO UNO R4 MINIMA BOARD

- **botón:** "reset"

Si se aprieta se resetea, se apaga y se vuelve a prender. Si se aprieta 2 veces el botón se olvida de todo lo que se haya transmitido anteriormente.

#### Nomenclatura 
- () - parentesis
- [] - corchetes
- {} - corchetes/"Murciélagos"

#### Funciones y códigos

- // - para anotar comentarios, organizar, etc. No interfiere con el código, solo se pone al inicio de la frase y queda en gris.
- /* - abrir comentarios
- ; - sirve para mencionar que la línea terminó, es obligatorio y necesario ponerlo siempre, normalmente va cuando termina un parentesis.
- */ - cerrar comentarios
- () - funciones, se debe poner pegado al comando (color naranjo o rojo)
- {} - declarar algo/código bruto
- "" - sirve para anotar algo que quiero que se reproduzca dentro del código; el caracter hay que ponerlo en el codigo entre las comillas.
- = - el igual es no comunicativo, es más bien referente a que el lugar de la izquierda (antes de) adentro tiene el lado derecho (despues de)

ej: hola = huevito

entonces en el lugar de hola existe el huevito (el valor huevito).

- == - significa comparación o condición.

## Palabras claves

- **Delay: "congelao"**

le da al arduino un paro o descanso, significa que el arduino le manda la señal y se queda ahí por un segundo.
es importante porque evita que se queme la placa.

Yo decido el tiempo de espera de una señal/información con otra (en multiplos de 1000 o derivados, ej: 3000 es igual a 3 segundos)

- **Float:** para decimales
- **Bool:** si/no
- **Char:** solo 1 letra/un caracter (_)
- **string:** más de un caracter (_)
- **HIGH:** Lo que está en 1
- **LOW:** Lo que está en 0
- **Void**
- **int:** Son variables.
- **bool:** si//no
- **AND:** Debe cumplir todas.
- **OR:** Debe cumplir alguna.
- **command t:** Se ordena en el arduino.
- **Serial.println:** Imprime en otra línea.
- **Serial.print:** Imprime en la misma línea.
- **for:** Iteración.

- **serial.begin ();**
  
el "." te da posibilidades dentro del programa (tipo menu, desgloce de opciones dentro del arduino como código)

"()" se le asigna un vaor númerico que refiere a la velocidad

## Ejemplificación de como usar ARDUINO

 > nota: $ { \ color {ponercoloreningles} poner palabra que quiero que vaya en ese color} $ () : </br> -> poner todo junto para que funcione, sin espacios; lo aprendi de la vale! 

${\color{red}voidSetup}$(): </br>
Se utiliza para toda aquella acción que necesita ser realizada una única vez, justo después de encender o reiniciar la placa Arduino. 

```cpp
void setup() {
  // Código que se ejecuta una sola vez al iniciar
}
```

${\color{red}voidLoop}$(): </br>
Se utiliza para toda aquella acción que necesita ser realizada constantemete en repetición. 

```cpp
void loop() {
  // Código que se repite constantemente
}
```

${\color{red}Delay}$(): </br>
Pausa el programa durante la cantidad de tiempo (en milisegundos) especificada como parámetro.

```cpp
void loop() {
  pantallita.clearDisplay(); // Limpiamos toda la pantalla
  
  // dibujar usopp
  pantallita.drawBitmap(0, 0, luffy, 128, 64, WHITE);

  delay(1000); // tiempo entre cada imagen

  pantallita.display(); // Actualiza la pantalla

  pantallita.clearDisplay();

  pantallita.drawBitmap(0, 0, zoro, 128, 64, WHITE);

   delay(1000);
   ```

## Códigos vistos en clase

- Arduino -> archivo -> ejemplos -> "01.basics" -> "AnalogReadSerial"

```cpp
/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial/
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability
}
```
si se editan ciertos valores la luz parpadea más rapido o más lento. 

```cpp
// variable booleana
// la inicializamos falsa
bool prendido = false;

// despues de 3 segundos
// el led se apague

void setup() {
  // put your setup code here, to run once:

  // abrir puerto serial
  Serial.begin(9600);


  // hacer que una patita sea output, salida
  // usamos la constante incluida en Arduino
  // LED_BUILTIN, porque sabe donde esta el LED interno
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  // que solamente este prendido
  // en los primeros 3 segundos

  unsigned long segundos = millis() / 1000;
  
  if (segundos < 3  ) {
    prendido = true;
  } else if ( segundos > 10) {
    prendido = true;
  } else {
    prendido = false;
  }

  digitalWrite(LED_BUILTIN, prendido);

  Serial.println(millis() / 1000);
}
```

## Encargo 02

- códigos e intentos: Hacer al menos 3 códigos para correr en la placa Arduino. La idea es fallar muchas veces.


S.O.S con luces en código morse: (sacado de google)

```cpp 
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void punto() {
  digitalWrite(led, HIGH); delay(200);
  digitalWrite(led, LOW);  delay(200);
}

void raya() {
  digitalWrite(led, HIGH); delay(600);
  digitalWrite(led, LOW);  delay(200);
}

void loop() {
  // S (···)
  punto(); 
  punto(); 
  punto();
  delay(600);
  
  // O (–––)
  raya(); 
  raya(); 
  raya();
  delay(600);
  
  // S (···)
  punto(); 
  punto(); 
  punto();
  delay(2000); 
}
```

Mi apodo con luces en código morse (variación del ejemplo sacado de google)

```cpp
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void punto() {
  digitalWrite(led, HIGH); delay(200);
  digitalWrite(led, LOW);  delay(200);
}

void raya() {
  digitalWrite(led, HIGH); delay(600);
  digitalWrite(led, LOW);  delay(200);
}

void loop() {
  // C (-.-.)
  raya(); 
  punto(); 
  raya();
  punto(); 
  delay(600);
  
  // A (.-)
  punto(); 
  raya(); 
  delay(600);
  
  // T (-)
  raya(); 
  delay(600);

  // A (.-)
  punto(); 
  raya(); 
  delay(1000);
}
```
Ahora puse un un fragmento de **Pink pony club de Chappell Roan**, mi intención es que cada frase saliera a la par en la que sonaba en la canción original, no documente los cambios pero la versión final respeta todos los tiempos.

En este caso especifico los cambios son solo relacionados al tiempo por lo que no es que hubieran variaciones en el código general.

```cpp
void setup() {
      Serial.begin(9600); 
    }

    void loop() {

      
      Serial.println("Don't think I've left you all behind");
      delay(4000);
      Serial.println("Still love you and Tennessee");
      delay(2000);
      Serial.println("You're always on my mind");
      delay(3000);
      Serial.println("And mama, every Saturday");
      delay(5000);
      Serial.println("I can hear your southern drawl a thousand miles away, saying");
      delay(4500);
      Serial.println("God, what have you done?");
      delay(3000);
      Serial.println("You're a pink pony girl");
      delay(2000);
      Serial.println("And you dance at the club");
      delay(2000);
      Serial.println("Oh mama, I'm just having fun");
      delay(5000);
      Serial.println("On the stage in my heels");
      delay(3000);
      Serial.println("It's where I belong down at the");
      delay(3000);
      Serial.println("Pink Pony Club");
      delay(10000);
    }
```

En base al mismo código hice variaciones en relación a dibujar cosas, los dibujos los saque de distintas páginas como: 

- <https://www.textarts.shop/2021/04/dibujos-hechos-con-el-teclado.html>
- <https://www.messletters.com/es/text-art/>

```cpp
void setup() {
      Serial.begin(9600); 
    }

    void loop() {

      
    Serial.println("╓──╖░╓────╖╓─╖╓─╖╓───╖"); 
      delay(1000);
      Serial.println("║░░║░║░╓╖░║║░║║░║║░╙─╢"); 
      delay(1000);
      Serial.println("║░░╙╖║░╙╜░║║░╙╜░║║░╓─╢"); 
      delay(1000);
      Serial.println("╙───╜╙────╜╙────╜╙───╜"); 
      delay(3000);
    }
```

```cpp
void setup() {
      Serial.begin(9600); 
    }

    void loop() {

      
    Serial.println("░░░░░░░░░░░░░░░░▄▓▄░░░"); 
      delay(1000);
      Serial.println("░░░░▄█▄░░░░░░░░▄▓▓▓▄░░"); 
      delay(1000);
      Serial.println("░░▄█████▄░░░░░▄▓▓▓▓▓▄░"); 
      delay(1000);
      Serial.println("░▀██┼█┼██▀░░░▄▓▓▓▓▓▓▓▄"); 
      delay(1000);
      Serial.println("▄▄███████▄▄▄▄▄▄▄▄█▄▄▄▄"); 
      delay(1000);
      Serial.println("                  "); 
      delay(1000);
    }
```

Los errores o fallas más comunes que cometí fueron: 

- olvidar poner ";" al final de cada ()
- olvidar poner los codigos adentro de los murciélagos.
- algo que no afecta en el código pero igual es importante es que me falto poner comentarios (//)
