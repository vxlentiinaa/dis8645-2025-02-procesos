# sesion-07b

Hola llegue tarde despues agrego apuntes :-)

igual hice el pseudocodigo

pseudocodigoV0 tiene un error en cableado sensor ultrasonico, en pseudocodigoV0_1 se corrige :-)

## apoyo a [SebastianSaez1003](https://github.com/SebastianSaez1003/dis8645-2025-02-procesos)

El Seba presentó problemas en recibir una respuesta del serial monitor y pidió ayuda dentro del grupo; yo decidí revisar qué pudo estar ocurriendo, pero prefiero dar contexto primero.

El seba encontro este código 
```cpp

#include <Wire.h>
#include <Adafruit_AHTX0.h> // Library for AHT20
#include <Adafruit_BMP280.h> // Library for BMP280

// Create sensor objects
Adafruit_AHTX0 aht;
Adafruit_BMP280 bmp;

void setup() {
  Serial.begin(9600);
  while (!Serial); // Wait for Serial Monitor to open

  // Initialize AHT20 sensor
  if (!aht.begin()) {
    Serial.println("Failed to initialize AHT20 sensor!");
    while (1);
  }
  Serial.println("AHT20 sensor initialized.");

  // Initialize BMP280 sensor
  if (!bmp.begin(0x76)) { // Default I²C address for BMP280 is 0x76
    Serial.println("Failed to initialize BMP280 sensor!");
    while (1);
  }
  Serial.println("BMP280 sensor initialized.");
}

void loop() {
  // Read data from AHT20
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);

  // Read data from BMP280
  float pressure = bmp.readPressure() / 100.0F; // Convert to hPa
  float altitude = bmp.readAltitude(1013.25); // Sea level pressure in hPa

  // Print sensor data to Serial Monitor
  Serial.print("AHT20 - Temperature: ");
  Serial.print(temp.temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity.relative_humidity);
  Serial.println(" %");

  Serial.print("BMP280 - Pressure: ");
  Serial.print(pressure);
  Serial.print(" hPa, Altitude: ");
  Serial.print(altitude);
  Serial.println(" m");

  delay(2000); // Wait 2 seconds before next reading
}
```
Y explica que, aun cuando se compila el código y se logra subir al Arduino, no era capaz de recibir la comunicación serial.

Ya ahí el Seba pidió apoyo para ver qué pasaba con el código y descubrí que era que había que instalar manualmente las bibliotecas Adafruit AHTX0 y Adafruit BMP280, y al instalarlas se logra la comunicación en el serial monitor.

![muestraMonitorSerialDetectando](imagenes/monitorSerialMuestra.png)

