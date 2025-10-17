#ifndef PANTALLA_H
#define PANTALLA_H

#pragma once
#include <U8g2lib.h>

class Pantalla {
  public:
    void configurar();
    void mostrar(); // ✅ sin argumentos
};

extern U8G2_SH1106_128X64_NONAME_F_HW_I2C display;

#endif