/*
inlcuirLibrerias();
declararVariables();

void setup() {
  configurarPines();
  inicializarVariables();
}

void loop() {
  //mover de izq a derecha sumando 1° cada vez
  for (int i = 0; i <= 180; i++) {
    //funcion que activa que el ultrasónico sense
    ultrasonicoGo();
    // si NO se detecta amenaza, sigue el ciclo for
    if (!amenaza) {
      servo.write(i);
    } else if (amenaza) {
      //si se detecta amenaza, sal del loop
      break;
    }
  }
}

void ultrasonicoGo() {
}

/*
void updateServo {
servo.wirte(position);
}

*/
