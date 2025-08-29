void setup() {
  //<https://docs-arduino-cc.translate.goog/language-reference/en/functions/communication/serial/begin/>
  Serial.begin(9600);
  //extraído de la librería de adafruit. En caso de que falle la conexión, imprime un mensaje.
  if (!display.begin(SSD1306_SWITCHCAPVCC, screenAdress)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;
  }

  pinMode(botonPin, INPUT_PULLUP);
  // digitalWrite(botonPin, HIGH);


  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.display();
}

void loop() {
  //contar las veces que se ha presionado el botón <https://forum.arduino.cc/t/counting-button-presses/119881/4>
  if (digitalRead(botonPin) == LOW) {
    botonComputo++;
    delay(200);
  }
  //<https://docs.arduino.cc/language-reference/en/structure/arithmetic-operators/remainder>
  //<https://github.com/clifford1one/voluntadGuiada/blob/main/code/interact.js>
  if (botonComputo % 2 == 0) {
    // Si el número es par → modoA
    modoPoeta();
  } else {
    // Si el número es impar → modoB
    modoHd();
  }
}


void modoPoeta() {
  display.stopscroll();
  display.clearDisplay();
  int poteValue = analogRead(potePin);
  // //<https://www.w3schools.com/cpp/cpp_arrays_loop.asp>
  int fraccionPote = poteValue / 205;
  //<https://docs.arduino.cc/language-reference/en/functions/math/constrain>
  fraccionPote = constrain(fraccionPote, 0, 4);
  display.setCursor(0, 20);
  display.println(refranes[fraccionPote]);
  display.display();
}

//<https://www.youtube.com/watch?v=RXWO3mFuW-I&t=303s>
void modoHd() {
  display.stopscroll();
  display.clearDisplay();
  int poteValue = analogRead(potePin);
  int fraccionPote = poteValue / 205;
  fraccionPote = constrain(fraccionPote, 0, 4);
  display.drawBitmap(0, 0, bitmapArray[fraccionPote], screenW, screenH, SSD1306_WHITE);
  //display.println(refranes[fraccionPote]);
  display.display();
}