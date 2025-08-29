//
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <imagenes.h> 

//
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

//
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

//


//
int valorPot = 0;

void setup() {
  //
  Serial.begin(9600); 
  if (!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    for (;;); 
  }
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.display(); 
}

void loop() {
  //  
   int valorPot = analogRead(A0);
  
  //
  pantallita.clearDisplay(); 

  //
  if (valorPot < 63) {
    pantallita.drawBitmap(0, 0, fotograma1, 128, 64, WHITE);
  }

  //
  else if (valorPot < 126) {
    pantallita.drawBitmap(0, 0, fotograma2, 128, 64, WHITE);
  } 
  
  //
  else if (valorPot < 189) {
    pantallita.drawBitmap(0, 0, fotograma3, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 252) {
    pantallita.drawBitmap(30, 0, chopper, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 315) {
    pantallita.drawBitmap(30, 0, nami, 128, 64, WHITE);
  }

  // 
  else if (valorPot < 378) {
    pantallita.drawBitmap(30, 0, zoro, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 441) {
    pantallita.drawBitmap(30, 0, franky, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 504) {
    pantallita.drawBitmap(30, 0, sanji, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 567) {
    pantallita.drawBitmap(30, 0, nicoRobin, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 630) {
    pantallita.drawBitmap(30, 0, brook, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 693) {
    pantallita.drawBitmap(0, 0, sunny, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 756) {
    pantallita.drawBitmap(0, 0, merry, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 819) {
    pantallita.drawBitmap(0, 0, fruta, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 882) {
    pantallita.drawBitmap(0, 0, bandera, 128, 64, WHITE);
  }
  
  //
  else if (valorPot < 944) {
    pantallita.drawBitmap(0, 0, carasunny, 128, 64, WHITE);
  }
  
  //
  else {
    pantallita.drawBitmap(0, 0, caramerry, 128, 64, WHITE);
  }
	
  //
	pantallita.display(); 
  delay(100); 
}