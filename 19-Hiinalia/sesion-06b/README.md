# sesion-06b

12 Septiembre 2025

## Proyectos Mateo y Janis

Mateo nos muestra parte de su tesis, en el cual trabajó para encontrar tipografías dentro de los afiches políticos en Chile.
Programó un código en Python para cambiar los nombres de los archivos en sus carpetas todas de una.

Compilar: Pasar de lenguaje legible por un humano a lenguaje legible por una máquina.
La transpilación es un caso específico dentro de la compilación.

<https://ingenieriadesoftware.es/diferencia-transpilacion-compilacion>

El proyecto de título de Janis trata sobre neuralgia del trigémino. 
Amuleto que sea capaz de trackear número de crisis, hora, fecha. También el nivel de dolor. Se puede exportar para que las consultas con neurólogos sean más sencillas.

flutter.dev es para desarrollar aplicaciones, tiene acceso a materiales de google. Tienen componentes o assets de interfaces, para que no sea necesario diseñarlos de cero.

Bluetooth es para transmitir datos. Bluetooth BLE es un bluetooth más eficiente en términos de energía, con menos rango.


## Trabajo en clases

### Incorporación a máquina que saluda

Una manera que se me ocurre es que sea un sistema automático de irrigación de una planta, en el cual cada vez que se riega, la planta saluda para agradecer el agua a través de una pantalla. Aparece un mensaje en la pantalla que tenga un tono formal.

Otra idea que se conecta a la anterior es utilizar junto con el sensor de temperatura y humedad, un actuador de sonido. Alguna bocina lo suficientemente fuerte como para llamar la atención de todos los que viven en un espacio, y que salude para llamar la atención para que la planta sea irrigada. Requeriría algún parlante para emitir un sonido. Como por ejemplo, hola, riegame. Toi seca.

### Idea favorita

La última idea que se me ocurre es utilizar el sensor para desplegar la temperatura y humedad en una pantalla OLED. Una vez que la temperatura y la humedad lleguen a cierto rango que asegure que va a llover, o que está lloviendo en la pantalla OLED aparecerá un mensaje que te diga que entres la ropa del tendedero para que no se te moje, y va a saludar para llamar tu atención.
Funciona de día y de noche, durante todo el año. Este sensor estaría en el exterior. Tiene una alarma o algún parlante que reproduce sonido. dentro del hogar. Está a la sombra para evitar que el sol cambie la temperatura del sensor. Debe estar siempre abajo de un techo, pero en un ambiente abierto.

Rango de temperatura - Cualquier rango de temperatura
Rango de humedad - Más o menos entre 70% y 80%

Componentes a utilizar:
Sensor de temperatura y humedad
Parlante
Pantalla

El mensaje que se despliegue en la pantalla:

La máquina va a responder con lenguaje coloquial.

“Wena po’ como tamo. Parece que va a chispear, pariente. Entra la ropita noma’.”

Que sonido se va a emitir en el parlante:
Música clasica de dominio público
Variable booleana para que se active y desactive en 14 segundos para evitar que siga reproduciendo el sonido.

