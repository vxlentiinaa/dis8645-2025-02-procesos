#define PIN_CLK 2
#define PIN_DT 3
#define PIN_SW 4

// Se define que a la derecha se baja
// y a la izquierda se sube
// después se presiona para seleccionar

int lastCLK = LOW;
int currentCLK;
bool botonVolver = false;

void configurarEncoder() {
  pinMode(PIN_CLK, INPUT);
  pinMode(PIN_DT, INPUT);
  pinMode(PIN_SW, INPUT_PULLUP);
}

void tomarDecisionesEncoder() {
  currentCLK = digitalRead(PIN_CLK);
  if (currentCLK != lastCLK && currentCLK == HIGH) {
    if (digitalRead(PIN_DT) != currentCLK) {
      opcionMenu++;
    } else {
      opcionMenu--;
    }
    if (opcionMenu >= totalIdiomas) opcionMenu = 0;
    if (opcionMenu < 0) opcionMenu = totalIdiomas - 1;
  }
  lastCLK = currentCLK;

  if (digitalRead(PIN_SW) == LOW) {
    Serial.print("Idioma seleccionado: ");
    Serial.println(opcionMenu);
    delay(200);
  }
}
