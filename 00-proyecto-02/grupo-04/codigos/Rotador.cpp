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
    // grabar cuando fue el ultimo movimiento del servo para volver a esperar después
    tiempoUltimoMovimiento = millis();
    // mide distancia
    int distanciaActual = sensor->medirDistanciaCm();
    // Obtiene la distancia anterior de la memoria
    int distanciaAnterior = distanciasFondo[anguloActual];
    // Margen de error
    if (abs(distanciaActual - distanciaAnterior) > umbralDeteccion) {

    // Imprime el estado actual para debugging
    // Serial.print("Angulo: ");
    // Serial.print(anguloActual);
    // Serial.print(" | Distancia: ");
    // Serial.println(distanciaActual);

    Serial.print("!!! ALERTA en angulo: ");
    Serial.print(anguloActual);
    Serial.print(" | Distancia anterior: ");
    Serial.print(distanciaAnterior);
    Serial.print(" | Distancia nueva: ");
    Serial.println(distanciaActual);
    }
    // Sobreescribe la vieja medición con la actual
    distanciasFondo[anguloActual] = distanciaActual;

    // Mueve el servoRadar al siguiente "paso"
    // Si la dirección es derecha...
    if (direccion == 1) { 
      anguloActual += paso;
      // Si la dirección es izquierda...
    } else { 
      anguloActual -= paso;
    }
    servo.write(anguloActual);

    // Logica de dirección del servoRadar
    if (anguloActual >= anguloMax) {
      direccion = 0;
    }
    if (anguloActual <= anguloMin) {
      direccion = 1;
    }
  }
}
