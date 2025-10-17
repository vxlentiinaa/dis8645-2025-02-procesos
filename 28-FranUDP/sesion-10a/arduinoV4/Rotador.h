#ifndef ROTADOR_H
#define ROTADOR_H

#include <Arduino.h>
#include <Servo.h>
#include "SensorUltrasonico.h"
#include "Ojos.h"

class Rotador {

public:
  Rotador();
  ~Rotador();

  void configurar(SensorUltrasonico* s, Ojos* o);

  void radar();

  Servo servo;
  SensorUltrasonico* sensor; 
  Ojos* ojos;

  // Patita que controla el servo
  int patitaServo = 9;
  // Angulo minimo y de inicio del servoRadar
  int anguloMin = 0;
  // ServoRadar comienza en angulo mínimo como posición inicial
  int anguloActual = anguloMin;
  // Angulo máximo de rotación del servoRadar
  int anguloMax = 160;
  // Distancia (grados) que recorre el servoRadar tras cada medición
  int paso = 3;
  // 1 es hacia la derecha, 0 es a la izquierda
  bool direccion = 1;

  
  // Array de mediciones del radar correspondientes a cada angulo
  int distanciasFondo[181];
  // Margen de error en cm
  const int umbralDeteccion = 100; 
  // Si hemos detectado a un usuario
  bool detectandoUsuario = false;
  // Angulo donde se comenzó a registrar una alerta (presencia de usuario)
  int anguloInicioDeteccion = -1;

private:
  // Funcion interna encargada de procesar a que punto posicionar el servoOjos
  void procesarDeteccion(int distanciaActual);
};

#endif