#include "Pantalla.h"
#include <Wire.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);

void Pantalla::configurar() {
  display.begin();
  display.clearBuffer();
}

void Pantalla::mostrar() {
  display.clearBuffer();
  display.setFont(u8g2_font_9x15B_tr);
  display.drawStr(0, 30, "Probando algo");
  display.drawStr(0, 45, "Largo!");
  display.sendBuffer();
}