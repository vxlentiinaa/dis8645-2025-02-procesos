// Configura el reproductor mp3 para que se reproduzca un audio según distancia 

// https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?srsltid=AfmBOopL-JNXbhZUQAZjU4lOVnkwr3vU4HwQ6EinS_xF3GfVWr-qJnuh

// Iniciar comunicación serial
void setup() {
  Serial.begin(9600);
}

void loop() {
  int distancia = 40; // Valor de ejemplo, luego se reemplaza con el sensor

// Respuesta según la distancia
  responderSegunDistancia(distancia);

  delay(5000); // 5 segundos de demora

// Función simple para dar respuestas según la distancia
void responderSegunDistancia(int distancia) {

  if (distancia=x) {
    Serial.println("Hola humano, ¿por qué estás tan lejos?");
    // Aquí se reproduciría: 0001.mp3
  }
  else if (distancia=x) {
    Serial.println("Acércate más para contarte un dato freak");
    // Aquí se reproduciría: 0002.mp3
  }
  else if (distancia=30) {
    Serial.println("¿Sabías que......?");
    // Aquí se reproduciría: 0003.mp3
  }
}
