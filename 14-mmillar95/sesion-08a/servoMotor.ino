// incluir la librería de servo 
#include <Servo.h>

// Crear objeto servo
Servo dedo;
// Definir que pin se utilizara
const int SERVO_PIN = 13;

// Configurar servo motor
void configurarServo() {
  dedo.attach(SERVO_PIN);
  // posición inicial 0 grados
  dedo.write(0);
}

// Levantar dedo
void levantarDedo() {
  // Mueve el servo a 180°
  dedo.write(180);
}

// Bajar dedo
void bajarDedo() {
  // Mueve el servo a 0°
  dedo.write(0);
}