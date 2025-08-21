//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long segundos = millis() / 1000;

  int numero1 = 5;
  int numero2 = 2;
  int division;

  //YA QUE division ES UN int
  //ELIMINA TODO LO QUE ESTA DESPUES DE LA COMA
  division = numero1 / numero2;
  //EL RESULTADO VA A SER "2", NO "2.5"
  Serial.println(division);
}