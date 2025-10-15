#ifndef AUDIO_PLAYER_H
#define AUDIO_PLAYER_H

#include <Arduino.h>
#include <DFRobotDFPlayerMini.h>
#include <SoftwareSerial.h>
#include "SensorUltrasonico.h"

class AudioPlayer {
public:
    AudioPlayer();
    ~AudioPlayer();

    void configurar(SensorUltrasonico* s);
    void loop();
    void reproducirAlerta();

private:
    SoftwareSerial* softSerial;
    DFRobotDFPlayerMini* myDFPlayer;
    SensorUltrasonico* sensorUltrasonico;

    const int rxPin = 4;
    const int txPin = 5;
    const int totalTracks = 10;
    const int distAudio = 30;
    const int ledPin = 13; // Pin para el LED indicador de audio (Debugging)

    bool reproduciendo = false;
    unsigned long ultimoAudioReproducido = 0;
    const unsigned long delayEntreAudios = 2000;

    void printDetail(uint8_t type, int value);
};

#endif
