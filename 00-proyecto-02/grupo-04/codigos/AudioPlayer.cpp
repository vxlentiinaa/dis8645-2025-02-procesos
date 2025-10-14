#include "AudioPlayer.h"

AudioPlayer::AudioPlayer() {
    softSerial = new SoftwareSerial(rxPin, txPin);
    myDFPlayer = new DFRobotDFPlayerMini();
    sensorUltrasonico = nullptr;
}

AudioPlayer::~AudioPlayer() {
    delete softSerial;
    delete myDFPlayer;
}

void AudioPlayer::configurar(SensorUltrasonico* s) {
    sensorUltrasonico = s;

    softSerial->begin(9600);
    Serial.begin(115200);

    // --- Configuración del pin 13 para el LED de Debugging ---
    pinMode(ledPin, OUTPUT); 
    digitalWrite(ledPin, LOW); // Asegura que el LED esté apagado al inicio
    // ---------------------------------------------------------

    Serial.println(F("Audio Player - Inicializando..."));

    if (!myDFPlayer->begin(*softSerial)) {
        Serial.println(F("Error de comunicación con DFPlayer."));
        Serial.println(F("Verifica conexiones y tarjeta SD."));
        while (true);
    }
    Serial.println(F("DFPlayer en línea. Listo para usar."));
    myDFPlayer->volume(15);
    randomSeed(analogRead(A0));
}

void AudioPlayer::reproducirAlerta() {
    // CAMBIO AQUI: Usar myDFPlayer->isBusy() en lugar de getStatus() != DFPlayerPlay
    if (!myDFPlayer->isBusy()) { // Solo si el DFPlayer NO está ocupado (reproduciendo)
        int track = random(1, totalTracks + 1);
        Serial.print(F("!!! Alerta de proximidad! Reproduciendo pista: "));
        Serial.println(track);
        myDFPlayer->play(track);
        reproduciendo = true;
        ultimoAudioReproducido = millis();
        digitalWrite(ledPin, HIGH); // ENCIENDE el LED del pin 13 al iniciar la reproducción
    }
}

void AudioPlayer::loop() {
    if (myDFPlayer->available()) {
        uint8_t type = myDFPlayer->readType();
        int value = myDFPlayer->read();
        printDetail(type, value);
        // También cambiamos la lógica para apagar el LED basada en isBusy() o si termina la pista
        if (type == DFPlayerPlayFinished || type == DFPlayerError) {
            reproduciendo = false;
            digitalWrite(ledPin, LOW); // APAGA el LED del pin 13 al finalizar o si hay error
        }
    }

    // CAMBIO AQUI: Lógica para apagar el LED si el reproductor ya no está busy, incluso si no ha habido un evento DFPlayerPlayFinished
    // Esto es una mejora para asegurar que el LED se apague si el reproductor deja de sonar por alguna razón no detectada por el evento.
    if (reproduciendo && !myDFPlayer->isBusy()) {
        reproduciendo = false;
        digitalWrite(ledPin, LOW);
    }

    if (sensorUltrasonico != nullptr) {
        int distanciaActual = sensorUltrasonico->medirDistanciaCm();
        
        if (distanciaActual > 0 && distanciaActual <= distAudio) {
            // CAMBIO AQUI: Usar !myDFPlayer->isBusy() directamente para la condición de reproducción
            if (!myDFPlayer->isBusy() && (millis() - ultimoAudioReproducido > delayEntreAudios)) {
                reproducirAlerta();
            }
        }
    }
}

void AudioPlayer::printDetail(uint8_t type, int value) {
    // ... (la función printDetail es la misma) ...
    switch (type) {
        case TimeOut:
            Serial.println(F("Time Out!"));
            break;
        case WrongStack:
            Serial.println(F("Stack Wrong!"));
            break;
        case DFPlayerCardInserted:
            Serial.println(F("Card Inserted!"));
            break;
        case DFPlayerCardRemoved:
            Serial.println(F("Card Removed!"));
            break;
        case DFPlayerCardOnline:
            Serial.println(F("Card Online!"));
            break;
        case DFPlayerPlayFinished:
            Serial.print(F("Pista finalizada:"));
            Serial.println(value);
            break;
        case DFPlayerError:
            Serial.print(F("DFPlayerError:"));
            switch (value) {
                case Busy:
                    Serial.println(F("Ocupado"));
                    break;
                case Sleeping:
                    Serial.println(F("Durmiendo"));
                    break;
                case SerialWrongStack:
                    Serial.println(F("Error de Stack Serial"));
                    break;
                case CheckSumNotMatch:
                    Serial.println(F("Error de Checksum"));
                    break;
                case FileIndexOut:
                    Serial.println(F("Índice de archivo fuera de rango"));
                    break;
                case FileMismatch:
                    Serial.println(F("No se encuentra el archivo"));
                    break;
                case Advertise:
                    Serial.println(F("En modo Advertise"));
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}
