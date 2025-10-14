// PROFE: FALTAN COMENTARIOS
#include "SensorTemp.h"
#include "SensorUltra.h"
#include "ActuadorPantalla.h"
#include "ActuadorServo.h"


// crear una instancia de las clases de cada
// sensor y actuador correspondientes
SensorTemp sensorTemp;
SensorUltra sensorUltra;
ActuadorPantalla actuadorPantalla;
ActuadorServo actuadorServo;

void setup() {
  // se define todo lo necesario para el
  // funcionamiento de los sensores y actuadores
  sensorUltra.configurar();
  sensorTemp.configurar();
  actuadorPantalla.configurar();
  actuadorServo.configurar();
}

// aqui es donde ocurre el funcionamiento de
// los sensores y actuadores especificos
void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();
  sensorTemp.leerTemp();
  // cuando dato en sensorTemp > 15
  // y el sensorUltra detecta a una persona
  if (sensorTemp.temperatura > 15 && sensorUltra.persona) {
    // se realizara todo lo presente en
    // la instacia de moverBrazo
    actuadorServo.moverBrazo();
    // se mostrara en el display la imagen correspondiente al calor
    actuadorPantalla.mostrarImagenCalor();
  }
  // si la temperatura ambiente es menor a 15 grados
  // y se detecta a una persona
  else if (sensorTemp.temperatura < 15 && sensorUltra.persona) {
    // el robot mostrara su cara de frio
    actuadorPantalla.mostrarImagenFrio();
  }
  // si no se detecta a una persona
  else if (!sensorUltra.persona) {
    // se mostrara al robot en su estado sin nadie presente
    actuadorPantalla.mostrarImagenFrio();
  }
}
