# Sesión-07b

Viernes 26 de septiembre, 2025

## Trabajo en clase

### Cosas que hablamos en la mañana

- Hablamos de las comisiones, ya que Aarón ya encontró una buena comisión, Cynthia.

- Rafael Benguria, profesor de Aarón y referente, Premio Nacional de Ciencias, hace clases de Física.

- Velocidad del sonido, no porque el sensor me diga algo es la verdad; es una interpretación.

### Pseudocodigo para los Proyectos-02

[reproductor-mp3](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini)

---

## Encargo-14: Diagrama de flujo

cada persona del grupo debe implementar en diagrama de flujo dibujado o con la herramienta [mermaid](https://mermaid.js.org/intro/getting-started.html) con sus propias palabras y subirlo a su README.

este diagrama es lo mas resumido de nuestra propuesta, el inicio de la idea en mi experiencia mermaid esta horriblemente diseñado, ya que me costo un monton encontrar la consola para empzar a hacer el diagrama, tambin al iniciar sesion te hacia un monton de preguntas y era muy tedioso entrar.

```mermaid
---
config:
  theme: redux
---
flowchart TB
    A(["el sensor ultrasonico detecta distancia"]) --> B{"¿hay cercania?"}
    B --> n1(["sí"]) & n2(["no"])
    n2 --> n3(["loop"])
    n3 --> B
    n1 --> n4(["sonido"])
    n4 --> n5(["loop"])
    n5 --> B
     A:::Sky
     A:::Aqua
     B:::Rose
     B:::Sky
     B:::Aqua
     n1:::Aqua
     n1:::Sky
     n1:::Peach
     n2:::Rose
     n3:::Aqua
     n3:::Sky
     n4:::Peach
     n5:::Sky
    classDef Rose stroke-width:1px, stroke-dasharray:none, stroke:#FF5978, fill:#FFDFE5, color:#8E2236
    classDef Aqua stroke-width:1px, stroke-dasharray:none, stroke:#46EDC8, fill:#DEFFF8, color:#378E7A
    classDef Sky stroke-width:1px, stroke-dasharray:none, stroke:#374D7C, fill:#E2EBFF, color:#374D7C
    classDef Peach stroke-width:1px, stroke-dasharray:none, stroke:#FBB35A, fill:#FFEFDB, color:#8F632D
```

## Encargo-15,

Cada persona del grupo debe subir a su README: documentar funcionamiento de sus sensores, incluyendo instrucciones de conexión y de configuración, subir el proyecto entero de arduino como carpeta, tiene que poder compilar sin problema y mostrar en consola los datos de los sensores.

Sensor ultrasonico HC-SR04, envía un sonido muy agudo (40 kHz), cuando el sonido se encuentra con un objeto, rebota y el receptor lo detecta como eco, utilizando este codigo nos dimos cuenta que esta mal calibrado, ya que derrepente los datos muestran cambios drasticos de distancia de la nada.

probamos este codigo que encontro jota morales.

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
