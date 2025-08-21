//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;
int numero1 = 6;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long segundos = millis() / 1000;

  
  int numero2 = 3;
  int division;
  int resto;

  //YA QUE division ES UN int
  //ELIMINA (trunca) TODO LO QUE ESTA DESPUES DE LA COMA
  division = numero1 / numero2;
  resto = numero1 % numero2;
  //EL RESULTADO VA A SER "2", NO "2.5"
  Serial.print("la division vale ");
  Serial.print(division);
  Serial.print(" con un resto de ");
  Serial.println(resto);

  //voy a incrementar numero1 de 1 en 1
  numero1++;
  delay(500);
}