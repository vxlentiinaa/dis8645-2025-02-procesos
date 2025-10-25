#include "SensorTemp.h"
#include "SensorUltra.h"
#include "ActuadorServo.h"
#include "ActuadorPantalla.h"

// Crear una instancia de la clase SensorUltra
SensorUltra sensorUltra;
// Crear una instancia de la clase SensorTemp
SensorTemp sensorTemp;
// Crear una instancia de la clase ActuadorServo
ActuadorServo actuadorServo;
// Crear una instancia de la clase ActuadorPantalla
ActuadorPantalla actuadorPantalla;

void setup() {
  sensorUltra.configurar();
  sensorTemp.configurar();
 // actuadorPantalla.configurar();
  actuadorServo.configurar();
}

void loop() {
  Serial.print("esta funcionando");
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();
  sensorTemp.leerTemp();
  //actuadorPantalla.mostrarPantalla();
  
  Serial.print("pasaron todos los checks");

// cuando el dato dentro del sensor de temperatura
// llamado temperatura es mayor a 15
// y una entidad es detectada por el sensor ultrasonico
  if (sensorTemp.temperatura > 15 && sensorUltra.persona) {
    // se realizara todo lo presente en
    // la instacia de moverBrazo
    actuadorServo.moverBrazo();
  }
}
