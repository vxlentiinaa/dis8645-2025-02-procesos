#ifndef SERVOSENSORES_H
#define SERVOSENSORES_H

#include <Arduino.h>
#include <Servo.h>

class ServoSensores {
private:
  Servo motorcillo;

public:
  ServoSensores();
  ~ServoSensores();

  int angulo = 0;
  int direccion = 10;
  int ultimoTiempo = millis();

  void configurar();       // Inicializa el servo
  void moverMotorcillo();  // Mueve el servo a un ángulo
  void imprimirEnConsola();
  int getAnguloActual();   // Devuelve el ángulo actual

  // analiza el alrededor
  bool escanearPresencia;
};

#endif