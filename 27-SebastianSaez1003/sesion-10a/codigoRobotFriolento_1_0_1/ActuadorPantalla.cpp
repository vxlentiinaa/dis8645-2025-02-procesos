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
}


