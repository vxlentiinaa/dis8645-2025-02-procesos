# sesion-02a

Martes 12, Agosto - 2025

Nota del día: soy muy mala en ortografía, perdón de antemano si faltan algunas tildes (estoy mejorando de a poco).

## Referentes (y otras cosas)

- caja negra editora (editorial de filosofía contemporánea) <https://cajanegraeditora.com.ar/>
- CDM  <https://cdm.link/>
- synthopia  <https://www.synthtopia.com/>
- bricolo (robot música)
- Roberto Matta (arquitecto y pintor chileno)
- Juan Downey (artista chileno)
- Taller dinamo <https://www.instagram.com/tallerdinamo?igsh=djd2N3Exc2g1Z3l3>
- Design System International
- MIT Media Lab
- teenage engineering
- MOMAGuthman Musical Instrument Competition
- NATIONAL SAWDUST

## Qué aprendí hoy

- **Serial begin:** Sirve para sostener la comunicación, es decir, inicializar y configurar el puerto de comunicación serial entre la placa Arduino y un ordenador u otro dispositivo, estableciendo la velocidad de transmisión de datos (en baudios) necesaria para que puedan entenderse mutuamente.

Se usa dentro de void setup()

`Serial begin: 9600`

- **baudios:** significa a qué velocidad va un baudio, velocidad de comunicación, a qué velocidad lo estoy viendo.
- (Bd) **Baud Rate:** cantidad de símbolos o cambios de señal por segundo en una comunicación.
- **Serial monitor:** Sirve para la comunicación bidireccional entre tu placa Arduino y el ordenador
- Un cable usb tiene 4 conexiones. Al conectar el arduino (sin código cargado) se usa los cables GND / VCC. Al cargar un código, la información pasa por D+ y D-

### Como usar github

#### consideraciones de la página/programa:

1. Siempre modificar los archivos desde el repositorio del orginal (personal - forked from).
2. "BRANCH" siempre debe mantenerse en 1.
3. Si la información esta "BEHIND" es necesario sincronizar (actualizar) para estar al día con las ediciones que se hicieron por otros usuarios (sync fork - update bronch, se va ver en color verde si es que todo estuviera bien para ser actualizado).
4. Cada persona del curso tiene su propia carpeta, siempre trabajar desde ahí.
5. Las subcarpetas de las carpetas personales están nombradas como "sesion" + un numero y una letra, esto representa una clase y una fecha especifica.
6. La idea general es poner aca apuntes generales de la clase asi como las tareas/encargos que se den, en el caso de los encargos se ponen en la carpeta del día que se dieron.
7. Las palabras se ponen entre ciertos simbolos para poder generar jerarquias visualez y cada linea de texto debe estar separada de un espacio para que en el resultado final salga separado, sino saldrá todo el texto junto.
8. Al poner imagenes, para modificar el tamaño cambiar el *width* y el *height*.

- markdown: ejemplos rapidos de como poner el texto los encuentras desde este link (funciones).

<https://markdownguide.offshoot.io/cheat-sheet/>

## Charla + invitados

### Sokio - Díaz Gallardo

*Artista chileno con una carrera internacional en música electrónica, performances y ópera.*

![sokio](./imagenes/sokio.png)

- Redes sociales. (IG: @sokio) <https://www.instagram.com/sokio/?hl=es> (página web) <https://sokio.studio/latest>

según google: *"Su carrera incluye la producción musical, remixes, y presentaciones en festivales como Earthdance y Urbandance. También ha incursionado en la composición de óperas, como "Paraíso", estrenada en Nueva York. Además, ha explorado la relación entre Roberto Matta y Gordon Matta-Clark a través de una charla-performance titulada "La Distancia Entre"."*

- Información de su carrera:

<https://pueblonuevo.cl/bios/sokio/>  

<https://www.adprensa.cl/cultura/con-la-opera-experimental-paraiso-el-artista-chileno-sokio-retorna-al-genero-despues-de-veinte-anos/>

- El  nombre viene de socio pero con K, vive en EEUU (Nueva York).
- Trabaja en **Tennage.engineering**: *productos enfocados en el área de la música*.

<https://teenage.engineering/>

- En la **música electrónica** ha lanzado álbumes como "Columbia" y "Columbia Remixes", y ha participado en compilatorios como "Futurismo Latino".

<https://open.spotify.com/intl-es/artist/0sZJjMonQ18bfdtzzXaqiC>

- Es fundador y director de la organización sin fines de lucro **New latin wave**: (plataforma para promover y difundir la música latinoamericana)

"*Dedicated to celebrating the most current and compelling Latine voices, New Latin Wave is a multidisciplinary platform for Latine arts and culture that seeks to open conversations about Latine contributions and identity in the US*".

<https://newlatinwave.com/>   <https://www.instagram.com/newlatinwave/>

- su obra de ópera poética **Paraíso**: en el prestigioso escenario National Sawdust, la obra cantada por una madre y un hijo, *se basa en la historia real de una mujer de Puebla, México, que durante la era de George W. Bush cruzó la frontera de Texas con su bebé para reunirse con su esposo en Nueva York.*
