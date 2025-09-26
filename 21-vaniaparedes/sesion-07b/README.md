# sesion-07b / 26.09.25

**Comisión** Cynthia Shuffer

+ Sensor ultrasónico HC-sr04 <https://afel.cl/products/sensor-de-ultrasonico-hc-sr04>
+ Según Gemini la velocidad del sonido en el aire, en condiciones normales (20 °C y nivel del mar), es de aproximadamente 343 metros por segundo (m/s) o 1.235 kilómetros por hora (km/h).

**Ejemplos** de velocidad del sonido 
+ Aire a 20 °C: 343 m/s (aproximadamente 1235 km/h).
+ Aire a 0 °C: 331 m/s.
+ Agua dulce: 1.435 m/s.
+ Agua salada: 1.500 m/s.
+ Acero: 6.100 m/s.

+ vcc en caso de arduino r4 es 5v

+ **Rafael Benguria** según wikipedia Rafael José Urbano Benguria Donoso es un físico-matemático chileno, Premio Nacional de Ciencias Exactas de 2005.

## Pseudocódigo
+ INTENTAR QUE EL CÓDIGO SE PUEDA VER COMPLETO EN LA PRIMERA PANTALLA.

+ archivo.ino
+ creditos.ino
+ cableado.ino

### Archivo principal.ino

  ### ¿Qué hacemos primero?
  + Configurar sensor (ultrasónico en este caso) en archivo principal
  + Funciones con void
  + Quedaría en **setup:**
  ```cpp
 void setup() {
  configurarSensoresActuadores();
}
  ```
  + En void **loop:**
```cpp
void loop() {
  leerSensores();
  tomarDecisiones();
  actuar();
}
```
  
### Archivo sensorUltrasonico.ino

  ¿Qué necesitamos para configurar un sensor?
  + En el archivo/ventana de sensor 
  + Necesitamos decidir en qué patita va
  ```cpp
 void configurarSensorUltrasonico() {
  // conectar la patita

  // definir la distancia minima
  // definir la distancia maxima

}
  ```
### Archivo sensoresActuadores.ino
    
+ Configurar más sensores y actuadores
  ```cpp
  void configurarSensoresActuadores() {

  configurarSensorUltrasonico();

  // configurar mas sensores
  // configurar actuadores
  }

  void leerSensores() {}

  void tomarDecisiones() {}

  void actuar() {}
  ```
  
