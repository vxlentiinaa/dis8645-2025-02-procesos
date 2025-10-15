#include "SensorTemp.h"
#include "SensorUltra.h"
#include "ActuadorServo.h"
#include "ActuadorPantalla.h"

// Crear una instancia de las clases de cada 
// sensor y actuador correspondientes
 SensorUltra sensorUltra;
 SensorTemp sensorTemp;
 ActuadorServo actuadorServo;
 ActuadorPantalla actuadorPantalla;

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
// cuando el dato dentro del sensor de temperatura
// llamado temperatura es mayor a 15
// y el sensor ultrasonico detecta a una persona
  if (!sensorTemp.frio && sensorUltra.persona) { 
    // se mostrara en el display la imagen correspondiente al calor
     actuadorPantalla.mostrarImagenCalor();
    // se realizara todo lo presente en
    // la instacia de moverBrazo
     actuadorServo.moverBrazo();
   } 
      // si la temperatura ambiente es menor a 15 grados
      // y se detecta a una persona
       else if (sensorTemp.frio && sensorUltra.persona){
        // el robot mostrara su cara de frio
         actuadorPantalla.mostrarImagenFrio();
      }
       // si no se detecta a una persona
        else if(!sensorUltra.persona){
          // se mostrara al robot en su estado sin nadie presente
           actuadorPantalla.mostrarImagenNadie();
        }
}
