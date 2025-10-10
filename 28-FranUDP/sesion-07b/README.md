# sesion-07b

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### Variabilidad y los sensores

El profe nos mencionó que los datos que entregan los varios sensores son un aaproximación a la realidad, pues las variables constantes de las que dependen los sensores no son realmente constantes.

Un ejemplo que se nos dio fue que el sensor ultrasónico determina la distancia contando el tiempo que tarda en volver el sonido emitido, mas la velocidad del sonido en el aire cambia dependiendo de factores como la temperatura.

### [Dart](https://dart.dev/)

Lenguaje de programación hecho por Google, es el lenguaje que emplea [Flutter](https://flutter.dev/) y fue hecho para hacer programas que corran en cualquier plataforma o sistema.

### [Mermaid.js](https://mermaid.js.org/)

Herramienta para hacer diagramas de flujo escribiendo en estilo markup.

### Other things: <!-- Things to organize + random stuff -->
> ### SUB_SUBTITULO

-----------------------------------------------------------------------------------------------------------
## Encargo 14 <!-- cada persona del grupo debe implementar en diagrama de flujo dibujado o con la herramienta Mermaid.js con sus propias palabras y subirlo a su README -->
### Diagrama de flujo

[![](https://mermaid.ink/img/pako:eNp9Us1u2kAQfpXRnlKJIMBgsA-NQiBNmh9VTSpVBQ4TezDb2rvurjdpCzxMHqCnPECl8mId26SUHOqL9-f7m5ldikjHJEIxT_VDtEBTwO1oqoC_48mHtDBoN09KRhqOZ3B4-Hp1JWNJKtYQS1ugiiSuYLj8_Wucwj2m2oChhG8MMmSBfGZkuSQFTkGKuWUmQSEpy_XRunY62Xca_sepJgxLAKxuNj9XMDq4IXOvAe8MQb55NDn72Vd7wGu9gjHjlNWGLFiZOA6UbQ222FGFPZ3ccmKVuBQN5NrKSHKsWa0zooJMJhVfbR5LDOu-OXhXoXR5qj9rC5FWYMtMW-HTinxWNslyC3b1AKbgrOMWaZBqTvxnCeB0fIHwEaLsaP1PqeeT95QbHbtIGkAXMy3ndhu8K1uMKWGhWWNW257tan87udY8mBdcTBOnntHnFfqCQ9Ylbp7KOe04loDSmriX6XLb_kiSMQg57vX_Ypfh6mBsc2LIV8fzrzzopcWWdVmztnjOyCMjzsq6_AREQyRGxiIsjKOGyFgKy61YluypKBaU0VSEvIzRfJmKqVozJ0f1SevsmWa0SxYinGNqeefyGAsaSeRmZn9PDb8OMifaqUKEnV5rUKmIcCm-ibAd-E3f9wPP97p-pzdo9Rviuwh7g2bHa3ue32l3u53A768b4kfl22oG7VY3aPlep9XrtwdBsP4D3XAtbA?type=png)](https://mermaid.live/edit#pako:eNp9Us1u2kAQfpXRnlKJIMBgsA-NQiBNmh9VTSpVBQ4TezDb2rvurjdpCzxMHqCnPECl8mId26SUHOqL9-f7m5ldikjHJEIxT_VDtEBTwO1oqoC_48mHtDBoN09KRhqOZ3B4-Hp1JWNJKtYQS1ugiiSuYLj8_Wucwj2m2oChhG8MMmSBfGZkuSQFTkGKuWUmQSEpy_XRunY62Xca_sepJgxLAKxuNj9XMDq4IXOvAe8MQb55NDn72Vd7wGu9gjHjlNWGLFiZOA6UbQ222FGFPZ3ccmKVuBQN5NrKSHKsWa0zooJMJhVfbR5LDOu-OXhXoXR5qj9rC5FWYMtMW-HTinxWNslyC3b1AKbgrOMWaZBqTvxnCeB0fIHwEaLsaP1PqeeT95QbHbtIGkAXMy3ndhu8K1uMKWGhWWNW257tan87udY8mBdcTBOnntHnFfqCQ9Ylbp7KOe04loDSmriX6XLb_kiSMQg57vX_Ypfh6mBsc2LIV8fzrzzopcWWdVmztnjOyCMjzsq6_AREQyRGxiIsjKOGyFgKy61YluypKBaU0VSEvIzRfJmKqVozJ0f1SevsmWa0SxYinGNqeefyGAsaSeRmZn9PDb8OMifaqUKEnV5rUKmIcCm-ibAd-E3f9wPP97p-pzdo9Rviuwh7g2bHa3ue32l3u53A768b4kfl22oG7VY3aPlep9XrtwdBsP4D3XAtbA)


-----------------------------------------------------------------------------------------------------------
## Encargo 15 <!-- cada persona del grupo debe subir a su README: documentar funcionamiento de sus sensores, incluyendo instrucciones de conexión y de configuración, subir el proyecto entero de arduino como carpeta, tiene que poder compilar sin problema y mostrar en consola los datos de los sensores -->
### Funcionamiento del sensor

#### [Sensor ultrasónico de distancia (HC-SR04)](https://projecthub.arduino.cc/lucasfernando/ultrasonic-sensor-with-arduino-complete-guide-284faf)

<img align="right" src="./imagenes/HC-SR04.jpg" alt="HC-SR04 pinout" title="Fuente: https://www.theengineeringprojects.com/2018/10/introduction-to-hc-sr04-ultrasonic-sensor.html#google_vignette" width=400>

Emite ${\color{#b0e6e6}ondas\ ultrasónicas}$ y calcula cuánto tiempo pasa antes de que estas regresen a él, igual que un murciélago.

Según lo que he podido encontrar en internet y el testimonio de @misaaaaaa, el sensor ${\color{#b0e6e6}no\ es\ muy\ preciso}$; sin embargo, encontré una biblioteca llamada [NewPing](https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home) que fue desarrollada para solucionar este problema.

| Pinout  |          |
|---------|----------|
| ${\color{Red}Vcc}$     | Alimenta con ${\color{Red}5V}$ al sensor |
| Trigger | Hace que el sensor emita un pulso |
| ${\color{WHITE}Echo}$    | Comunica cuándo regresa el pulso |
|  ${\color{Gray}Gnd}$     | ${\color{Gray}Tierra}$ |

| Consumo    |      |
|------------|------|
| Reposo     | <2mA |
| Trabajando | 15mA |

Ángulo efectivo: 15º

Distancia efectiva: 2 cm a 4 m

#### Ejemplo de la biblioteca NewPing

Cómo ya he dicho antes, empleamos esta biblioteca, en lugar de escribir las 2 líneas de código que toma obtener una medición del sensor, porque con esta biblioteca podemos obtener mediciones más presisas y con menos ruido.

En la clase lo testeamos con [@jotamorales-romulus](https://github.com/jotamorales-romulus), él corrió un código para obtener distancia que encontró en un tutorial y yo el código ejemplo de más abajo.

Probamos mover rápidamente la mano frente al sensor, quitar la mano del rango de vision y volver a ponerla, inclinar la mano en angulos (para que se refleje distinto el sonido), etc. Mientras monitoreabamos el monitor serial, y las mediciones eran considerablemente más estables.


````ino
// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
}

void loop() {
  delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
}
````