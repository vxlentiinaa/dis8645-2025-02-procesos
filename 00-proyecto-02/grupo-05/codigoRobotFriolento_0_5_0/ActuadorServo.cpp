// biblioteca para funcionamiento del servo
#include "ActuadorServo.h"

ActuadorServo::ActuadorServo() {}

void ActuadorServo::configurar() {
  // configurar en que pin conectar el servo
  // que en este caso sera el pin 9
   actBrazo.attach(9);
}

// escribir el movimiento que queremos realizar
void ActuadorServo::moverBrazo() {    
    // se repetira esto 3 veces
     for (cuantosSaludos = 0; cuantosSaludos < 3; cuantosSaludos++){
    // primero movera el brazo hacia la derecha
      actBrazo.write(saludoDer);
    // ver de cambiar delay a millis en clase
      delay(1000);
    // despues movera el brazo a la izquierda
      actBrazo.write(saludoIzq);
      delay(1000);
    }
  // vuelve a posicion inicial el brazo
   actBrazo.write(saludoNeu);
}