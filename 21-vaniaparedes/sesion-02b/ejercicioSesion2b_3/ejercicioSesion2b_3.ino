//quiero poder decirle a arduino en el monitor serial
//cada cuanto tiempo parpadee el led
bool estadoLed = 0;
int numero1 = 6;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600)
}

void loop() {
  unigned long seconds = millis() / 1000;

  int numero2 = 2;
  int division;
  int resto;

  //ya que DIVISION es un int 
  //elimina (trunca) todo lo que esta despues de la coma
  division = numero1 / numero2;
  resto = numero1 % numero2;
  //resultado será "2" no "2,5"
  Serial.print("numero1 es ");
  Serial.print(numero1);
  Serial.print(" y el modulo al dividir por 2 es ");
  Serial.println(resto);

  //incrementar numero1 de 1 en 1
  numero1++;
  if (seconds%2 == 0){ //si es un sec par
    estadoLed = false;
  } else {
    estadoLed = true;  //si es un segundo impar
  }
    digitalWrite(LED_BUILTIN,estadoLed);
  }
