// // Pantalla LCD Oled 1.3" 128x64 caracteres azules
// // reproduce fotogramas
// // configurar pantalla

// --- Pines del display ---
//#define TFT_CS   10
//#define TFT_DC   9
//#define TFT_RST  8

//Adafruit_GC9A01A tft(TFT_CS, TFT_DC, TFT_RST);

// --- Parámetros del ojo ---
//int cx = 120;  // Centro X
//int cy = 120;  // Centro Y
//int rBase = 90;    // Radio del ojo
//int rPupil = 25;   // Radio pupila
//int pupilX = cx;
//int pupilY = cy;
//float angle = 0.0;

//void setup() {
  //tft.begin();
  //tft.fillScreen(GC9A01A_BLACK);
  //drawEye(cx, cy, rBase, rPupil, pupilX, pupilY);
//}

//void loop() {
  
// fotograma color verde
  // Movimiento circular de la pupila
  //angle += 0.05;
  //if (angle > TWO_PI) angle = 0;

  //pupilX = cx + cos(angle) * 20;
  //pupilY = cy + sin(angle) * 10;

  //drawEye(cx, cy, rBase, rPupil, pupilX, pupilY);
  //delay(40);
//}

// --- Dibuja el ojo y la pupila ---
//void drawEye(int cx, int cy, int rBase, int rPupil, int px, int py) {
  // Fondo
  //tft.fillScreen(GC9A01A_BLACK);

  // Globo ocular (blanco)
  //tft.fillCircle(cx, cy, rBase, GC9A01A_WHITE);
  //tft.drawCircle(cx, cy, rBase, GC9A01A_BLACK);

  // Pupila verde
  //uint16_t verde = tft.color565(0, 200, 0);
  //tft.fillCircle(px, py, rPupil, verde);
  //tft.drawCircle(px, py, rPupil, GC9A01A_BLACK);

  // Brillo blanco (reflejo)
  //tft.fillCircle(px - 8, py - 8, 5, GC9A01A_WHITE);
//}