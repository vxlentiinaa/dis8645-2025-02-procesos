# sesion-09a

- Codigo pantalla ejemplo carla:


```cpp


#include <Wire.h>
#include <U8g2lib.h>


// Constructor para pantalla SH1106 128x64 I2C
U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);


void setup() {
  display.begin();
  display.clearBuffer();


  // Fuente monoespaciada en negrita
 display.setFont(u8g2_font_9x15B_tr); // similar a FreeMonoBold12pt7b


  // Posición del texto
  display.drawStr(0, 30, "Probando algo ");
  display.drawStr(0, 45, "Largo!");
  // Muestra en pantalla
  display.sendBuffer();
}


void loop() {
  // nada
}
```


Junto con carla y sebastian, separamos este codigo en .cpp y .h (subidos al github 9a)
el código de ejemplo funciona bien, pero al incorporarlo a nuestro archivo como cpp y h el texto tiene glitches y no se logra leer todo el tiempo, no sabemos por qué esto e intentamos solucionarlo pero no pudimos. 

También comenzamos a investigar como podría ser la morfología de la carcasa.
![moadboard carcasa](agregar/algo/de/texto.jpg)

- https://3dwork.io/wall-e-replica-impresion-3d/
-https://makerworld.com/es/models/1482832-mini-wifi-robot-with-oled-face-neck-movement#profileId-1548607
- https://www.3dnatives.com/es/10-robots-impresion-3d-16112016/
- https://www.ottodiy.com/
- https://horadeaventura.fandom.com/es/wiki/Neptor
