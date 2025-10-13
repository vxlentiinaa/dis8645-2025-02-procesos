#include "SalidaMotorVibracion.h"

// --- Constructor ---
SalidaMotorVibracion::SalidaMotorVibracion() {}

// --- Destructor ---
SalidaMotorVibracion::~SalidaMotorVibracion() {}

// --- Configuración inicial ---
void SalidaMotorVibracion::configurar() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(MOTOR_PIN, OUTPUT);
  Serial.begin(9600);
}

// --- Medición de distancia con sensor ultrasónico ---
float SalidaMotorVibracion::medirDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duracion = pulseIn(ECHO_PIN, HIGH);
  distanciaCm = duracion * 0.0343 / 2;
  return distanciaCm;
}

// --- Actualiza la vibración según la distancia ---
void SalidaMotorVibracion::actualizar() {
  float distancia = medirDistancia();

  if (distancia >= minCercana && distancia <= maxCercana) {
    intensidad = 0;           // No vibra
  } 
  else if (distancia >= minMediana && distancia <= maxMediana) {
    intensidad = 255;         // Vibra mucho
  } 
  else if (distancia >= minLejana && distancia <= maxLejana) {
    intensidad = 100;         // Vibra poco
  } 
  else {
    intensidad = 0;           // Fuera de rango, no vibra
  }

  analogWrite(MOTOR_PIN, intensidad);

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.print(" cm  |  Intensidad: ");
  Serial.println(intensidad);

  delay(100);
}