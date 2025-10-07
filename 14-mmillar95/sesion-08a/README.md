# sesion-08a / Clase 00 / 30.09.2025

Aáron mostró un sintetizador de [chompi](https://chompiclub.com/?srsltid=AfmBOoo2Sy8_3jn8NwnIu6cwiAqlvccJxFe7TZNzB6MteQ_q5BrRmyWa)

## Inicio de clase 

Nos juntamos con nuestro grupo para poder trabajar en el proyecto

Se juntó el código del servomotor y el sensor de proximidad y funciona 

El módulo reproductor no funciona (no reconoce la tarjeta SD)

### Posibles errores del Módulo reproductor DFPlayer Mini

- Formatear la tarjeta micro SD (FAT32).
- Archivos MP3 están en la raíz de la tarjeta.
- velocidad de comunicación (9600 baudios).
- Intercambiar RX y TX.
- Los archivos deben estar guardados como los tengo en el código.

### Datos curiosos para subir al código

- ¿Sabías que un disco duro de 5 MB pesaba una tonelada en 1956? ¡Se te cae de la mano!
- Según un físico, todos los electrones de internet pesan como una fresa. ¡Eso es un dato ligero!
- El primer ratón era de madera. ¡Tu ratón es más moderno!
- El primer "bug" fue una polilla real en una computadora en 1947. ¡Un error muy natural!

### Páginas 
Estas páginas nos ayudarán a realizar nuestro proyecto.

- [3D hunyuan](https://3d.hunyuan.tencent.com/): Esta página la encontré por recomendación en un video de TikTok, es muy buena, ya que te genera el modelado 3D de cualquier imagen que subas, tiene buenos detalles y texturas.
- [Loquendo](https://loquendo.io/): Página de texto a audio recomendada por Mateo.
- [My instants](https://www.myinstants.com/es/search/?name=hola): Página que tiene botones con audio ya grabado (audios virales).
- [Artlist](https://artlist.io/voice-over): Es una página que mediante inteligencia artificial pasa de texto a audio, se le puede poner efecto, velocidad y distorsión.

## Carcasa Robot
### Prototipo 01
- Se empezo a trabajar con el sensor ultrasonico ya que este es el centro de nuestro proyecto y los ojos de nuestro robot. se trabajo en Rhino y se descargo el sensor de la pagina [GrabaCad](https://grabcad.com/library/tag/hc-sr04) que tiene buenos modelados 3d de componentes electronicos y gratis.
- [Ultrasonico](https://grabcad.com/library/hc-sr04-ultrasonic-sensor-15)
- [Arduino R4](https://grabcad.com/library/arduino-uno-r4-wifi-1)
- [Servomotor](https://grabcad.com/library/sg90-micro-servo-9g-tower-pro-1)
 
![Captura de pantalla](./imagenes/Pantallazo01.png)
![Captura de pantalla](./imagenes/Pantallazo02.png)
![Modelado01](./imagenes/Modelado01.png)
![Modelado02](./imagenes/Modelado02.png)

Para la presentación física del proyecto como equipo pensamos en realizar un robot el que contara el dato random. Debido a la cantidad de componentes, lo más adecuado para poder llevarlo a cabo sería realizar el robot sobre una caja que tendrá el Arduino por temas de tamaño y estabilidad.
