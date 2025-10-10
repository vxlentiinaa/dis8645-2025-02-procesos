
// incluir clase Microfono
#include "constantes.h"
#include "Microfono.h"
#include "Cuello.h"
#include "Parpados.h"


// variable temporal para lecturas
unsigned int sample;

unsigned long startMillis;

int angleCrazy;

Microfono izquierdo;
Microfono derecho;

Cuello cuello;
Parpados parpados;

bool imprimir = true;

void setup() {

  cuello.configurar();
  parpados.configurar();

  // inicia monitor serial
  Serial.begin(9600);

  // configurar patitas
  izquierdo.configurarPatita(patitaMicIzquierdo);
  derecho.configurarPatita(patitaMicDerecho);
}

void loop() {
  // inicio de la ventana
  startMillis = millis();

  // recolecta datos durante sampleWindow
  while (millis() - startMillis < sampleWindow) {

    // leer micrófonos
    // se leen secuencialmente
    // en Arduino UNO el ADC es multiplexado

    izquierdo.leer();
    izquierdo.actualizarMinMax();

    derecho.leer();
    derecho.actualizarMinMax();

    izquierdo.actualizarPeakToPeak();
    derecho.actualizarPeakToPeak();

    if (imprimir) {
      Serial.print("izquierdo ");
      izquierdo.imprimirEnConsola();
      Serial.print(", ");
      Serial.print("derecho ");
      derecho.imprimirEnConsola();
      Serial.print("\n");
    }

    // // Conversión a voltios (si usas 5V como referencia):
    // // double volts1 = (peakToPeak1 * 5.0) / 1024.0;
    // // double volts2 = (peakToPeak2 * 5.0) / 1024.0;
    // // Serial.print("V1: "); Serial.print(volts1); Serial.print(" V, V2: "); Serial.println(volts2);
    if a
    cuello.moverMotorcillo(angleCrazy, 10);
    angleCrazy++;


    // cuello.moverMotorcillo(22, 100);
    // cuello.moverMotorcillo(45,100);
    // cuello.moverMotorcillo(77,100);
    // cuello.moverMotorcillo(90, 100);
    // cuello.moverMotorcillo(112, 100);
    // cuello.moverMotorcillo(135, 100);
    // cuello.moverMotorcillo(157, 100);
    // cuello.moverMotorcillo(180, 100);


    /*parpados.moverMotorcillo(0, 200);
      parpados.moverMotorcillo(70, 200);
      parpados.moverMotorcillo(0, 200);
      parpados.moverMotorcillo(70, 200);*/
  }
}