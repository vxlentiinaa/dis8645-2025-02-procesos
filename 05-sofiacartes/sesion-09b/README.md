# sesion-09b 10/10

## Trabajo en clases

- r   ~ 9 res 1k
- 100k o+ gnd
- transistor
- 255 máximo motor
- cuando reconozca reproduz
  
### Datasheet e informaciones relevantes para utilizar los componentes

Datasheet y página motor vibrador joystick

<https://www.digikey.com/en/products/detail/vybronics-inc/VJQ24-35K270B/7732324>

<chrome-extension://efaidnbmnnnibpcajpcglclefindmkaj/https://www.mouser.com/datasheet/2/321/28822-Vibration-Motor-Capsule-Documentation-370386.pdf?srsltid=AfmBOopCm5vTXsDBh9L5Jpoopf-v8sNSxtuI31pFvqmlfscw5TyvyKIX&utm_source=chatgpt.com>

prueba en clases

```cpp
int pinMotor = 9;
int intensidad = 0;

void setup(){
  pinMode(pinMotor, OUTPUT);
}

void loop(){

  intensidad = intensidad + 1;
  analogWrite(pinMotor, intensidad);

  if (intensidad >= 255){
    intensidad = 0;
  }
  delay(10);
}
```

Datasheet sensor de proximidad HCSR04

<https://www.alldatasheet.com/datasheet-pdf/view/1132204/ETC2/HCSR04.html>

servomotor

 <https://www.alldatasheet.es/datasheet-pdf/view/1572383/ETC/SG90.html>

calculador de resistencias

 <https://www.digikey.com/es/resources/conversion-calculators/conversion-calculator-resistor-color-code>

### código trabajado las últimas clases

```cpp
#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

#if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))   // Para placas tipo UNO o ESP8266
#include <SoftwareSerial.h>
SoftwareSerial mp3Serial(4, 5); // RX, TX
#define MP3_SERIAL mp3Serial
#else
#define MP3_SERIAL Serial1
#endif

DFRobotDFPlayerMini mp3Player;

// Inicializar el reproductor MP3
void configurarMP3() {
  MP3_SERIAL.begin(9600);
  Serial.println(F("Inicializando DFPlayer..."));

  if (!mp3Player.begin(MP3_SERIAL, true, true)) {
    Serial.println(F("⚠️ Error: No se pudo iniciar el DFPlayer."));
    Serial.println(F("1. Revisa las conexiones (RX/TX)."));
    Serial.println(F("2. Asegúrate de que la SD esté insertada."));
    while (true) { delay(100); }
  }

  Serial.println(F("🎶 DFPlayer Mini listo."));
  mp3Player.volume(25); // volumen 0–30
}

// Reproducir audio según distancia medida
void reproducirAudioPorDistancia(float distancia) {
  static int ultimoAudio = 0; // evita repetir el mismo audio constantemente

  if (distancia >= 2 && distancia <= 18) {
    // Rango corto: audios 3–8
    int audio = random(3, 8); // random entre 3 y 8 (el límite superior no se incluye)
    if (audio != ultimoAudio) {
      mp3Player.play(audio);
      Serial.print("Reproduciendo datos");
      Serial.println(audio);
      ultimoAudio = audio;
    }
  } 
  else if (distancia >= 40 && distancia <= 60) {
    // Rango medio: audio 2
    if (ultimoAudio != 2) {
      mp3Player.play(2);
      Serial.println("Reproduciendo audio 2");
      ultimoAudio = 2;
    }
  } 
  else if (distancia >= 80 && distancia <= 100) {
    // Rango largo: audio 1
    if (ultimoAudio != 1) {
      mp3Player.play(1);
      Serial.println("Reproduciendo audio 1");
      ultimoAudio = 1;
    }
  } 
  else {
    ultimoAudio = 0; // fuera de rango: reinicia estado
  }
}
//ARCHIVO PRINCIPAL

void setup() {
  configurarSensorUltrasonico(); // inicializar sensor ultrasónico
  configurarServo(); // inicializar servo motor (dedo)
  configurarMP3();  // inicializar el MP3
}

void loop() {
  float distancia = medirDistancia(); // leer sensor ultrasonico
  mostrarMensaje(distancia);  // mostrar mensaje de acuerdo a la distancia
  reproducirAudioPorDistancia(distancia); // reproducir según rango

 // Control del servo según la distancia
  // si la distancia está entre 2 y 10 cm, se levanta el dedo.
  if (distancia >= 2 && distancia <= 10) {
    levantarDedo();
  } else {
    bajarDedo();
  }

  delay(500); // pausa para estabilidad
}
#include <Servo.h>

Servo dedo;// Crear objeto servo
const int SERVO_PIN = 13;

// Configurar servo motor
void configurarServo() {
  dedo.attach(SERVO_PIN);
  dedo.write(0); // posición inicial 0°
}

// Levantar dedo
void levantarDedo() {
  dedo.write(180);
}

// Bajar dedo
void bajarDedo() {
  dedo.write(0);
}
//SENSOR ULTRASÓNICO
const int TRIG_PIN = 11;   // Pin digital 11 para el Trigger del sensor
const int ECHO_PIN = 12;   // Pin digital 12 para el Echo del sensor

// definir la distancia minima de 2 a 10 cm
// definir distancia media de 40 a 60 cm
// definir la distancia maxima de 80 a 100 cm
// Tiempo de reposo cuando no siente presencia 

long duration;
float distanceCm;

// Configurar pines del sensor ultrasonico
void configurarSensorUltrasonico() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

// Medir la distancia y devolverla
float medirDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Leer la duración del pulso de retorno
  duration = pulseIn(ECHO_PIN, HIGH);
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  distanceCm = duration * 0.0343 / 2;

  // Mostrar distancia medida en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  return distanceCm;
}

// Mostrar mensajes según la distancia
  // && = dos condiciones se cumplan al mismo tiempo.
  // quiere decir que si las dos condiciones que de se cumple lo que sea que pida
  // o sea, si la distancia está entre 2 y 10 cm, el mensaje se muestra.
void mostrarMensaje(float distancia) {
  if (distancia >= 2 && distancia <= 10) {
    Serial.println("no se lo digas a nadie… pero me da miedo el WiFi.");
  }
  // si la distancia está entre 40 y 60 cm, el mensaje se muestra.
  else if (distancia >= 40 && distancia <= 60) {
    Serial.println("ACERCATE MAS");
  }
  // si la distancia está entre 80 y 100 cm, el mensaje se muestra.
  else if (distancia >= 80 && distancia <= 100) {
    Serial.println("HOLA HUMANO VEN");
  }
  // si no está en ninguno de los rangos anteriores
  else {
    Serial.println("ZZZ...");
  }
}
```
