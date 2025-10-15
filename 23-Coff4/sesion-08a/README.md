# sesion-08a

## Comenzamos con el segundo proyecto: 

Anteriormente se hizo el psudocodigo con 2 variantes. por un lado uno que si compila y otro que no. Aunque igual terminamos encontrando la manera de usar el sensor ultrasonico con la Aileen.

La idea de ahora era arreglar o investigar sobre lo que ocurre con el sensor de temperatura. 

Encontre algunos links con algunos codigos y uno que compila bien y marca la temperatura. Al ser nuestro sensor de temperatura y humedad, aun debemos de sacar la variable de humedad porque seria tener mas codigo que no llega a servir.

Paginas que tienen codigo servible:

(https://programarfacil.com/blog/arduino-blog/sensor-dht11-temperatura-humedad-arduino/)

Este es para otro sensor pero que contiene wokwi para las pruebas
(https://randomnerdtutorials.com/guide-for-ds18b20-temperature-sensor-with-arduino/)

Aquí se encuentra ya compilado y funcionando el sensor.
(https://wokwi.com/projects/443523198016158721)


(https://www.instructables.com/DHT11-Temperature-Humidity-Sensor-With-Arduino/)

---

Se me encargo ver bien el servomotor asi que ha llegado mi hora de actuar más el dia de hoy.

Al final si se logro y tengo pruebas en video de ello. tambien esta el codigo en wokwi

(https://wokwi.com/projects/344891730528567891)

Con ello ahora se me encargo ver el tema de la pantalla Oled 

Chatgpt hizo un codigo simple para probar el tema de las tipografias y funcionó:

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeMonoBold12pt7b.h>  // Fuente incluida en Adafruit GFX

#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64

// Dirección I2C típica de pantallas OLED con SSD1306 es 0x3C
#define OLED_RESET -1  
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, OLED_RESET);

void setup() {
  // Inicializamos pantalla
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("No se encontró la pantalla OLED"));
    for (;;); // Se queda detenido si falla
  }

  display.clearDisplay();

  // Seleccionamos la fuente
  display.setFont(&FreeMonoBold12pt7b);

  // Color del texto
  display.setTextColor(SSD1306_WHITE);

  // Posición inicial del cursor (x, y) – y es la línea base del texto
  display.setCursor(0, 30);

  // Mostrar texto
  display.println(F("Hola Mundo!"));

  display.display();
}

void loop() {
  // No es necesario nada en loop para este ejemplo
}
```

Pero hubo un problema que llegamos a ver con la Aileen. En la pantalla que se uso en el encargo anterior funciona todo correcto, pero
en la pantalla que se nos dio para este nuevo proyecto... no da imagen (o al menos no del todo)

![Prueba de Pantallas](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-08a/imagenes/SiyNo.jpg)

Aquí un recopilatorio de ayudas del profe Misa (spoilers: nada funcionó)

(https://github.com/educ8s/Arduino-SSH1106-Examples/tree/main)

(https://github.com/educ8s/Arduino-SSH1106-Examples/blob/main/SSH1106_Hello_World/SSH1106_Hello_World.ino)

(https://www.teachmemicro.com/1-3-i2c-oled-arduino-esp8266-tutorial/)

(https://github.com/olikraus/U8glib_Arduino)

Aquí diferentes ejemplos de lo que llegó a pasar con la pantalla:

[![Prueba de ayuda](https://img.youtube.com/vi/bQ4co3Pamnk/hqdefault.jpg)](https://youtube.com/shorts/bQ4co3Pamnk)

[![Segundo Intento](https://img.youtube.com/vi/OnmafdRIA1Y/hqdefault.jpg)](https://youtube.com/shorts/OnmafdRIA1Y)

(no se porque el segundo no se muestra con miniatura, pero esta subido en youtube como corresponde)


Por otro lado, probamos diferentes cosas con la Aileen como lo es el servo motor:

![Testeo de servomotor](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-08a/imagenes/pruebaUltrasonico.jpg)

[![Prueba Ultrasonido](https://img.youtube.com/vi/ygDbRDc6Gz8/hqdefault.jpg)](https://youtube.com/shorts/ygDbRDc6Gz8?feature=share)

(https://wokwi.com/projects/344891730528567891)

Para la sesión del viernes pondre mis avances en cuanto a estructuras y ver si encuentro una solución.
