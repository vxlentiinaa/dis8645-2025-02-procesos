#ifndef ROTADOR_H
#define ROTADOR_H

#include <Arduino.h>
#include <Servo.h>
#include "SensorUltrasonico.h"

class Rotador {

public:
  Rotador();
  ~Rotador();

  void configurar(SensorUltrasonico* s);

  // void rotar();

  void radar();

  Servo servo;
  SensorUltrasonico* sensor; 

  // Patita que controla el servo
  int patitaServo = 9;
  // Angulo minimo y de inicio del servoRadar
  int anguloMin = 0;
  // ServoRadar comienza en angulo mínimo como posición inicial
  int anguloActual = anguloMin;
  // Angulo máximo de rotación del servoRadar
  int anguloMax = 160;
  // Distancia que recorre el servoRadar tras cada medición
  int paso = 1;
  // Tiempo para permitor que servoRadar termine su movimiento antes de medir
  // int deltaTiempo = 30;
  
  // 1 es hacia la derecha, 0 es a la izquierda
  bool direccion = 1;
  // Cuando movimos el servo por ultima vez
  // unsigned long tiempoUltimoMovimiento = 0;
  
  // Array de mediciones del radar
  int distanciasFondo[181];
  // Cm. margen de error
  const int umbralDeteccion = 100; 
};

#endif