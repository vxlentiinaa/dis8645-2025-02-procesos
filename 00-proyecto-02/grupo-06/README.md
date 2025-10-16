# Proyecto 02
- Grupo: 06
- Nombre de grupo: Hijos de la Tierra
- Integrantes:
 - Antonia Fuentealba Pessot / [AntFuentealba](https://github.com/AntFuentealba)
 - Santiago Gaete Fernández / [santiagoClifford](https://github.com/santiagoClifford)
 - Sofía Pérez Muñoz / [sofia-perezm](https://github.com/sofia-perezm)
 - Félix Rodríguez Guevara / [felix-rg416](https://github.com/felix-rg416)

## Presentación textual
### Lil Brother
Nuestro proyecto es una máquina con ojos que reacciona ante la presencia de una persona. En su estado normal, la base en donde están los ojos se mueven constantemente de un lado a otro y pestañean en un ciclo continuo, como si estuvieran explorando el entorno.
Cuando el sensor ultrasónico detecta a alguien cerca, la máquina se detiene y queda “mirando” fijamente, dejando de pestañear, como si reconociera la presencia.
Al momento en que la persona se aleja, el sistema entra en un estado de alivio y vuelve a su comportamiento inicial, retomando el movimiento y el parpadeo en bucle.

## Inputs y outputs

Componentes a utilizar:

- Sensores ultrasónicos (2), sensor de proximidad HC-SR04
- Servomotores (3)

### Input

Mediante los sensores ultrasónicos, la máquina detecta si existe o no presencia de unx sujetx u objeto. Esto mediante el movimiento de los sensores a través de servomotores, además la estructura tiene unos ojos que parpadean constantemente mientras está buscando que detectar.

### Output

Al detectar cualquier tipo de presencia, se queda mirando fijamente a la dirección en donde se haya sensado, y el pestañeo se detiene.

## Bocetos y acercamientos

En la primera etapa teniamos pensado como grupo el usar dos micrófonos MAX4466, y que através de estos se pudiera detectar sonido y esto activara el movimiento de servomotores para mover los ojos. Sin embargo esta primera idea fue desechada por complicaciones en el funcionamiento de los micrófonos.

## Etapas del código
### Etapa 1: Inclusión de bibliotecas
```cpp
#include "constantes.h"
#include "SensorProx.h"
#include "Cuello.h"
#include "Parpados.h"
#include "ServoSensores.h"
#include <Servo.h>
#include <Arduino.h>
```

### Etapa 2: Creación de objetos
```cpp
Cuello cuello;
Parpados parpados;
ServoSensores sensores;
SensorProx sensorProxIZQ;
SensorProx sensorProxDER;
```

### Etapa 3: Variables de control
```cpp
int anguloSensores = 90;
int paso = 2;
int detectionDistance = 25;
bool personaDetectada = false;
```

### Etapa 4: setup () - Configuración inicial
```cpp
void setup() {
  Serial.begin(9600);
  sensores.configurar(10);
  cuello.configurar();
  parpados.configurar();
  sensorProxIZQ.configurar();
  sensorProxDER.configurar();

  sensores.moverMotorcillo(90, 0);
  cuello.moverMotorcillo(90, 0);
  parpados.moverMotorcillo(0, 0);

  Serial.println("Iniciando sistema de ojos...");
}
```
### Etapa 5: loop () - Ejecución inicial
a) Lectura de sensores

```cpp
sensorProxIZQ.leer();
sensorProxDER.leer();
int distanciaIZQ = sensorProxIZQ.distancia;
int distanciaDER = sensorProxDER.distancia;
```
b) Detección de personas

```cpp
personaDetectada = (
  (distanciaIZQ > 0 && distanciaIZQ < detectionDistance) ||
  (distanciaDER > 0 && distanciaDER < detectionDistance)
);
```
c) Mostrar datos

```cpp
Serial.print("Distancia IZQ: ");
  Serial.print(distanciaIZQ);
  Serial.print(" cm | Distancia DER: ");
  Serial.print(distanciaDER);
  Serial.print(" cm | Persona: ");
  Serial.println(personaDetectada ? "Sí" : "No");
```
d) Si hay persona detectada

```cpp
if (personaDetectada) {
  cuello.moverMotorcillo(cuello.getAnguloActual(), 0);
  sensores.moverMotorcillo(anguloSensores, 0);
  parpados.moverMotorcillo(0, 0); // ojos abiertos

// Mostrar ángulo actual del servo de sensores
 int anguloActual = sensores.getAnguloActual();
  Serial.print("ServoSensores en ángulo: ");
  Serial.println(anguloActual);

    delay(200);
  } 
}
```

e) si NO hay persona detectada

```cpp
else {
  unsigned long ahora = millis();

  // Mover cada cierto tiempo (para hacerlo más lento y fluido)
  if (ahora - ultimoMovimiento >= intervaloMovimiento) {
    // Actualizar el ángulo
    anguloActual += direccion * paso;

    // Rebotar al llegar a los límites
    if (anguloActual >= 180) {
      direccion = -1;
    } else if (anguloActual <= 0) {
      direccion = 1;
    }

    // Calcular el ángulo del servo de sensores
    anguloSensores = map(anguloActual, 0, 180, 30, 150);

    // Mover los servos
    cuello.moverMotorcillo(anguloActual, 0);
    sensores.moverMotorcillo(anguloSensores, 0);

    // Parpadear ocasionalmente
    parpadear();

    // Verificar detección
    if (verificarDeteccion()) {
      personaDetectada = true;
    }

    // Guardar el momento del último movimiento
    ultimoMovimiento = ahora;
  }
```

### Etapa 6: Funciones auxiliares
```cpp
void parpadear() {
  static unsigned long ultimoParpadeo = 0;
  unsigned long ahora = millis();
  if (ahora - ultimoParpadeo > 3000) {
    parpados.moverMotorcillo(90, 200);
    parpados.moverMotorcillo(0, 200);
    ultimoParpadeo = ahora;
  }
}

bool verificarDeteccion() {
  sensorProxIZQ.leer();
  sensorProxDER.leer();
  int distL = sensorProxIZQ.distancia;
  int distR = sensorProxDER.distancia;
  if ((distL > 0 && distL < detectionDistance) || (distR > 0 && distR < detectionDistance)) {
    personaDetectada = true;
    return true;
  }
  return false;
}
```

## Referentes 
- 1984 de George Orwell.
### Musicales

el concepto de la paranoia ha sido trabajado múltiples veces por grandes exponentes de la música. Cada uno de ellxs dando su punto de vista de cómo es afectadx por la paranoia, y como ésta se manifiesta en sus vidas.

- [Paranoid Android - Radiohead](https://youtu.be/Lt8AfIeJOxw)
- [CHROMAKOPIA - Tyler, The Creator](https://youtu.be/hCcwCv3G1FQ)
- [Paranoid - Black Sabbath](https://youtu.be/fWvKvOViM3g)
- [Paranoid Eyes - Pink Floyd](https://youtu.be/ALuor5QREgw)
- [Imogen Heap - Headlock](https://youtu.be/roPiy2JydwA)


