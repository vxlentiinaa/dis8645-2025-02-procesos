// señal SOS en código morse

// setup es la función que corre desde que se envía el código:
void setup() {
// indica el pin que se utilizará, en este caso es el led integrado en la placa
  pinMode(LED_BUILTIN, OUTPUT);
}

// funciones que definen el tiempo que está encendido o apagado
// dependiendo de si es "guion", "punto", "espacioCaracter" o "espacio"
int guion = 1000;
int punto = 500;
int entreCaracter = 500;
int espacio = 1000;

/* PROBANDO EL CÓDIGO

// loop es la función que se repite constantemente una y otra vez
void loop() {

// llama al led a que se encienda por "punto" milisegundos
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

// llama al led a que se encienda por "entreCaracter" milisegundos
  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

// llama al led a que se encienda por "guion" milisegundos
  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

// llama al led a que se encienda por "espacio" milisegundos
  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);
  
  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);
}
*/

// INICIO SEÑAL SOS
void loop() {

// letra S = ... 
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);

// letra O = --- 
  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(guion);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);

// letra S = ... 
  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(entreCaracter);

  digitalWrite(LED_BUILTIN, HIGH);
    delay(punto);

  digitalWrite(LED_BUILTIN, LOW);
    delay(espacio);
}