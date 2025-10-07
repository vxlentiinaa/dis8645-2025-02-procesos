#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
#include "SoftwareSerial.h"
//bibliotecas
DFRobotDFPlayerMini myDFPlayer;
SoftwareSerial mySoftwareSerial(10, 11); // RX, TX

int colorDetectado = 0;
int readColor = 3;
//bool reproduciendo = false;

void setup(){
  //Serial.begin(115200);
  //Serial.begin(9600);

  mySoftwareSerial.begin(9600);
  Serial.begin(115200);
  myDFPlayer.volume(10);
  //myDFPlayer.play(2);
  colorDetectado = readColor;
  
  if (colorDetectado = 1){
  //delay(1500);
  myDFPlayer.play(1);
  //reproduciendo = true;
  //Rojo
}
else if (colorDetectado = 2){
  //delay(1500);
  myDFPlayer.play(2);
  //reproduciendo = true;
  //Azul
}
else if (colorDetectado = 3){
  //delay(1500);
  myDFPlayer.play(3);
  //reproduciendo = true;
  //Amarillo
}
else if (colorDetectado = 4){
  delay(1500);
  myDFPlayer.play(4);
  //reproduciendo = true;
  //Verde
}
else if (colorDetectado = 0){
}
//colorDetectado = 0;
  }

void loop(){
  //if (reproduciendo = false){
  //if (!reproduciendo){
static unsigned long timer = millis();
  
  if (millis() - timer > 15000) {
    timer = millis();
    colorDetectado = 0;
}
}
