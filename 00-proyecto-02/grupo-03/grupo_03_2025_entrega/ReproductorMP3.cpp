#include "ReproductorMP3.h"
#include <SoftwareSerial.h>

// Configuración de comunicación serial con DFPlayer 
SoftwareSerial mp3Serial(10, 11); // RX, TX
DFRobotDFPlayerMini dfPlayer; // Objeto DFPlayer

// Inicialización del reproductor MP3
void ReproductorMP3::iniciar() {
  mp3Serial.begin(9600); // Inicia comunicación serial con DFPlayer
  if (!dfPlayer.begin(mp3Serial)) { // Verifica conexión con el DFPlayer
    Serial.println("Error DFPlayer"); 
    return; // Sale si falla la inicialización
  }
  dfPlayer.volume(25);  // volumen inicial
}

// Reproduce saludo según idioma seleccionado
void ReproductorMP3::reproducirSaludo(int idioma) {
  switch (idioma) {
    case 0:
      dfPlayer.play(1); // saludo ruso.mp3
      break;
    case 1:
      dfPlayer.play(2); // saludo japones.mp3
      break;
    case 2:
      dfPlayer.play(3); // saludo frances.mp3
      break;
    default:
      dfPlayer.play(4); // pucha.mp3
      break;
  }
}
