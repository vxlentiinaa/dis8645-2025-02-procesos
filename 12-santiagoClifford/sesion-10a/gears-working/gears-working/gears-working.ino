#include <Servo.h>

Servo motorcilloBlink;
Servo servoSlow;
Servo motorcilloNeck;

int pos = 0;
int direccion = 1;
bool amenaza = false;  // Cambia a true para activar el movimiento del cuello
unsigned long previousBlinkTime = 0;
unsigned long previousNeckTime = 0;
unsigned long previousSlowTime = 0;

// Estados para el parpadeo
int blinkState = 0;
unsigned long blinkInterval = 0;

// Estados para el cuello
int neckState = 0;
unsigned long neckInterval = 0;

void moverMotorcilloBlink() {
  unsigned long currentTime = millis();

  switch (blinkState) {
    case 0:  // Espera inicial de 2 segundos en posición 0
      if (currentTime - previousBlinkTime >= 2000) {
        motorcilloBlink.write(110);
        Serial.println("Parpadeo: Abierto (110°)");
        previousBlinkTime = currentTime;
        blinkState = 1;
      }
      break;

    case 1:  // Mantener abierto por 150ms
      if (currentTime - previousBlinkTime >= 150) {
        motorcilloBlink.write(0);
        Serial.println("Parpadeo: Cerrado (0°)");
        previousBlinkTime = currentTime;
        blinkState = 2;
      }
      break;

    case 2:  // Espera final de 2 segundos en posición 0
      if (currentTime - previousBlinkTime >= 2000) {
        previousBlinkTime = currentTime;
        blinkState = 0;  // Reiniciar ciclo
      }
      break;
  }
}

void moverMotorcilloNeck() {
  if (!amenaza) {
    // Si no hay amenaza, mantener en posición 0 y resetear estado
    if (neckState != 0) {
      motorcilloNeck.write(0);
      neckState = 0;
      previousNeckTime = millis();
    }
    return;
  }

  unsigned long currentTime = millis();

  switch (neckState) {
    case 0:  // Comenzar en 0 grados y esperar 2 segundos
      motorcilloNeck.write(0);
      if (currentTime - previousNeckTime >= 2000) {
        Serial.println("Cuello: Moviendo a 150°");
        neckState = 1;
        previousNeckTime = currentTime;
      }
      break;

    case 1:  // Mover a 150 grados
      motorcilloNeck.write(150);
      neckState = 2;
      break;

    case 2:  // Esperar 2 segundos en 150°
      if (currentTime - previousNeckTime >= 2000) {
        Serial.println("Cuello: Moviendo a 0°");
        neckState = 3;
        previousNeckTime = currentTime;
      }
      break;

    case 3:  // Mover a 0 grados
      motorcilloNeck.write(0);
      neckState = 0;
      break;
  }
}

void slowMo() {
  unsigned long currentTime = millis();

  if (currentTime - previousSlowTime >= 15) {
    servoSlow.write(pos);

    Serial.print("Servo lento: ");
    Serial.println(pos);

    pos += direccion;

    if (pos >= 180) {
      direccion = -1;
      pos = 180;
    }
    if (pos <= 0) {
      direccion = 1;
      pos = 0;
    }

    previousSlowTime = currentTime;
  }
}

void procesarSerial() {
  if (Serial.available() > 0) {
    int angulo = Serial.parseInt();
    if (angulo >= 0 && angulo <= 180) {
      motorcilloNeck.write(angulo);
      Serial.print("Cuello movido a: ");
      Serial.println(angulo);
    }
  }
}

void setup() {
  motorcilloBlink.attach(9);
  servoSlow.attach(10);
  motorcilloNeck.attach(11);

  motorcilloBlink.write(0);
  motorcilloNeck.write(0);
  servoSlow.write(0);

  Serial.begin(9600);
  Serial.println("Sistema iniciado");
  Serial.println("Escribe un número entre 0-180 para mover el cuello");

  // Para probar, puedes activar la amenaza después de 5 segundos
  //delay(5000);
  //amenaza = true;
  //Serial.println("AMENAZA ACTIVADA");
}

void loop() {
  slowMo();
  moverMotorcilloBlink();
  moverMotorcilloNeck();
  procesarSerial();

  // Ejemplo: Activar amenaza con un botón en el pin 2
  // if (digitalRead(2) == HIGH) {
  //   amenaza = true;
  // } else {
  //   amenaza = false;
  // }
}