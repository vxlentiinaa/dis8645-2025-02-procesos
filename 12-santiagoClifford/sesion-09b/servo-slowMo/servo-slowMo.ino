/*
// Incluímos la librería para poder controlar el servo
#include <Servo.h>
bool threatDetected;
// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;

// Declaramos la variable para controlar el servo
Servo servoMotor;

void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(5);
  // Inicializamos al ángulo 0 el servomotor
  servoMotor.write(0);

  pinMode(trigPin, OUTPUT);  // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);   // Sets the echoPin as an Input
}

void loop() {
  // Vamos a tener dos bucles uno para mover en sentido positivo y otro en sentido negativo
  // Para el sentido positivo
  for (int i = 0; i <= 180; i++) {
    ultrasonicLoop();

    if (threatDetected) {
      break;
      ultrasonicLoop();
    } else
      // Desplazamos al ángulo correspondiente
      servoMotor.write(i);
    // Hacemos una pausa de 25ms
    delay(25);
  }

  // Para el sentido negativo
  for (int i = 179; i > 0; i--) {
    ultrasonicLoop();

    // Desplazamos al ángulo correspondiente
    servoMotor.write(i);
    // Hacemos una pausa de 25ms
    delay(25);
  }
}

void ultrasonicLoop() {
    // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
    // Calculating the distance
    distance = duration * 0.034 / 2;
    // Prints the distance on the Serial Monitor
    //Serial.print("Distance: ");
    //Serial.println(distance);
  delay(600);
  if (distance < 16) {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("ALEJATEEEE");
    threatDetected;
  } else if (distance > 15) {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("acercate uwu");
    threatDetected=false;
  }
}
*/