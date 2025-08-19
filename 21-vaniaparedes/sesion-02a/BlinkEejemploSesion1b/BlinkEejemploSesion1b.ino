/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

int tiempoPrendido = 100;

float tiempoApagado = 10,8; 

char letritaBacan = 'a';

String poema = "Te regalare un abismo";

String decimas;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  decimas = "En casa hallaba consuelo\n";
  decimas = decimas + "con mis trapitos jugaba\n";
  decimas = decimas + "uno tras otro juntaba\n";
  decimas = decimas + "para formar un pañuelo\n";
  decimas = decimas + "lo hilvano con mucho esmero\n";
  decimas = decimas + "de ver sus lindos colores\n";
  decimas = decimas + "igual que jardín de flores\n";
  decimas = decimas + "me brilla en el pensamiento\n";
  decimas = decimas + "para contar este cuento\n";
  decimas = decimas + "pañuelo de mis amores\n";
 }

// the loop function runs over and over again forever
void loop() {
  //prende
  Serial.print(poema);
  Serial.print("\n");

  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  
  avisarQuetodoOK() ;
  
  //apaga
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}

void avisarQuetodoOK() {

}
