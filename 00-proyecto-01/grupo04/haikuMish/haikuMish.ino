// integrantes
// fecha
// cual arduino
// su contexto

// prueba de scroll vertical controlado por potenciometro.
// parrafo 1 de haiku, para luego pasar a la imagen de un bob esponja arduino lol

// importar bibliotecas
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// incluir las imagenes
#include "imagenes.h"

// definir parametros
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

// instancia de Adafruit_SSD1306
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

//  pin para el potenciometro
int potPin = A0;

// parrafo 1
String haiku1 = "Codigo arduino";

// parrafo 2
String haiku2 = "OLED ya encendido";

// parrafo 3
String haiku3 = "Cerebro fundido";

// Constantes para calcular el tamaño del lienzo

// Espacio vertical entre cada objeto en pantalla
const int PADDING = 10;
// Altura estimada para el texto
const int TEXT_HEIGHT = 10;
// Altura de la imagen
const int IMAGE_HEIGHT = 64;

// Altura total = texto + 3 imágenes + 4 separaciones
const int TOTAL_CONTENT_HEIGHT = TEXT_HEIGHT + (3 * IMAGE_HEIGHT) + (4 * PADDING);
const int MAX_SCROLL = TOTAL_CONTENT_HEIGHT > SCREEN_HEIGHT ? TOTAL_CONTENT_HEIGHT - SCREEN_HEIGHT : 0;


// variable global que almacena la posición Y actual del scroll
int yScroll = 0;

void setup() {
	Serial.begin(9600);

	if (!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
		Serial.println(F("Fallo al iniciar SSD1306"));
		while (1)
			;
	}

	// borrar contenidos pantalla
	pantallita.clearDisplay();

	// definir tamano texto y color
	pantallita.setTextColor(SSD1306_WHITE);
	pantallita.setTextSize(1);
}



void loop() {

	// leer potenciometro
	int valorPot = analogRead(potPin);

	// mapear valor
	yScroll = map(valorPot, 0, 1023, 0, MAX_SCROLL);

	// Imprime el valor del potenciómetro en el monitor serie.
	Serial.print("Valor del Potenciómetro: ");
	Serial.println(valorPot);

	pantallita.clearDisplay();

	int y = 0;
	pantallita.setCursor(0, y - yScroll);
	pantallita.print(haiku1);

	int x = 0;
	pantallita.setCursor(500, y - yScroll);
	pantallita.print(haiku2);

	// Imagen A

	y += TEXT_HEIGHT + PADDING;
	pantallita.drawBitmap(0, y - yScroll, imagen0, 128, 64, SSD1306_WHITE);

	// Imagen B
	y += IMAGE_HEIGHT + PADDING;
	pantallita.drawBitmap(0, y - yScroll, imagen1, 128, 64, SSD1306_WHITE);

	// Imagen C
	y += IMAGE_HEIGHT + PADDING;
	pantallita.drawBitmap(0, y - yScroll, imagen2, 128, 64, SSD1306_WHITE);

	pantallita.display();


	delay(10);
}