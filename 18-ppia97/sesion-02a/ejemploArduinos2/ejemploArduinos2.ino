void setup() {

Serial.begin(9600);
//pin de la luz led
pinMode(LUZLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
If (Serial.available() > 0) 
char tecla = Serial.read();
//Para encender una vez con tecla 1
if (tecla == '1') {
  digitalWrite(LUZLED, HIGH);
  delay(1000);
  digitalWrite(LUZLED, LOW);
}
