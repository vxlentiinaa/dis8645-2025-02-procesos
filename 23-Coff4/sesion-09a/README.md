# sesion-09a

Ok! me demore en actualizar este modulo de la clase anterior, por diferentes evaluaciones (no es una excusa, solo una actualización de estado)

---

## Problemas importantes de la sesión:

En mi busqueda de arreglar la pantalla, lo solucione con aquel codigo que proporcione la ultima vez.

El problema con eso, es que al ponerlo en nuestro codigo, no funciona correctamente la pantalla. por lo tanto, mi investigación debe continuar para arreglar el problema.

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
  display.drawStr(0, 30, "Hola Mundo!");

  // Muestra en pantalla
  display.sendBuffer();
}

void loop() {
  // nada
}
void loop() {
  // Nada, texto fijo
}
```

Este codigo funciona por si solo y no arroja errores ni nada por el estilo

Una vez puesto en el codigo, se hicieron unas pequeñas conexiones y arreglos para que el codigo compile correctamente:

```cpp
#include <Wire.h>
#include <U8g2lib.h>
#include "Pantalla.h"


// Constructor para pantalla SH1106 128x64 I2C
U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);


void Pantalla::configurar () {
  display.begin();
  display.clearBuffer();
  Serial.begin(115200);
};

void Pantalla::mostrar (){ 
  // Fuente monoespaciada en negrita
 display.setFont(u8g2_font_9x15B_tr); // similar a FreeMonoBold12pt7b

  // Posición del texto
  display.drawStr(0, 30, "Probando algo ");
  display.drawStr(0, 45, "Largo!");
  // Muestra en pantalla

  display.sendBuffer();
  
};

//void loop() {
  // nada
//}
```

Con ello, adjunto un video de como este problema se volvio a provocar:

[![Intento con error](https://img.youtube.com/vi/2J_LUC1deQA/hqdefault.jpg)](https://youtube.com/shorts/2J_LUC1deQA)

[![Otra vez con errores](https://img.youtube.com/vi/wKGrXb6TVGg/hqdefault.jpg)](https://youtube.com/shorts/wKGrXb6TVGg?feature=share)

Quedamos en que subiriamos el codigo e investigariamos. Por otro lado comenzamos con bocetos y mediciones para hacer nuestro robot friolento.

Adjunto imagenes de diferentes bocetos y un moodboard rapido (que después diseñare mejor) sobre que idea queremos para el robotcito.

(https://www.canva.com/design/DAG1HrlguQs/HGf2F5e2Zauc3pmtedCisw/edit?utm_content=DAG1HrlguQs&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton)

En general se deberian agregar cosas que asemejen al frio y hacerlo más amigable para el espectador.

![Primera versión Carla](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-09a/imagenes/version1.jpeg)
![Segunda versión Carla](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-09a/imagenes/version2.jpeg)
![Tercera versión Carla](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-09a/imagenes/version3.jpeg)

![Boceto de Aileen](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-09a/imagenes/version4.jpeg)

Para la proxima sesión investigare que demonios hacer con la pantalla. deseenme suerte <3
