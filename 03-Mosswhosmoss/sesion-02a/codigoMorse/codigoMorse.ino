//Proyecto decir en código morse "Instrucciones para llorar"

//Alfabeto para la palabra
//I = · ·
//N = — ·
//S = · · ·
//T = —
//R = · — ·
//U = · · —
//C = — · — ·
//O = — — —
//E = ·
//P = · — — ·
//A = · —
//L = · — · ·

//Ahora voy a definir las variables
int LED = LED_BUILTIN;
//Esta variable es para lo que define el tiempo de ·
int tiempoCorto = 300;
//Esta variable es para lo que define el tiempo de —
int tiempoLargo = 900;

void setup() {
  //Se va a definir la led integrada del pin 13 como un OUTPUT
  pinMode(LED, OUTPUT);
}

void loop() {
  //La letra "I"
  switchLED(tiempoCorto);
  switchLED(tiempoCorto);

  //Delay para generar un espacio entre letras
  delay(tiempoLargo);

  //La letra "N"
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "S"
  switchLED(tiempoCorto);
  switchLED(tiempoCorto);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "T"
  switchLED(tiempoLargo);

  delay(tiempoLargo);

  //La letra "R"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "U"
  switchLED(tiempoCorto);
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);

  delay(tiempoLargo);

  //La letra "C"
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);
  //La letra "C"
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "I"
  switchLED(tiempoCorto);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "O"
  switchLED(tiempoLargo);
  switchLED(tiempoLargo);
  switchLED(tiempoLargo);

  delay(tiempoLargo);

  //La letra "N"
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "E"
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "S"
  switchLED(tiempoCorto);
  switchLED(tiempoCorto);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "P"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "A"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);


  delay(tiempoLargo);

  //La letra "R"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "A"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);

  delay(tiempoLargo);

  //La letra "L"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "L"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "O"
  switchLED(tiempoLargo);
  switchLED(tiempoLargo);
  switchLED(tiempoLargo);

  delay(tiempoLargo);

  //La letra "R"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);

  //La letra "A"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);

  delay(tiempoLargo);

  //La letra "R"
  switchLED(tiempoCorto);
  switchLED(tiempoLargo);
  switchLED(tiempoCorto);

  delay(tiempoLargo);
}

//Esta función es para el cambio de voltaje en el LED integrado
void switchLED(int timing) {
  // Esta funcion hara que el LED prenda
  digitalWrite(LED, HIGH);
  // Esto retrasara la siguiente linea de codigo, y que se pueda cambiar por cuanto tiempo el LED se encuentra encendido
  delay(timing);
  // Esta funcion hara que el LED se apague
  digitalWrite(LED, LOW);
  // Esto retrasara la siguiente linea de codigo, y que se pueda cambiar por cuanto tiempo el LED se encuentra apagado
  delay(tiempoCorto);
}