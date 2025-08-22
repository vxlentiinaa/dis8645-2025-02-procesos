
//variable booleana
//la inicializamos falsa
bool prender = false;

// despues de 3 sec.
// led se apaga

void setup() {
  // put your setup code here, to run once:
 
 // abrir puerto serial
 Seria.begin(9600);


 //digitalWrite(LED_BUILTON, prender);
 //delay(3000);
 //prender = true;
 //digitalWrite(LED_BUILTON, prender);
 
// hacer que la patita sea output, salida
// usamos la constante incluida en Arduino
//BUILTON_LED, porque sabe donde esta el led interno
 pinMode (LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 //solamente este prendido los primeros 3 seg
 
 unsigned long segundos = millis() / 1000;
 
 if (segundos < 3) {
  prendido = true;
 } else if (segundos > 10){
    prendido = true;
  } else {
     prendido = false;
 }

 digitalWrite(LED_BUILTIN, prendido);

 Serial.println(millis() / 1000);
}
 //delay(3000);
 //prender = true;
 //digitalWrite(LED_BUILTON, prender);

}
