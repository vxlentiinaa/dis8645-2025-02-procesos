// incluir lo establecido en el archivo header
#include "ActuadorPantalla.h"
// incluir los bitmaps
#include "BitmapsPantalla.h"


ActuadorPantalla::ActuadorPantalla() {}

// establecer código necesario para funcionamiento
// del display
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

    // establecer el tamaño del texto
    ActuadorPantalla::caraMuneco.setTextSize(4); 
    // establecer el color del texto
    ActuadorPantalla::caraMuneco.setTextColor(SSD1306_WHITE);
}

 // que es lo que ocurre cuando quiero hacer display de la imagen
 // cuando Friolín está en un ambiente temperado
void ActuadorPantalla::mostrarImagenTemperado() {
    // Esta función permite limpiar la pantalla
    // en caso de que existía alguna previamente
    ActuadorPantalla::caraMuneco.clearDisplay();
   // dibujo el bitmap temperado_bmp traído desde él 
   // archivo de BitmapsPantalla.h con sus parámetros
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


// esperar 1 segundo
delay(1000);
// posicionar desde que coordenadas salen los textos
ActuadorPantalla::caraMuneco.setCursor(25, 18);
ActuadorPantalla::caraMuneco.clearDisplay();
// Se hará display del texto Templado1 "que"
ActuadorPantalla::caraMuneco.print(Templado1);
ActuadorPantalla::caraMuneco.display();

delay(1000);


ActuadorPantalla::caraMuneco.setCursor(20, 18);
ActuadorPantalla::caraMuneco.clearDisplay();
// Se hará display del texto Templado2 "rico"
ActuadorPantalla::caraMuneco.print(Templado2);
ActuadorPantalla::caraMuneco.display();

delay(1000);


ActuadorPantalla::caraMuneco.setCursor(12, 23);
// tiene que cambiar el tamaño debido a que la palabra es más grande
// que lo que puede entrar en el tamaño de las demás palabras
ActuadorPantalla::caraMuneco.setTextSize(3); 
ActuadorPantalla::caraMuneco.clearDisplay();
// Se hará display del texto Templado3 "clima"
ActuadorPantalla::caraMuneco.print(Templado3);
ActuadorPantalla::caraMuneco.display();
// vuelve al tamaño de antes
ActuadorPantalla::caraMuneco.setTextSize(4); 

}





 // que es lo que ocurre cuando quiero hacer display de la imagen
 // cuando friolin está en un ambiente que le causa frío
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
  // intento de ocupar millis para dejar de usar delay
  // al menos para la primera imagen de cada loop
  if(millis() >= texto3 + period3){
        texto3 += period3;
    ActuadorPantalla::caraMuneco.clearDisplay();
  ActuadorPantalla::caraMuneco.drawBitmap(0,
                                          0,
                                          caraZZZ_bmp,
                                          ActuadorPantalla::LOGO_WIDTH,
                                          ActuadorPantalla::LOGO_HEIGHT,
                                          WHITE);
    ActuadorPantalla::caraMuneco.display();

delay(1000);
ActuadorPantalla::caraMuneco.setCursor(20, 18);
ActuadorPantalla::caraMuneco.setTextSize(5); 
ActuadorPantalla::caraMuneco.clearDisplay();
ActuadorPantalla::caraMuneco.print(Sueno);
ActuadorPantalla::caraMuneco.display();
ActuadorPantalla::caraMuneco.setTextSize(4); 
  }

}


