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
