#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

#if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))   // Para placas tipo UNO o ESP8266
#include <SoftwareSerial.h>
SoftwareSerial mp3Serial(4, 5); // RX, TX
#define MP3_SERIAL mp3Serial
#else
#define MP3_SERIAL Serial1
#endif

DFRobotDFPlayerMini mp3Player;

// Inicializar el reproductor MP3
void configurarMP3() {
  MP3_SERIAL.begin(9600);
  Serial.println(F("Inicializando DFPlayer..."));

  if (!mp3Player.begin(MP3_SERIAL, true, true)) {
    Serial.println(F("⚠️ Error: No se pudo iniciar el DFPlayer."));
    Serial.println(F("1. Revisa las conexiones (RX/TX)."));
    Serial.println(F("2. Asegúrate de que la SD esté insertada."));
    while (true) { delay(100); }
  }

  Serial.println(F("🎶 DFPlayer Mini listo."));
  mp3Player.volume(25); // volumen 0–30
}

// Reproducir audio según distancia medida
void reproducirAudioPorDistancia(float distancia) {
  static int ultimoAudio = 0; // evita repetir el mismo audio constantemente

  if (distancia >= 2 && distancia <= 18) {
    // Rango corto: audios 3–8
    int audio = random(3, 8); // random entre 3 y 8 (el límite superior no se incluye)
    if (audio != ultimoAudio) {
      mp3Player.play(audio);
      Serial.print("Reproduciendo datos");
      Serial.println(audio);
      ultimoAudio = audio;
    }
  } 
  else if (distancia >= 40 && distancia <= 60) {
    // Rango medio: audio 2
    if (ultimoAudio != 2) {
      mp3Player.play(2);
      Serial.println("Reproduciendo audio 2");
      ultimoAudio = 2;
    }
  } 
  else if (distancia >= 80 && distancia <= 100) {
    // Rango largo: audio 1
    if (ultimoAudio != 1) {
      mp3Player.play(1);
      Serial.println("Reproduciendo audio 1");
      ultimoAudio = 1;
    }
  } 
  else {
    ultimoAudio = 0; // fuera de rango: reinicia estado
  }
}
