#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

// Pines para el módulo MP3
SoftwareSerial mp3Serial(9, 10); // RX, TX del Arduino al TX, RX del Mplayer
DFRobotDFPlayerMini mp3;

const int TRIG_PIN = 11;
const int ECHO_PIN = 12;
long duration;
float distanceCm;

void setup() {
  Serial.begin(9600);
  mp3Serial.begin(9600);

  // Inicializar MP3
  if (!mp3.begin(mp3Serial)) {
    Serial.println("Error al inicializar MP3");
    while(true);
  }
  Serial.println("MP3 listo");
  mp3.volume(30); // Volumen de 0 a 30

  // Configuración del sensor ultrasónico
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // Medir distancia
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distanceCm = duration * 0.0343 / 2;

  // Reproducir audio según distancia
  if (distanceCm < 10) {
    mp3.play(1); // Archivo 001.mp3
  }
  else if (distanceCm < 40) {
    mp3.play(2); // Archivo 002.mp3
  }
  else if (distanceCm < 100) {
    mp3.play(3); // Archivo 003.mp3
  }
  else if (distanceCm < 130) {
    mp3.play(4); // Archivo 004.mp3
  }
  else {
    mp3.play(5); // Archivo 005.mp3
  }

  delay(1000); // Esperar a que se reproduzca el audio
}
