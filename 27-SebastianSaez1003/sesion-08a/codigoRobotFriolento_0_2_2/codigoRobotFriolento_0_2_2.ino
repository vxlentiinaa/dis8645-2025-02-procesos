#include "SensorTemp.h"
#include "SensorUltra.h"


// crear una instancia de la clase SensorUltra
SensorUltra sensorUltra;

// crear una instancia d ela clase SensorTemp
SensorTemp sensorTemp;

// En los setup pondremos todo lo necesario para que los sensores y actuadores funcionen
// desde los pins donde estaran conectados
// si es que es necesario el puerto serial
// entre otras cosas mas en el futuro
void setup() {
 sensorUltra.configurar();
 sensorTemp.configurar();
}

// aqui es donde se usan los sensores y actuadores
void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();

  sensorTemp.reconocerTemp();
  sensorTemp.leerTemp();
  
}
