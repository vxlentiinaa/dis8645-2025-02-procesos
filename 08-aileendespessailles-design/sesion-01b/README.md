# sesion-01b

Arduino es una plataforma de hardware y software de código abierto compuesta por una placa de desarrollo con un microcontrolador y un entorno de desarrollo integrado (IDE) que permite programarla para crear dispositivos electrónicos interactivos.

Instalar bibliotecas en arduino, barra lateral → library manager → buscar las biblioteca para que el programa pueda entender son el lenguaje de programación que usamos

- { } murciélagos [ ]  corchetes
- check, lo manda al arduino
- verify, revisa si hay problemas en el code
- La barra de abajo se pone con serial monitor arriba a la izquierda
- void setup, instrucción de inicio
- loop setup, después se repite en loop todo lo que está escrito ahí
- Ejemplos de codes : file → example → ahí buscar el ejemplo que se necesita

Ejemplo BLINK:
digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

LED BUILTIN, conectado a digital pin 13 (torre)

digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000/10);                   // wait for a secondpartido en 10
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000/10);                   // wait for a second partido en 10

- se puede cambiar igual el tiempo, designando antes de setup
EJEMPLO

int tiempoPrendido = 100;
int tiempoApagado = 300;
—-
—-
// the loop function runs over and over again forever
void loop() {
  // prende
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(tiempoPrendido);                      // wait for a second
  //apaga
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(tiempoApagado);                      // wait for a second
}

## Funciones, (naranja)

Al poner en void algo que no es del sistema operativo, se convierte en una función, que el sistema reconoce, y operará la función que erste escrita dentro de los ( )

Serial.begin();  abre un puerto que deja mandar mensajes entre el arduino y el computador o a lo que este conectado, el mensaje se puede ver en seria monitor en la barra de abajo

Serial.print (), imprime o manda lo que este escribo entre los paréntesis a una pantalla
String (palabraX) = texto que se quiere poner
Para poner más texto se pone: palabraX = palabraX + “mas texto”

Las palabras  verdes existen en c++, como void loop int.

C++ es un ejemplo de lenguaje de programación compilado, multiparadigma, principalmente de tipo imperativo y orientado a objetos
In C++, there are different types of variables (defined with different keywords), for example:

- int - stores integers (whole numbers), without decimals, such as 123 or -123, se pueden crear variables con una palabra x con int
- double - stores floating point numbers, with decimals, such as 19.99 or -19.99
- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- string - stores text, such as "Hello World". String values are surrounded by double quotes
- bool - stores values with two states: true or false
- float - es un tipo de dato que representa números con punto flotante, es decir, números que pueden tener una parte decimal.

guia de comandos <https://docs.arduino.cc/language-reference/>
