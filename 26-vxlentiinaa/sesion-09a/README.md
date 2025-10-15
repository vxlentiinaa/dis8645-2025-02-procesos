# sesion-09a

07-10-2025

## Apuntes

Subir las cosas al Github y actualizar para corregir las bitácoras.

Ordenar códigos y hacer diagrama de flujo

- Al tener la carpeta principal con un `.ino`, dentro de esta va a estar cada estructura del código (.h / .cpp)
  - Un archivo `.h` (declaraciones) significa que contiene las declaraciones de las funciones, clases y variables
  - Mientras que el archivo .cpp (fuente) significa que contiene el código real, como el cuerpo de las funciones y variables

---

### Retroalimentación

- Configurar la manito del robot, es decir, cambiar el ángulo para que quede recto. (180°) y no lo tomen como algo fascista jaja
- Cambiar la distancia del sensor ultrasónico a 18 cm para que tenga mayor rango de medición
- Nos dimos cuenta que el servomotor solo llega a 180°, así que lo dejamos así, la solución que encontramos fue colocar el brazo más adelante cuando esté en 0° así cuando se suba, llega preciso a los 180°

`Archivo.ino que creó el profe para nosotras.`

El profe en esta clase, creó un archivo ordenado del código que teníamos nosotras, es decir que separó cada instancia en .cpp y .h para que las clases quedaran ordenadas, también ordenó los nombres de los archivos (como entradas y salidas)

1. Parte incluyendo en el archivo principal, los archivos que creó, es decir,  la entrada y salidas. 
2. Instancias: Programación orientada a objetos (existe una entrada tanto y salida tanto)
3. setup: configuó entrada y salida (al final ordenó lo que teníamos). La clase `ultrasónico` y clase `dedo`, no saben que existen entre si, ya que están en distintos arhcivos; pero para que compilen entre sí se deben colocar ambos en la carpeta `.ino`; los datos de como se configuran estan ocultos, uno en cada carpeta.
4. loop, lo hizo en orden, primero las cosas del sensor y luego del actuador
5. ultrasonico esta cerca, dedo levanta... si no hay alguien cerca, dedo baja
6. entradaUltrasonico.H : archivos H son formulas "ifndef" si es que no existe, "define" exista
7. include arduino.h
8. class ultrasonico (en la clase viene el punto y coma despues de los murcielagos)
9. bool: definio si algo esta cerca o no
10. que valores tiene internamente y las funciones () que tiene que sabe y que puede hacer
11. cpp: se hace cargo de las promesas patita tanto es entrada y patita tanto es salida
12. el punto significa dentro de en el ino
13. salidaDedo.h: las clases pueden tener clases adentro

Como incentivo, ir al lab a trabajar y así nos ganamos una decima hasta 1 punto

Realizar el diagrama de flujo de la parte del parlante y así visualizar el problema

traer el motor del joystick!!!!!!
