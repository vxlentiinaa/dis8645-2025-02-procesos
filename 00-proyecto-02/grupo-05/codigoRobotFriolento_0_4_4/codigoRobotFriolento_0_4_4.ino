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
// Crear una instancia de la clase ActuadorPantalla (Se usa el constructor sin argumentos)
ActuadorPantalla actuadorPantalla;

void setup() {
  sensorUltra.configurar();
  sensorTemp.configurar();
  actuadorPantalla.configurar(); // Se llama a configurar()
  actuadorServo.configurar();
} // [cite: 9]

void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();
  sensorTemp.leerTemp();
  
  // Se llama a mostrarImagen con la temperatura actual de sensorTemp
  actuadorPantalla.mostrarImagen(sensorTemp.temperatura);

// cuando el dato dentro del sensor de tmeperatura
// llamado temperatura es mayor a 15
  if (sensorTemp.temperatura > 15) { // Se corrige la condición de 'if'
    // se realizara todo lo presente en
    // la instacia de moverBrazo
    actuadorServo.moverBrazo();
  } // 
}
// Se elimina la llave de cierre adicional al final del archivo