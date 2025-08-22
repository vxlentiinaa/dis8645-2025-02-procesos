int numEstudiantes = 29;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  // recordar siempre la estructura de for()
  // for (inicio, termino, aumento){
      // funciones(i);
  // }
  // sacado de https://docs.arduino.cc/language-reference/en/structure/control-structure/for/?

  for (int i = 0; i < numEstudiantes; i++) {
    Serial.print("estudiante:");
    Serial.print(" ");

   if (i < 10) {
    Serial.print(" ");
   }

   // ! se usa para operador de negación lógica
   // invierte el valor booleano de una expresión
   // convirtiendo verdadero en falso y falso en verdadero
   // ! hace que nos saltemos el número 13 en serial monitor
    
    if (i != 13) {
    Serial.print(i);
    }

    Serial.print("\n");
    delay(500);
  }

}

void loop() {
  // put your main code here, to run repeatedly:



}