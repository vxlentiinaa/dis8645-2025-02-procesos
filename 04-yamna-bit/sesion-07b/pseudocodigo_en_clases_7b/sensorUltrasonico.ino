// Borrador base para el sensor ultrasónico

// https://afel.cl/products/sensor-de-ultrasonico-hc-sr04

// Lo primero es definir los pines del sensor

#define TRIG_PIN 9  // salida de onda
#define ECHO_PIN 10 // entrada devuelta de onda

// Variables para las distancias

int disMinima = 10;   // 2–10 cm
int disMedia  = 50;   // 45–60 cm
int disMaxima = 80;   // 60–80 cm

// Iniciar comunicación serial y configurar sensor
void setup() {
  Serial.begin(9600);

  configurarSensorUltrasonico(); // Configuración de pines
}

// Tiempo de demora
void loop() {

  delay(7000); // Son 7 segundos de demora
}

// Configurar el sensor por definir

void configurarSensorUltrasonico() {

  // Definir los pines como salida o entrada
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Mensaje de confirmación
  Serial.println("Hola");
}

