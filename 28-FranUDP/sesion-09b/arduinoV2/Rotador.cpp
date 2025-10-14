#include "Rotador.h"

Rotador::Rotador() {}
Rotador::~Rotador() {}

void Rotador::configurar(SensorUltrasonico* s) {
  servo.attach(Rotador::patitaServo);
  sensor = s; // Guardamos el sensor que nos pasaron para usarlo después

for (int i = 0; i <= 180; i++) {
    distanciasFondo[i] = 400; // Un valor por defecto seguro (lejos)
  }
}



// Funcion escrita por Aaron Montoya
void Rotador::rotar() {
  // Mover a la derecha
  for (int nuevaPos = Rotador::anguloActual; nuevaPos < Rotador::anguloMax; nuevaPos += paso) {
    Rotador::servo.write(nuevaPos);
    delay(deltaTiempo);
  }
  // mover a la izquierda
  for (int nuevaPos = Rotador::anguloActual; nuevaPos > Rotador::anguloMin; nuevaPos -= paso) {
    Rotador::servo.write(nuevaPos);
    delay(deltaTiempo);
  }
}



void Rotador::radar() {
  // Esperar que el servoRadar termine de moverse
  if (millis() - tiempoUltimoMovimiento >= deltaTiempo) {
    // Grabar cuando fue el ultimo movimiento del servo para volver a esperar después
    tiempoUltimoMovimiento = millis();
    // Mide distancia
    int distanciaActual = sensor->medirDistanciaCm();
    // Si vamos a la derecha guardamos la medición
    if (direccion == 1) {
    // Guarad la medición en la memoria
     distanciasFondo[anguloActual] = distanciaActual;
    
    // Imprime el estado actual para debugging
    Serial.print("Angulo: ");
    Serial.print(anguloActual);
    Serial.print(" | Distancia: ");
    Serial.println(distanciaActual);

    // Si vamos a la izquieda medimos y comparamos
    } else {
    // Recupera la medición anterior de la memoria
    int distanciaAnterior = distanciasFondo[anguloActual];
    // Compara
    if (abs(distanciaActual - distanciaAnterior) > umbralDeteccion) {
      
    // Movimiento detectado
    Serial.print("!!! ALERTA en angulo: ");
    Serial.println(anguloActual);
       }
    }

    // Comprobar si estamos en un extremo, para ir en la otra dirección
    // Si estamos en el angulo maximo (derecha), ir a la izquierda
    if (anguloActual >= anguloMax) {
      direccion = 0; 
    }
    // Si estamos en el anulo minimo (izquierda), cambiar dirección a la derecha
    if (anguloActual <= anguloMin) {
      direccion = 1; 
    }

    // Dependiendo de la dirección aumenta o reduce el angulo del servo
    if (direccion == 1) {
      anguloActual += paso;
    } else {
      anguloActual -= paso;
    }
    servo.write(anguloActual);
    
  }
}
    