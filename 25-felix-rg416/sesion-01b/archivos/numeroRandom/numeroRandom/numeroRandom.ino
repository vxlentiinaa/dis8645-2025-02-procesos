// RULETA DE NÚMEROS

// Al conectar la placa o resetear el código, 
// aparece un número aleatorio del 0 al 10 en el Monitor Serial

// Designar una variable con el nombre "numeroRandom"
int numeroRandom;

void setup() {
// Llamar al Serial Monitor
  Serial.begin(9600);
}

void loop() {

// Hacer que, al llamar a "numeroRandom", se corra la función "random(10)"
// lo cual lanza un número al azar entre el 0 y el 10
  numeroRandom = random(10);

// Muestra en el monitor serial el número random lanzado por
// "numeroRandom = random(10)"
  Serial.print(numeroRandom);

// tiempo entre números lanzados
  delay(2000);
}
