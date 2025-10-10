#include "Servo.h"

Cuello::Sensor() {}

Cuello::~Sensor() {}

void Sensor::trigerPatita() {
  Sensor::
}
void Sensor::configurarPatita() {
  Sensor::patitaTriger(9);
  Sensor::patitaEco(10);
}
void Sensor::leer(){
  Sensor::duracion = pulseIn(patitaEco, HIGH);
  Sensor::distancia = (duracion*0.0343)/2;
}
  void Sensor::imprimirEnConsola();{
  Serial.print("Distancia: ");  
	Serial.println(duracion);  
	delay(100);
}