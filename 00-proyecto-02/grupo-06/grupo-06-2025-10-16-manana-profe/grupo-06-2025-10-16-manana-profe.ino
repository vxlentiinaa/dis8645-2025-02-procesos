#include "constantes.h"
#include "SensorProx.h"
#include "Cuello.h"
#include "Parpados.h"
#include "ServoSensores.h"
#include <Servo.h>
#include <Arduino.h>

// Objetos
Cuello cuello;
Parpados parpados;
ServoSensores sensores;

SensorProx sensorProxIZQ;
SensorProx sensorProxDER;

// Variables de control
int anguloSensores = 90;
int paso = 2;
int detectionDistance = 25;    
bool personaDetectada = false;
int anguloActual = 0;       // posición actual del cuello
int direccion = 1;          // 1 = derecha, -1 = izquierda
unsigned long ultimoMovimiento = 0;
int intervaloMovimiento = 60; // controla la velocidad


void setup() {
  Serial.begin(9600);

  cuello.configurar();
  parpados.configurar();
  sensorProxIZQ.configurar(10, 9);
  sensorProxDER.configurar(11, 12);

  //void SensorProx::configurar() {
 // pinMode(SensorProx::patitaEcho, INPUT);
  //pinMode(SensorProx::patitaTrigger, OUTPUT);
}

  sensores.moverMotorcillo(90, 0);
  cuello.moverMotorcillo(90, 0);
  parpados.moverMotorcillo(0, 0);

  Serial.println("Iniciando sistema de ojos...");
}

void loop() {
  // Leer distancia de sensores
  sensorProxIZQ.leer();
  sensorProxDER.leer();

  int distanciaIZQ = sensorProxIZQ.distancia;
  int distanciaDER = sensorProxDER.distancia;

  personaDetectada = (
    (distanciaIZQ > 0 && distanciaIZQ < detectionDistance) ||
    (distanciaDER > 0 && distanciaDER < detectionDistance)
  );

  Serial.print("Distancia IZQ: ");
  Serial.print(distanciaIZQ);
  Serial.print(" cm | Distancia DER: ");
  Serial.print(distanciaDER);
  Serial.print(" cm | Persona: ");
  Serial.println(personaDetectada ? "Sí" : "No");

 if (personaDetectada) {
  cuello.moverMotorcillo(cuello.getAnguloActual(), 0);
  sensores.moverMotorcillo(anguloSensores, 0);  // mantiene posición
  parpados.moverMotorcillo(0, 0);               // ojos abiertos
      
      // Mostrar ángulo actual del servo de sensores
  int anguloActual = sensores.getAnguloActual();
  Serial.print("ServoSensores en ángulo: ");
  Serial.println(anguloActual);

    delay(200);
  } 
  else {
  unsigned long ahora = millis();

  // Mover cada cierto tiempo (para hacerlo más lento y fluido)
  if (ahora - ultimoMovimiento >= intervaloMovimiento) {
    // Actualizar el ángulo
    anguloActual += direccion * paso;

    // Rebotar al llegar a los límites
    if (anguloActual >= 180) {
      direccion = -1;
    } else if (anguloActual <= 0) {
      direccion = 1;
    }

    // Calcular el ángulo del servo de sensores
    anguloSensores = map(anguloActual, 0, 180, 30, 150);

    // Mover los servos
    cuello.moverMotorcillo(anguloActual, 0);
    sensores.moverMotorcillo(anguloSensores, 0);

    // Parpadear ocasionalmente
    parpadear();

    // Verificar detección
    if (verificarDeteccion()) {
      personaDetectada = true;
    }

    // Guardar el momento del último movimiento
    ultimoMovimiento = ahora;
  }
 }
}

// Funciones auxiliares

void parpadear() {
  static unsigned long ultimoParpadeo = 0;
  unsigned long ahora = millis();
  if (ahora - ultimoParpadeo > 3000) {
    parpados.moverMotorcillo(90, 200);
    parpados.moverMotorcillo(0, 200);
    ultimoParpadeo = ahora;
  }
}

bool verificarDeteccion() {
  sensorProxIZQ.leer();
  sensorProxDER.leer();
  int distL = sensorProxIZQ.distancia;
  int distR = sensorProxDER.distancia;
  if ((distL > 0 && distL < detectionDistance) || (distR > 0 && distR < detectionDistance)) {
    personaDetectada = true;
    return true;
  }
  return false;
}
