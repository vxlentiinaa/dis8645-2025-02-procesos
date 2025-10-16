#ifndef SENSORENCODER_H
#define SENSORENCODER_H

#include <Arduino.h>

class SensorEncoder {
  public:
    SensorEncoder();
    ~SensorEncoder();

    void configurar();
    int tomarDecisiones();

    int leerMovimiento();      
    bool botonPresionado();    

    // Variables estáticas o pines
    static const int patitaClock = 2;
    static const int patitaData = 3;
    static const int patitaSwitch = 7;

    int clockActual = 0;
    int clockAnterior = 0;
    int opcionMenu = 0;
};

#endif
