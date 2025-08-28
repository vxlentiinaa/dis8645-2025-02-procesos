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

const int paddingX = 0;

// parrafo 1
String haiku0 = "Codigo arduino";

// parrafo 2
String haiku1 = "OLED ya encendido";

// parrafo 3
String haiku2 = "Cerebro fundido";

// Constantes para calcular el tamaño del lienzo

// Espacio vertical entre cada objeto en pantalla
const int PADDING = 10;
// Altura estimada para el texto
const int TEXT_HEIGHT = 10;
// Altura de la imagen
const int IMAGE_HEIGHT = 64;

// altura total = 3 * texto + 3 imágenes + 4 separaciones
const int TOTAL_CONTENT_HEIGHT = (3 * TEXT_HEIGHT) + (3 * IMAGE_HEIGHT) + (5 * PADDING);
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

	// crear variables locales
	// inicializar en 0
	// para que TODO
	int x = 0;
	int y = 0;

	// leer potenciometro
	int valorPot = analogRead(potPin);

	// mapear valor
	yScroll = map(valorPot, 0, 1023, 0, MAX_SCROLL);

	// imprime el valor del potenciómetro en el monitor serie
	Serial.print("Valor del potenciómetro: ");
	Serial.println(valorPot);

	pantallita.clearDisplay();

	pantallita.setCursor(paddingX, y - yScroll);
	pantallita.print(haiku0);
	y += TEXT_HEIGHT + PADDING;

	pantallita.setCursor(paddingX, y - yScroll);
	pantallita.drawBitmap(paddingX, y - yScroll, imagen0, 128, 64, SSD1306_WHITE);
	y += IMAGE_HEIGHT + PADDING;

	pantallita.setCursor(paddingX, y - yScroll);
	pantallita.print(haiku1);
	y += TEXT_HEIGHT + PADDING;

	pantallita.setCursor(paddingX, y - yScroll);
	pantallita.drawBitmap(paddingX, y - yScroll, imagen1, 128, 64, SSD1306_WHITE);
	y += IMAGE_HEIGHT + PADDING;

	pantallita.setCursor(paddingX, y - yScroll);
	pantallita.print(haiku2);
	y += TEXT_HEIGHT + PADDING;

	pantallita.setCursor(paddingX, y - yScroll);
	pantallita.drawBitmap(paddingX, y - yScroll, imagen2, 128, 64, SSD1306_WHITE);
	y += IMAGE_HEIGHT + PADDING;


	// pantallita.drawBitmap(paddingX, y - yScroll, imagen1, 128, 64, SSD1306_WHITE);

	// y += IMAGE_HEIGHT + PADDING;
	// pantallita.drawBitmap(paddingX, y - yScroll, imagen2, 128, 64, SSD1306_WHITE);

	pantallita.display();

	delay(10);
}