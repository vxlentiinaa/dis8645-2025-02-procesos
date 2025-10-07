# sesion-09a

07-10-2025

## Apuntes 

Subir las cosas al Github y actualizar para corregir las bitácoras.

Al tener la carpeta con un .ino, dentro de esta va a estar cada estructura del código (.h / .cpp)

---

### Retroalimentación 

Configurar la manito del robot, es decir, cambiar el ángulo para que quede recto. (185 - 190°)

Cambiar la distancia del sensor ultrasónico a 18 cm 

`Archivo.ino que creó el profe para nosotras.`

1. Parte incluyendo los archivos que creo, la entrada y salida
2. instancias: programacion orientada a objetos (existe una entrada tanto y salida tanto)
3. setup: configurar entrada y salida (lo ordenó) la clase ultraosnico y clase dedo, no saben que existen entre si, los datos de como se configuran estan ocultos, uno en cada carpeta 
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

