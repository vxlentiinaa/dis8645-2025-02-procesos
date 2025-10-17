// Incluir todos los archivos para los componentes
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

// Aquí es donde ocurre el funcionamiento de 
// los sensores y actuadores específicos
void loop() {
  sensorUltra.leerDistancia();
  sensorUltra.reconocerDistancia();
  sensorTemp.leerTemp();
// cuando el dato dentro del sensor de temperatura
// llamado temperatura es mayor a 15
// y el sensor ultrasónico detecta a una persona.
  if (!sensorTemp.frio && sensorUltra.persona) { 
    // se mostrara en el display la imagen correspondiente 
    // cuando esta temperado el ambiente
     actuadorPantalla.mostrarImagenTemperado();
     // se realizara todo lo presente en
     // la instancia de moverBrazo
     actuadorServo.moverBrazo();
   } 
      // si la temperatura ambiente es menor a 15 grados
      // y se detecta a una persona
       else if (sensorTemp.frio && sensorUltra.persona){
        // el robot mostrará su cara de frío
         actuadorPantalla.mostrarImagenFrio();
      }
       // si no se detecta a una persona
        else if(!sensorUltra.persona){
          // se mostrará al robot en su estado sin nadie presente
           actuadorPantalla.mostrarImagenNadie();
        }
}
