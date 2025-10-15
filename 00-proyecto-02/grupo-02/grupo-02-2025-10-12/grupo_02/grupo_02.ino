// Interacción/Resultado en base al color
// Elige una respuesta según el estimulo
// sensores: sensor de color
// actuador: pantalla, reproductor mp3
// estados del sistema: PORHACER
// Fases de la interacción:
// 1. Pantalla modo standby - se reproduce animación neutra
// 2. Persona gira la perilla mecanica de forma manual y sale un dulce
// 3. Cuando el dulce sale pasa por un conducto y el sensor de color reconoce el color
// 4. en base al color reconocido se activa respuesta de pantalla (animación) y auditiva (10 segundos maximo de respuesta)
// 5. Despues de un momento sin respuesta vuelve al estado inicial

// incluir clase
#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
#include "SensorColor.h"

// --- Objetos ---
SensorColor sensorColor;
DFRobotDFPlayerMini myDFPlayer;

// --- Variables ---
bool reproduciendo = false;
unsigned long tiempoInicioReproduccion = 0;
const unsigned long duracionReproduccion = 15000; // 15 segundos

String colorDetectado = "NADA";
String ultimoColor = "NADA";

void setup() {
  Serial.begin(115200);
  Serial1.begin(9600);

  // --- Configurar Sensor ---
  sensorColor.configurar();

  // --- Configurar DFPlayer ---
  if (!myDFPlayer.begin(Serial1, true, true)) {
    Serial.println(" Error al iniciar DFPlayer Mini");
    while (true); // Detener si no se detecta el módulo
  }

  myDFPlayer.volume(12);
  Serial.println(" DFPlayer Mini listo");
}

void loop() {
  // Leer sensor y determinar color
  sensorColor.leer();
  sensorColor.determinarColor();
  sensorColor.mostrarSerial();

  colorDetectado = sensorColor.colorDetectado;

  // Si no está reproduciendo y se detecta un nuevo color
  if (!reproduciendo && colorDetectado != "NADA" && colorDetectado != ultimoColor) {
    reproduciendo = true;
    ultimoColor = colorDetectado;
    tiempoInicioReproduccion = millis();

    reproducirAudioPorColor(colorDetectado);
  }

  // Detener reproducción luego de 15 segundos
  if (reproduciendo && (millis() - tiempoInicioReproduccion > duracionReproduccion)) {
    myDFPlayer.stop();
    Serial.println(" Audio detenido por tiempo");
    reproduciendo = false;
    colorDetectado = "NADA";
  }

  // Detectar si el DFPlayer terminó el audio
  if (myDFPlayer.available()) {
    uint8_t tipo = myDFPlayer.readType();
    if (tipo == DFPlayerPlayFinished) {
      Serial.println(" Audio finalizado por DFPlayer");
      reproduciendo = false;
      colorDetectado = "NADA";
    }
  }

  delay(200);
}

// ---------- Función para reproducir audio según el color ----------
void reproducirAudioPorColor(String color) {
  if (color == "ROJO") {
    myDFPlayer.playFolder(1, 1);
    Serial.println(" Sonando audio ROJO");
  } else if (color == "AZUL") {
    myDFPlayer.playFolder(2, 2);
    Serial.println(" Sonando audio AZUL");
  } else if (color == "VERDE") {
    myDFPlayer.playFolder(3, 3);
    Serial.println(" Sonando audio VERDE");
  } else if (color == "NARANJO") {
    myDFPlayer.playFolder(4, 4);
    Serial.println(" Sonando audio NARANJO");
  }
}

