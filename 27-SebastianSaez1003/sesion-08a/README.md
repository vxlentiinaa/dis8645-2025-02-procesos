# sesion-08a

Hoy es un día de trabajo en clases y como objetivo me propuse el objetivo de hacer funcionar el sensor de temperatura, pero después de hablar con mis compañeros no le encontré solución; el sensor era demasiado mañoso, tanto así que tomé otro sensor de temperatura para poder ver si es que funcionaba.

El susodicho sensor era el DHT11 (de donde saqué la mayoría de información de su [Datasheet](https://www.mouser.com/datasheet/2/758/DHT11-Technical-Data-Sheet-Translated-Version-1143054.pdf))  el cual es un sensor de temperatura y humedad, con un rango de alimentación de 3.5 V a 5 V, un método de comunicación de 1 solo cable, en vez de los 2 que necesitaba usar con el previo sensor.

Lo primero que quise hacer fue buscar si existe una librería específica para este sensor, que en Arduino directamente me salió como primera opción la de dhrubasaha08. La instalé y me fui a más información para revisar el [repositorio de GitHub](https://github.com/dhrubasaha08/DHT11?tab=readme-ov-file) donde explica que esta librería funciona de la siguiente manera [(traducida a español gracias a DeepL)](https://www.deepl.com/es/translator): 


- Enviar una señal de inicio al sensor DHT11.  

- Leer una serie de pulsos del sensor que representan bits de datos.  

- Interpretar los bits recibidos para extraer los valores de temperatura y humedad.  

- Validar los datos utilizando una suma de comprobación.  

Tenía una documentación super detallada de todo lo que corresponde a este sensor, desde la instalación, la conexión con el Arduino; por último, justo lo que buscaba, ejemplos de código de uso de sus funciones, donde ocupé el siguiente código para poder asegurarme de que el sensor que tenía era funcional y nuestro proyecto iba a continuar: 

``` cpp
/**
 * DHT11 Temperature Reader
 * This sketch reads temperature data from the DHT11 sensor and prints the value to the serial port.
 * It also handles potential error states that might occur during reading.
 *
 * Author: Dhruba Saha
 * Version: 2.1.0
 * License: MIT
 */

// Include the DHT11 library for interfacing with the sensor.
#include <DHT11.h>

// Create an instance of the DHT11 class.
// - For Arduino: Connect the sensor to Digital I/O Pin 2.
// - For ESP32: Connect the sensor to pin GPIO2 or P2.
// - For ESP8266: Connect the sensor to GPIO2 or D4.
DHT11 dht11(2);

void setup() {
    // Initialize serial communication to allow debugging and data readout.
    // Using a baud rate of 9600 bps.
    Serial.begin(9600);
    
    // Uncomment the line below to set a custom delay between sensor readings (in milliseconds).
    // dht11.setDelay(500); // Set this to the desired delay. Default is 500ms.
}

void loop() {
    // Attempt to read the temperature value from the DHT11 sensor.
    int temperature = dht11.readTemperature();

    // Check the result of the reading.
    // If there's no error, print the temperature value.
    // If there's an error, print the appropriate error message.
    if (temperature != DHT11::ERROR_CHECKSUM && temperature != DHT11::ERROR_TIMEOUT) {
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.println(" °C");
    } else {
        // Print error message based on the error code.
        Serial.println(DHT11::getErrorString(temperature));
    }
}

```

Este código me funcionó de manera superrápida, ya que los comentarios eran perfectos y explicaban todo de una manera excelente, donde pude llegar a estos siguientes resultados:

![Foto 1 de la prueba en clases](./imagenes/sesion-08a-Fotoblabla)

## Encargo 16  "cada persona del grupo debe subir a su README: qué llevan hasta el final de esta sesión, qué sí funciona, qué funciona casi, qué no funciona. Después subir nueva versión del código y de la documentación, del trabajo que hagan entre 8a y 9a."

Para poder pasar de él código individual del ejemplo que encontré previamente, a poder formatearlo con las clases que tenemos en nuestro código que armó Morgan junto a Aarón, osea la version [codigoRobotFriolento_0_2_1](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/03-Mosswhosmoss/sesion-08a/codigoRobotFriolento_0_2_1) donde empece probando a directamente poner el codigo como mas me hacia sentido.

Guiandome por el archivo del sensor Ultrasonico, que ya estaba ligeramente con el formato correcto para su funcionamiento, donde llegue a que funcionara, si pero con el codigo sin cambiarlo del ejemplo, pero mas que todo intente explicar con todos los comentarios en todo el funcionamiento de este, porque razones dividi el codigo original de esa manera, que fue lo importante, la siguiente version del codigo se puede encontrar aqui: [codigoRobotFriolento_0_2_2](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/27-SebastianSaez1003/sesion-08a).


