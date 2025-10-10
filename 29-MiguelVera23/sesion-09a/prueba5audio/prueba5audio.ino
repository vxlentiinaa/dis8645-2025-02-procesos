#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
#include "SoftwareSerial.h"
//bibliotecas
DFRobotDFPlayerMini myDFPlayer;
// SoftwareSerial mySoftwareSerial(10, 11);  // RX, TX

int colorDetectado = 0;
int readColor = 1;

void setup() {

  Serial1.begin(9600);
  Serial.begin(115200);
  //Serial.read();


  if (!myDFPlayer.begin(Serial1, true, true)) {
    Serial.println("pucha");
  }

  myDFPlayer.volume(12);

  //myDFPlayer.play(1);

   colorDetectado = readColor;

   if (colorDetectado == 1) {
   //myDFPlayer.play(1);
   myDFPlayer.playFolder(1, 1);
   Serial.print("waos");
  //Rojo
   } else if (colorDetectado == 2) {
   //myDFPlayer.play(2);
   myDFPlayer.playFolder(2, 2);
  //Azul
   } else if (colorDetectado == 3) {
   //myDFPlayer.play(3);
   myDFPlayer.playFolder(3, 3);
  //Amarillo
   } else if (colorDetectado == 4) {
   //myDFPlayer.play(4);
   myDFPlayer.playFolder(4, 4);
  //Verde
   } else if (colorDetectado == 0) {
   }
  //Nada
}

void loop() {
  //if (reproduciendo = false){
  //if (!reproduciendo){
  static unsigned long timer = millis();

//colorDetectado = Serial.read();

  if (millis() - timer > 15000) {
    timer = millis();
    colorDetectado = 0;
    myDFPlayer.stop();
  }

  if (myDFPlayer.available()) {
    // 
  }
}