String datoRecibido;
String menuStart1;
String menuStart2;

void setup() {
  datoRecibido = "";
  menuStart2 = "❀⑅*❀⑅*❀⑅*❀⑅*❀⑅*⳾*⑅*❀⑅*❀⑅*❀⑅*❀⑅*❀⑅*⳾*⑅*❀⑅*❀⑅*❀⑅*❀⑅*❀⑅*⳾*⑅*❀⑅*❀⑅*❀⑅*❀⑅*❀⑅*⳾*⑅*❀⑅*❀⑅*❀⑅*❀⑅*❀";
  menuStart1 = "❀⑅*❀⑅*❀⑅*❀⑅*❀⑅*⳾⳾*⑅*❀⑅*❀⑅*❀⑅*❀*Escriba lo que desea recordar:*❀⑅*❀⑅*❀⑅*❀⑅*⳾⳾*⑅*❀⑅*❀⑅*❀⑅*❀⑅*❀";

  Serial.begin(9600);  // opens serial port, sets data rate to 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.print(menuStart2 + "\n");
  Serial.print(menuStart1 + "\n");
  Serial.print(menuStart2 + "\n");
}

void loop() {

  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    datoRecibido = Serial.readString();

    // say what you got:
    //Serial.print("I received: ");
    //Serial.println(datoRecibido, DEC);

    //map(datoRecibido, 0, 1023, 1, 10);
    Serial.print(datoRecibido);
  }
}
