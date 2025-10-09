#include "SensorColor.h"



// constructor
SensorColor::SensorColor() {
}

// destructor
SensorColor::~SensorColor() {
}

void SensorColor::configurar() {

  //definir patita de entrada solo si es necesario
  pinMode(SensorColor::patitaS0, OUTPUT);
  pinMode(SensorColor::patitaS1, OUTPUT);
  pinMode(SensorColor::patitaS2, OUTPUT);
  pinMode(SensorColor::patitaS3, OUTPUT);
  pinMode(SensorColor::patitaSalida, OUTPUT);

  // Escala de frecuencia al 20%
  digitalWrite(SensorColor::patitaS0, HIGH);
  digitalWrite(SensorColor::patitaS1, LOW);

  // Activar sensor
  digitalWrite(SensorColor::patitaActivar, LOW);

  pinMode(SensorColor::patitaSalida, INPUT);
}

void SensorColor::leer() {
  // Leer valores normalizados
  SensorColor::lecturaRojo = SensorColor::leerRojo();
  SensorColor::lecturaVerde = SensorColor::leerVerde();
  SensorColor::lecturaAzul = SensorColor::leerAzul();
}

int SensorColor::leerRojo() {

  digitalWrite(SensorColor::patitaS2, LOW);
  digitalWrite(SensorColor::patitaS3, LOW);
  int valor = pulseIn(SensorColor::patitaSalida, LOW);
  delay(SensorColor::tiempoPausa);
  return normalizar(valor, 2000);
}

int SensorColor::leerVerde() {
  digitalWrite(SensorColor::patitaS2, HIGH);
  digitalWrite(SensorColor::patitaS3, HIGH);
  int valor = pulseIn(SensorColor::patitaSalida, LOW);
  delay(SensorColor::tiempoPausa);
  return normalizar(valor, 2000);
}

int SensorColor::leerAzul() {
  digitalWrite(SensorColor::patitaS2, LOW);
  digitalWrite(SensorColor::patitaS3, HIGH);
  int valor = pulseIn(SensorColor::patitaSalida, LOW);
  delay(SensorColor::tiempoPausa);
  return normalizar(valor, 2000);
}

int SensorColor::normalizar(int valor, int maximoEntrada) {
  if (valor > maximoEntrada) {
    valor = maximoEntrada;
  }
  return (valor * 50) / maximoEntrada;  // Escala proporcional
}
