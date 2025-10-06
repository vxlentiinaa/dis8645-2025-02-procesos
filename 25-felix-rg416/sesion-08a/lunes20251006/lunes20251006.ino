
// incluir clase Microfono
#include "constantes.h"
#include "Microfono.h"

// variable temporal para lecturas
unsigned int sample;

unsigned long startMillis;

Microfono izquierdo;
Microfono derecho;

bool imprimir = true;

void setup() {
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
  }
}