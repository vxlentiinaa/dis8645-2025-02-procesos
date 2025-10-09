// Interacción/Resultado en base al color
// Elige una respuesta según el estimulo
// sensores: sensor de color
// actuador: pantalla, reproductor mp3
// estados del sistema: PORHACER
// Fases de la interacción:
// 1. Pantalla modo standby - se reproduce animación neutra
// 2. Persona gira la perilla mecanica de forma manual y sale un dulce
// 3. Cuando el dulce sale pasa por un conducto y el sensor de color reconoce el color
// 4. en base al color reconocido se activa respuesta de pantalla (animación) y auditiva (10 segundos maximo de respuesta)
// 5. Despues de un momento sin respuesta vuelve al estado inicial

// incluir clase
#include "SensorColor.h"

SensorColor sensorColor;

void setup() {
  sensorColor.configurar();
  Serial.begin(9600);
  // biblioteca();
  // configurarTerminal();
  // if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
}

void loop() {
  sensorColor.leer();

  sensorColor.determinarColor();

  sensorColor.mostrarSerial();

  // if (sensorColor.colorDetectado == "NARANJA") {
  //   pantalla.mostrarNaranja();
  //   parlante.sonarNaranja();
  // }

  // // Mostrar en OLED
  // mostrarEnOLED(colorDetectado);

  // delay(300);
}
