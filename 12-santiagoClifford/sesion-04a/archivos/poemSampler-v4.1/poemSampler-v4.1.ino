int butPin= 2;
int ledPin=3;

int ledState = LOW;
int lastButtonState;
int currentButtonState;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(butPin, INPUT);
pinMode(ledPin,OUTPUT);

currentButtonState = digitalRead(butPin);
}

void loop() {
  // put your main code here, to run repeatedly:
lastButtonState = currentButtonState;
currentButtonState = digitalRead(butPin);

if(lastButtonState==HIGH && currentButtonState==LOW){
  Serial.print("presionado");

  if(ledState==LOW){
    ledState=HIGH;
    Serial.println("ON");
  }else{
    ledState=LOW;
    Serial.print("OFF");
  }
  digitalWrite(ledPin, ledState);


}
}
