# sesion-07b 26/09

## Apuntes clase

Comisión Cynthia Shuffer

- Sensor ultrasónico HC-sr04
- La velocidad del sonido en el aire, a 20°C, es de aproximadamente 343,2 metros por segundo (m/s), lo que equivale a 1234 km/h
- Ejemplos de velocidad de sonido en diferentes medios:
- Aire (a 15°C): 340 m/s (1224 km/h)
- Agua (a 25°C): 1593 m/s
- Madera: 3700 m/s
- Acero: 6100 M/s
  
### Pseudocodigo

1. Intentar que el código se pueda ver completo en la primera pantalla
2. archivo.ino
3. creditos.ino
4. cableado.ino
   
### Archivo principal.ino

1 Usar bool para switch
2. variables con clases (.cpp/.h)
3. Usar booleanas para definir las variables, ej: Persona de 2 a 10 cm de distancia : true / false
   
### Pasos

Configurar sensor (ultrasónico en este caso) en archivo principal
Funciones con void
Quedaría en setup
Comentar lo que vamos hacer, que es lo que hará el código

```cpp
 void setup() {
  configurarSensoresActuadores();
 }
```

En void loop:

```cpp
void loop() {
  leerSensores();
  tomarDecisiones();
  actuar();
}
```

### Ultrasónico 

```cpp
 void configurarSensorUltrasonico() {
  // conectar la patita

  // definir la distancia minima
  // definir la distancia maxima

}
```
 
### sensoresActuador.ino

- sirve para configurar más sensores y actuadores

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

---

#### Idea final

Máquina de datos curiosos

Entrada: Al comienzo la máquina está tiritando; al detectar movimiento deja de tiritar y comienza a llamarte según la distancia a la que uno se encuentre.

Si estas lejos (distancia de 1 metro aprox) comenzará a gritar "HOLAA, ACERCÁTE QUIERO CONTARTE ALGO" Si estas a una distancia mediana (distancia de 50 cm aprox) te hablará en un tono normal, sin gritar y te dirá "Todavía estás lejos, necesito que te acerques un poco más" Si estás cerca (distancia de 5 a 10 cm aprox) te susurrará un secreto
