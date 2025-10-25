// constructores de este archivo del proyecto 
#ifndef ACTUADOR_SERVO_H
#define ACTUADOR_SERVO_H

// incluir todos las bilbiotecas para el funcionamiento
// del servomotor
#include <Arduino.h>
#include <Servo.h>

//crear la clase ActuadorServo
class ActuadorServo {
public: 
  ActuadorServo();
  
  // establecer las 2 partes del 
  // funcionamiento para el actuador
    void configurar();
    void moverBrazo();

  // ponerle nombre al servomotor
  // en este caso sera actBrazo
    Servo actBrazo;

  // escribir datos para el ángulo del servomotor
  // donde estos grados de movimiento
  // seran cambiados en todas sus instancias
    int saludoIzq = 45;
    int saludoDer = 130;
    int saludoNeu = 0;
    
  // int para medir cantidad de saludos
  // que realizara Friolin
    int cuantosSaludos;
  };
// destructor para este archivo del proyecto para no causar problemas en el codigo
#endif