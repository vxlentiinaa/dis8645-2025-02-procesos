# sesion-03b

 Primer reloj digital hecho en Chile (UNO)

Matriz LED 8x8 (puntillismo)

Daniel Cruz/Museo de arte contemporánea/

Próxima semana: Navegador de poemas.(c/ pantalla)

Wokwi

Tinkercad

Pantalla SSD1306 OLED display 128x64 I2C

GND: Cable a tierra verde.

VCC: De ahí partimos contando. Cuanto voltaje necesita (5 volts).

Power alimenta la pantalla (hacerlo primero)

SCL: Signal clock (unión A5). Da el tiempo/ritmo.

SDA: Datos (unión A4).

Library: Biblioteca de datos que se puede compartir.

Adafruit GFX

Software de imagen a binario

Usar if! para avisar si no empieza algo

for(;;); no seguir loopeando

nombres obligatorios: inglés

nombres variables: español (pantallita)

Para encargo copiar, basar y robar pero citando correctamente.

<https://javl.github.io/image2cpp/>

arduino string/char array

 Ejemplo de clases (pantallita)

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int contador = 0;

String linea0;
String linea1;
String linea2;


void setup() {
  if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla SSD1306"));
    for(;;);
  }
  pantallita.clearDisplay();
  pantallita.setTextColor(SSD1306_WHITE);

  linea0 = "respuesta del oraculo";
  linea1 = "hagas lo que hagas";
  linea2 = "te arrepentiras";
}

void loop() {
  pantallita.clearDisplay(); // Limpiamos toda la pantalla
  
  testscrolltext(linea0, 300);
  testscrolltext(linea1, 300);
  testscrolltext(linea2, 600);
  
  pantallita.display(); // Actualiza la pantalla


}



// void testscrolltext(void) {
  // cambiar la linea anterior
  // para agregar parametro String
  // de input
  // y tambien int para delays
  void testscrolltext(String texto, int pausa) {
  pantallita.clearDisplay();

  pantallita.setTextSize(2); // Draw 2X-scale text
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(10, 0);
  // pantallita.println(F("scroll"));
  // mod que le hice yo
  pantallita.println(texto);

  pantallita.display();      // Show initial text
  delay(100);

  // Scroll in various directions, pausing in-between:
  pantallita.startscrollright(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrollleft(0x00, 0x0F);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
  pantallita.startscrolldiagright(0x00, 0x07);
  delay(pausa);
  pantallita.startscrolldiagleft(0x00, 0x07);
  delay(pausa);
  pantallita.stopscroll();
  delay(pausa);
}
```

<https://www.elithecomputerguy.com/2019/07/print-text-to-oled-screen-on-arduino/>

Desglose de ejemplo

```cpp
#include <Wire.h>   //incluye biblioteca (viene por defecto)
#include <Adafruit_SSD1306.h>  //incluye bibliotecas adafruit que necesitan ser instaladas
#include <Adafruit_GFX.h>

#define OLED_WIDTH 128    //declara dimensiones totakes de la pantalla
#define OLED_HEIGHT 64

#define OLED_ADDR   0x3C   //para comunicarse con I2C)

Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT);   //hace uso de las dimensiones totales para mostrar algo

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();     //despeja la pantalla

  display.setTextSize(2);   //tamaño de texto en números enteros, mínimo 1
  display.setTextColor(WHITE);   //color de texto (blanco)
  display.setCursor(0, 0);   //posicionar texto en la esquina superior izquierda <https://www.arduino.cc/en/Tutorial/LibraryExamples/LiquidCrystalSetCursor/>
  display.println("Welcome");  //escribir welcome

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 17);  //cambio de posición
  display.println("This is");
  display.println("a Splash");
  display.println("Screen");

  display.display();  //mostrar display(OLED_WIDTH, OLED_HEIGHT) o sea contenido de pantalla

  delay(5000);      //retrasar 5 segundos
}

void loop() {
  display.clearDisplay();    //limpiar pantalla

  display.setTextSize(2);    //reproducción de más texto pero en loop
  display.setTextColor(WHITE); 
  display.setCursor(0, 0);
  display.println("Net Test");

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 17);
  display.println("IP: 192.168.1.1");
  display.println("Subnet: 255.255.255.0");
  display.println("Gateway: 192.168.1.1");
  display.println("DNS1 : 192.168.1.2");
  display.println("DNS2: 192.168.1.3");

  display.display();
  delay(5000);
}
```

A parte del setup de las bibliotecas necesarias y las especificaciones técnicas de la pantalla, el display de texto se reduce a 3 elementos por función:

display.setTextSize(2); (Tamaño)

display.setTextColor(WHITE); (Color)

display.setCursor(0, 0); (Ubicación)

display.println("Welcome"); (Contenido)

*Consultar porque wokwi toma tanto tiempo en procesar

## Intento 1 las mañanitas

Traté de añadir unos versos de las mañanitas variando su tamaño y tiempo entre aparición y desaparición para darle un ritmo.

Para esto los separé y les di distintos tiempos de delay, usando también display.clearDisplay(); para que desaparecieran.

Me basé en el link anterior pero creo que malinterpreté algunos roles de códigos.

También ambas palabras iniciales son muy largas por lo que se cortaron.

```cpp
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define OLED_WIDTH 128
#define OLED_HEIGHT 64

#define OLED_ADDR   0x3C

Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("A continuación");
  display.println("Las mañanitas");

  display.display();

  delay(5000);
}

void loop() {
  display.clearDisplay();

  display.setTextSize(2);   //alternar aparición de texto
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Estas son");
  delay(1000);
  display.clearDisplay();   //aparece y desaparece

  display.setTextSize(1);  //varía su tamaño
  display.setTextColor(WHITE);
  display.setCursor(0, 17);
  display.println("las mañanitas");
  delay(1000);
  display.clearDisplay();

  display.setTextSize(2);   //alternar aparición de texto
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("que cantaba");
  delay(1000);
  display.clearDisplay();

  display.setTextSize(1);  
  display.setTextColor(WHITE);
  display.setCursor(0, 17);
  display.println("el rey");
  delay(700);
  display.clearDisplay();

  display.setTextSize(3);   
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("David");
  delay(1000);
  display.clearDisplay();


  
  display.display();
  delay(5000);
}
```

## Intento 2 las mañanitas

Separé correctamente los roles y arreglé la ñ. Funciona correctamente pero el ritmo se puede mejorar

y podría añadir movimiento o una transición mas interesante. Probaré transcribir toda la canción

considerando el tiempo que demora leerla para que sea más fluida.

```opp
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define OLED_WIDTH 128
#define OLED_HEIGHT 64

#define OLED_ADDR   0x3C

Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("A continuación");
  display.println("Las mananitas");

  display.display();

  delay(5000);
}

void loop() {
  display.clearDisplay();    //limpiar pantalla

  display.setTextSize(2);    //tiempo adecuado para leer texto
  display.setTextColor(WHITE); 
  display.setCursor(0, 0);     //empieza en esquina superior izquierda
  display.println("Estas son");
  display.println("las mananitas");

  display.display();           //esta función muestra lo anterior
  delay(1500);      
  display.clearDisplay();     //reset para que aparezca lo siguiente

  
  display.setTextSize(2);    //texto va cambiando de ubicación
  display.setTextColor(WHITE); 
  display.setCursor(0, 17);
  display.println("Que");
  display.println("cantaba");
  display.println("el rey");

  display.display();
  delay(1700);
  display.clearDisplay();

  display.setTextSize(3);    //David en grande en la esquina
  display.setTextColor(WHITE); 
  display.setCursor(0, 0);
  display.println("David");

  display.display();   //termina el loop asi que no es necesario clearDisplay (creo)
  delay(1000);
}
```
