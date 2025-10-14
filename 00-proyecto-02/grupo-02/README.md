# Proyecto 02: "Máquina saludadora"

Viernes 17 de octube de 2025

### Nombre estudiantes:

- Catalina Catalán
- Valentina Chávez
- Camila Delgado
- Nicolás Miranda 
- Miguel Vera 

## (Nombre del proyecto)

## 🔮 Explicación del proyecto

Es un dispensador interactivo en forma de monstruo de color verde que reacciona emocionalmente según el color del chicle detectado. Como cada color significa una emoción, al momento de girar la manilla para obtener tu chicle, el monstruo te saludará súper feliz si el chicle salió verde, acompañado de una animación y un audio correspondiente a la emoción.

## Objetivo del Proyecto
- Crear una experiencia lúdica e interactiva que vincule colores, emociones y tecnología.
- Mostrar cómo los sensores y actuadores pueden combinarse para generar una **respuesta audiovisual emocional**.

## ⚙️ Descripción general del funcionamiento
Consiste en un dispensador de chicles con cuatro colores:

| Colores | Significado |
|---------|-------------|
| 🔴 Rojo | Enojado     |
| 🟠 Naranjo | Loco     |
| 🟢 Verde | Feliz      |
| 🔵 Azul  | Triste     |

- Cada vez que cae un chicle, el sensor identifica su tono.
- El monstruo reacciona mostrando una animación del ojo en una pantalla circular y reproduciendo un audio a la emoción detectada.

## 🕹️ La interacción...

1. El usuario gira la manilla para que caiga un chicle.
2. El chicle pasa por el sensor de color.
3. El sensor detecta el color dominante.
4. El sistema identifica la emoción asociada.
5. El ojo del monstruo cambia su animación según la emoción.
6. Se reproduce el sonido correspondiente desde el módulo MP3.
7. El proceso se repite con cada chicle.

(agregar mapa de flujo en mermaid)


## 🔌 Componentes utilizados 

- Arduino Uno R3.
- Sensor de Color TCS3200 / TCS230.
- Pantalla TFT Circular 1.24 pulgadas.
- Módulo MP3.
- Conversor Lógico de Voltaje.
- Memoria MicroSD.
- Altavoz mini speaker.
- Cables.
- Protoboard.
- Fuente de alimentación.

## ⚡️ Conexiones y esquema
Se detallan y se muestra cómo son las conexiones entre el Arduino, sensor de color, módulo MP3 y el altavoz.

### Conexión del sensor de color

- Detecta las frecuencia de colores mediante frecuencias en RGB.
- Se verificó el reconociemiento de colores bajo distintas iluminaciones, los mejores reultados se daban cuando el sensor de color se encontraba en completa oscuridad.
- Se calibraron los rangos de RGB para cada color del chicle.

| Arduino | Sensor de color TCS3200 / TCS230 | Función          |
|---------|----------------------------------|------------------|
| 5V      |  VCC                             | Alimenta el sensor |
| GND     | GND                              | Tierra
| D4      | S0                               | Selecciona la escala de frecuencia junto S1 |
| D5      | S1                               | Selecciona la escala de frecuencia junto S0 |
| D6      | S2                               | Selecciona el tipo de fotodiodo (color) junto con S3 |
| D7      | S3                               | Selecciona el tipo de fotodiodo (color) junto con S2 |
| D8      | OUT                              | Envía la señal de frecuencia correspondiente al color detectado |
| GND     | OE                               | Habilita la salida (activo en LOW) |

Esquema:



### Conexión de la pantalla
Como la pantalla TFT circular funciona con 3.3V y arduino funciona con una lógica de 5V, se tuvo que utilizar un conversor lógico de voltaje, que modifica la corriente electrica del arduino y de la pantalla para que esta pueda funcionar bien y no se queme por tema de voltaje.

Esquema:


### Conexión del parlante con el reproductor MP3
Esquema: 


### Conexión del sensor de color
Esquema:




## 🛠️ Explicación del código
A continuación se explica el código que se desarrolló para cada sensor/actuador:

### Código para reconocer el color

### Código para reproducción del audio

### Código para animaciones de la pantalla

### Código para...




## 🔍 Pruebas y resultados



## Referentes 
1. Mike Wasowski.
2. Among us.
3. Minions.



