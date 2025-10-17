// biblioteca para funcionamiento del display
#include "ActuadorPantalla.h"
#include "DefinicionDisplay.h"

// denifir el ancho de la pantalla
#define SCREEN_WIDTH 128
// definir el alto d ela pantalla
#define SCREEN_HEIGHT 64
// que se resetee REVISAR REVISAR REVISAR REVISAR REVISAR
#define OLED_RESET -1

// definir que el display Adafruit_SSD1306 se llamara pantallita
// que tendra el ancho y alto definido
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);



void ActuadorPantalla::configurar() {
  Serial.begin(9600);
};

void ActuadorPantalla::mostrarPantalla() {
  // que se borre cualquier cosa que quede en el display
      // una vez se haga el loop
      pantallita.clearDisplay();
      // se escribe .setCursor para especificar cual es la coordenada
      // donde se empieza a escribir los textos que pondremos
      // en este caso estara en 0,0, osea que en la esquina superior izquierda
      pantallita.setCursor(0, 0);
    pantallita.drawBitmap(0, 0, respuestasImg3, 128, 64, WHITE);  

    pantallita.display();
		//espera 5 segundos y desaparece
    delay(5000); 
		pantallita.clearDisplay();


};
