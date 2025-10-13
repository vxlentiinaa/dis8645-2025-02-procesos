//código extraído de chatgpt
#include <Servo.h>

Servo servo;
int pos = 0;      // posición actual
int direccion = 1; // 1 = derecha, -1 = izquierda

void setup() {
  servo.attach(9); // pin de control del servo
}

void loop() {
  servo.write(pos);   // mover servo a la posición actual
  pos += direccion;   // avanzar un paso

  // invertir dirección en los extremos
  if (pos >= 180) direccion = -1;
  if (pos <= 0)   direccion = 1;

  delay(15); // controla la velocidad del movimiento (mayor = más lento)
}
