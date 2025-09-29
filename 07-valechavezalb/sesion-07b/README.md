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
✼ Hacer un diagrama de flujo en *mermaid* con la funcionalidad del proyecto.

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

✼ Visualización de cómo funciona el sensor y carpeta de con su código.
