#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define screenW 128
#define screenH 64
#define oledReset -1
#define screenAdress 0x3C
Adafruit_SSD1306 display(screenW, screenH, &Wire, oledReset);

//<https://javl.github.io/image2cpp>


// una variable que guarda el total de datos dentro del array
// (Total bytes used to store images in PROGMEM = 1040)
//const int bitmapArrayLength = 1;
//const unsigned char* bitmapArray[1] = {
  //bitmapMono2
//};



char* refranes[] = { "se le escapan los enanos del bosque", "dale con que las gallinas mean", "quedar como chaleco 'e mono", "wawa que no llora no mama","quinto refran" };

// //<https://www.w3schools.com/cpp/cpp_arrays_loop.asp>
// //<https://www.w3schools.com/cpp/cpp_arrays_loop.asp>

int botonComputo = 0;
int botonPin = 2;

// int poteValue = 0;
int potePin = A0;

// int brigidoIndex = 0;

void setup() {
  Serial.begin(9600);
  if (!display.begin(SSD1306_SWITCHCAPVCC, screenAdress)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;  // Don't proceed, loop forever
  }
  //contar las veces que se ha presionado el botón<https://forum.arduino.cc/t/counting-button-presses/119881/4>
  pinMode(botonPin, INPUT_PULLUP);
  // digitalWrite(botonPin, HIGH);


  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.display();
}

void loop() {
  
  modoPoeta();

}


void modoPoeta() {
  display.stopscroll();
  display.clearDisplay();

int poteValue = analogRead(potePin);

 int fraccionPote = poteValue*1024/5;
 fraccionPote =constrain(fraccionPote,0,4);

   display.setCursor(0,20);
      display.println(refranes[fraccionPote]);
  
  display.display();
}
  //<https://www.youtube.com/watch?v=RXWO3mFuW-I&t=303s>


void modoHd() {
}
