# sesion-07a
## Encargo para el viernes

traer 10 proyectos "robados" por grupo

-instructables.com

-arduino.com

-github

-Hackaday.com


CITAR FUENTES

sensor de movimiento (O-O) es malo*

añadir botón para pruebas rápidas


## Ideas para implementar

-Detector de CO2

-Módulo RTC (sabe la hora)

-Módulo grabación/reproducción de audio

-Tiras led (demanded.cl)


## Revisar

NFC (near field communication)

<<https://www.amazon.com/Beginning-NFC-Communication-Arduino-PhoneGap/dp/1449372066>>

<<https://itp.nyu.edu/physcomp/>>

Nicolás Briceño Aravena

afel.cl

Hackaday-Clock that is wrong

Nixon tubes

@lapiezaoscura

*Nona Fernandez

<<https://www.youtube.com/watch?v=OpL0joqJmqY>>

sensor sonido site:cl (para que solo sea en chile)

openscad


## Motores

Máquina en la que se inyecta energía eléctrica para transformarla en energía mecánica (transducción)

-DC: Es rápido y no sabe dónde está (vibrador teléfono). Solo se puede controlar el sentido de giro y no se puede quemar.

-Paso a paso: Lento, preciso y no sabe donde está. Arduino dice cuando pero no da energía (requiere driver). 

-Servomotor: Es relativamente preciso, sabe donde está y es ruidoso. Resuelto en arduino.

-Solenoide: Más caro, movimiento lineal

## PROYECTO 02

En esta ocasión haremos un dispensador de dulces mecánico que reproduce un saludo distinto dependiendo del color del dulce. Para esto pensamos en integrar a una estructura impresa en 3D un sensor de color, un parlante, una pantalla y el arduino. La máquina estará caracterizada como un marciano y tendrá una pantalla circular como ojo que se activará en el intercambio. Teníamos pensado usar MyM para tener un mínimo de 6 opciones distintas e incluso consideramos asignar 2 audios distintos por color. Por la cantidad de datos que manejaremos también será necesario usar una tarjeta SD. Los distintos aspectos paralelos que tenemos que abordar dan una gran oportunidad de aprovechar las clases de arduino y hacen del trabajo en grupo una ventaja. Idealmente queremos "esconder" en la carcasa las piezas, dejando al descubierto solo lo esencial como la pantalla y el sensor de color(detrás de algún tipo de mica).
Usar la forma de un dispensador de dulces trae muchas ventajas:
-Podemos editar el modelo 3D para adecuarlo a nuestras necesidades.
-Ayuda a disimular cables y piezas electrónicas.
-El dispensador mecánico (perilla giratoria) ahorra el uso de un motor.
-Apoya a la imagen del objeto y le da cierta "teatralidad".
