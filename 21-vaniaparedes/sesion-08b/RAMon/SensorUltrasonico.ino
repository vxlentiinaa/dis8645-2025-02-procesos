//SENSOR ULTRASÓNICO
const int TRIG_PIN = 11;   // Pin digital 11 para el Trigger del sensor
const int ECHO_PIN = 12;   // Pin digital 12 para el Echo del sensor

// definir la distancia minima de 2 a 10 cm
// definir distancia media de 40 a 60 cm
// definir la distancia maxima de 80 a 100 cm
// Tiempo de reposo cuando no siente presencia 

long duration;
float distanceCm;

// Configurar pines del sensor ultrasonico
void configurarSensorUltrasonico() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

// Medir la distancia y devolverla
float medirDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Leer la duración del pulso de retorno
  duration = pulseIn(ECHO_PIN, HIGH);
  // Calcular la distancia en cm (velocidad del sonido = 343 m/s)
  distanceCm = duration * 0.0343 / 2;

  // Mostrar distancia medida en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  return distanceCm;
}

// Mostrar mensajes según la distancia
  // && = dos condiciones se cumplan al mismo tiempo.
  // quiere decir que si las dos condiciones que de se cumple lo que sea que pida
  // o sea, si la distancia está entre 2 y 10 cm, el mensaje se muestra.
void mostrarMensaje(float distancia) {
  if (distancia >= 2 && distancia <= 10) {
    Serial.println("no se lo digas a nadie… pero me da miedo el WiFi.");
  }
  // si la distancia está entre 40 y 60 cm, el mensaje se muestra.
  else if (distancia >= 40 && distancia <= 60) {
    Serial.println("ACERCATE MAS");
  }
  // si la distancia está entre 80 y 100 cm, el mensaje se muestra.
  else if (distancia >= 80 && distancia <= 100) {
    Serial.println("HOLA HUMANO VEN");
  }
  // si no está en ninguno de los rangos anteriores
  else {
    Serial.println("ZZZ...");
  }
}