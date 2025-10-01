# 🌷 sesion-07b

26 de septiembre de 2025

## 🪩 Apuntes de clase 
- Para empezar hacer el proyecto, necesitamos hacer un psseudocódigo de las cosas que queremos hacer para tener la base.
- Dart para programar con diseño. **material.io**, se puede prototipar con figma, se pueden usar como bibliotecas. 

### 🔮 Inicio del proyecto
Se crean (ejemplo):
- creditos.ino.
- cableado.ino.
- sensorUltrasonico.ino.
- sensoresActuadores.ino.
- crear función que doga detector de verde y un bool estado verde.

## ✦ ¿De que se trata nuestro proyecto?
Se trata de un dispensador de dulces de colores, donde cada dulce representa una emoción y reproduce un audio respectivamnete. Cada dulce representa lo siguiente:
- 🟢 Verde: locura ➜ un audio que dice "si el dulce sale envenenado no es mi culpa" (ejemplo). 
- 🟡 Amarillo: felicidad ➜ una voz que dice "ten tu dulce, que tengas bonito día" (ejemplo).
- 🔴 Rojo: enojo ➜ un audio que dice "toma tu dulce y ándate" (ejemplo).  
- 🔵 Azul: tristeza ➜ un audio que dice "no te lleves mi dulcesito por favor" (ejemplo).

Entonces se ecuentra este dispensador que tiene forma de mostruo. También tiene una pantalla que muestra animaciones con respecto a las emociones de los colores, por ende al momento de que caiga el dulce, la animación cambiará de modo stand by, a la animación correspondiente al color del dulce.

Con click derecho puedo apretar la función > ir a definición > y lleva al archivo donde está aojado la función y sus parámetros.

```cpp
void setup() {
configurarSensorUltrasonico();

// configurar mas sensores 

// configurar actuadores
}

void loop() {
}
```

### 🛠️ Trabajo de hoy
- Hacer el pseudocódigo con las respectivas pestañas ino.
- variables globales.h -> las variables están en un solo lugar.
- Armar clases para que quede todo más ordenado (con los colores correspondientes que tenemos)

## 🛠️ Pseudocódigo V0 del proyecto

pseudocódigo.ino

```cpp
void setup() {
configurarSensorColor();

configurarAudio();
//nombre del archivo que se va a reproducir

configurarParlante();

configurarPantalla();
//medidas de la pantalla

configurarTerminal();
}

void loop() {
leerSensores();
tomarDecisiones();
actuar();
}
```

sensoresActuadores.ino


```cpp
void configurarSensorColor() {

configurarSensorColor();

// configurar mas sensores
// configurar actuadores
}

void leerSensores() {}

void tomarDecisiones() {}

void actuar() {}


void configurarMiniParlante(){}

//definir el volumen del audio que se va a reproducir

void configurarPantalla(){
//diseñar las animaciones que se usaran
//las animaciones cambiaran dependiendo el color 
}  
```

sensorColor.ino

```cpp
void configurarSensorColor() {
  // conectar la patitas del sensor 
  // censar los colores y ver cuales reconoce y cuales no (dependiendo de los dulces a utilizar)
  // definir el rango de valores para que detecte los colores --> r:0 g:0 b:0
  
  // se detectaron los siguientes colores: azul, verde, rojo, amarillo, cyan, magenta
  }
```

## ☞ Encargo 14

### Hacer un diagrama de flujo en *mermaid* con la funcionalidad del proyecto.

   ```mermaid
   flowchart TD
    A(["<b>INICIO</b>"]) --> n1["Stand by <br>(animación en pantalla)"]
    n1 --> n2["La persona dispensa el dulce"]
    n2 --> n3["Sensor de color <br>lo clasifica"]
    n3 --> n4["¿Lo reconoce?"]
    n4 --> n5["SÍ"] & n6["NO"]
    n5 --> n7["Color <br>del dulce"]
    n7 --> n9["VERDE"] & n10["AMARILLO"] & n11["ROJO"] & n12["AZUL"]
    n9 --> n13["Emoción<br>Locura"]
    n10 --> n14["Emoción<br>Felicidad"]
    n11 --> n15["Emoción<br>Enojo"]
    n12 --> n16["Emoción<br>Tristeza"]
    n13 --> n17["Se reproduce el <br>audio y la animación"]
    n14 --> n18@{ label: "Se reproduce el<br style=\"--tw-scale-x:\">audio y la animación" }
    n15 --> n19@{ label: "Se reproduce el<br style=\"--tw-scale-x:\">audio y la animación" }
    n16 --> n20@{ label: "Se reproduce el<br style=\"--tw-scale-x:\">audio y la animación" }
    n17 --> n21(["FIN <br>de la interacción"])
    n18 --> n21
    n19 --> n21
    n20 --> n21
    n6 --> n8["Suena un <b>audio</b> que dice: mmh lo siento, no pude darte un dulce pero... y la <b>animación en pantalla</b>"]
    n21 --> n1
    n1@{ shape: rect}
    n3@{ shape: diam}
    n4@{ shape: diam}
    n7@{ shape: diam}
    n18@{ shape: rect}
    n19@{ shape: rect}
    n20@{ shape: rect}
    style n7 fill:transparent
    style n9 fill:#00C853
    style n10 fill:#FFD600
    style n11 fill:#D50000
    style n12 fill:#2962FF
    style n13 fill:#C8E6C9
    style n14 fill:#FFF9C4
    style n15 fill:#FFCDD2
    style n16 fill:#BBDEFB
    style n17 fill:#C8E6C9
    style n18 fill:#FFF9C4
    style n19 fill:#FFCDD2
    style n20 fill:#BBDEFB
    style n8 stroke-width:1px,stroke-dasharray: 1
```

- agregar al pseudocódigo

## Funcionamiento del sensor de reconociemitno de color TCS3200

   | Sensor TCS3200 | Arduino | Significado            |
   | ---------------|---------|------------------------|
   | VCC            | 5V      | Alimentación           |
   | GND            | GND     | Tierra                 |
   | S0             | D4      | Escalado de frecuencia | 
   | S1             | D5      | Escalado de frecuencia | 
   | S2             | D6      | Selección de filtro    |
   | S3             | D7      | Selección de filtro    |     
   | OUT            | D8      | Salida de frecuencia a medir | 
   | OE             | D9      | Output LOW = activo |

### ¿Cómo funciona el sensor de color TCS3200?
1. Tiene fotodiodos con filtros: el chip tiene una matriz de fotodiodos divididos en 4 grupos:
   
   - 🔴 Sensibles al rojo.
   - 🟢 Sensibles al verde.
   - 🔵 Sensibles al azul.
   - ⚪️ Sin filtro (blanco/luz total).
  
1. Selección de color S2 y S3: con estos pines de control se eloge qué grupo de fotodiodos activa el sensor (rojo, verde o azul).

1. Conversión de frecuencia: la luz que incide en esos fotodiodos se convierte en una señal de salida en forma de onda cuadrada (PWM).
   
   -  Más luz ➜ mayor frecuencia (Hz).
   -  Menos luz ➜ menor frecuencia.

 1. Escalado de frecuencia S0 y S1: con esos pines se eloge si la salida se escala a 100%, 20%, 2% o apagado. Esto ayuda a ajustar la sensibilidad.

 1. Lectura en Arduino: así se obtiene el triplete RGB del objeto frente al sensor.

   
   - 🔴 Se activa primero el filtro rojo ➜ se mide la frecuencia ➜ valor de "rojo".
   - 🟢 Luego verde ➜ valor de "verde".
   - 🔵 Luego el azul ➜ valor de "azul".

### Código base para probar el sensor TCS3200 , sacado de la página de Arduino 
☞ (https://projecthub.arduino.cc/hariprasad_lokesh/colour-identifier-using-tcs3200-b21990)


```cpp
/* This code works with GY-31 TCS3200 TCS230 color sensor module
 *   It select a photodiode set and read its value (Red Set/Blue set/Green set) and reproduce   the color on the RGB LED
 * Refer to www.surtrtech.com for more details
 */
   
#define s0 8        //Module pins wiring
#define s1 9
#define s2 10
#define   s3 11
#define out 12

#define LED_R 3   //LED pins, don't forget "pwm"
#define   LED_G 5
#define LED_B 6

int Red=0, Blue=0, Green=0;

void setup()   
{
   pinMode(LED_R,OUTPUT);     //pin modes
   pinMode(LED_G,OUTPUT);
    pinMode(LED_B,OUTPUT);
   
   pinMode(s0,OUTPUT);    
   pinMode(s1,OUTPUT);
    pinMode(s2,OUTPUT);
   pinMode(s3,OUTPUT);
   pinMode(out,INPUT);

    Serial.begin(9600);   //intialize the serial monitor baud rate
   
   digitalWrite(s0,HIGH);   //Putting S0/S1 on HIGH/HIGH levels means the output frequency scalling is at 100%   (recommended)
   digitalWrite(s1,HIGH); //LOW/LOW is off HIGH/LOW is 20% and   LOW/HIGH is  2%
   
}

void loop()
{
  GetColors();                                    //Execute   the GetColors function
  
  analogWrite(LED_R,map(Red,15,60,255,0));      //analogWrite   generates a PWM signal with 0-255 value (0 is 0V and 255 is 5V), LED_R is the pin   where we are generating the signal, 15/60 are the min/max of the "Red" value,   try measuring your own ones
                                               //e.g:   if the "Red" value given by the sensor is 15 -> it will generate a pwm signal   with 255 value on the LED_R pin same for 60->0, because the lower the value given   by the sensor the higher is that color
  analogWrite(LED_G,map(Green,30,55,255,0));     
  analogWrite(LED_B,map(Blue,13,45,255,0));

}

void GetColors()   
{    
  digitalWrite(s2, LOW);                                           //S2/S3   levels define which set of photodiodes we are using LOW/LOW is for RED LOW/HIGH   is for Blue and HIGH/HIGH is for green 
  digitalWrite(s3, LOW);                                           
   Red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);       //here we wait   until "out" go LOW, we start measuring the duration and stops when "out" is   HIGH again, if you have trouble with this expression check the bottom of the code
   delay(20);  
  digitalWrite(s3, HIGH);                                         //Here   we select the other color (set of photodiodes) and measure the other colors value   using the same techinque
  Blue = pulseIn(out, digitalRead(out) == HIGH ? LOW   : HIGH);
  delay(20);  
  digitalWrite(s2, HIGH);  
  Green = pulseIn(out,   digitalRead(out) == HIGH ? LOW : HIGH);
  delay(20);  
}

//Here's an   example how to understand that expression above,
//""digitalRead(out) == HIGH   ? LOW : HIGH"" this whole expression is either HIGH or LOW as pulseIn function   requires a HIGH/LOW value on the second argument

//led_Status = led_Status   == HIGH ? LOW : HIGH;  
//
//if(led_Status == HIGH) 
//{ 
//led_Status   =LOW; 
//} 
//else 
//{ 
//led_Status = HIGH; 
//}
```
➜ Este código sólo detecta los colores RGB, dándole valores para que reconozca cada color. Para nuestro proyecto es necesario el amarillo, para esto se debe hacer una mezcla de estos colores y **detectar cuáles son los parámetros de los valores para que detecte el color amarillo**.




