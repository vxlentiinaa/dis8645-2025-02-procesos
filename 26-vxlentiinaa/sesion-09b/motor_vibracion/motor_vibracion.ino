int pinMotor = 9;
int intensidad = 0;

void setup(){
  pinMode(pinMotor, OUTPUT);
}

void loop(){

  intensidad = intensidad + 1;
  analogWrite(pinMotor, intensidad);

  if (intensidad >= 255){
    intensidad = 0;
  }
  delay(5);
}