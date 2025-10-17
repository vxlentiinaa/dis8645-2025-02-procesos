#include "DFPlayerController.h"


// constructor: asigna los valores iniciales y prepara la comunicación serie

DFPlayerController::DFPlayerController(int rxPin, int txPin, int botonPin, int total)
    : buttonPin(botonPin), totalTracks(total), lastDebounceTime(0)
{
    // si el microcontrolador es un arduino uno o esp8266, usa software serial
    #if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))
      serial = new SoftwareSerial(rxPin, txPin);
    // si no, usa el puerto serie hardware disponible
    #else
      serial = &Serial1;
    #endif
}


// inicializa el módulo DFPlayer Mini y configura el botón

void DFPlayerController::begin() {
    // inicia la comunicación con el DFPlayer
    serial->begin(9600);

    // inicia el puerto serie para depuración
    Serial.begin(115200);

    // mensajes iniciales
    Serial.println(F("DFPlayer Mini - Reproductor por Botón"));
    Serial.println(F("Inicializando..."));

    // intenta iniciar la comunicación con el DFPlayer
    if (!player.begin(*serial)) {
        Serial.println(F("Error de comunicación con DFPlayer."));
        Serial.println(F("Verifica conexiones y tarjeta SD."));
        // detiene el programa si no hay conexión
        while (true);
    }

    // confirma que el DFPlayer está listo
    Serial.println(F("DFPlayer en línea. Listo para usar."));

    // ajusta el volumen de reproducción (0 a 30)
    player.volume(15);

    // genera una semilla aleatoria para reproducir pistas distintas
    randomSeed(analogRead(0));

    // configura el pin del botón con resistencia pull-up interna
    pinMode(buttonPin, INPUT_PULLUP);
}

// función principal de actualización: se llama en cada ciclo loop()
// combina la lectura del botón y los mensajes del DFPlayer

void DFPlayerController::update() {
    handleButton();
    handleDFPlayerMessages();
}

// verifica si el botón fue presionado y reproduce una pista al azar

void DFPlayerController::handleButton() {
    // comprueba si el botón está presionado y si ha pasado el tiempo de antirrebote
    if (digitalRead(buttonPin) == LOW && (millis() - lastDebounceTime) > debounceDelay) {

        // selecciona un número aleatorio entre 1 y el total de pistas
        int track = random(1, totalTracks + 1);

        // muestra el número de pista reproducido
        Serial.print(F("--> Botón presionado! Reproduciendo pista: "));
        Serial.println(track);

        // reproduce la pista seleccionada
        player.play(track);

        // actualiza el tiempo del último toque válido del botón
        lastDebounceTime = millis();
    }
}

// revisa si el DFPlayer tiene algún mensaje disponible
// y lo envía a la función printDetail() para mostrarlo

void DFPlayerController::handleDFPlayerMessages() {
    if (player.available()) {
        printDetail(player.readType(), player.read());
    }
}

// interpreta los mensajes del DFPlayer y los muestra por el monitor serie

void DFPlayerController::printDetail(uint8_t type, int value) {
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
