# sesion-07b

## apuntes
- llegue tarde y estuve perdido al inicio, tengo que subir apuntes de lo que se hizo en clases


  ## Encargo 14
  
Cada persona del grupo debe implementar en diagrama de flujo dibujado o con la herramienta Mermaid.js con sus propias palabras y subirlo a su README.

- Ocupé [documentación de Mermaid](https://mermaid.js.org/config/theming.html) para entender algunas cosas y poder ajustar el tamaño de la letra (estaba media chica la letra y me ayudó a que se viese mejor) y [este foro](https://github.com/mermaid-js/mermaid/issues/1779) para cambiar la orientación del diagrama a horizontal (LR).
  
```cpp
---
config:
  theme: redux
---
flowchart TD

    A["Inicio: Arduino recibe energía"] --> B["Ojos se despiertan y sensores se activan"]
    B --> C["Repetir continuamente"]
    C --> D["Mide distancia"]

    D --> E{"¿Usuario presente?"}
    E -- No --> F["Espera"] --> D
    E -- Sí --> G["Observa perturbadoramente al usuario"]

    G --> H{"¿Usuario está muy cerca?"}
    H -- No --> D
    H -- Sí --> I["Elegir sonido aleatorio"]
    I --> J["Reproducir respuesta"]

    J --> K{"¿Usuario todavía presente?"}
    K -- No --> F
    K -- Sí --> D
```


## Encargo 15

Cada persona del grupo debe subir a su README: documentar funcionamiento de sus sensores, incluyendo instrucciones de conexión y de configuración, subir el proyecto entero de Arduino como carpeta, asegurándose de que compile sin problemas y muestre los datos de los sensores en consola.

Revisé este link: [Tutorial de Arduino y sensor ultrasónico HC-SR04 - Naylamp Mechatronics](https://naylampmechatronics.com/blog/10_tutorial-de-arduino-y-sensor-ultrasonico-hc-sr04.html). Estaba un poco perdido sobre cómo funciona el sensor.

### Sensor HC-SR04
  
 Características:

- **Voltaje de entrada:** 5V
- **Distancia de detección:** 2 cm ~ 450 cm
- **Precisión:** 0.3 cm
- **Ángulo de detección:** <15°
- **Tamaño:** 4.5 cm x 2.0 cm x 1.3 cm

- Actuadores: DFPlayer Mini, servomotor SG90 y altavoz

### Funcionamiento del sensor

El **HC-SR04** mide qué tan lejos están los objetos frente a él. Funciona como un “eco” de ultrasonido: el sensor envía un sonido que no podemos escuchar y mide cuánto tarda en regresar después de rebotar en un objeto.  
Para explicarlo de manera sencilla: es como un murciélago que mide la distancia con sonidos.

### Conexión al Arduino

| Pin del sensor | Pin del Arduino | Función |
|----------------|----------------|---------|
| **VCC**        | 5V             | Alimentación|
| **GND**        | GND            | Tierra |
| **TRIG**       | 2              | Envía el pulso ultrasónico |
| **ECHO**       | 3              | Recibe el eco y mide el tiempo|

No tenía el sensor físicamente en mi casa, así que realicé todas las pruebas en **Wokwi**, un simulador de Arduino en línea.  
Esto me permitió comprobar que el código funciona correctamente, visualizar las lecturas en el monitor serial y simular el comportamiento del sensor sin necesidad de tener el dispositivo físico.

```cpp
const int Trigger = 2;   //Pin digital 2 para el Trigger del sensor
const int Echo = 3;   //Pin digital 3 para el Echo del sensor
 
void setup() {
  Serial.begin(9600);//iniciailzamos la comunicación
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
}
 
void loop()
{
 
  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros
 
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59;             //escalamos el tiempo a una distancia en cm
  
  Serial.print("Distancia: ");
  Serial.print(d);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  delay(100);          //Hacemos una pausa de 100ms
}
  
```

![Imagen conexion wowki](./imagenes/wokwi.png)

Aquí definí los valores de distancia para el comportamiento del robot: la distancia mínima y máxima que los sensores pueden detectar, y la distancia a la que se activa el saludo. También asigné los pines de cada sensor ultrasónico (A y B), que antes estaban sin rellenar, para que el Arduino sepa a qué pines están conectados los Trigger y Echo de cada sensor. Intenté integrarlo al código completo, pero todavía necesitamos adaptarlo y trabajar más, porque actualmente el código está incompleto y genera muchos errores.

```cpp
int distanciaMin = 10;      // Distancia mínima para que detecte a la persona
int distanciaMax = 100;     // Distancia máxima detección
int distanciaSaludo = 50;   // Distancia a la que reproduce saludo

// ir modificando y ajustando


#define TRIG_A 2   // Pin Trigger del sensor ultrasónico A
#define ECHO_A 3   // Pin Echo del sensor ultrasónico A
#define TRIG_B 4   // Pin Trigger del sensor ultrasónico B
#define ECHO_B 5   // Pin Echo del sensor ultrasónico B
```






 
