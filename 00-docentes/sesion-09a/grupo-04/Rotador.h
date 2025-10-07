#ifndef ROTADOR_H
#define ROTADOR_H

#include <Arduino.h>
#include <Servo.h>

class Rotador {

public:
  Rotador();
  ~Rotador();

  void configurar();

  void rotar();

  Servo servo;

  int patitaServo = 9;
  int anguloMin = 0;
  int anguloMax = 180;
  int paso = 1;
  int deltaTiempo = 15;
  int anguloActual = anguloMin;
  // 1 es hacia la derecha, 0 es a la izquierda
  bool direccion = 1;
  // cuando movimos el servo por ultima vez
  unsigned long tiempoUltimoMovimiento = 0;
};

#endif
