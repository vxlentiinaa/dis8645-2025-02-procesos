/*
  main.ino - CHISPOP 
  - Usa: Encoder, Pantalla OLED, Sensor de aplausos, DFPlayer Mini
  - Lógica:
     * Menú de selección con encoder
     * Pantalla de instrucción: "Aplaude dos veces"
     * Reproducción: se activa al detectar 2 aplausos (≈5 s)
*/

// incluir clases que escribimos
#include "Pantalla.h"
#include "ReproductorMP3.h"
#include "SensorEncoder.h"
#include "SensorAplauso.h"

// Objetos principales
SensorEncoder encoder;
SensorAplauso sensorAplauso;
Pantalla pantalla;
ReproductorMP3 mp3;

// Estados de la aplicación
bool enModoMenu = true;
bool enReproduccion = false;
int idiomaSeleccionado = 0;
const int totalIdiomas = 3;
const char* nombresIdiomas[totalIdiomas] = { "> Ruso", "> Japonés", "> Francés" };

// Control de tiempo
// 5 segundos
const unsigned long duracionAudioMs = 5000UL;
unsigned long tiempoFinReproduccion = 0UL;

void setup() {
  Serial.begin(9600);
  delay(50);
  Serial.println(F("CHISPOP - version final"));

  // configurar sensores
  encoder.configurar();
  sensorAplauso.configurar();

  // construir actuadores
  pantalla.iniciar();
  mp3.iniciar();


  pantalla.mostrarMenuIdioma(idiomaSeleccionado);
  Serial.println(F("Gira el encoder y presiona para elegir."));
}

void loop() {
  // seleccionar idioma segun encoder
  if (enModoMenu) {
    Serial.println("ESTOY EN MODO MENU");
    int opt = encoder.leerMovimiento();
    if (opt != idiomaSeleccionado) {
      idiomaSeleccionado = opt;
      pantalla.mostrarMenuIdioma(idiomaSeleccionado);
      Serial.print(F("Idioma seleccionado: "));
      Serial.println(nombresIdiomas[idiomaSeleccionado]);
    }

    // si el boton del encoder se presiona
    // salimos del modo menu
    if (encoder.botonPresionado()) {
      enModoMenu = false;
      // instruccion
      pantalla.mostrarMensajeAplauso();
      Serial.println(F("Presiona: Aplaude dos veces para continuar."));
      delay(120);
    }
  }
  // si no estamos en el modo menu
  // nos concentramos en los aplausos
  else {
    sensorAplauso.leer();
    sensorAplauso.decidir();

  

    // AQUI VOY VAMOS QUE SE PUEDE
    // --- detectar aplausos ---
    if (!enReproduccion && sensorAplauso.hayDosAplausos) {
      Serial.println(F("Aplausos detectados -> Reproducir saludo"));
      // PARA MATEO
      // Mostrar imagen y reproducir sonido simultáneamente
      pantalla.mostrarBitmapIdioma(idiomaSeleccionado);
      mp3.reproducirSaludo(idiomaSeleccionado);

      enReproduccion = true;
      tiempoFinReproduccion = millis() + duracionAudioMs;
    }

    // Control no bloqueante de fin de audio
    if (enReproduccion && millis() >= tiempoFinReproduccion) {
      enReproduccion = false;
      pantalla.mostrarMensajeAplauso();  // volver a instrucción
      Serial.println(F("Reproducción finalizada."));
    }

    // Botón presionado → volver al menú
    if (encoder.botonPresionado()) {
      enModoMenu = true;
      enReproduccion = false;
      pantalla.mostrarMenuIdioma(idiomaSeleccionado);
      Serial.println(F("Volviendo al menú principal."));
      delay(150);
    }
  }
}
