//ARCHIVO PRINCIPAL

void setup() {
  configurarSensorUltrasonico(); // inicializar sensor ultrasónico
  configurarServo(); // inicializar servo motor (dedo)
  configurarMP3();  // inicializar el MP3
}

void loop() {
  float distancia = medirDistancia(); // leer sensor ultrasonico
  mostrarMensaje(distancia);  // mostrar mensaje de acuerdo a la distancia
  reproducirAudioPorDistancia(distancia); // reproducir según rango

 // Control del servo según la distancia
  // si la distancia está entre 2 y 10 cm, se levanta el dedo.
  if (distancia >= 2 && distancia <= 10) {
    levantarDedo();
  } else {
    bajarDedo();
  }

  delay(500); // pausa para estabilidad
}
