//no compila deberia ser o archivo .h o .cpp 



#include "configuracionesSensorUltrasonico.h"



void configurarSensorUltrasonico() {
  // conectar las patita
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    serial.begin(9600);

}

void reconocimientoDistancia() {
  // configuracion reconocimiento distancia
   digitalWrite(PIN_TRIG, HIGH);
   delayMicroseconds(10);
   digitalWrite(PIN_TRIG, LOW);
  
}

void leerDistancia() {
  //va a leer e imprimir en el monitor serial la distancia detectada
    distancia = duracion/58;
    if (distancia < 30) {
      persona = false
    } 
    else (persona false )

  serial.print("la persona esta a: ")
}