# proyecto-01

## Acerca del proyecto

- Grupo: 06
- Nombre de grupo: brainrot
- Integrantes:
  - Sofía Cartes
  - Antonia Fuentealba
  - Sofía Perez
  - Valentina Ruz

## Presentación textual

El proyecto consiste en un dispositivo interactivo desarrollado con Arduino UNO R4 Minima que muestra poemas en una pantalla OLED. A través del giro de un potenciómetro, el usuario puede recorrer tres fases:

1. Visualización del poema en formato de espiral.

2. Presentación del nombre del autor.

3. Exhibición de un dibujo que representa el poema.

Cada uno de los 4 integrantes del equipo diseñó su propio poema y dibujo, compartiendo la misma estructura de código pero con variaciones en el contenido textual y gráfico. Los poemas son:

- Tras una gran
  
  bocanada de aire…
 
  Un llanto desconsolado.

Ikeda Sumiko [1936. - ]

<https://www.instagram.com/p/DKa0Ut-uD2x/?img_index=1>

- Cerezo invernal

  Lo vi tan desolado

  y me detuve.

Kajin Aioigaki [1898-1985]

<https://www.instagram.com/p/DMa2oTdOuQJ/?igsh=ZGd4ZGkwdDI1MzY2>

- Bajo el sol…

  Tal vez desconocido

  ese mundo solitario.

Hitomi Okamoto [1928-2018]

<https://www.instagram.com/p/C2IJAUYO9TQ/?igsh=YzJjNTJnZ2ZsbzI4>

- Noche de otoño…
  
  Se marchita el corazón,
  
  un espejo en la mano.
  
  Tōshi Akao [1925-1981]

<https://www.instagram.com/p/DHwxmnzOpxe/?img_index=1>

## Inputs y outputs

### Input

Movimiento del potenciómetro, que determina el avance entre las fases de visualización.

### Output

- Poema en espiral en la pantalla OLED.
- Nombre del autor.
- Animación o imagen que simboliza el contenido del poema.

Se interactúa al mover la perilla del potenciómetro, el cual nos da tres posibilidades de ver en la pantalla.

Las siguientes opciones:

El poema, el autor y un símbolo relacionado a este.

Con este resultado decidimos hacer una serie de Haikus, para dar mayor visibilidad a estos poemas, incorporamos 3 códigos distintos, para que en 3 pantallas vieran distintos poemas y símbolos.

## Bocetos de planificación

Fotografías y dibujos de maquetas y pruebas

## Etapas del código

### 1. Inicialización del hardware

- Inclusión de librerías de la pantalla OLED.

- Configuración del potenciómetro y variables de control.

### 2. Dibujo del poema en espiral

- Función que coloca cada palabra o verso en coordenadas calculadas para formar la espiral.

### 3. Visualización del nombre del autor

- Texto centrado o en movimiento para destacarlo.

### 4. Animación/dibujo representativo

- Uso de arrays de bits (drawBitmap) para mostrar imágenes o secuencias de frames.


### 5. Control por potenciómetro

- Lectura del valor analógico y cambio de etapa según la posición.

## Roles del equipo


### Sofía Cartes

### Antonia Fuentealba

### Sofía Perez

### Valentina Ruz

## Fotografías y videos del proyecto funcionado

Subir fotos y videos

El video debe estar subido a youtube y mencionado en un enlace para ahorrar espacio en el repositorio

## Bibliografía

Citas en APA de repositorios y enlaces de los cuales se inspiraron. Bibliotecas, tutoriales, etc.
