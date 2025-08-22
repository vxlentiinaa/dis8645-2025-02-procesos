int numEstudiantes = 29;

void setup() {

  Serial.begin(9600);

}

void loop() {

  // recordar siempre la estructura de for()
  // for (inicio, termino, aumento){
  // funciones(i);
  // }
  // sacado de https://docs.arduino.cc/language-reference/en/structure/control-structure/for/?

    for (int i = 0; i < numEstudiantes; i++) {
    Serial.println(i);
  }
}