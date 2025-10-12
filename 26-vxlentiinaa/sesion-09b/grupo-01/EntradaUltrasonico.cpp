#include "EntradaUltrasonico.h"

EntradaUltrasonico::EntradaUltrasonico() {}

EntradaUltrasonico::~EntradaUltrasonico() {}

void EntradaUltrasonico::configurar() {
  pinMode(EntradaUltrasonico::patitaTrigger, OUTPUT);
  pinMode(EntradaUltrasonico::patitaEcho, INPUT);
  Serial.begin(9600);
}

void EntradaUltrasonico::medirDistancia() {

  digitalWrite(EntradaUltrasonico::patitaTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(EntradaUltrasonico::patitaTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(EntradaUltrasonico::patitaTrigger, LOW);

  // Leer la duración del pulso de retorno
  EntradaUltrasonico::duracion = pulseIn(EntradaUltrasonico::patitaEcho, HIGH);
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  EntradaUltrasonico::distanciaCm = EntradaUltrasonico::duracion * 0.0343 / 2;

  if (EntradaUltrasonico::distanciaCm >= EntradaUltrasonico::minCercana
      && EntradaUltrasonico::distanciaCm <= EntradaUltrasonico::maxCercana) {
    EntradaUltrasonico::estaCerca = true;
  } else {
    EntradaUltrasonico::estaCerca = false;
  }
}

void EntradaUltrasonico::mostrarConsola() {
  if (EntradaUltrasonico::distanciaCm >= EntradaUltrasonico::minCercana
      && EntradaUltrasonico::distanciaCm <= EntradaUltrasonico::maxCercana) {
    Serial.println(EntradaUltrasonico::mensajeCercana);
  } else if (EntradaUltrasonico::distanciaCm >= EntradaUltrasonico::minMediana
             && EntradaUltrasonico::distanciaCm <= EntradaUltrasonico::maxMediana) {
    Serial.println(EntradaUltrasonico::mensajeMediana);
  } else if (EntradaUltrasonico::distanciaCm >= EntradaUltrasonico::minLejana
             && EntradaUltrasonico::distanciaCm <= EntradaUltrasonico::maxLejana) {
    Serial.println(EntradaUltrasonico::mensajeLejana);
  } else {
    Serial.println(EntradaUltrasonico::mensajeEnOtroCaso);
  }
}


// ESTE CÓDIGO ES EL NUEVO QUE HICIMOS, PERO LO HICIMOS EN .INO
// NO SABEMOS SI AHORA SE USA LO DE ARRIBA, AYUDA PLISS

//SENSOR ULTRASÓNICO
const int TRIG_PIN = 11;   // Pin digital 11 para el Trigger del sensor
const int ECHO_PIN = 12;   // Pin digital 12 para el Echo del sensor

// definir la distancia minima de 2 a 10 cm
// definir distancia media de 40 a 60 cm
// definir la distancia maxima de 80 a 100 cm
// Tiempo de reposo cuando no siente presencia 

long duration;
float distanceCm;

// Configurar pines del sensor ultrasonico
void configurarSensorUltrasonico() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

// Medir la distancia y devolverla
float medirDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Leer la duración del pulso de retorno
  duration = pulseIn(ECHO_PIN, HIGH);
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  distanceCm = duration * 0.0343 / 2;

  // Mostrar distancia medida en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  return distanceCm;
}