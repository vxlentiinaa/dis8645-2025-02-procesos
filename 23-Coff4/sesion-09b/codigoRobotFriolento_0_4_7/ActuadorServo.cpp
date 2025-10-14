// biblioteca para funcionamiento del servo
// biblioteca para funcionamiento del servo
#include "ActuadorServo.h"
#include "SensorTemp.h"

// Se declara la instancia de SensorTemp como externa para poder acceder a ella.
extern SensorTemp sensorTemp;

ActuadorServo::ActuadorServo() {
}

void ActuadorServo::configurar() {
  // configurar en que pin conectar el servo
  actBrazo.attach(9);
}

// escribir el movimiento que queremos realizar
void ActuadorServo::moverBrazo() {

    // Se elimina la línea: servoTemp = (sensorTemp.temperatura > 15);
    // La lógica de movimiento ahora se gestiona desde el archivo principal (loop).
    
    // se repetira esto 3 veces
    for (cuantosSaludos = 0; cuantosSaludos < 3; cuantosSaludos++){
    // primero hacia la derecha
    actBrazo.write(saludoDer);
    delay(1000);
    // despues a la izquierda
    actBrazo.write(saludoIzq);
    delay(1000);
  }
  // vuelve a posicion inicial
  actBrazo.write(saludoNeu);
}