<img width="545" height="599" alt="image" src="https://github.com/user-attachments/assets/1800a4d3-2753-44b5-911a-6ff2d28bab83" /># sesion-03b
## Clase Online

Debido a las lluvias, la clase se realizó vía Zoom. Me metí tarde y tuve que ponerme al corriente.

### Apuntes

[Trabajamos en la página WOKWI](https://wokwi.com/projects/new/arduino-uno)

- Wokwi es una página para trabajar proyectos de Arduino en el compu. Sirve para simular circuito sin tener las piezas de verdad.

- La pantalla OLED que vamos a usar tiene cuatro pines principales. GND (tierra), VCC (energía) 5v. SCL y SDA, para la comunicación con el Arduino usando I²C.

- Instalar bibliotecas Adafruit GFX Library y Adafruit SSD1306







## Documentar aprendizajes y dificultades del trabajo con pantallas y displays SSD1306 con simulador Wokwi

````
// experimentacion basada en proyectos de p5js 
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1

// Crear una instancia del objeto de la pantalla
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Variable para la animación
int zoom = 0;

void setup() {
  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    for(;;);
  }

  display.clearDisplay();
  display.display();
}

void loop() {
  display.clearDisplay();

  int centerX = SCREEN_WIDTH / 2;
  int centerY = SCREEN_HEIGHT / 2;

  // Dibujar varios círculos, como un eco
  for (int i = 0; i < 4; i++) {   // cantidad de círculos
    int current_radius = zoom - i * 10; // separación entre los círculos
    if (current_radius > 0) {
      display.drawCircle(centerX, centerY, current_radius, SSD1306_WHITE);
    }
  }

  display.display();

  // Incrementar el radio
  zoom += 2;

  // Reiniciar cuando llegue al límite
  if (zoom > SCREEN_HEIGHT) {  
    zoom = 0;
  }

  delay(30);  // Ajusta para la velocidad
}
````


### Avance PROYECTO 01.
1. Haiku a binario

- Convertir un haiku a binario.

- Ejemplo: Haiku: "CEREBRO FUNDIDO"

- Binario: 01000011 01000101 01010010 01000101 01000010 01010010 01001111 00100000 01000110 01010101 01001110 01000100 01001001 01000100 01001111 

2. Imagen en Arduino

- Mostrar una imagen o patrón en pantalla OLED, diseño relacionado con el haiku.

3. Haiku en binario y representación visual en píxeles. Primero el poema en binario y, a continuación, imagen representativa.


4. Buzzer que “lee” el binario. Reproduce cada bit con un sonido:

- 1 → tono alto

- 0 → tono bajo

- Mostrar simultáneamente el binario en pantalla.

5. Haiku binario + visual + traducción con botón

- Pantalla OLED muestra el haiku en binario y cambia a una imagen con potenciometro

- Pulsando un botón, cambia a la versión en texto normal.

- Permite alternar entre visualización binaria y texto legible.
