# sesion-03b

clase online viernes 22 de agosto

pendiente traspasar apuntes del cuaderno acá

constelación

- me quedé dormido esta clase y llegué 1 hora tarde al zoom, muy lamentable

- Adafruitgfx
- adafruitssd1306 es la biblioteca que usaremos, las bibliotecas son algo central para el curso ya que son públicas
- ssd1306-128x64, este ejemplo usaremos de la biblioteca de adafruitssd1306, ya que nuestra pantalla es de esa cantidad de pixeles
- screenwidth-> es el ancho de pantalla
- screenheight-> es el alto de pantalla
-  **define screen_width 128**
- ¿qué es define? ¿son constantes?
- significan: computador, te diré muchas veces esta palabra, cuando la veas reemplázala por este número
- si lo hacemos al principio, se propaga el cambio en todos los lugares necesarios
- esto permite que el valor cambie en todas las palabras que escribimos con ese define
- i2c: una especie de línea telefónica
- todos los seguidores se pueden conectar, todos los seguidores se pueden conectar a las mismas 2 líneas de sda, scl y pueden conectar lo que quieran
- muchos módulos i2c al mismo arduino, pantallas, tecleras
- permite llegar a muchos dispositivos en paralelo, en i2c la dirección es 03c
- **código análisis**
- la primera imágen que muestra, en 0101, nosotros podríamos hacer nuestro logo
- 1. void setup
  2. if (!display.beging); ---> significa: si no pude prender la pantalla haz serial.println(allocationfailed), si trató y no pudo, falló, avisar que falló
  3. al final de esto tenemos un for(;;); esto significa que falló para siempre, se queda ahí para siempre si es que no pudimos encender la pantalla
- **FALLAR ESPECTACULARMENTE** es algo que pasa en computación
- if (sí), !( lo contrario), display (pantalla)
- hay nombres obligatorios y otros que puedo poner en español
- Aarón los nombra en inglés para que sepamos que era de uso obligatorio
- si está en español es porque puedo poner lo que quiera
- display.display --> pantalla, pantallea, muestra, haz lo tuyo
- include significa, computador, encuentra en algún lugar las bibliotecas
- si no está en biblioteca, búscalo en otro lado
- int: es para declarar
- clear.display --> borra la pantalla, limpia
- pantallia.settextcolor --> establece el color del texto
- pantallita.settextSize--> establece el tamaño del texto
- int16_t, es un entero de 16 bits, si queremos contar entre 0 y el número, tiene ese número de posibilidades
