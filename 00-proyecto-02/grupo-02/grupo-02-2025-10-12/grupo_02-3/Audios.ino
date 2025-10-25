// Si se identifica un color se reproduce el audio correspondiente a ese color

//#include "Arduino.h"
//#include "DFRobotDFPlayerMini.h"
//#include "SoftwareSerial.h"

//DFRobotDFPlayerMini myDFPlayer;

//int readColor = 0;  
// int provisorio pero se debe ligar a sensor de color
//int colorDetectado = 0;

//bool reproduciendo = false;
//varía para reproducir o no
//empieza en no
//unsigned long tiempoInicioReproduccion = 0;
//const unsigned long duracionReproduccion = 15000; 
// declara cuanto dura el audio más largo 15 segundos
// pone el 0 como inicio y 15 como final

//void setup() {
 // Serial1.begin(9600);
 // Serial.begin(115200);

 // if (!myDFPlayer.begin(Serial1, true, true)) {
  //  Serial.println("Error al iniciar DFPlayer");
    //avisa si no inicia
  //}

  //myDFPlayer.volume(12);
  //volumen máximo 30
//}

//void loop() {
  //readColor = obtenerColor();
  //obtenerColor() corresponde a la función del sensor de color

  //if (!reproduciendo && readColor != 0 && readColor != colorDetectado) {
    //si no se está reproduciendo y el color leído no es 0 y readColor no es el colorDetectado
    //esencialmente si el sensor no tiene una lectura válida (1 de 4 colores) sigue leyendo el color
    //si detecta un color inicia reproducción
    //inicia el tiempo de reproducción
   // colorDetectado = readColor;
   // reproduciendo = true;
   // tiempoInicioReproduccion = millis();

    // Reproduce audio según el color 
   // if (colorDetectado == 1) {
    //  myDFPlayer.playFolder(1, 1);  
      // Rojo en carpeta 01, archivo 001
     // Serial.println("Rojo ");
   // } else if (colorDetectado == 2) {
    //  myDFPlayer.playFolder(2, 2);  
      // Azul en carpeta 02, archivo 002
    //  Serial.println("Azul");
   // } else if (colorDetectado == 3) {
    //  myDFPlayer.playFolder(3, 3);  
      // Amarillo en carpeta 03, archivo 003
     // Serial.println("Amarillo");
    //} else if (colorDetectado == 4) {
     // myDFPlayer.playFolder(4, 4);  
      // Verde en carpeta 04, archivo 004
    //  Serial.println("Verde");
   // }
 // }

  // Detener reproducción después de cierto tiempo
 // if (reproduciendo && (millis() - tiempoInicioReproduccion > duracionReproduccion)) {
  //  myDFPlayer.stop();
   // Serial.println("Audio detenido por tiempo");
    //esta opción ocurre como plan B a la siguiente
    //hay 15 segundos de reproducción no importa la duración del audio
    //en esos 15 segundos no detecta otro color
   // reproduciendo = false;
   // colorDetectado = 0;
 // }

  // Opción adicional: detectar si el audio terminó por sí solo
  //if (myDFPlayer.available()) {
    //true si se ocurrió algo con el reproductor
    //uint8_t tipo = myDFPlayer.readType();
    //dato entero y positivo equivalente a byte (0-255)
    //lee el evento del DFPlayer
    //int valor = myDFPlayer.read();
    //dice que audio fue reproducido

    //if (tipo == DFPlayerPlayFinished) {
      //si el evento fue que terminó de reproducir ocurre lo siguiente
      //Serial.println("Audio finalizado por DFPlayer");
      //devuelve texto en monitor serial
     // reproduciendo = false;
      //como terminó de reproducir no reproduce más
      //puede recibir color de nuevo
     // colorDetectado = 0;
      //Resetea reproductor
   // }
 // }
//}

// Para probar en monitor serial
//int obtenerColor() {
 // if (Serial.available()) {
   // return Serial.parseInt();  
// Escribe un número (1 a 4) en el monitor serial
  //}
  //return 0;
//}