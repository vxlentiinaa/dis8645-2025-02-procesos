#include "ReproductorMP3.h"
#include <SoftwareSerial.h>

SoftwareSerial mp3Serial(10, 11); // RX, TX
DFRobotDFPlayerMini dfPlayer;

void ReproductorMP3::iniciar() {
  mp3Serial.begin(9600);
  if (!dfPlayer.begin(mp3Serial)) {
    Serial.println("Error DFPlayer");
    return;
  }
  dfPlayer.volume(25);
}

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
