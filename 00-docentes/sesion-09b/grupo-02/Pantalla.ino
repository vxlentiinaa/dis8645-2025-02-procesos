// Pantalla LCD Oled 1.3" 128x64 caracteres azules
// reproduce fotogramas
// configurar pantalla

// Inicializar pantalla OLED
if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {  // Dirección I2C 0x3C
  Serial.println(F("No se encontró pantalla OLED"));
  while (true)
    ;
}
display.clearDisplay();
display.setTextColor(SSD1306_WHITE);
display.setTextSize(2);
display.setCursor(15, 25);
display.println("Iniciando...");
display.display();
delay(1500);
}

// ---- Mostrar resultado en OLED ----
void mostrarEnOLED(String color) {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);

  if (color == "NADA") {
    display.setCursor(25, 25);
    display.println("No hay");
  } else {
    int x = (128 - (color.length() * 12)) / 2;  // centrado aprox.
    display.setCursor(x, 25);
    display.println(color);
  }

  display.display();
}