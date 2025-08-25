# sesion-03a

- void setup, instruccion de inicio 
- loop setup, despues se repite en loop todo lo que esta escrito ahi 
- check, lo manda al arduino
- veryfy, revisa si hay problemas en el code
#### Ejemplos de programaciones dentro de arduino 
Files -> exampples 
##### Ejemplo codigo que parpadea 
BLINK: 

digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

LED BUILTIN, conectado a digital 13 (torre)

digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000/10);                   // wait for a secondpartido en 10
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000/10);                   // wait for a second partido en 10

//se puede cambiar igual el tiempo, designando antes de setup

##### EJEMPLO
int tiempoPrendido = 100;

int tiempoApagado = 300;

  // the loop function runs over and over again forever
void loop() {
  // prende
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(tiempoPrendido);                      // wait for a second
  //apaga
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(tiempoApagado);                      // wait for a second
}

- funciones, (naranja)
- Al poner en void algo que no es del sistema operativo, se convierte en una función, que el sistema reconoce, y operará la función que erste escrita dentro de los {}
- Serial.begin();  abre un puerto que deja mandar mensajes entre el arduino y el computador o a lo que este conectado, el mensaje se puede ver en seria monitor en la barra de abajo.
- String poema es el mensaje que manda, como agregar mas texto a un mensaje 
- La cosas verdes existen en c++, como void loop int
- C++ es un ejemplo de lenguaje de programación compilado, multiparadigma, principalmente de tipo imperativo y orientado a objetos
- In C++, there are different types of variables (defined with different keywords), for example:
##### int - stores integers (whole numbers), without decimals, such as 123 or -123

##### double - stores floating point numbers, with decimals, such as 19.99 or -19.99

##### char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

##### string - stores text, such as "Hello World". String values are surrounded by double quotes

##### bool - stores values with two states: true or false

- guia de comandos: https://docs.arduino.cc/language-reference/
