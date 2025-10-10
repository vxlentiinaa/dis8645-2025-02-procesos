int posMax;
int posMin;
int position;
int direction = 1;
int incremento;

#include <Servo.h>
bool amenaza;
// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;

Servo servo;

void setup(){}

void loop(){}

void actualizarServo() {
  servo.write(position);
}

void actualizarPosition() {

  if (!amenaza) {
    position = position + incremento * direction;
    if (position >= posMax) {
      direction = -1;
    }
    if (position <= posMin) {
      direction = 1;
    }
  }
}

void ultrasonicSense(){
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
}