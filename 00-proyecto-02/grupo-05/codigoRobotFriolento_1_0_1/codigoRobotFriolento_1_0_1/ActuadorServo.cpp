// biblioteca para funcionamiento del servo
#include "ActuadorServo.h"

ActuadorServo::ActuadorServo() {}

// establecer codigo necesario para funcionamiento
// sel servomotor
void ActuadorServo::configurar() {
  // configurar en que pin conectar el servo
  // que en este caso sera el pin 9
   actBrazo.attach(9);
}

// establecer las acciones que se realizaran
// al llamar a moverBrazo
void ActuadorServo::moverBrazo() {    
    // repetir el cuantos saludos hasta llegar a la cantidad
    // de saludos que se queria ocupar
     for (cuantosSaludos = 0; cuantosSaludos < 3; cuantosSaludos++){
    // primero movera el brazo hacia la derecha
      actBrazo.write(saludoDer);
    // esperar 1 segundo hasta siguiente saludo
      delay(1000);
    // despues movera el brazo a la izquierda
      actBrazo.write(saludoIzq);
    // esperar 1 segundo hasta que continue la repeticion
    // o continuar a posicion neutral del brazo
      delay(1000);
    }
   // vuelve a posicion inicial el brazo
   actBrazo.write(saludoNeu);
}