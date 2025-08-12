# sesion-02a
## Entrga de codigos clase 12/Agosto

### CODIGO 01
void setup() {
  pinMode (2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
 if(digitalRead(2) == LOW){
  Serial.println("oe");
  Serial.println("prestame luka quiniento");

 }

}

### CODIGO 02
void setup() {
//declarar pin a usar
 pinMode(2, INPUT_PULLUP);
 pinMode(3, OUTPUT);

}
//loop de led para encender
void loop() {
  if(digitalRead(2) == LOW){
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);
  }
}

### CODIGO 03
void setup() {
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(3000);

}
