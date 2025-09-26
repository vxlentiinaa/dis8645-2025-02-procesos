# sesion-07b
## APUNTES CLASE 26.09.25 𓆩♡𓆪

★ Profesor Rafael Benguria [Sus apuntes](http://www.fis.puc.cl/~rbenguri/teaching-rb.html)

★ Sensor de Ultrasonico HC-SR04: murcielago, se usa para medir distancias.

★ Los sensores son muy sensibles, leer bien las especificaciones (a veces lo que sale en la página no es cien por cien, se aprende experimentando).

★ Para última entrega será obligatorio que el código sea corto y no de opción para deslizar, y que el resto esté en otras pestañas.

★ Para comenzar a programar en Arduino, definir parámetros en pestañas, luego en la principal configurar los sensores.

ej:

```cpp
void setup() {

configurarSensoresActuadores();

configurarSensorUltrasonico();

}

void loop() {
leerSensores();
tomarDecisiones();
actuar();
} 
```

Añadir pestaña "SensorUltrasonico.h"
```cpp
void configurarSensorUltrasonico(){
// conectar la patita

//definir distancia minima
//definir distancia maxima

}
```

 Añadir pestaña "SensoresActuadores.h"
 ```cpp
void configurarSensoresActuadores(); {
configurarSensorUltrasonico();

//configurar mas sensores
//configurar actuadores

void leerSensores() {}

void tomarDecisiones() {}

void actuar() {}
}

```
