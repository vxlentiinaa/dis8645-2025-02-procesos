#include "DFRobotDFPlayerMini.h"
#include <SoftwareSerial.h>

// Pines para comunicación con DFPlayer
SoftwareSerial softSerial(10, 11); // RX, TX

DFRobotDFPlayerMini reproductor;

void setup() {
  softSerial.begin(9600);
  Serial.begin(9600);

  // Inicializar DFPlayer
 if (!reproductor.begin(softSerial)) {
    Serial.println("Error de inicialización.");
    while (true);
}

}

  Serial.println("DFPlayer listo.");

  reproductor.volume(30);  // Volumen entre 0 y 30
  reproductor.play(1);     // Reproduce 0001.mp3 en la SD
}

void loop() {
  // Nada en el loop, el DFPlayer sigue reproduciendo solo
}

