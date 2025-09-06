# sesion-04b

## Entrega proyecto 01

Poetario <3

Código completo:

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//Configuración de la pantalla
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

 //Potenciómetro
 int valorPot = 0; // valor leído desde el potenciómetro se comienza con 0

// VERSOS DEL POEMA2 Etapa: "El Amor"
 String verso0 = "Quiero";
 String verso1 = "hacer";
 String verso2 = "contigo";
 String verso3 = "lo que la";     
 String verso4 = "primavera\nhace"; // "primavera" enter "hace" abajo
 String verso5 = "con los";
 String verso6 = "cerezos.";

 bool poema2Terminado = false;  // para saber si ya terminó el poema 2

//Referencia ejemplo AdaFruit

  // Iniciar la pantalla OLED
void setup() {
  Serial.begin(9600);
  // Dirección I2C 0x3C
  if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontrÃ³ la pantalla SSD1306"));
    for(;;); // Bucle infinito si no detecta la pantalla para que no se muera
  }
  // Limpiamos toda la pantalla
  pantallita.clearDisplay();
  // Color de texto en pantalla
  pantallita.setTextColor(SSD1306_WHITE);

//PRIMER MOMENTO, ETAPA1: "EL ENCUENTRO"
  pantallita.clearDisplay(); 
  
  pantallita.display(); // Actualiza la pantalla

  //Tamaño del texto
  pantallita.setTextSize(2); 
  pantallita.setTextColor(SSD1306_WHITE);
  //Coordenadas del texto
  //Título etapa1
  pantallita.setCursor(50, 00);
  pantallita.println(F("El"));
  pantallita.setCursor(10, 20);
  pantallita.println(F("Encuentro"));

  //Pantallita pantallea
  pantallita.display();    
  // 4 segundos con el título
  delay(4000);
  pantallita.clearDisplay();

  //Poema 1
  //Frase1
  // Scroll en varias direcciones
  pantallita.setTextSize(2); 
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(20, 00);
  pantallita.println(F("Si me"));

  pantallita.display();      
  delay(10);

  pantallita.startscrollright(0x20, 0x0F);
  //scroll 2seg
  delay(2000);
  pantallita.stopscroll();

  //Frase2 
  //Conectada con frase 1
  pantallita.setTextSize(2); 
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(20, 20);
  pantallita.println(F("miras"));

  pantallita.display();      
  delay(10);

  pantallita.startscrollleft(0x00, 0x0F);
  delay(2000);
  pantallita.stopscroll();

  pantallita.clearDisplay();

  //Frase3
  //bajando el texto con las coordenadas
  pantallita.setTextSize(2); 
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(40, 20);
  pantallita.println(F("yo me"));

  pantallita.display();      
  delay(10);

  pantallita.startscrollright(0x20, 0x0F);
  delay(1500);
  pantallita.stopscroll();
  pantallita.startscrollleft(0x00, 0x0F);
  delay(1500);
  pantallita.stopscroll();

  //Frase4
  //Conectada con frase 3
  pantallita.setTextSize(2); 
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(40, 40);
  pantallita.println(F("vuelvo"));

  pantallita.display();      
  delay(10);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(2000);
  pantallita.stopscroll();
 
  pantallita.clearDisplay();
  
  //Frase5
  //Sola al medio de la pantalla
  pantallita.setTextSize(2);
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 20);
  pantallita.println(F("HERMOSA"));

  pantallita.display();      
  delay(100);

  pantallita.startscrollright(0x20, 0x0F);
  delay(2000);
  pantallita.stopscroll();
  pantallita.startscrollleft(0x00, 0x0F);
  delay(3000);
  pantallita.stopscroll();
  pantallita.clearDisplay();
  pantallita.display(); 
  // Esperar 1 segundo con la pantalla en blanco
  //Antes de comenzar el siguiente poema
  delay(1000);
  

  //SEGUNDO MOMENTO, ETAPA2: "EL AMOR"
  //Tamaño del texto
  pantallita.setTextSize(2); 
  pantallita.setTextColor(SSD1306_WHITE);
  //Coordenadas del texto
  //Título etapa2
  pantallita.setCursor(50, 00);
  pantallita.println(F("El"));
  pantallita.setCursor(40, 20);
  pantallita.println(F("Amor"));

    //Pantallita pantallea
  pantallita.display();    
  // 3 segundos con el título
  delay(3000);
  pantallita.clearDisplay();

};

void loop() {

  if (!poema2Terminado) {
  //Referencia ejercicio en clases
  valorPot = analogRead(A0); // leer valor entre 0 y 1023
  Serial.println(valorPot);  // para ver en Serial Monitor

  pantallita.clearDisplay(); // limpiar
  pantallita.setTextSize(2);
  pantallita.setCursor(0, 20);

  // Mostrar frase según rango en valorpot
  if (valorPot < 146) {             // 0 - 145
    pantallita.println(verso0);
  } 
  else if (valorPot < 292) {        // 146 - 291
    pantallita.println(verso1);
  } 
  else if (valorPot < 438) {        // 292 - 437
    pantallita.println(verso2);
  } 
  else if (valorPot < 584) {        // 438 - 583
    pantallita.println(verso3);     
  } 
  else if (valorPot < 730) {        // 584 - 729
    pantallita.println(verso4);     
  } 
  else if (valorPot < 876) {        // 730 - 875
    pantallita.println(verso5);
  } 
  else {  // cuando llega al rango máximo (876–1023)
      pantallita.println(verso6);
      pantallita.display();
      delay(3000);  // esperar 3 segundos en "cerezos."
      
      poema2Terminado = true; // marcamos que ya terminó este poema
      pantallita.clearDisplay(); //limpiar
    }
    pantallita.display(); 
    delay(1000);  

    } else {
    
    ////TERCER MOMENTO, ETAPA3: "EL QUIEBRE"

    // limpiar y avanzar al siguiente poema
    pantallita.setCursor(50, 00);
    pantallita.println(F("El"));
    pantallita.setCursor(20, 20);
    pantallita.println(F("Quiebre"));
    pantallita.display(); 
    delay(3000);
    pantallita.clearDisplay();

    pantallita.setCursor(0, 0);
    pantallita.println(F("Mi alma\nno se\ncontenta"));
    pantallita.display();
    pantallita.startscrollright(0x00, 0x0F);
    delay(3000);
    pantallita.stopscroll();
    pantallita.clearDisplay();

    pantallita.setCursor(0, 0);
    pantallita.println(F("con\nhaberla"));
    pantallita.display();
    pantallita.startscrollleft(0x00, 0x0F);
    delay(3000);
    pantallita.stopscroll();
    pantallita.clearDisplay();

    pantallita.setCursor(20, 20);
    pantallita.println(F("Perdido"));
    pantallita.display();
    pantallita.startscrollright(0x00, 0x0F);
    delay(3000);
    pantallita.stopscroll();
    pantallita.clearDisplay();
    pantallita.display(); 
    delay(1000);

    //ÚLTIMO MOMENTO, ETAPA4: "EL OLVIDO"

    pantallita.setCursor(50, 00);
    pantallita.println(F("El"));
    pantallita.setCursor(20, 20);
    pantallita.println(F("Olvido"));
    pantallita.display(); 
    delay(3000);
    pantallita.clearDisplay();

    pantallita.setCursor(0, 0);
    pantallita.println(F("Es tan\ncorto el\namor..."));
    pantallita.display();
    pantallita.startscrollleft(0x00, 0x0F);
    delay(2000);
    pantallita.stopscroll();
    pantallita.clearDisplay();

    pantallita.setCursor(0, 0);
    pantallita.println(F("Y tan\nlaaaargooooooooooooooooooooooooo"));
    pantallita.display();
    pantallita.startscrollright(0x00, 0x0F);
    delay(2000);
    pantallita.stopscroll();
    pantallita.clearDisplay();
  
    pantallita.setCursor(10, 20);
    pantallita.println(F("El olvido"));
    pantallita.display();
    delay(2000);
    pantallita.clearDisplay();
    pantallita.display(); 
    delay(2000);
  
    
    //salir del loop
    exit(0);

  }
          
};
```
