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

    // Pines 
    static const int patitaClock = 2;
    static const int patitaData = 3;
    static const int patitaSwitch = 7;

    // Estado interno público 
    int clockActual;
    int clockAnterior;
    int opcionMenu;
};

#endif
