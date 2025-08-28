/*
// variable booleana
// la inicializamos falsa
bool prendido = false;

void setup() {
  // abre el puerto serial
  Serial.begin(9600);

  // hacer que una patita sea output, salida
  // usamos la constante incluida en Arduino
  // LED_BUILTIN, porque sabe donde esta el LED interno
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // hago que "segundos" sea millis() / 1000 
  int segundos = millis() / 1000;

  if (segundos < 3) {
    prendido = true;
  }
  // también si > 10
  else if (segundos > 10){
    prendido = true;
  }
  // si no pasa eso = false
  else {
   prendido = false;
  }

  digitalWrite(LED_BUILTIN, prendido);

  Serial.println(segundos);
} */

// PARTE 02

/*
int numEstudiantes = 29;

void setup() ;

// activa el monitorSerial 
  Serial.begin(9600);

  Serial.begin(9600);

  for (int i = 0; i < numEstudiantes; i++) {
    // imprime "estudiante:"
    Serial.print("estudiante:");
    // imprime un espacio luego de "estudiante:"
    Serial.print(" ");
    // si numEstudiante es menor que 10
    // agrega un espacio antes del número
     if (i < 10) {
    Serial.print(" ");
   }
    // si i es 13 que no aparezca
    if (i != 13) {
    Serial.print(i);
    }
    // imprime el numEstudiantes
    Serial.print(i);
    // imprime un enter
    // también se puede poner "Serial.println"
    Serial.print("\n");
    delay(500)
  }
}

void loop() {
*/

/*
// PARTE 02.2 ~ MISA

//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;

  int numero1 = 5
  int numero2 = 2
  int division;

void setup() {
  // activamos el pin del led
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // crea una variable "segundos" que equivale a
  // "millis() / 1000"
  unsigned long segundos = millis() / 1000;

  //YA QUE division ES UN int
  //ELIMINA TODO LO QUE ESTA DESPUES DE LA COMA
  division = numero1 / numero2;
  // % = restalo, pero no me des el resultado, dame lo que sobra
  resto = numero1 % numero2;
  //EL RESULTADO VA A SER "2", NO "2.5"

  // con esto le pedimos que imprima:
  // la division vale X con un resto de X
  Serial.print("la division vale ");
  Serial.print(division);
  Serial.print(" con un resto de ");
  Serial.println(resto);

  //voy a incrementar numero1 de 1 en 1
  numero1++;
  delay(500);

// cuando los segundos son pares 
// (cuando los divido en 2 y el resto da 0)
//  estadoLed es falso (apagado)
  if (segundos%2 == 0){
    estadoLed = false;
}
// si no es así (si es impar)
// entonces es true (prendido)
  else{
    estadoLed = true;
  }
  digitalWrite(LED_BUILTIN,estadoLed);
}
*/

// PARTE 02.3 ~MISA

