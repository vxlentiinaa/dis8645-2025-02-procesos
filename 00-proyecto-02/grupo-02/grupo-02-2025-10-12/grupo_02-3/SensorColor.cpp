
//archivo .cpp
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

bool SensorColor::cercaDe(int valor, int objetivo) {
  // tolerancia 0 (puedes subirla a 1 o 2 si es inestable)
  return abs(valor - objetivo) <= 1;
}

void SensorColor::determinarColor() {


  if (SensorColor::cercaDe(SensorColor::lecturaRojo, 0)
      && SensorColor::cercaDe(SensorColor::lecturaVerde, 0)
      && SensorColor::cercaDe(SensorColor::lecturaAzul, 0)) {
    SensorColor::colorDetectado = "VERDE";
  } else if (SensorColor::cercaDe(SensorColor::lecturaRojo, 16)
             && SensorColor::cercaDe(SensorColor::lecturaVerde, 10)
             && SensorColor::cercaDe(SensorColor::lecturaAzul, 10)) {
    SensorColor::colorDetectado = "NARANJO";
    obtenerColor = 4;
  } else if (SensorColor::cercaDe(SensorColor::lecturaRojo, 18)
             && SensorColor::cercaDe(SensorColor::lecturaVerde, 14)
             && SensorColor::cercaDe(SensorColor::lecturaAzul, 11)) {
    SensorColor::colorDetectado = "ROJO";
    obtenerColor = 1;
  } else if (SensorColor::cercaDe(SensorColor::lecturaRojo, 9)
             && SensorColor::cercaDe(SensorColor::lecturaVerde, 9)
             && SensorColor::cercaDe(SensorColor::lecturaAzul, 6)) {
    SensorColor::colorDetectado = "AZUL";
    obtenerColor = 3;
  }
}


void SensorColor::mostrarSerial() {

  Serial.print("Rojo = ");
  Serial.print(lecturaRojo);
  Serial.print("  Verde = ");
  Serial.print(lecturaVerde);
  Serial.print("  Azul = ");
  Serial.println(lecturaAzul);

  if (SensorColor::colorDetectado != "NADA") {
    Serial.println("Detecto " + SensorColor::colorDetectado);
  } else {
    Serial.println("No estoy detectando nada, pucha");
    
  }
}
