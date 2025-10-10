#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
#include "SoftwareSerial.h"

DFRobotDFPlayerMini myDFPlayer;

int readColor = 0;  
// int provisorio pero se debe ligar a sensor de color
int colorDetectado = 0;

bool reproduciendo = false;
unsigned long tiempoInicioReproduccion = 0;
const unsigned long duracionReproduccion = 15000; 
// declara cuanto dura el audio más largo 15 segundos

void setup() {
  Serial1.begin(9600);
  Serial.begin(115200);

  if (!myDFPlayer.begin(Serial1, true, true)) {
    Serial.println("Error al iniciar DFPlayer");
    //avisa si no inicia
  }

  myDFPlayer.volume(12);
  //volumen máximo 30
}

void loop() {
  readColor = obtenerColor();

  if (!reproduciendo && readColor != 0 && readColor != colorDetectado) {
    colorDetectado = readColor;
    reproduciendo = true;
    tiempoInicioReproduccion = millis();

    // Reproduce audio según el color detectado
    if (colorDetectado == 1) {
      myDFPlayer.playFolder(1, 1);  
      // Rojo en carpeta 01, archivo 001
      Serial.println("Rojo detectado");
    } else if (colorDetectado == 2) {
      myDFPlayer.playFolder(2, 2);  
      // Azul en carpeta 02, archivo 002
      Serial.println("Azul detectado");
    } else if (colorDetectado == 3) {
      myDFPlayer.playFolder(3, 3);  
      // Amarillo en carpeta 03, archivo 003
      Serial.println("Amarillo detectado");
    } else if (colorDetectado == 4) {
      myDFPlayer.playFolder(4, 4);  
      // Verde en carpeta 04, archivo 004
      Serial.println("Verde detectado");
    }
  }

  // Detener reproducción después de cierto tiempo
  if (reproduciendo && (millis() - tiempoInicioReproduccion > duracionReproduccion)) {
    myDFPlayer.stop();
    Serial.println("Audio detenido por tiempo");
    reproduciendo = false;
    colorDetectado = 0;
  }

  // Opción adicional: detectar si el audio terminó por sí solo
  if (myDFPlayer.available()) {
    uint8_t tipo = myDFPlayer.readType();
    int valor = myDFPlayer.read();

    if (tipo == DFPlayerPlayFinished) {
      Serial.println("Audio finalizado por DFPlayer");
      reproduciendo = false;
      colorDetectado = 0;
    }
  }
}

// Para probar en monitor serial
int obtenerColor() {
  if (Serial.available()) {
    return Serial.parseInt();  
// Escribe un número (1 a 4) en el monitor serial
  }
  return 0;
}
