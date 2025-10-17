#ifndef SENSORENCODER_H
#define SENSORENCODER_H

#include <Arduino.h>

class SensorEncoder {
  public:
  // Constructor / Destructor
    SensorEncoder(); // Inicializa el estado del encoder
    ~SensorEncoder();  // Destructor

  // Configuración
    void configurar(); // Configura pines del encoder y estado inicial
    int tomarDecisiones(); // Detecta giro del encoder y actualiza opción del menú
    int leerMovimiento();     // Devuelve la opción actual del menú  
  // Botón del encoder  
    bool botonPresionado(); // Devuelve true una vez por pulsación, debounce simple

    // Pines 
    static const int patitaClock = 2;  // Pin Clock
    static const int patitaData = 3; // Pin Data
    static const int patitaSwitch = 7;  // Pin Switch (botón)

    // Estado interno público 
    int clockActual;    // Estado actual del pin Clock
    int clockAnterior; // Estado anterior del pin Clock
    int opcionMenu; // Opción actual del menú
};

#endif
