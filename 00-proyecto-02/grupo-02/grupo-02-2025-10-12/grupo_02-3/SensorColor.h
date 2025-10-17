//archivo .h

#ifndef SENSOR_COLOR_H
#define SENSOR_COLOR_H

// Sensor Reconocimiento de Color Tcs230 - Tcs3200
// se reconoce el color
// Color clasificados por R,G,B
// Se clasifican 4 Colores

#include <Arduino.h>

class SensorColor {

public:
  //////////////////////
  // funciones - metodos
  //////////////////////

  // constructor
  SensorColor();

  // destructor
  ~SensorColor();

  void configurar();

  void leer();
  int leerRojo();
  int leerVerde();
  int leerAzul();

  int normalizar(int valor, int maximoEntrada);
  bool cercaDe(int valor, int objetivo);


  void determinarColor();

  void mostrarSerial();

  ////////////////////////
  // variables - atributos
  ////////////////////////

  int lecturaRojo = 0;
  int lecturaVerde = 0;
  int lecturaAzul = 0;

  int tiempoPausa = 90;

  // patitas del sensor
  int patitaS0 = 2;
  int patitaS1 = 3;
  int patitaS2 = 4;
  int patitaS3 = 5;
  int patitaSalida = 6;
  int patitaActivar = 7;
  // #define S0 2
  // #define S1 3
  // #define S2 4
  // #define S3 5
  // #define salidaSensorOut 6
  // #define OE 7   // Pin para activar/desactivar el sensor

  String colorDetectado = "NADA";

int obtenerColor;
};

#endif