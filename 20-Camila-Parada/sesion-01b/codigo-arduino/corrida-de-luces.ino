int ledCount = 3;
int leds[] = {11, 10, 9};
int currentState[]   = {HIGH, LOW, LOW};
int currentHighLed = 0;

void setup() {
for   (int i = 0; i < ledCount; i++) {
pinMode(leds[i], OUTPUT);
}
}

void   loop() {

for (int i = 0; i < ledCount; i++) {
digitalWrite(leds[i], currentState[i]);
}
currentState[currentHighLed]   = LOW;
currentHighLed++;
if (currentHighLed >= 3) {
currentHighLed = 0;
}
currentState[currentHighLed]   = HIGH;
delay(2000);
}