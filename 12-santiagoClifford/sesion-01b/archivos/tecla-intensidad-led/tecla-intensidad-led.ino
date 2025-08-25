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

    //map(datoRecibido, 0, 1023, 1, 10);


    if (datoRecibido == 49) {
      analogWrite(LED_BUILTIN, 25);
    } else if (datoRecibido == 50) {
      analogWrite(LED_BUILTIN, 50);
    } else if (datoRecibido == 51) {
      analogWrite(LED_BUILTIN, 75);
    } else if (datoRecibido == 52) {
      analogWrite(LED_BUILTIN, 100);
    } else if (datoRecibido == 53) {
      analogWrite(LED_BUILTIN, 125);
    } else if (datoRecibido == 54) {
      analogWrite(LED_BUILTIN, 150);
    } else if (datoRecibido == 55) {
      analogWrite(LED_BUILTIN, 175);
    }else if (datoRecibido== 56){
      analogWrite(LED_BUILTIN, 200);
    }else if (datoRecibido== 57){
      analogWrite(LED_BUILTIN, 225);
    }else if (datoRecibido== 48){
      analogWrite(LED_BUILTIN, 255);
    }
  }
}
