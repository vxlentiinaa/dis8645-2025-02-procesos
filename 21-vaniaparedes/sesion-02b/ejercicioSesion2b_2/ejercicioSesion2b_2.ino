
int numEstudiantes = 29;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

for (int i = 0; i < numEstudiantes; i++) {
  Serial.print("estudiante:");
  Serial.print(" ");

  if (i < 10) {
    Serial.print(" ");
  }

  if (i != 13) {
  Serial.print(i);
  }

  Serial.print("\n");
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

}
