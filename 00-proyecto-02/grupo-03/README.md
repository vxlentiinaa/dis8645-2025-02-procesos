# Proyecto-02

## Acerca del proyecto

- grupo 03 
- Chispop
-Integrantes:
 - 01-[antokiaraa](https://github.com/antokiaraa/)
 - 16-[javieramoraga-rgb](https://github.com/javieramoraga-rgb/) 
 - 18-[ppia97](https://github.com/ppia97/)
 - 19-[Hiinalia](https://github.com/Hiinalia/)
 - 24-[Joquape](https://github.com/Joquape/)

## Presentación textual

Chispop es un proyecto interactivo que combina tecnología, sonido y lenguaje. La idea es crear una experiencia donde el usuario pueda elegir un idioma desde un menú en pantalla y, al aplaudir, recibir un saludo tanto visual como sonoro en el idioma seleccionado.


## Funcionamiento

Al encender el dispositivo, se muestra en la pantalla un menú de idiomas ( Ruso, Japones, Francés).

El usuario gira un encoder rotatorio para desplazarse entre las opciones y presiona su botón para seleccionar un idioma.

Luego, la pantalla muestra un mensaje que indica:

“Aplaude dos veces para continuar o presiona el botón para volver al menú.”

Si el sensor de sonido detecta un aplauso no pasa nada pero si detecta dos aplausos, se activa el reproductor DFPlayer Mini, que emite un saludo en audio correspondiente al idioma elegido y en la pantalla OLED se muestra una imagen del saludo en el idioma correspondiente.

Si el usuario presiona el botón, vuelve al menú principal.

## Componentes 
- Encoder 
- Pantalla OLED
- Sensor de sonido
- Módula DFPlayer
- Parlante

### INPUT

- Encoder rotatorio con pulsador. Gira para moverse por el menú. Se presiona para seleccionar un idioma o volver al menú.
- Sensor de sonido. Detecta el aplauso del usuario.

### OUTPUTS 

- Pantalla OLED .Muestra el menú de idiomas y los mensajes.
- Módulo DFPlayer Mini + parlante .Reproduce el audio de saludo en el idioma seleccionado.
