#include <Servo.h>

Servo motorcilloBlink;
Servo servoSlow;
Servo motorcilloNeck;

// pines para el sensor ultrasonico
const int TRIGGER_PIN = 6;
const int ECHO_PIN = 7;

// distancia máxima en cm para detectar presencia
const int DISTANCIA_MAXIMA = 30;

int pos = 0;
int direccion = 1;

// cambia a true con el sensoor de proximidad
// para activar el movimiento del cuello
bool amenaza = false;
bool presencia = false;

unsigned long previousBlinkTime = 0;
unsigned long previousNeckTime = 0;
unsigned long previousSlowTime = 0;

// estados para el parpadeo
int blinkState = 0;
unsigned long blinkInterval = 0;

// estados para el cuello
int neckState = 0;
unsigned long neckInterval = 0;


// funcion para leer el ultrasonico
// long para obtener el dato "distancia"

long medirDistancia() {
  // el trigger debe iniciar en LOW
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);

  // pulso de 10 microsegundos en el trigger
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  // lee la duración del pulso en el echo
  long duration = pulseIn(ECHO_PIN, HIGH);

  // convertir el tiempo de duracion a distancia en cm
  // (tiempo * velocidad del sonido (343 m/s) / 2)
  // 34300 cm/s / 2 = 17150
  // simplificado es: distancia (cm) = duracion (us) / 58
  // https://proyectoarduino.com/sensor-de-ultrasonidos-medir-distancia-con-arduino/
  long distance = duration / 58;

  return distance;
}

// parpados:

void moverMotorcilloBlink() {
  unsigned long currentTime = millis();

  switch (blinkState) {
    case 0:
      // al inicio espera 2 segundos en posición 0
      if (currentTime - previousBlinkTime >= 2000) {
        motorcilloBlink.write(110);
        Serial.println("Parpadeo: Abierto (110°)");
        previousBlinkTime = currentTime;
        blinkState = 1;
      }
      break;

    case 1:
      // mantener abierto por 150ms
      if (currentTime - previousBlinkTime >= 150) {
        motorcilloBlink.write(0);
        Serial.println("Parpadeo: Cerrado (0°)");
        previousBlinkTime = currentTime;
        blinkState = 2;
      }
      break;

    case 2:
      // al final espera 2 segundos en posición 0
      if (currentTime - previousBlinkTime >= 2000) {
        previousBlinkTime = currentTime;
        blinkState = 0;  // Reiniciar ciclo
      }
      break;
  }
}

// cuello
// condicional y amaneza

void moverMotorcilloNeck() {
  if (!amenaza) {
    // si no hay amenaza, mantiene en posicion 0
    //  y resetear estado
    if (neckState != 0) {
      motorcilloNeck.write(0);
      neckState = 0;
      previousNeckTime = millis();
    }
    return;
  }

  unsigned long currentTime = millis();

  switch (neckState) {
    case 0:
      // comienza en 0 grados y espera 2 segundos
      motorcilloNeck.write(0);
      if (currentTime - previousNeckTime >= 2000) {
        Serial.println("Cuello: Moviendo a 150°");
        neckState = 1;
        previousNeckTime = currentTime;
      }
      break;

    case 1:
      // mueve a 150 grados
      motorcilloNeck.write(150);
      neckState = 2;
      break;

    case 2:
      // espera 2 segundos en 150°
      if (currentTime - previousNeckTime >= 2000) {
        Serial.println("Cuello: Moviendo a 0°");
        neckState = 3;
        previousNeckTime = currentTime;
      }
      break;

    case 3:
      // se mueve a 0 grados
      motorcilloNeck.write(0);
      neckState = 0;
      break;
  }
}

// movimiento continuo

void slowMo() {
  unsigned long currentTime = millis();

  if (currentTime - previousSlowTime >= 15) {
    servoSlow.write(pos);

    // Serial.print("Servo lento: ");
    // Serial.println(pos);

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

void setup() {
  motorcilloBlink.attach(9);
  servoSlow.attach(10);
  motorcilloNeck.attach(11);

  motorcilloBlink.write(0);
  motorcilloNeck.write(0);
  servoSlow.write(0);

  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Serial.begin(9600);
  Serial.println("Sistema iniciado");
}

void loop() {
    // 1. lee el sensor ultrasonico
  long distancia_cm = medirDistancia();
  
  // 2. determinar la presencia y la amenaza
  if (distancia_cm > 0 && distancia_cm < DISTANCIA_MAXIMA) {
    presencia = true;
    Serial.print("Presencia detectada a: ");
    Serial.print(distancia_cm);
    Serial.println(" cm. AMENAZA: ACTIVADA");
  } else {
    presencia = false;
  }

  //  activa la amenaza
  if (presencia == true) {
    amenaza = true;
  } else {
    amenaza = false;
  }

// 3. movimientos
  slowMo();
  moverMotorcilloBlink();
  moverMotorcilloNeck();
}