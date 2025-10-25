#include "sensorUltrasonico.h"
#include "sensorTemperatura.h"

void configurarSensoresActuadores() {

  configurarSensorTemperatura();

  configurarSensorUltrasonico();
}

void leerSensores() {
  reconocimientoDistancia();
  leerDistancia();
}

//void procesamientoSensores() {
//

//}

//void actuarSensores() {
// println "tengo frio, me niego a saludar >:-c)"

// println "Hola, ya no tengo frio te saludo :-D"
//}