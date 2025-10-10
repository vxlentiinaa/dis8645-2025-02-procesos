# sesion-09a

## Resolviendo el mp3
Con la ayuda de la profe y Janis comparamos directamente el código relacionado al sensor de color con el código ya existente que aseguraba la reproducción de audio. El código original contaba con fucniones flexibles que permiten que corra en distintos sistemas pero nos terminó confundiendo al buscar el setting adecuado para este caso. Al ir paso a paso y línea por linea, manteniendo lo necesario y depurando el resto llegamos al punto mínimo de elementos que permiten que se reproduzca audio. En base a ese código trabajaré y agregaré condiciones para que se ajuste a nuestras necesidades. "Revisar elQueFunciono"


Añadir todos los detalles del proyecto.
Paso a paso, estética, scripts, intentos, audio y video

Renombrar.h
EntradaUltrasonico ultrasonico;
SalidaDedo dedo;

Es necesario decirle a arduino cuando debe detener la reproducción del audio. Viendo el referente de hackster usan un int color que recibe la info del 
sensor de color en forma de números. Para que se detenga asigna un if más a parte de cada color (0) que no hace nada y le dice a loop que tras detectar 
y reproducir el color correspondiente color = 0.

ctrl + a: borrar todo

## Problema 

Ya se logró que el DFPlayer reproduzca la pista que "quiero" y se detenga pero esto dio paso a otros problemas. Por alguna razón al llamar a cierto audio por 
número, sale cruzado sin una lógica clara de la forma siguiente:

Número 0001 es llamado por 4

Número 0002 es llamado por 3

Número 0003 es llamado por 2

Número 0004 es llamado por 1

Si bien podemos ajustarnos a esto lo ideal sería evitar conclusiones y hacerlo bien. Para esto creo que la solución sería llamar de manera más precisa usando
carpetas.

```cpp
myDFPlayer.playFolder(2, 5); // Reproduce el archivo 005.mp3 dentro de la carpeta /02/

```

## Funcionó!

Revisar prueba5audio

Usando el truco anterior logré que encontrara el audio específico que quería. Por ahora la función es un int que se cambia a mano pero esta listo para ser ligado al feedback del sensor de color. Por el momento reconoce un número (entre 4), reproduce un audio específico por 15 segundos y se detiene la reproducción. Con esto en mente queda abordar las sutilezas y restricciones que trae la función:

1-¿Todos los audios deben durar 15 segundos? ¿O la misma cantidad de tiempo en su defecto? Creo que no. Los archivos mp3 de 31 minutos que uso para probar tienen duraciones distintas entre si y los más cortos no vuelven a reproducirse una vez terminan. Creo que el tiempo que dure la reproducción debe ser igual al audio más largo (+1 segundo) para que no se corte abruptamente. 

2-Una vez ocurre todo ¿Está disponible para reproducir de nuevo? Aún no lo he probado pero creo que depende del código del sensor. De todas maneras pienso agregar algún tipo de función o int que vuelva al valor original. El plan inicial era tener un escenario (if) a partir del que empieza todo y que cambia una vez recibe datos del sensor. El valor 0 podría ser el inicio y final de la interacción que está atento arecibir datos y se activa tras la reproducción de audio.

3-¿Cuando ocurrirá? Pensé en poner un delay pero la idea del valor 0 podría ser más controlada. Escencialmente mientras no detecte nada o detecte algo fuera de los 4 colores, lo ignorará y seguirá a la espera de datos hastá recibir un valor válido. Reproducirá el audio y volverá al valor 0.

4-¿Que reproducirá? En este punto avanzado del proyecto creo que ya es hora de ver el tema de audios reales. Como es un personaje (la máquina con nombre pendiente) debería tener la misma voz en todos los casos. En un inicio pensamos en que cada color se asociara con un estado de ánimo: rojo para enojo, azul para tristeza, verde para locura y amarillo (naranjo) para felicidad. Esta polarización de las respuestas daría una experiencia más personalizada e interesante. En caso de no usar la misma voz podríamos usar audios famosos o específicos que nos hagan gracia.

