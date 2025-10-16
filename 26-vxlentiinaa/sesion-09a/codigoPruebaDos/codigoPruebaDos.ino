
#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

// definir los pines de la pantalla
SoftwareSerial mp3Serial(9, 10);
DFRobotDFPlayerMini mp3;

const int TRIG_PIN = 11; // Pin TRIG del sensor
const int ECHO_PIN = 12; // Pin ECHO del sensor
long duracion;
float distanciaCm;

void setup() {
  Serial.begin(9600);
  mp3Serial.begin(9600);

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
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Leer la duración del pulso de retorno
  duracion = pulseIn(ECHO_PIN, HIGH);
  
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  distanciaCm = duracion * 0.0343 / 2;

  // Reproducir audio según la distancia
  if (distanciaCm < 10) {
    mp3.play(1); // archivo 0001.mp3
  }
  else if (distanciaCm < 40) {
    mp3.play(2); // archivo 0002.mp3
  }
  else if (distanciaCm < 100) {
    mp3.play(3); // archivo 0003.mp3
  }

    delay(6000); } // tiempo de espera antes de reproducir
