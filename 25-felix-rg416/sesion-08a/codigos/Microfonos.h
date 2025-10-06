// la idea es crear una clase para que controle los micrófonos

// berma para proteger el codigo
#ifndef MICROFONOS_H
#define MICROFONOS_H

// "esta es la clase 'Microfono'"
// "class Microfono {" es un molde de galletas
class Persona {
public:

// este es el metodo "Microfono();"
// nos sirve para hacer las galletas
Microfono(bool vida);

// este es el destructor
~Microfono();

};

const int sampleWindow = 50;   // ventana de muestreo en ms
const int MIC1 = A0;       // micrófono 1 -> A0
const int MIC2 = A1;       // micrófono 2 -> A1
unsigned int sample;           // variable temporal para lecturas

void setup()
{
  Serial.begin(9600);          // inicia monitor serial
}

void loop()
{
  unsigned long startMillis = millis(); // inicio de la ventana
  unsigned int peakToPeak1 = 0;         // amplitud pico-pico mic1
  unsigned int peakToPeak2 = 0;         // amplitud pico-pico mic2

  unsigned int signalMax1 = 0;          // max detectado mic1
  unsigned int signalMin1 = 1024;       // min detectado mic1
  unsigned int signalMax2 = 0;          // max detectado mic2
  unsigned int signalMin2 = 1024;       // min detectado mic2

  // recolecta datos durante sampleWindow
  while (millis() - startMillis < sampleWindow)
  {
    // lee ambos micrófonos (se leen secuencialmente; en Arduino UNO el ADC es multiplexado)
    sample = analogRead(MIC1);
    if (sample < 1024)
    {
      if (sample > signalMax1) signalMax1 = sample;
      if (sample < signalMin1) signalMin1 = sample;
    }

    sample = analogRead(MIC2);
    if (sample < 1024)
    {
      if (sample > signalMax2) signalMax2 = sample;
      if (sample < signalMin2) signalMin2 = sample;
    }
  }

  // calcula pico-pico para cada micrófono
  peakToPeak1 = signalMax1 - signalMin1;
  peakToPeak2 = signalMax2 - signalMin2;

  // imprime en serial: formato legible y también CSV opcional
  Serial.print("mic1: ");
  Serial.print(peakToPeak1);
  Serial.print("  mic2: ");
  Serial.println(peakToPeak2);

  // Si quieres formato CSV para graficar: descomenta la línea siguiente
  // Serial.print(peakToPeak1); Serial.print(","); Serial.println(peakToPeak2);

  // Conversión a voltios (si usas 5V como referencia):
  // double volts1 = (peakToPeak1 * 5.0) / 1024.0;
  // double volts2 = (peakToPeak2 * 5.0) / 1024.0;
  // Serial.print("V1: "); Serial.print(volts1); Serial.print(" V, V2: "); Serial.println(volts2);
}

// se cierra la berma
#endif