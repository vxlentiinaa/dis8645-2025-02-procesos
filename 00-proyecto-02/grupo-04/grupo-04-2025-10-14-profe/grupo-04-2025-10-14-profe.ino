// grupo-04
// 10-brauliofigueroa2001
// 13-Bernardita-lobo
// 17-jotamorales-romulus
// 20-Camila-Parada
// 28-FranUDP

#include "SensorUltrasonico.h"
#include "Rotador.h"
// Incluye el nuevo archivo de cabecera para el reproductor de audio
#include "AudioPlayer.h"

Rotador rotador;
SensorUltrasonico ultrasonico;
// Crea una instancia del reproductor de audio
AudioPlayer audioPlayer;

void setup() {
  Serial.begin(115200);
  ultrasonico.configurar();
  audioPlayer.configurar(&ultrasonico);  // Pasa el puntero del sensor al AudioPlayer
  rotador.configurar(&ultrasonico);      // Rotador ya no necesita el reproductor de MP3
}

void loop() {
  rotador.radar();
  audioPlayer.loop();  // Llama al método loop del AudioPlayer para que gestione su lógica
}
