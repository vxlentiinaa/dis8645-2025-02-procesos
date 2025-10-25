/*
Archivo principal proyecto
  main.ino - CHISPOP 
  - Usa: Encoder, Pantalla OLED, Sensor de aplausos, DFPlayer Mini
  - Lógica:
     * Menú de selección con encoder
     * Pantalla de instrucción: "Aplaude dos veces"
     * Reproducción: se activa al detectar 2 aplausos (≈5 s)
*/

// incluir clases que escribimos
#include "Pantalla.h"  //Control pantalla OLED
#include "ReproductorMP3.h"  //Control modulo DFPlayer Mini
#include "SensorEncoder.h"  //Lectura encoder rotativo
#include "SensorAplauso.h"  //Deteccion aplausos mediante microfono

// Objetos principales
//Instancias de la clases que encapsulan pantalla, reproductor y sensores
SensorEncoder encoder;
SensorAplauso sensorAplauso;
Pantalla pantalla;
ReproductorMP3 mp3;

// Estados de la aplicación
bool enModoMenu = true;  //true si se muestra el menu
bool enReproduccion = false;  //true si esta sonando un audio
int idiomaSeleccionado = 0;  //indice del idioma seleccionado en el menú
const int totalIdiomas = 3;
const char* nombresIdiomas[totalIdiomas] = { "> Ruso", "> Japonés", "> Francés" };

// Control de tiempo reproduccion
// 5 segundos
const unsigned long duracionAudioMs = 5000UL;
unsigned long tiempoFinReproduccion = 0UL;

void setup() {  
  Serial.begin(9600); //inicio puerto serie para debug
  delay(50);
  Serial.println(F("CHISPOP - version final"));

  // configurar sensores
  encoder.configurar();  //inicializar encoder
  sensorAplauso.configurar();  //inicializar sensor aplausos

  // construir actuadores
  pantalla.iniciar(); //inicializar OLED
  mp3.iniciar();  //inicializar DFPlayer


  pantalla.mostrarMenuIdioma(idiomaSeleccionado);  //mostrar menu inicial
  Serial.println(F("Gira el encoder y presiona para elegir."));
}

void loop() {
  // seleccionar idioma segun encoder
  if (enModoMenu) {
    Serial.println("ESTOY EN MODO MENU");
    int opt = encoder.leerMovimiento();  //leer giro encoder
    if (opt != idiomaSeleccionado) {
      idiomaSeleccionado = opt;  //actualizar idioma
      pantalla.mostrarMenuIdioma(idiomaSeleccionado);
      Serial.print(F("Idioma seleccionado: "));
      Serial.println(nombresIdiomas[idiomaSeleccionado]);
    }

    // si el boton del encoder se presiona
    // salimos del modo menu
    if (encoder.botonPresionado()) {  //boton presionado = salir menu
      enModoMenu = false;
      // instruccion
      pantalla.mostrarMensajeAplauso();  //intruccion aplaudir
      Serial.println(F("Presiona: Aplaude dos veces para continuar."));
      delay(120);  //debounce
    }
  }
  // si no estamos en el modo menu
  // nos concentramos en los aplausos
  else {
    sensorAplauso.leer();  //leer sensor
    sensorAplauso.decidir();  //procesar aplausos

  

    // AQUI VOY VAMOS QUE SE PUEDE
    // --- detectar aplausos ---
    if (!enReproduccion && sensorAplauso.hayDosAplausos) {
      Serial.println(F("Aplausos detectados -> Reproducir saludo"));
  
      pantalla.mostrarBitmapIdioma(idiomaSeleccionado);  //mostrar imagen idioma
      mp3.reproducirSaludo(idiomaSeleccionado);  //reproducir audio

      enReproduccion = true;  //activar flag
      tiempoFinReproduccion = millis() + duracionAudioMs;
    }

    // Control no bloqueante de fin de audio
    if (enReproduccion && millis() >= tiempoFinReproduccion) {  //fin de audio
      enReproduccion = false;
      pantalla.mostrarMensajeAplauso();  // volver a instrucción
      Serial.println(F("Reproducción finalizada."));
    }

    // Botón presionado → volver al menú
    if (encoder.botonPresionado()) {  //boton = volver a menu
      enModoMenu = true;
      enReproduccion = false;
      pantalla.mostrarMenuIdioma(idiomaSeleccionado);
      Serial.println(F("Volviendo al menú principal."));
      delay(150); //debounce
    }
  }
}
