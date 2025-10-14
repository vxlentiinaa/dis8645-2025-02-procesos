#include "SalidaMotorVibracion.h"

// constructor
SalidaMotorVibracion::SalidaMotorVibracion() {}

// destructor
SalidaMotorVibracion::~SalidaMotorVibracion() {}

// configuración inicial
void SalidaMotorVibracion::configurar() {
  pinMode(SalidaMotorVibracion::TRIG_PIN,
          OUTPUT);
  pinMode(SalidaMotorVibracion::ECHO_PIN, INPUT);
  pinMode(SalidaMotorVibracion::MOTOR_PIN, OUTPUT);
  Serial.begin(9600);
}

// medición de distancia con sensor ultrasónico
float SalidaMotorVibracion::medirDistancia() {
  digitalWrite(SalidaMotorVibracion::TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(SalidaMotorVibracion::TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(SalidaMotorVibracion::TRIG_PIN, LOW);

  SalidaMotorVibracion::duracion = pulseIn(
    SalidaMotorVibracion::ECHO_PIN,
    HIGH);
  SalidaMotorVibracion::distanciaCm = duracion * 0.0343 / 2;
  return SalidaMotorVibracion::distanciaCm;
}

// actualiza la vibración según la distancia
void SalidaMotorVibracion::actualizar() {

  float distancia = SalidaMotorVibracion::medirDistancia();

  // if (distancia >= SalidaMotorVibracion::minCercana
  //     && distancia <= SalidaMotorVibracion::maxCercana) {
  //   SalidaMotorVibracion::intensidad = 0;  // No vibra
  // } else if (distancia >= SalidaMotorVibracion::minMediana
  //            && distancia <= maxMediana) {
  //   SalidaMotorVibracion::intensidad = 255;  // Vibra mucho
  // } else if (distancia >= SalidaMotorVibracion::minLejana
  //            && distancia <= SalidaMotorVibracion::maxLejana) {
  //   SalidaMotorVibracion::intensidad = 150;  // Vibra poco
  // } else {
  //   SalidaMotorVibracion::intensidad = 0;  // Fuera de rango, no vibra
  // }

  analogWrite(SalidaMotorVibracion::MOTOR_PIN,
              SalidaMotorVibracion::intensidad);

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.print(" cm  |  Intensidad: ");
  Serial.println(SalidaMotorVibracion::intensidad);

  delay(100);
}
