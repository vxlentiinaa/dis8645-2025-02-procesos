// definir biblioteca de interfaz de menú
// importante que permita
// otro tipo de caratér
// definir cantidad de idiomas

void desplegarMenu() {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Selecciona Idioma:");
  if (opcionMenu == 0) display.println("> Español");
  else display.println("  Espanol");

  if (opcionMenu == 1) display.println("> Ingles");
  else display.println("  Ingles");

  if (opcionMenu == 2) display.println("> Frances");
  else display.println("  Frances");

  display.display();
}

void desplegarMensaje() {
  // Aquí podemos mostrar en pantalla el saludo antes de reproducir (imagen?)
}
