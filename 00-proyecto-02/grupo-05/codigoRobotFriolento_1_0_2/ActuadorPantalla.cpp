#include "ActuadorPantalla.h"
#include "BitmapsPantalla.h"


ActuadorPantalla::ActuadorPantalla() {}

void ActuadorPantalla::configurar() {
  // Error que es visible en el monitor serial
  //en caso de que el display no inicia correctamente
    if (!ActuadorPantalla::caraMuneco.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
     // No se pudo inicializar la pantalla
      for (;;);
       Serial.print("Error con el display");
    }
    // limpia la pantalla y la vuelve a actualizar
    // constantemente para que no se mueva el contenido
     ActuadorPantalla::caraMuneco.clearDisplay();
     ActuadorPantalla::caraMuneco.display();

    // establecer el tamanyo de el texto
    ActuadorPantalla::caraMuneco.setTextSize(4); 

    ActuadorPantalla::caraMuneco.setTextColor(SSD1306_WHITE);
}

 // que es lo que ocurre cuando quiero hacer display de la imagen
 // cuando friolin esta en un ambiente temperado
void ActuadorPantalla::mostrarImagenTemperado() {
    // Esta funcion permite limpiar la pantalla
    // en caso de que existia alguna previamente
    ActuadorPantalla::caraMuneco.clearDisplay();
   // dibujo el bitmap temperado_bmp traido desde el 
   // archivo de BitmapsPantalla.h con sus parametros
   // establecidos en ActuadorPantalla.h
   ActuadorPantalla::caraMuneco.drawBitmap(0,
                                           0,
                                           temperado_bmp,
                                           ActuadorPantalla::LOGO_WIDTH,
                                           ActuadorPantalla::LOGO_HEIGHT,
                                           WHITE);
    // Esto permite que el bitmap previamente cargado
    // se muestre en el display 
    ActuadorPantalla::caraMuneco.display();


//que
delay(1000);
ActuadorPantalla::caraMuneco.setCursor(25, 18);
ActuadorPantalla::caraMuneco.clearDisplay();
ActuadorPantalla::caraMuneco.print(Templado1);
ActuadorPantalla::caraMuneco.display();
delay(1000);

//rico
delay(1000);
ActuadorPantalla::caraMuneco.setCursor(20, 18);
ActuadorPantalla::caraMuneco.clearDisplay();
ActuadorPantalla::caraMuneco.print(Templado2);
ActuadorPantalla::caraMuneco.display();
delay(1000);

// clima
delay(1000);
ActuadorPantalla::caraMuneco.setCursor(12, 23);
ActuadorPantalla::caraMuneco.setTextSize(3.5); 
ActuadorPantalla::caraMuneco.clearDisplay();
ActuadorPantalla::caraMuneco.print(Templado3);
ActuadorPantalla::caraMuneco.display();
ActuadorPantalla::caraMuneco.setTextSize(4); 
delay(1000);


}

 // que es lo que ocurre cuando quiero hacer display de la imagen
 // cuando friolin esta en un ambiente que le causa frio
void ActuadorPantalla::mostrarImagenFrio() {
    ActuadorPantalla::caraMuneco.clearDisplay();
  ActuadorPantalla::caraMuneco.drawBitmap(0,
                                          0,
                                          frio_bmp,
                                          ActuadorPantalla::LOGO_WIDTH,
                                          ActuadorPantalla::LOGO_HEIGHT,
                                          WHITE);
  ActuadorPantalla::caraMuneco.display();

delay(1000);
ActuadorPantalla::caraMuneco.setCursor(20, 18);
ActuadorPantalla::caraMuneco.clearDisplay();
ActuadorPantalla::caraMuneco.print(Frio1);
ActuadorPantalla::caraMuneco.display();
delay(1000);

delay(1000);
ActuadorPantalla::caraMuneco.setCursor(6, 18);
ActuadorPantalla::caraMuneco.clearDisplay();
ActuadorPantalla::caraMuneco.print(Frio2);
ActuadorPantalla::caraMuneco.display();
delay(1000);


delay(1000);
ActuadorPantalla::caraMuneco.setCursor(8, 18);
ActuadorPantalla::caraMuneco.clearDisplay();
ActuadorPantalla::caraMuneco.print(Frio3);
ActuadorPantalla::caraMuneco.display();
delay(1000);
}

 // que es lo que ocurre cuando quiero hacer display de la imagen
 // cuando friolin esta "durmiendo"
void ActuadorPantalla::mostrarImagenNadie() {
    ActuadorPantalla::caraMuneco.clearDisplay();
  ActuadorPantalla::caraMuneco.drawBitmap(0,
                                          0,
                                          caraZZZ_bmp,
                                          ActuadorPantalla::LOGO_WIDTH,
                                          ActuadorPantalla::LOGO_HEIGHT,
                                          WHITE);
    ActuadorPantalla::caraMuneco.display();

delay(2000);
ActuadorPantalla::caraMuneco.setCursor(20, 18);
ActuadorPantalla::caraMuneco.setTextSize(5); 
ActuadorPantalla::caraMuneco.clearDisplay();
ActuadorPantalla::caraMuneco.print(Sueno);
ActuadorPantalla::caraMuneco.display();
ActuadorPantalla::caraMuneco.setTextSize(4); 
delay(2000);


}


