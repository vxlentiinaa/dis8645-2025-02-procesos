# sesion-02a

## Arduino y comunicación serial

Arduino se conecta al computador a través de 4 cables. En muchos casos, el computador funciona como fuente de energía (similar a una power bank).

Para iniciar la comunicación serial entre Arduino y el computador se utiliza:

```cpp
Serial.begin(9600);
```

Donde 9600 representa la velocidad de transmisión de datos, conocida como baud rate. Esta velocidad indica cuántos bits por segundo se transmiten.

Código básico de Arduino

```cpp
void setup() {
  // Se ejecuta una vez al iniciar el programa
  pinMode(LED_BUILTIN, OUTPUT); // Define el pin del LED como salida
}

void loop() {
  // Se ejecuta de forma continua después de 'setup'
}
```

## ¿Qué es USB?

USB significa Universal Serial Bus:

Universal: estándar de conexión ampliamente utilizado.

Serial: transmisión de datos en serie.

Bus: arquitectura que permite conectar múltiples dispositivos al mismo canal de comunicación.

## Internet de las cosas (IoT)

El Internet de las cosas consiste en conectar objetos físicos a Internet mediante sensores, software y conectividad. Esto permite:

* Recopilar información del entorno

* Tomar decisiones

* Ejecutar acciones automáticamente o con supervisión humana

## Reproductor multimedia: MP4Museum

Sitio web: <https://mp4museum.org/>

Reproductor multimedia de código abierto. Detecta y reproduce automáticamente archivos de video desde una unidad USB conectada o desde su memoria interna. También permite sincronizar la reproducción de múltiples dispositivos, útil para instalaciones multipantalla.

## Filosofía, arte y tecnología

### Yuk Hui

Ingeniero informático y filósofo. Autor de obras sobre tecnología, filosofía de la técnica y cosmotécnica.

### John Cage

Compositor influyente del siglo XX. Exploró la indeterminación musical, música electroacústica y el uso alternativo de instrumentos musicales.

## Editoriales y artistas

Caja Negra Editora

Sitio web: <https://cajanegraeditora.com.ar/>

Editorial enfocada en teoría crítica, filosofía, arte y cultura contemporánea.

## Artistas

### Roberto Matta

Arquitecto, pintor y poeta chileno, vinculado al surrealismo.

### Gordon Matta-Clark

Artista estadounidense de ascendencia chilena, conocido por sus intervenciones arquitectónicas llamadas building cuts.

### Juan Downey

Artista chileno, pionero del videoarte y el arte interactivo.

## Libros de interés

* Atención trastornada, Claire Bishop

* El imperio de la normalidad, Robert Chapman

* Tímidos radicales, Hamja Ahsan

* Arte y cosmotécnica, Yuk Hui

* Materiales para una pesadilla, Juan Mattio

* Futuromanía, Simon Reynolds

* Hacia el realismo especulativo, Graham Harman

## Visitas y referencias culturales

### Mauricio Díaz (Sokio)

Compositor chileno de ópera experimental. Autor de la obra Paraíso.

### New Latin Wave

Organización sin fines de lucro y plataforma multidisciplinaria de arte y cultura latinoamericana.

### Teenage Engineering

Empresa sueca de diseño y electrónica de consumo. Fabricante de sintetizadores (como el OP-1) y cámaras instantáneas.

Sitio web: <https://teenage.engineering/>

## Uso de GitHub para proyectos de Arduino

* Subir la carpeta que contiene el archivo .ino del proyecto.

* El archivo principal debe tener el mismo nombre que la carpeta del proyecto.

* Archivos que no coincidan en nombre se consideran archivos anexos.

* GitHub abrirá primero el archivo principal.

* Si no aparece una barra / al final del nombre, se está visualizando un archivo, no una carpeta.

## Pasos para subir archivos

1. Hacer clic en Add file

2. Seleccionar Upload files

3. Arrastrar la carpeta del proyecto al área de carga

4. Confirmar con Commit changes
