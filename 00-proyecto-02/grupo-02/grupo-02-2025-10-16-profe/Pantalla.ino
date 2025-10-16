// // Pantalla LCD Oled 1.3" 128x64 caracteres azules
// // reproduce fotogramas
// // configurar pantalla

//#include <Adafruit_GFX.h>
//#include <Adafruit_GC9A01A.h>
//#include <SPI.h>

// Pines (ajusta según tu conexión)
//#define TFT_CS   10
//#define TFT_DC   9
//#define TFT_RST  8
//#define SIGNAL_PIN A5

//Adafruit_GC9A01A tft(TFT_CS, TFT_DC, TFT_RST);

// Imagen en blanco y negro (pega tu array aquí)
//const unsigned char epd_bitmap_Mesa_de_trabajo_1jjj [] PROGMEM = {

//};

// --- Tamaño exacto de tu imagen ---
//#define IMG_WIDTH  240
//#define IMG_HEIGHT 240

// --- Función para dibujar imagen en B/N ---
//void drawBitmapBW(int16_t x, int16_t y, const unsigned char *bitmap, int16_t w, int16_t h, uint16_t color) {
  //int byteWidth = (w + 7) / 8; // cada byte = 8 píxeles
  //for (int j = 0; j < h; j++) {
    //for (int i = 0; i < w; i++) {
      //if (pgm_read_byte(bitmap + j * byteWidth + i / 8) & (128 >> (i & 7))) {
        //tft.drawPixel(x + i, y + j, color);
     // }
   // }
 // }
//}

//void setup() {
  //tft.begin();
  //tft.setRotation(0);
  //tft.fillScreen(GC9A01A_BLACK);

  //pinMode(SIGNAL_PIN, INPUT);
  //Serial.begin(9600);

  // Mostrar la imagen monocroma
  //drawBitmapBW(0, 0, epd_bitmap_Mesa_de_trabajo_1jjj, IMG_WIDTH, IMG_HEIGHT, GC9A01A_WHITE);
//}

//void loop() {
// condicional que hace que cuando recibo la señal en el pin A5 la booleana señalRecibida sera verdadera
//AnalogIn(5) = señalRecibida
// hay que hacer una booleana que se llame recibir señal
//bool señalRecibida
// cuando recibo una señal en el pin a5 del analogo 
//if (señalRecibida = true){
 //drawBitmapBW(0, 0, epd_bitmap_Mesa_de_trabajo_1jjj, IMG_WIDTH, IMG_HEIGHT, GC9A01A_WHITE);


//void loop() {
  //int estado = digitalRead(SIGNAL_PIN);

  //if (estado == HIGH) {
    //drawBitmapBW(0, 0, epd_bitmap_Mesa_de_trabajo_1jjj, IMG_WIDTH, IMG_HEIGHT, GC9A01A_WHITE);
//}


//}