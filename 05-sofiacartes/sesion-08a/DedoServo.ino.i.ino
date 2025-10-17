#include <Servo.h>

Servo dedo;// Crear objeto servo
const int SERVO_PIN = 13;

// Configurar servo motor
void configurarServo() {
  dedo.attach(SERVO_PIN);
  dedo.write(0); // posición inicial 0 grados
}

// Levantar dedo
void levantarDedo() {
  dedo.write(180); //180 grados
}

// Bajar dedo
void bajarDedo() {
  dedo.write(0); //0 grados
}
