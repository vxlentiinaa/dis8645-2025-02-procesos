#include "DFPlayerController.h"

//
// configuración de pines y parámetros del proyecto
//
const int RX_PIN = 4;       // pin RX del DFPlayer
const int TX_PIN = 5;       // pin TX del DFPlayer
const int BOTON_PIN = 2;    // pin donde está el botón
const int TOTAL_TRACKS = 10; // cantidad total de archivos en la SD

//
// crea una instancia del controlador DFPlayer
//
DFPlayerController reproductor(RX_PIN, TX_PIN, BOTON_PIN, TOTAL_TRACKS);

//
// función de configuración: se ejecuta una vez al inicio
//
void setup() {
  reproductor.begin();
}

//
// función principal del programa: se repite indefinidamente
//
void loop() {
  reproductor.update();
}
