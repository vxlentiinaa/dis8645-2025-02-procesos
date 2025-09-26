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

+ Usar **bool** para switch
+ **variables** con clases (.cpp/.h)
+ Usar booleanas para definir las variables, ej: Persona de 2 a 10 cm de disntancia : true / false

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
  ### PROYECTO 02

+ Sensor **Ultrasónico:**
  
  const int Trigger = 11;   //Pin digital 11 para el Trigger del sensor

  
  const int Echo = 12;   //Pin digital 12 para el Echo del sensor

  + distancia minima de 2 a 10 cm
  + distancia media de 45 a 60 cm
  + distancia maxima de 80 a 100 cm

  + Tiempo de reposo cuando no siente presencia
+ configuración **Altavoz**
  + **tono/volumen** del altavoz para cada distancia.
    + distancia minima: 30 - 40 decibeles
    + distancia media: 70- 80 decibeles
    + distancia maxima: 90 - 93 decibeles
   
  
