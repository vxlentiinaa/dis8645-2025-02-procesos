# sesion-09b

viernes 10 de octubre

Tuvimos que cambiar el sensor.

Misa nos ayudó, pero fue muy complicado usar el micrófono, por lo tanto nos sugirió usar otro sensor.

Usaremos un sensor ultrasónioco para detectar la presencia de alguien o algo.

---

La idea es que haya un servo que mueva una estructura con ojos y un sensor.

La máquina estará girando lentamente por el espacio hasta encontrar una alteración en el sensor de movimiento.

Cuando detecta algo, la máquina se queda "mirando" fijamente a la persona u objeto.

## Sensor ultrasónico

<https://projecthub.arduino.cc/Isaac100/getting-started-with-the-hc-sr04-ultrasonic-sensor-7cabe1>

Envía ondas sonoras desde un transmisor que luego rebotan en un objeto o persona y luego regresan al receptor.

Conexiones:
- VCC --> 5V
- GND --> GND
- Trig --> pin 9
- Eco --> pin 10

Hay que seguir hartos pasos para conectar el sensor.

En primer lugar se necesita definir 2 pines.

En la página aparece así:

```cpp
const int trigPin = 9;  
const int echoPin = 10; 
```

Pero como la idea es hacerlo con clases, yo lo voy a hacer así:

```cpp
// en el .h
  void configurarPatita(int PatitaTriger, int patitaEco);
```

```cpp
// en el .cpp
void Sensor::configurarPatita() {
  Sensor::patitaTriger(9);
  Sensor::patitaEco(10);
}
```

La idea es que, cuando el seneor detecte cierta distancia, el servo se detenga.

Hice una clase para definir las cosas.

```cpp
class SensorProx {
public:
  // constructor
  SensorProx();
  // destructor
  ~SensorProx();

  void configurar();

  void leer();

  void imprimirEnConsola();

  void determinarPresencia();

  // void presencia();
  // void nada();

  int patitaTrigger = 9;
  int patitaEcho = 10;

  float duracion = 0;
  float distancia = 0;

  bool presencia = false;
};
```

Y el archivo .cpp

```cpp
#include "SensorProx.h"

SensorProx::SensorProx() {}

SensorProx::~SensorProx() {}

void SensorProx::configurar() {
  pinMode(SensorProx::patitaEcho, INPUT);
  pinMode(SensorProx::patitaTrigger, OUTPUT);
}

void SensorProx::leer() {

  digitalWrite(SensorProx::patitaTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(SensorProx::patitaTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(SensorProx::patitaTrigger, LOW);

  SensorProx::duracion = pulseIn(
    SensorProx::patitaEcho,
    HIGH);
  SensorProx::distancia = (SensorProx::duracion * 0.0343) / 2;
}

void SensorProx::determinarPresencia() {
  if (SensorProx::distancia < 16) {
    SensorProx::presencia = true;
  } 
  else {
    SensorProx::presencia = false;
  }
}

void SensorProx::imprimirEnConsola() {
  Serial.print("Distancia: ");
  Serial.println(duracion);
  delay(100);
}
```

Quería darle nombre a un `if`
Después de hacer hartas cosas con el código, intentamos