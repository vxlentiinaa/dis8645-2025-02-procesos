# proyecto-01

## Acerca del proyecto

- Grupo: 06
- Nombre de grupo: brainrot
- Integrantes:
  - Sofía Cartes
  - Antonia Fuentealba
  - Sofía Perez
  - Valentina Ruz

## Presentación textual

El proyecto consiste en un dispositivo interactivo desarrollado con Arduino UNO R4 Minima que muestra poemas en una pantalla OLED. A través del giro de un potenciómetro, el usuario puede recorrer tres fases:

1. Visualización del poema en formato de espiral.

2. Presentación del nombre del autor.

3. Exhibición de un dibujo que representa el poema.

Cada uno de los 4 integrantes del equipo diseñó su propio poema y dibujo, compartiendo la misma estructura de código pero con variaciones en el contenido textual y gráfico. Los poemas son:

- poema 1
- poema 2
- poema 3
- poema 4

## Inputs y outputs

### Input: 

Movimiento del potenciómetro, que determina el avance entre las fases de visualización.

### Output:
- Poema en espiral en la pantalla OLED.
- Nombre del autor.
- Animación o imagen que simboliza el contenido del poema.

## Bocetos de planificación

Fotografías y dibujos de maquetas y pruebas

## Etapas del código

**1. Inicialización del hardware**

- Inclusión de librerías de la pantalla OLED.
- Configuración del potenciómetro y variables de control.
```cpp
// Wire.h sirve para que el arduino se comunique con otros aparatos
// Adafruit_GFX sirve para dibujar, como lineas, circulos y letras
// Adafruit_SSD1306 sirve para manejar mejor las pantallas pequeñas
// math.h sirve para hacer los espirales, utilizando cos() y sin()
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <math.h>

// Acá definimos las medidas de la pantalla
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int potPin = A0; // Pin del potenciómetro
```

**2. Dibujo del poema en espiral**

- Función que coloca cada palabra o verso en coordenadas calculadas para formar la espiral.
```cpp
// Poema en espiral
String poema = "Noche de otoño… Se marchita el corazón, un espejo en la mano.";
```

**3. Visualización del nombre del autor**

- Texto centrado o en movimiento para destacarlo.
```cpp
// Nombre autor
String mensaje = "--- Tōshi Akao";
```
**4. Animación/dibujo representativo**

- Uso de arrays de bits (drawBitmap) para mostrar imágenes o secuencias de frames.
```cpp
const unsigned char hojassecas [] PROGMEM = {

// Este codigo lo obtuvimos de image2cpp

 	0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
```
En esta parte va la respectiva imagen de cada integrante del grupo
**5. Control por potenciómetro**

- Lectura del valor analógico y cambio de etapa según la posición.
```cpp

```
## Roles del equipo
- Sofía Cartes:
- Antonia Fuentealba:
- Sofía Perez:
- Valentina Ruz:


## Fotografías y videos del proyecto funcionado

Subir fotos y videos

El video debe estar subido a youtube y mencionado en un enlace para ahorrar espacio en el repositorio

## Bibliografía

Citas en APA de repositorios y enlaces de los cuales se inspiraron. Bibliotecas, tutoriales, etc.
