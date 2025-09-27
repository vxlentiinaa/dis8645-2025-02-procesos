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

✦ ¿De que se trata nuestro proyecto?
Se trata de un dispensador de dulces de colores, donde cada dulce representa una emoción y reproduce un audio respectivamnete. Cada dulce representa lo siguiente:
- 🟢 Verde: locura ➜ un audio que dice "si el dulce sale envenenado no es mi culpa" (ejemplo). 
- 🟡 Amarillo: felicidad ➜ una voz que dice "ten tu dulce, que tengas bonito día" (ejemplo).
- 🔴 Rojo: enojo ➜ un audio que dice "toma tu dulce y ándate" (ejemplo).  
- 🔵 Azul: tristeza ➜ un audio que dice "no te lleves mi dulcesito por favor" (ejemplo).

Entonces se ecuentra este dispensador con una pantalla, la patal

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

## 🛠️ Pseudocódigo VO del proyecto

1. pseudocódigo.ino
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
2. sensoresActuadores.ino

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

3. sensorColor.ino

```cpp
void configurarSensorColor() {
  // conectar la patitas del sensor 
  // censar los colores y ver cuales reconoce y cuales no (dependiendo de los dulces a utilizar)
  // definir el rango de valores para que detecte los colores --> r:0 g:0 b:0
  
  // se detectaron los siguientes colores: azul, verde, rojo, amarillo, cyan, magenta
  }
```

## ☞ Encargo 14
1. **Hacer un diagrama de flujo en mermaid (ya que se puede subir a markdown) con la funcionalidad del proyecto**.
   
   
3. **Visualización de cómo funciona el sensor y carpeta de con su código**.
