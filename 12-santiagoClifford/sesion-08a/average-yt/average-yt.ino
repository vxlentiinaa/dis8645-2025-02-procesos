 //<https://www.youtube.com/watch?v=dPvD5F2oq-A>

const int analogPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(10);
}

void loop() {
  int avg[10] = { 0 };
  int i = 0;
  // put your main code here, to run repeatedly:
  unsigned int analaogVal = 0;
  unsigned int curAvg = 0;
  for (i = 0; i < 10; i++) {
    avg[i] = analogRead(analogPin);
    delayMicroseconds(200);
  }
  long wholeSum = 0;
  for (i = 0; i < 10; i++) {
    wholeSum += avg[i];
  }
  curAvg = wholeSum / 10;
  //analogVal = analogRead(analogPin);
  Serial.println(curAvg);
  delay(1000);
}
