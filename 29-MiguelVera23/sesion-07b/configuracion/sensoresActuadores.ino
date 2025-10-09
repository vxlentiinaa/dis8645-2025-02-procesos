#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
//bibliotecas para la pantalla OLED 1306
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
//bibliotecas MP3
//https://www.instructables.com/DF-Player-Mini-Play-Audio-File/
#include "imagenes.ino"
//considera el código de las imágenes en otra página

DFRobotDFPlayerMini player;
bool audioReproducido = false;
//evita que se repita una y otra vez el audio 


static const uint8_t PIN_MP3_TX = 2; 
// Se conecta al RX del módulo

static const uint8_t PIN_MP3_RX = 3; 
// Se conecta al TX del módulo

SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);
// Crea el objeto Jugador

Reproductor DFRobotDFPlayerMini;

configuración vacía() {
// Inicializar el puerto serie USB para depuración

Serial.begin(9600); 
// Inicializar puerto serie para DFPlayer Mini

softwareSerial.begin(9600);
// Iniciar comunicación con DFPlayer Mini

if (player.begin(softwareSerial)) {

Serial.println("Aceptar");

//Establezca el volumen al máximo (0 a 30).
player.volumen(30);

// Reproducir el primer archivo MP3 en la tarjeta SD
player.play(1);
//lo más util de este código
//se añade al if de cada caso posible (cada color)
//se puede tratar según su lugar en la tarjeta SD en vez de un nombre en específico
//es mas conveniente
//recordar cambiar a player.play

}

demás {

Serial.println("¡Error al conectar con DFPlayer Mini!"); } }
//para avisar en caso de error

bucle vacío() { }

void configurarSensoresActuadores(){

configurarSD();
//definir funciones para manejar contenido
//ligar contenido a clases correspondientes 

configurarMp3();
//debe recibir los datos del sensor de color
//asociarlos a una de las clases
//decirle al parlante que reproduzca un audio específico de la tarjeta SD
//aunque ya es suficiente asociarlo a la clase ya que ahí esta asociado cada audio

configurarParlante();
//recibir el audio de la tarjeta SD
//ligar archivos de audio al parlante
//definir repetición y volumen
//de nuevo por medio de las clases
//reproducir un audio específico


}

void leerDatos(){
  
  leerSensorColor();

}

void setup(){
  Serial.begin(9600);
  mySerial.begin(9600); // Si usas SoftwareSerial
  player.begin(mySerial); // Cambia "mySerial" si usas otra cosa
  player.volume(30);      // Volumen de 0 a 30
  //setup recomendado por chat gpt al plantear problemática del reproductor mp3
}




void ocurrenResultados(){
  if (ROJO == true)
   display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
   display.clearDisplay();
   display.drawBitmap(0,0,Cara2,128,64,WHITE);
   
   
   if (!audioReproducido){;
   player.play(2);
   //reproduce archivo 0002.mp3 ojo
   audioReproducido = true
   //ya se reprodujo y no suena de nuevo
   }
   

   

}





