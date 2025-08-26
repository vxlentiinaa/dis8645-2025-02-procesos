int datoRecibido = 0;  // for incoming serial data

void setup() {
  Serial.begin(9600);  // opens serial port, sets data rate to 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    datoRecibido = Serial.read();

    // say what you got:
    //Serial.print("I received: ");
    //Serial.println(datoRecibido, DEC);

    if (datoRecibido == 49) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(1000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 50) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(2000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 51) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(3000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 52) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(4000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 53) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(5000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 54) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(6000);
      digitalWrite(LED_BUILTIN, LOW);
    }else if (datoRecibido == 55) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(7000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 56) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(8000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 57) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(9000);
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}