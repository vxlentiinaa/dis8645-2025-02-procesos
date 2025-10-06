# sesion-08a
30/09

## Clase

Nos juntamos con nuestro grupo de trabajo para avanzar en el proyecto 2. Ese día, organizamos nuestras actividades dividiendo las tareas entre los integrantes, de manera que cada uno pudiera enfocarse en un aspecto específico del proyecto. Con Sofía nos encargamos de calibrar los micrófonos para que pudieran captar correctamente las señales de sonido, pero nos encontramos con que no funcionaron como esperábamos, ya que el codigo tenia mucho delay y no podiamos identificar bien que sonidos estaba captando, moviendo los potenciometros tampoco logramos llegar a una solución ya que nos marcaba 512 o 1023. Mientras tanto, mis compañeros se dedicaron a desarrollar un prototipo visual que mostrara cómo se vería el ojo y el párpado en funcionamiento, simulando el movimiento que queremos lograr con los servomotores.

Al final del día, volvimos a repartir las tareas para avanzar de manera más eficiente. Félix y Santiago se encargarían de la impresión 3D de los ojos y del desarrollo del funcionamiento de los servomotores, mientras que Sofía y yo nos ocuparíamos de trabajar en el código de los micrófonos. Nuestro objetivo era lograr que los micrófonos pudieran leer la amplitud del sonido en tiempo real y, de esta manera, poder integrar esta información con el movimiento del prototipo, conectando las dos partes del proyecto.

- Codigo que usamos ese dia en clases y no funciono

```cpp 
// Calibracion y mapeo de 2 mic MAX4466 a rango 512..1023
#include <Arduino.h>

const int micPin1 = A0;
const int micPin2 = A1;
const int NUM_SAMPLES = 1000; // aumentar para más estabilidad
const int VIRTUAL_PEAK = 511; // queremos que el delta llegue hasta 511 (512..1023)
const int ADC_MIN_OUT = 512;
const int ADC_MAX_OUT = 1023;

float mean1 = 512.0;
float mean2 = 512.0;
float scale1 = 1.0;
float scale2 = 1.0;

void setup() {
  Serial.begin(115200);
  while (!Serial) {}
  Serial.println("Calibracion y mapeo mic MAX4466 -> rango 512..1023");
  delay(300);
  calibrateOffsets();     // medir offset en silencio
  calibrateScales();      // medir RMS con señal de prueba para definir escala
  Serial.println("Calibracion completada. Entradas en tiempo real a continuacion.");
}

void loop() {
  // lectura en tiempo real y mapeo
  int raw1 = analogRead(micPin1);
  int raw2 = analogRead(micPin2);

  float centered1 = raw1 - mean1; // puede ser + o -
  float centered2 = raw2 - mean2;

  // aplicar escala (solo amplifica)
  float scaled1 = centered1 * scale1;
  float scaled2 = centered2 * scale2;

  // mapear a la mitad superior: 512 + scaled, y recortar entre 512..1023
  int out1 = (int)round(ADC_MIN_OUT + scaled1);
  int out2 = (int)round(ADC_MIN_OUT + scaled2);

  if (out1 < ADC_MIN_OUT) out1 = ADC_MIN_OUT;
  if (out1 > ADC_MAX_OUT) out1 = ADC_MAX_OUT;
  if (out2 < ADC_MIN_OUT) out2 = ADC_MIN_OUT;
  if (out2 > ADC_MAX_OUT) out2 = ADC_MAX_OUT;

  // imprime para verificación
  Serial.print("raw1:"); Serial.print(raw1);
  Serial.print(" mean1:"); Serial.print(mean1,2);
  Serial.print(" out1:"); Serial.print(out1);

  Serial.print("  ||  raw2:"); Serial.print(raw2);
  Serial.print(" mean2:"); Serial.print(mean2,2);
  Serial.print(" out2:"); Serial.println(out2);

  delay(10); // 100 Hz aprox. ajustar según necesidad
}

void calibrateOffsets() {
  Serial.println("Midiendo offsets en silencio... mantén silencio ahora.");
  delay(2000);
  long sum1 = 0, sum2 = 0;
  for (int i = 0; i < NUM_SAMPLES; i++) {
    sum1 += analogRead(micPin1);
    sum2 += analogRead(micPin2);
  }
  mean1 = (float)sum1 / NUM_SAMPLES;
  mean2 = (float)sum2 / NUM_SAMPLES;
  Serial.print("Offset medido mic1: "); Serial.println(mean1, 3);
  Serial.print("Offset medido mic2: "); Serial.println(mean2, 3);
}

void calibrateScales() {
  Serial.println("Ahora reproduce un tono constante (p. ej. 1 kHz) al volumen que usaras.");
  Serial.println("Esperando 3 segundos...");
  delay(3000);

  // calcular RMS de la señal (después de remover offset)
  double sumsq1 = 0, sumsq2 = 0;
  for (int i = 0; i < NUM_SAMPLES; i++) {
    int r1 = analogRead(micPin1);
    int r2 = analogRead(micPin2);
    float a1 = r1 - mean1;
    float a2 = r2 - mean2;
    sumsq1 += (double)a1 * a1;
    sumsq2 += (double)a2 * a2;
  }
  double rms1 = sqrt(sumsq1 / NUM_SAMPLES);
  double rms2 = sqrt(sumsq2 / NUM_SAMPLES);

  Serial.print("RMS (ADC) mic1: "); Serial.println(rms1, 4);
  Serial.print("RMS (ADC) mic2: "); Serial.println(rms2, 4);

  // Queremos que la amplitud RMS (representativa del pico) utilice la mitad superior.
  // Usamos VIRTUAL_PEAK como delta objetivo (puedes reducir si saturas).
  // scale = VIRTUAL_PEAK / rms
  if (rms1 < 0.0001) scale1 = 1.0; else scale1 = (float)(VIRTUAL_PEAK / rms1);
  if (rms2 < 0.0001) scale2 = 1.0; else scale2 = (float)(VIRTUAL_PEAK / rms2);

  // Limitar escala para evitar amplificaciones absurdas
  const float MAX_SCALE = 10.0;
  if (scale1 > MAX_SCALE) scale1 = MAX_SCALE;
  if (scale2 > MAX_SCALE) scale2 = MAX_SCALE;

  Serial.print("Scale mic1: "); Serial.println(scale1, 6);
  Serial.print("Scale mic2: "); Serial.println(scale2, 6);

  Serial.println("Si saturan (valores 1023 frecuentes), reduce VIRTUAL_PEAK o baja ganancia hardware.");
}
```

## Investigación en la casa

En mi casa me dediqué a buscar referentes para avanzar en el desarrollo del código, ya que me sentía un poco perdida y con ciertas complicaciones al enfrentarme al proyecto. Primero, comencé explorando repositorios en GitHub, revisando proyectos similares para entender cómo otros habían abordado problemas parecidos y cuáles eran las estructuras de código más utilizadas. Esto me ayudó a tener una base sobre cómo organizar mis propias funciones y métodos, y a identificar buenas prácticas que podía aplicar.

- https://github.com/knappologi/arduino-sound-sensor-with-wifi
Proyecto que utiliza Arduino Uno, ESP8266-01 y un micrófono MAX4466 para capturar y enviar datos de nivel de sonido a través de WiFi.

- https://github.com/DHDPIC/DATA_WALKING/tree/master/TOOLS/PROCESSING
Este proyecto de investigación utiliza el micrófono electret MAX4466 para recopilar datos de amplitud de sonido durante caminatas en el área de North Greenwich.


Después, amplié mi búsqueda a páginas, donde encontré explicaciones más detalladas sobre cómo trabajar con micrófonos.

- https://www.makerguides.com/detect-sound-with-max4466-and-arduino/
Este tutorial es para quienes están comenzando con el MAX4466 y Arduino. Proporciona una guía paso a paso.

- https://circuitdigest.com/microcontroller-projects/interfacing-max4466-microphone-amplifier-module-with-arduino
Este artículo es para profundizar en la comprensión técnica del MAX4466 y su integración con Arduino.

Por último, realicé algunas pruebas con ChatGPT, planteando mis dudas y pidiendo ejemplos prácticos que pudiera adaptar a mi proyecto. Gracias a estas pruebas, logré entender mejor cómo estructurar el código y cómo conectar las distintas partes del sistema para que funcionaran de manera conjunta. Esta combinación de referentes y experimentación me permitió avanzar con mayor seguridad en el desarrollo del proyecto.

- Codigo simple para calibrar microfono

```cpp
// Calibración de micrófono MAX4466
const int micPin = A0; // Pin analógico donde está conectado el micrófono
const int sampleCount = 500; // Número de lecturas para promediar

void setup() {
  Serial.begin(9600);
  Serial.println("Calibración de micrófono MAX4466");
  Serial.println("Silencio absoluto... leyendo valores mínimos");
}

void loop() {
  static bool calibrating = true;
  static int minValue = 1023;
  static int maxValue = 0;

  if (calibrating) {
    // Leer múltiples muestras para estabilidad
    for (int i = 0; i < sampleCount; i++) {
      int reading = analogRead(micPin);
      if (reading < minValue) minValue = reading;
      if (reading > maxValue) maxValue = reading;
      delay(2); // pequeña pausa entre lecturas
    }

    Serial.print("Valor mínimo detectado (silencio): ");
    Serial.println(minValue);
    Serial.print("Valor máximo detectado (sonido fuerte): ");
    Serial.println(maxValue);

    Serial.println("¡Calibración completa!");
    calibrating = false;
  }

  // Una vez calibrado, puedes leer y normalizar valores si quieres
  int micValue = analogRead(micPin);
  int normalized = map(micValue, minValue, maxValue, 0, 1023); // Normaliza a rango 0-1023
  normalized = constrain(normalized, 0, 1023); // asegurar que no se salga del rango

  Serial.print("Lectura cruda: ");
  Serial.print(micValue);
  Serial.print(" | Normalizada: ");
  Serial.println(normalized);

  delay(50); // pequeña pausa
}

```

- Codigo para medir amplitud

```cpp
// Medición de amplitud del micrófono MAX4466
const int micPin = A0;   // Pin donde está conectado el micrófono
const int numSamples = 100; // Número de lecturas para promediar

void setup() {
  Serial.begin(9600);
}

void loop() {
  int maxReading = 512; // valor mínimo del micrófono
  int minReading = 512; // valor mínimo del micrófono

  // Tomamos varias muestras para medir la amplitud
  for (int i = 0; i < numSamples; i++) {
    int reading = analogRead(micPin);
    if (reading > maxReading) maxReading = reading;
    if (reading < minReading) minReading = reading;
  }

  // La amplitud es la diferencia entre máximo y mínimo
  int amplitude = maxReading - 512; // ya que 512 = silencio
  if (amplitude < 0) amplitude = 0; // evitar negativos
  if (amplitude > 511) amplitude = 511; // limitar a 511, máximo rango

  // Normalizamos para que el rango sea 512..1023
  int normalized = 512 + amplitude;

  Serial.print("Amplitud cruda: ");
  Serial.print(amplitude);
  Serial.print(" | Amplitud normalizada (512-1023): ");
  Serial.println(normalized);

  delay(50); // pausa corta para estabilidad
}
```
