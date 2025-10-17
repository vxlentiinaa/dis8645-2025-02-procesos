#ifndef DFPLAYERCONTROLLER_H
#define DFPLAYERCONTROLLER_H

#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
#include <SoftwareSerial.h>

//
// clase que controla la interacción entre el botón físico y el módulo DFPlayer Mini
// permite reproducir pistas aleatorias desde una tarjeta SD
//
class DFPlayerController {
public:

    // --- variables públicas ---

    // pin donde está conectado el botón
    int buttonPin;

    // cantidad total de pistas disponibles en la tarjeta SD
    int totalTracks;

    // tiempo en el que se presionó el botón por última vez
    unsigned long lastDebounceTime;

    // tiempo mínimo entre lecturas válidas del botón (antirrebote)
    unsigned long debounceDelay = 50;

    // objeto principal del reproductor DFPlayer Mini
    DFRobotDFPlayerMini player;

    // referencia al puerto serie usado para comunicarse con el DFPlayer
    #if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))
      SoftwareSerial *serial;
    #else
      HardwareSerial *serial;
    #endif

    // --- métodos públicos ---

    // constructor: define los pines rx/tx del DFPlayer, el pin del botón y la cantidad de pistas
    DFPlayerController(int rxPin, int txPin, int buttonPin, int totalTracks);

    // inicializa la comunicación y el reproductor
    void begin();

    // actualiza la lectura del botón y los mensajes del DFPlayer
    void update();

    // revisa si el botón fue presionado y reproduce una pista aleatoria
    void handleButton();

    // revisa si el módulo DFPlayer envió algún mensaje o evento
    void handleDFPlayerMessages();

    // interpreta y muestra los mensajes del DFPlayer en el monitor serie
    void printDetail(uint8_t type, int value);
};

#endif
