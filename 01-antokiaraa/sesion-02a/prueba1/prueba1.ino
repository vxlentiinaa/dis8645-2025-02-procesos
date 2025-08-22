void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
randomSeed(analogRead(0)); //inicio numeros aleatorios
}

void loop() {
int filas = 3; //cantidad de filas del patron
int columnas = 5;  // cantidad de columnas del patron
char simbolos[] = {'#', '@', '*', '-'}; // simbolos a usar
int cantidadSimbolos = 5;
for (int f = 0; f < filas; f++) { //recorre cada fila
  for (int c = 0; c < columnas; c++) { //recorre cada columna
    int indice = random(0, cantidadSimbolos); //elige indice aleatorio
    Serial.print(simbolos[indice]); //imprime los simbolos sin salto
    Serial.print(' '); // espacio
}
Serial.println(); //salto de linea

}
Serial.println(); //linea extra para separar un patron de otro
delay(2000); //tiempo de espera entre cada patron

}


