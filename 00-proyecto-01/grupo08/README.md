# proyecto-01

## Acerca del proyecto

- Grupo: 08
- Nombre de grupo: TODO
- Integrantes:
  - Valentina Chávez
  - Vania Paredes

## Presentación textual
Plantea aquí el problema de diseño que abordaste. Menciona el texto de referencia.

El problema de diseño que abordamos fue cómo crear una experiencia poética interactiva. La idea fue crear un “carrusel poético” en pantallas OLED, donde se cuentan distintas etapas de una historia usando versos de poetas chilenos como Gabriela Mistral y Pablo Neruda. La intención es que no fuera solo leer un texto fijo, sino que la persona pudiera ver cómo los poemas van apareciendo y conectándose entre sí.

El poetario está dividido en cuatro momentos principales que reflejan un recorrido:

1. **El Encuentro**

“Si me miras, yo me vuelvo hermosa.”
— Gabriela Mistral, Vergüenza.

2. **El Amor**

“Quiero hacer contigo
lo que la primavera hace con los cerezos.”
— Pablo Neruda, Veinte poemas de amor y una canción desesperada, Poema 14.

3. **El Quiebre**

"Mi alma no se contenta con haberla perdido"
— Pablo Neruda, Veinte poemas de amor y una canción desesperada, Poema 20.

4. **El Olvido**

“Es tan corto el amor,
y tan largo el olvido.”
— Pablo Neruda, Veinte poemas de amor y una canción desesperada, Poema 20.

Para hacer de la interacción mejor, el poema Nº2 se conecta a un potenciómetro: según el valor detectado, la pantalla despliega diferentes versos, permitiendo que el lector interactúe con el texto y sienta que lo “despliega” él mismo. Se escogió el poema Nº2 porque es el mas largo, y como la pantalla es pequeña y no queriamos hacerlo con el texto tan pequeño, preferimos separarlo en varios versos que caigan en la pantalla y poder controlar su velocidad con el potenciómetro.

En cambio, los otros poemas se controlan directamente desde el código. Se usaron funciones de scroll, permitiendo que el poema se sienta más dinámico y no solo estático en pantalla.

Al mismo tiempo, en la segunda pantalla se van mostrando imágenes en forma de carrusel, también controladas con el potenciómetro. Estas imágenes funcionan como un apoyo visual a los poemas, reforzando el ambiente de cada etapa.

## Inputs y outputs
¿Cuál es la interacción? ¿Qué ofrece la máquina de vuelta?

**Código poetario:**
*Inputs:*

Potenciómetro: Se gira y así cambia el valor analógico que lee el Arduino (de 0 a 1023)
Código del poema: Arduino interpreta ese valor (del potenciómetro) y decide qué parte del poema (Poema 2) mostrar. 

*Outputs:*

Pantalla OLED: Muestra el texto dividido en frases del poema. Según el rango del potenciómetro, aparece una frase distinta.

La interacción entonces es girar el potenciómetro y como respuesta ofrece versos en la pantalla, uno por uno, como un carrusel de texto.

**Código carrusel de imágenes:**

## Bocetos de planificación

Fotografías y dibujos de maquetas y pruebas

## Problemas, desafíos y errores

El primer problema al que nos enfrentamos fué el de colocar la primera imagen, no lograbamos hacerlo, finalmente el error era una palabra mal escrita y el código de la imagen fué descargado en bytes no en código de arduino, se solucionó. :)

El desafío más grande fué el de conectar el potenciómetro con nuestra idea de carrusel de poemas e imágenes, gracias a nuestra compañera carla, en nuestro intercambio de dudas y asiertos, nos ayudó mostrándonos como lo hizo su grupo, junto con el ejercicio en clases, tuvimos la idea de recorrer los versos de uno de nuestros poemas con el potenciómetro. Para esto usamos el código de "if" "else if" y "else". 
hicimos este código: 
```cpp
c if (valorPot < 146) {             // 0 - 145
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
  else {                            // 876 - 1023
    pantallita.println(verso6);
  }
```
El desafío fué que el poema que funcionaba con potenciomtro era el segundo. El primero y el resto funcionaban con scroll y código solamente, por lo que hubo un error y al momento de acabar el primer poema y tener que girar el potenciometro, este solo mostraba una palabra y volvia a repetirse el poema 1.
Pensamos que esto ocurria ya que por estar el poema 1 en "loop" este se repetía e interrumpía el segundo poema, por lo que nuestra solución fue subir el poema 1 en setup para que se mostrara solo una vez y luego dejar en loop el poema 2.
Luego para poder seguir con los siguientes poemas la idea es darle la instrucción a arduino que una vez el potenciómetro llega a 1023 espere unos segundos y comience con los siguientes poemas.

Código con el error:
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
 String verso3 = "lo que\nla";     // "lo que" enter "la" abajo
 String verso4 = "primavera\nhace"; // "primavera" enter "hace" abajo
 String verso5 = "con los";
 String verso6 = "cerezos.";

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

};

void loop() {

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
  // 3 segundos con el título
  delay(3000);
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
  else {                            // 876 - 1023
    pantallita.println(verso6);
  }

  pantallita.display(); // mostrar en pantalla
  delay(150);            

};
```
**Código solucionado subiendo el primer poema a setup
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
 String verso3 = "lo que\nla";     // "lo que" enter "la" abajo
 String verso4 = "primavera\nhace"; // "primavera" enter "hace" abajo
 String verso5 = "con los";
 String verso6 = "cerezos.";

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
  // 3 segundos con el título
  delay(3000);
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
  else {                            // 876 - 1023
    pantallita.println(verso6);
  }

  pantallita.display(); // mostrar en pantalla
  delay(150);            

};
```
Otro problema fué que poner tiempo al final del poema2 no era suficiente para acabar con el loop, por lo que al intentarlo el poema 2 se repetia infinitamente. Para agegarle el tiempo se le cambió así el código al verso 6 del poema 2:
```cpp
else if (valorPot < 876) {        // 730 - 875
    pantallita.println(verso5);
  } 
  else {  // cuando llega al rango máximo (876–1023)
      pantallita.println(verso6);
      pantallita.display();
      delay(3000);  // esperar 3 segundos en "cerezos."
      
      // limpiar y avanzar al siguiente poema
```
Para arreglarlo se usó una variable booleana de true or false, llamando al poema2 terminado, Por lo que se usa la variable if nuevamente al principio del código en loop (antes del poema2) usando: if (!poema2Terminado), esto haciendo un llamado de que si el poema 2 NO ha terminado que ocurra el poema 2, si este ha terminado "poema2Terminado = true;" que pase lo demas.

Quería que el loop de poemas parara despues del último y no sabía como, busqué en inetrnet y ocupé finalmente exit(0) parar parar el loop.

Otro problema fue que olvidé poner pantallita.display(); luego de los títulos, así que no los mostraba, si no que se saltaba directo a los versos del poema.

## Etapas del código

Segmenta las secciones de tu código y explícalas

## Roles del equipo

### Vania

- Código Poetario.

### Valentina

- Código Carrusel de imágenes.

## Fotografías y videos del proyecto funcionado

Subir fotos y videos

El video debe estar subido a youtube y mencionado en un enlace para ahorrar espacio en el repositorio

## Bibliografía
Citas en APA de repositorios y enlaces de los cuales se inspiraron. Bibliotecas, tutoriales, etc.

Adafruit. (s. f.). Librería SSD1306. <https://adafruit.github.io/Adafruit_SSD1306/html/>
Javl. (s. f.). Herramienta para convertir imágenes a código. <https://javl.github.io/image2cpp/>
Pereira, E. (2020, 20 de marzo). Cómo usar Arduino, Tutorial. YouTube. <https://www.youtube.com/watch?v=EEKMPT_YcTI>
ElectroTV. (2021, 15 de mayo). Cómo usar For, tutorial. YouTube. <https://www.youtube.com/watch?v=e8CEpAQ4otU&t=332s>
Maker Channel. (2019, 8 de octubre). Cómo usar el potenciómetro, tutorial. YouTube. <https://www.youtube.com/watch?v=UUncn39odKM>
Universidad de Chile. (s. f.). Vergüenza, en Desolación de Gabriela Mistral.<http://www.gabrielamistral.uchile.cl/poesia/desolacion/dolor/verguenza.html>
Archivo Chile. (s. f.). Poemas de Pablo Neruda. <https://www.archivochile.com/Homenajes/neruda/de_neruda/homenajepneruda0007.pdf>
https://www.youtube.com/watch?v=MP1292hpn54
Ejemplos de clase proporcionados por el profesor.
Ejemplos de la librería Adafruit_GFX en Arduino IDE.
