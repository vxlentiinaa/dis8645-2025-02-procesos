#include "Rotador.h"

Rotador::Rotador() {}
Rotador::~Rotador() {}

void Rotador::configurar(SensorUltrasonico* s, Ojos* o) {
  servo.attach(Rotador::patitaServo);
  sensor = s; // Guardamos el sensor que nos pasaron para usarlo después
  ojos = o; // Guardamos el puntero del servo de los ojos

for (int i = 0; i <= 180; i++) {
    distanciasFondo[i] = 400; // Un valor por defecto seguro (lejos)
  }
}



// Funcion principal encargada del barrido del radar y delegar tareas
void Rotador::radar() {
  
    // Obtiene el promedio de las distancias y la guarda
    int distanciaActual = sensor->medirDistanciaCm();
    // Si vamos a la derecha... 
    if (direccion == 1) {
    // Guardamos la distanciaActual en el slot correspondiente al angulo del servo, en el array
     distanciasFondo[anguloActual] = distanciaActual;
    
    // Imprime el estado actual para debugging
    Serial.print("Angulo: ");
    Serial.print(anguloActual);
    Serial.print(" | Distancia: ");
    Serial.println(distanciaActual);

    // Si vamos a la izquieda...
    } else {
    // Delega el analisis de detección
    procesarDeteccion(distanciaActual);
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


// Procesa el/los cono(s) de deteccion, ve el punto medio y reposiciona los ojos
void Rotador::procesarDeteccion(int distanciaActual) {
  // Si la diferencia de las dos mediciones es superior al margen de error deteccion = true
  bool deteccion = (abs(distanciaActual - distanciasFondo[anguloActual]) > umbralDeteccion);

  // If deteccion = true...
  if (deteccion) {
    // If "no estabamos ya siguiendo a usuario" ...
    if (detectandoUsuario == false) {
      // Cambiar el estado de la flag para que luego funcione el bloque siguiente 
      detectandoUsuario = true;
      // Registrar el angulo de inicio de detección
      anguloInicioDeteccion = anguloActual;
      // Debugging
      Serial.print(">>> Comienzo de detección en ángulo: ");
      Serial.println(anguloInicioDeteccion);
    }
  } else { // If deteccion = false, es decir ya no estoy viendo al usuario...
    // If "ya estabamos detectando al usuario"...
    if (detectandoUsuario == true) {
      // Registrar angulo final de detección (el servo va desde 160 a 0, por lo que el ultimo angulo donde estuvo el usuario fue 1 step atrás)
      int anguloFinDeteccion = anguloActual + paso;
      // Calcula el promedio de ambas mediciones para obtener el centro del cono
      int anguloObjetivo = (anguloInicioDeteccion + anguloFinDeteccion) / 2;
      // Debugging
      Serial.print(">>> Fin de detección | Apuntando a: ");
      Serial.println(anguloObjetivo);
      // Envia el valor a la funcion de los ojos
      ojos->apuntar(anguloObjetivo);
      // Resetea la flag para poder detectar a otro usuario
      detectandoUsuario = false;
      // anguloInicioDeteccion = -1;
    }
  }
}
    