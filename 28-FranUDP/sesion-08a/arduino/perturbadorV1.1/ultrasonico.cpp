// ultrasonico.cpp

#include <Arduino.h>
#include "ultrasonico.h" 


void ultrasonico(NewPing & sonar) { // It receives a sensor object and calls it "sonar" internally.
  delay(50);
  Serial.print("Ping: ");
  // It uses the "sonar" object that was passed into it. This fixes the "'sonar' was not declared" error.
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
}