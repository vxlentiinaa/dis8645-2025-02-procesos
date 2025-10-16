#include "constantes.h"
#include "SensorProx.h"
#include "Cuello.h"
#include "Parpados.h"
#include "ServoSensores.h"
#include <Servo.h>

// Objetos
Cuello cuello;
Parpados parpados;
ServoSensores sensores;

SensorProx sensorProxIzq;
SensorProx sensorProxDer;

// Variables de control
int anguloSensores = 90;
int paso = 10;
int detectionDistance = 25;
bool personaDetectada = false;
// posición actual del cuello
int anguloActual = 0;
// 1 = derecha, -1 = izquierda
int direccion = 1;
unsigned long ultimoMovimiento = 0;
// controla la velocidad
int intervaloMovimiento = 60;

void setup() {
  Serial.begin(9600);

  sensores.configurar();
  cuello.configurar();
  parpados.configurar();
  sensorProxIzq.configurar(10, 9);
  sensorProxDer.configurar(11, 12);
  //void SensorProx::configurar() {
  // pinMode(SensorProx::patitaEcho, INPUT);
  //pinMode(SensorProx::patitaTrigger, OUTPUT);

  cuello.moverMotorcillo(90, 0);
  parpados.moverMotorcillo(0, 0);

  Serial.println("Iniciando sistema de ojos...");
}
void loop() {

  sensorProxIzq.leer();
  
  sensorProxIzq.imprimirEnConsola();

  sensorProxIzq.determinarPresencia();
  sensores.imprimirEnConsola();
  sensores.moverMotorcillo();


// cuandoo el sensor de la izquierda deteeeecto a alguin
if (sensorProxIzq.presencia == true) {
    // el moovimiento que esta oocurriendo en servoSensores se detendra
  sensores.escanearPresencia = false;
// Tambien querremos que el sensor ultrasonico pare de detectar una presencia
// esto se puede hacer de la misma manera que creamoos una booleana para sensore.escanearPresencia

// tendreemoos que usar el dato de angulo que noo se dnde esta
// para que en el cuello.mooverMotoorcilloo se mueva a ese anguloo especificamente

// para que ste dato pueda ser transmitido entre archivos, queremoos que ANGULO pase a ser un string
// que eventualmente en moverMotorcillo lo atrapara para moverse

// vamos a crear algo que se llame cuelloAngulo comoo un INT dentroo de El archivo .h de cuello
// y justo aqui, despues de que todo dejoo de moverse escribiremos una linea que sea

// cuelloAngulo = AnguloDetectado

//  cuello.moverMotorcillo();
} 

  // Leer distancia de sensores
}


//   int distanciaIZQ = sensorProxIzq.distancia;
//   int distanciaDER = sensorProxDer.distancia;

//   personaDetectada = ((distanciaIZQ > 0 && distanciaIZQ < detectionDistance) || (distanciaDER > 0 && distanciaDER < detectionDistance));



//   Serial.print("Distancia Izq: ");
//   Serial.print(distanciaIZQ);
//   Serial.print(" cm | Distancia Der: ");
//   Serial.print(distanciaDER);
//   Serial.print(" cm | Persona: ");
//   Serial.println(personaDetectada ? "Sí" : "No");

//   if (personaDetectada) {
//     cuello.moverMotorcillo(cuello.getAnguloActual(), 0);
//     sensores.moverMotorcillo();  // mantiene posición
//     parpados.moverMotorcillo(0, 0);               // ojos abiertos

//     // Mostrar ángulo actual del servo de sensores
//     int anguloActual = sensores.getAnguloActual();
//     Serial.print("ServoSensores en ángulo: ");
//     Serial.println(anguloActual);

//     delay(500);
//   } else {
//     unsigned long ahora = millis();

//     // Mover cada cierto tiempo (para hacerlo más lento y fluido)
//     if (ahora - ultimoMovimiento >= intervaloMovimiento) {
//       // Actualizar el ángulo
//       anguloActual += direccion * paso;

//       // Rebotar al llegar a los límites
//       if (anguloActual >= 180) {
//         direccion = -1;
//       } else if (anguloActual <= 0) {
//         direccion = 1;
//       }

//       // Calcular el ángulo del servo de sensores
//       anguloSensores = map(anguloActual, 0, 180, 30, 150);

//       // Mover los servos
//       cuello.moverMotorcillo(anguloActual, 0);
//       sensores.moverMotorcillo();

//       // Parpadear ocasionalmente
//       parpadear();

//       // Verificar detección
//       if (verificarDeteccion()) {
//         personaDetectada = true;
//       }

//       // Guardar el momento del último movimiento
//       ultimoMovimiento = ahora;
//     }
//   }
// }

// // Funciones auxiliares

// void parpadear() {
//   static unsigned long ultimoParpadeo = 0;
//   unsigned long ahora = millis();
//   if (ahora - ultimoParpadeo > 3000) {
//     parpados.moverMotorcillo(90, 200);
//     parpados.moverMotorcillo(0, 200);
//     ultimoParpadeo = ahora;
//   }
// }

// bool verificarDeteccion() {
//   sensorProxIzq.leer();
//   sensorProxDer.leer();
//   int distL = sensorProxIzq.distancia;
//   int distR = sensorProxDer.distancia;
//   if ((distL > 0 && distL < detectionDistance) || (distR > 0 && distR < detectionDistance)) {
//     personaDetectada = true;
//     return true;
//   }
//   return false;
// }
