void loop() {
  static bool isPlaying = false;

  // Solo detecta color si no está reproduciendo
  if (!isPlaying) {
    int detectedColor = getColor();  // Devuelve 1, 2, 3 o 4 según el color detectado

    if (detectedColor == 1) {       // Amarillo
      myDFPlayer.play(1);
      isPlaying = true;
    }
    else if (detectedColor == 2) {  // Rojo
      myDFPlayer.play(2);
      isPlaying = true;
    }
    else if (detectedColor == 3) {  // Azul
      myDFPlayer.play(3);
      isPlaying = true;
    }
    else if (detectedColor == 4) {  // Verde
      myDFPlayer.play(4);
      isPlaying = true;
    }
    // else -> no color válido detectado, sigue esperando
  }

  // Verifica si terminó el audio
  if (isPlaying && myDFPlayer.available()) {
    if (myDFPlayer.readType() == DFPlayerPlayFinished) {
      isPlaying = false;  // Audio terminó, volver a esperar
    } else {
      myDFPlayer.read(); // Limpiar el buffer de eventos
    }
  }
}
