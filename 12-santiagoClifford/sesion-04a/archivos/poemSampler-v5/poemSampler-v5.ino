#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define screenWidth 128
#define screenHeight 64
#define oledReset -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, oledReset);


//char *refranes[] = { "se le escapan los enanos del bosque", "dale con que las gallinas mean", "quedar como chaleco 'e mono", "wawa que no llora no mama" };

// //<https://www.w3schools.com/cpp/cpp_arrays_loop.asp>
// string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla" };
// //<https://www.w3schools.com/cpp/cpp_arrays_loop.asp>
// for (int i = 0; i < 5; i++) {

int botonComputo = 0;
int botonPin = 2;

void setup(){
//contar las veces que se ha presionado el botón<https://forum.arduino.cc/t/counting-button-presses/119881/4>
pinMode(botonPin, INPUT);
digitalWrite(botonPin,HIGH);
Serial.begin(9600);
}

void loop(){
if (digitalRead(botonPin)==LOW){
botoncomputo++;
delay(200);
}
//<https://docs.arduino.cc/language-reference/en/structure/arithmetic-operators/remainder>
//https://github.com/clifford1one/voluntadGuiada/blob/main/code/interact.js
  if (botoncomputo % 2 == 0) {
    // Si el número es par → modoA
    modoPoeta();
  } else {
    // Si el número es impar → modoB
    modoHd();
  }
}


void modoPoeta(){

}

void modoHd(){

}
}
