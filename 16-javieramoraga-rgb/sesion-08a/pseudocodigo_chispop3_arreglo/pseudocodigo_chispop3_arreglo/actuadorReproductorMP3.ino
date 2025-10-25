// definir condicional para reproducir
// cada vez que se aplaude
void configurarActuadorReproductorMP3() {
  mySoftwareSerial.begin(9600);
  if (!myDFPlayer.begin(mySoftwareSerial)) {
    Serial.println("Error inicializando DFPlayer");
    while(true); // Detener si falla
  }
  myDFPlayer.volume(25); // Volumen de 0 a 30
}

void reproducirSaludo(int idioma) {
  // Debemos asegurarnos de guardar los audios como 0001.mp3, 0002.mp3, etc. en la SD
  myDFPlayer.play(idioma + 1);  
}
