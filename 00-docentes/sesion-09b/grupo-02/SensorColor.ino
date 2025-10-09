// // Sensor Reconocimiento de Color Tcs230 - Tcs3200
// // se reconoce el color
// // Color clasificados por R,G,B
// // Se clasifican 4 Colores

// void valoresColores() {
//   int rojoPW = 0;
//   int verdePW = 0;
//   int azulPW = 0;
// }

// void configurarSensorColor() {
//   //definir patita de entrada solo si es necesario
//   pinMode(S0, OUTPUT);
//   pinMode(S1, OUTPUT);
//   pinMode(S2, OUTPUT);
//   pinMode(S3, OUTPUT);
//   pinMode(OE, OUTPUT);

//   // Escala de frecuencia al 20%
//   digitalWrite(S0, HIGH);
//   digitalWrite(S1, LOW);

//   // Activar sensor
//   digitalWrite(OE, LOW);

//   pinMode(salidaSensorOut, INPUT);
// }


// void leerSensorColor() {
//   // Leer valores normalizados
//   rojoPW = leerRojo();
//   delay(100);
//   verdePW = leerVerde();
//   delay(100);
//   azulPW = leerAzul();
//   delay(100);
// }

// void tomarDecisiones() {

//   // ---- Funciones del sensor ----
//   int leerRojo() {
//     digitalWrite(S2, LOW);
//     digitalWrite(S3, LOW);
//     int valor = pulseIn(salidaSensorOut, LOW);
//     return normalizar(valor, 2000);
//   }

//   int leerVerde() {
//     digitalWrite(S2, HIGH);
//     digitalWrite(S3, HIGH);
//     int valor = pulseIn(salidaSensorOut, LOW);
//     return normalizar(valor, 2000);
//   }

//   int leerAzul() {
//     digitalWrite(S2, LOW);
//     digitalWrite(S3, HIGH);
//     int valor = pulseIn(salidaSensorOut, LOW);
//     return normalizar(valor, 2000);
//   }
// }
