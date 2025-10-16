# Proyecto 02: "Máquina saludadora"

Viernes 17 de Octube de 2025

## 👥 Nombre estudiantes

- Catalina Catalán
- Valentina Chávez
- Camila Delgado
- Nicolás Miranda
- Miguel Vera

### 🛠️ Roles del equipo

- Catalina Catalán ➜ animaciones de la pantalla.
- Valentina Chávez ➜ funcionamiento de la pantalla.
- Camila Delgado ➜ prototipos e impresiones 3D.
- Nicolás Miranda ➜ funcionamiento del sensor de color.
- Miguel Vera ➜ creación de audios y funcionamiento módulo MP3 y salida de audio.

## (Nombre del proyecto)

## 🔮 Explicación del proyecto

Es un dispensador interactivo en forma de monstruo de color verde que reacciona emocionalmente según el color del chicle detectado. Como cada color significa una emoción, al momento de girar la manilla para obtener tu chicle, el monstruo te saludará súper feliz si el chicle salió verde, acompañado de una animación y un audio correspondiente a la emoción.

## 📌 Objetivo del Proyecto

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

## 🕹️ La interacción

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

## ⚡️ Conexiones y esquemas

Se detallan y se muestra cómo son las conexiones entre el Arduino, sensor de color, módulo MP3 y el altavoz.

### 🚥 Conexión del sensor de color

- Detecta los colores mediante frecuencias en RGB.
- Se verificó el reconociemiento de colores bajo distintas iluminaciones, los mejores resultados se daban cuando el sensor de color se encontraba en completa oscuridad.
- Se calibraron los rangos de RGB para cada color del chicle y así obtener los valores para rojo, azul, naranjo y verde.

| Arduino | Sensor de color TCS3200 / TCS230 | Función          |
|---------|----------------------------------|------------------|
| 5V      |  VCC                             | Alimenta el sensor |
| GND     | GND                              | Tierra           |
| D4      | S0                               | Selecciona la escala de frecuencia junto S1 |
| D5      | S1                               | Selecciona la escala de frecuencia junto S0 |
| D6      | S2                               | Selecciona el tipo de fotodiodo (color) junto con S3 |
| D7      | S3                               | Selecciona el tipo de fotodiodo (color) junto con S2 |
| D8      | OUT                              | Envía la señal de frecuencia correspondiente al color detectado |
| GND     | OE                               | Habilita la salida (activo en LOW) |

![sensor de color](imagenes/sensor_de_color.jpg)

![sensor de color](imagenes/sensor_reconocimiento.jpg)

### ⚡️ Conexión de la pantalla

Como la pantalla TFT circular funciona con 3.3V y el arduino funciona con una lógica de 5V, se tuvo que utilizar un **Level Shifter** o **Conversor lógico de voltaje**, que sirve para interconectar de forma segura dispositivos que operan con diferentes niveles de voltaje, y así evitar que se queme la pantalla.

![conversor de voltaje](imagenes/level_shifter.jpg)

![pantalla](imagenes/conexion_pantalla_tft.jpg)

![Pantalla TFT](imagenes/pantalla_circular.jpg)

![prueba pantalla](imagenes/pantalla_verde.jpg)

### 🔊 Conexión del parlante con el reproductor MP3

Se crearon audios con inteligencia artificial, que reaccionan al color de cada chicle y a la emoción correspondiente.

- 🔴 Enojado ➜ (describir qué dice cada audio dependiendo de la emoción, con cada uno)
- 🟠 Loco ➜ 
- 🟢 Feliz ➜
- 🔵 Triste ➜

| Arduino                           | Reproductor MP3  | Función                                                         |
|-----------------------------------|------------------|-----------------------------------------------------------------|
| 5V                                |  VCC             | Alimentación del módulo                                         |
| GND                               | GND              | Tierra                                                          |
| Pin 10                            | TX               | Comunicación serial desde DFPlayer hacia Arduino                |
| Pin 11                            | RX               | Comunicación serial desde Arduino hacia DFPlayer                |
| Cable rojo del parlante           | SPK_1            | Salida de audio (+)                                             |
| Cable negro del parlante          | SPK_2            | Salida de audio (-)                                             |
| Insertar tarjeta con archivos     | MicroSD          | Almacenamiento de audio                                         |


![MP3](imagenes/modulo_mp3.jpg) 

## 🛠️ Explicación del código

A continuación se explica el código que se desarrolló para cada sensor/actuador, mostrado con imágenes:

### Código para reconocer el color

(aquí pegar el código)

### Código para reproducción del audio

(aquí pegar el código)

### Código para animaciones de la pantalla

(aquí pegar el código)

### Código para

(aquí pegar el código)

## 🔍 Pruebas y resultados

### ✏️ Diseño y bocetos del prototipo

![boceto](imagenes/boceto.jpg)

### 🧩 Piezas impresas del prototipo

![collage](imagenes/prototipo_collage.jpg)

![piezas](imagenes/piezas.jpg)

![carcasa pantalla](imagenes/carcasa_pantalla.jpg)

![forma](imagenes/prototipo_verde.jpg)

![monstruo](imagenes/monstruo.jpg)





1. Impresiones.
2. Código.
3. Animaciones.
4. Pruebas del sesnor de color.

## Referentes


## Problemas al fusionar

Para unir sensor de color, reproductor mp3 DFPlayer y pantalla GC9A01A tuvimos que pasar todo al Arduino R3. No lo pasamos al R4 porque hay una biblioteca crucial para el funcionamiento de la pantalla que no corre en la versión más nueva. Al pasar a R3 nos encontramos con inconvenientes no previstos:

-R3 no admite Serial1.begin y requiere iniciar el reproductor de manera manual.

-Por el tipo de cable que usa este arduino no se pueden poner los pines RX y TX en 00 y 01. Esto nos obligó a cambiar el resto de los pines para hacerle un espacio a los del reproductor. Después de varios cambios RX quedó en 12 y TX en 7.


**Separados**
![Reproductor DFPlayer con sensor de color en Arduino R4 y Pantalla con Arduino R3](imagenes/Separados.jpg)

**Juntos**
![Reproductor DFPlayer con sensor de color unido a Pantalla con Arduino R3 ](imagenes/Juntos.jpg)







