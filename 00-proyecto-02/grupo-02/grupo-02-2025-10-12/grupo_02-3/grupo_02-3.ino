//archivo .ino
#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
#include "SoftwareSerial.h"
#include "SensorColor.h"

SensorColor sensorColor;
DFRobotDFPlayerMini myDFPlayer;

//int readColor = 0;
// int provisorio pero se debe ligar a sensor de color
//int colorDetectado = 0;

bool reproduciendo = false;
//varía para reproducir o no
//empieza en no
unsigned long tiempoInicioReproduccion = 0;
const unsigned long duracionReproduccion = 15000;
// declara cuanto dura el audio más largo 15 segundos
// pone el 0 como inicio y 15 como final

String colorDetectado = "NADA";
String ultimoColor = "NADA";

void setup() {

  Serial1.begin(9600);
  Serial.begin(115200);

  sensorColor.configurar();

  if (!myDFPlayer.begin(Serial1, true, true)) {
    Serial.println("Error al iniciar DFPlayer");
    //avisa si no inicia
  }

  myDFPlayer.volume(15);
  //volumen máximo 30

  pinMode(13, OUTPUT);
}

void loop() {
  sensorColor.leer();
  sensorColor.determinarColor();
  sensorColor.mostrarSerial();

  String nuevoColor = sensorColor.colorDetectado;

  // Actualizar colorDetectado solo si hay un color válido
  if (nuevoColor != "NADA") {
    //si detecta un color y no se está reproduciendo y es distinto al color anterior inicia reproducción
    if (!reproduciendo && nuevoColor != colorDetectado) {
      colorDetectado = nuevoColor;
      reproduciendo = true;
      tiempoInicioReproduccion = millis();
      // Inicia el tiempo de reproducción

      // Reproduce audio según el color
      if (colorDetectado == "ROJO") {
        myDFPlayer.playFolder(1, 1);
        // Rojo en carpeta 01, archivo 001
        // el pin 13 va a enviar un high
        digitalWrite(13, HIGH);
        delay(1000);

      } else if (colorDetectado == "AZUL") {
        myDFPlayer.playFolder(2, 2);
        // Azul en carpeta 02, archivo 002
        // el pin 13 va a enviar un high
        digitalWrite(13, HIGH);
        delay(1000);

      } else if (colorDetectado == "NARANJO") {
        myDFPlayer.playFolder(3, 3);
        // Naranjo en carpeta 03, archivo 003
        // el pin 13 va a enviar un high
        digitalWrite(13, HIGH);
        delay(1000);

      } else if (colorDetectado == "VERDE") {
        myDFPlayer.playFolder(4, 4);
        // Verde en carpeta 04, archivo 004
        // el pin 13 va a enviar un high
        digitalWrite(13, HIGH);
        delay(1000);
      }
    }
  } else {
    // Si no hay color, resetea colorDetectado para que no se repita
    colorDetectado = "NADA";
    digitalWrite(13, HIGH);
        delay(1000);
  }

  // Detener reproducción después de cierto tiempo
  if (reproduciendo && (millis() - tiempoInicioReproduccion > duracionReproduccion)) {
    myDFPlayer.stop();
    Serial.println("Audio detenido por tiempo");
    //esta opción ocurre como plan B a la siguiente
    //hay 15 segundos de reproducción no importa la duración del audio
    //en esos 15 segundos no detecta otro color
    reproduciendo = false;
    colorDetectado = "NADA";
  }

  // Opción adicional: detectar si el audio terminó por sí solo
  if (myDFPlayer.available()) {
    //true si se ocurrió algo con el reproductor
    uint8_t tipo = myDFPlayer.readType();
    //dato entero y positivo equivalente a byte (0-255)
    int valor = myDFPlayer.read();
    //dice que audio fue reproducido

    if (tipo == DFPlayerPlayFinished) {
      //si el evento fue que terminó de reproducir ocurre lo siguiente
      Serial.println("Audio finalizado por DFPlayer");
      //devuelve texto en monitor serial
      reproduciendo = false;
      //como terminó de reproducir no reproduce más
      //puede recibir color de nuevo
      colorDetectado = "NADA";
      //Resetea reproductor
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
