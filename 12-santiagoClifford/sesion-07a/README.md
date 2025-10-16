# sesion-07a

## clase 13 - 23-sept

A grandes rasgos exiten 4 tipos de motores: 

1. DC motor (direct current): un motor DC es rápido, no sabe donde está. 
aplicaciones: drones, ventiladores, vibradores, etc.
2. Step motor: lento, preciso, no sabe donde está. Funciona con grados.
aplicaciones: impresoras 3D, etc
3. Servomotor: funciona por grados, si sabe donde está. Se clasifican según cuánto giran(90°, 180°, 270°, 360°)
4. solenoide: movimiento lineal(no giratorio)


- [hackaday](https://hackaday.com)
- [clock that is wrong](https://github.com/dupontgu/clock_that_is_wrong)
- [CW & T](https://cwandt.com)
- [las llamadas que nunca hice](https://www.instagram.com/lasllamadasquenuncahice)
- [Nona Fernández](https://es.wikipedia.org/wiki/Nona_Fernández)
- [Patii Smith](https://es.wikipedia.org/wiki/Patti_Smith)
- [Transductor](https://es.wikipedia.org/wiki/Transducción)
- [Transductor en electrónica](https://es.wikipedia.org/wiki/Transductor)
- [driver](https://es.wikipedia.org/wiki/Controlador_de_dispositivo)
- [eléctrico vs electrónico](https://osakaelectronicsltda.com/blog/biblioteca/cual-es-la-diferencia-entre-un-aparato-electrico-y-electronico)
- [empresa de tiras led](https://www.demasled.cl/)
- [neoPixel](https://www.adafruit.com/category/168)


## grupo proyecto-02

### hijos de la tierra

ojos que te miran.

- [video referente ojos](https://www.youtube.com/watch?v=Ftt9e8xnKE4)

![croquis ideación](./imagenes/croquis01.jpg)

Buscamos crear un robot "creepy", que genere sensación de incomodidad y de "sentirse observado" en los usuarios.

![croquis posiciones](./imagenes/croquis02.jpg)

debido a la dificultad que significa la detección de personas, queremos detectar a la gente a través de sonidos. Para esto, serán colocados entre 3-5 micrófonos en puntos estratégicos de la sala. Dependiendo de cuáles micrófonos detecten sonidos, y en qué intensidad, los ojos apuntarán en una dirección determinada.

![croquis funcionamiento mecánico](./imagenes/croquis03.jpg)

por ahora, los ojos puede cambiar su dirección en el eje X, no en el eje Y. Los ojos estarán sobre una plataforma, la cual gira en 270° gracias a un motor. 

Los párpados funcionan gracias a un eje de rotación, cuya posición está en el centro de la esfera(visto desde el lateral).

### info

los [párpados](https://es.wikipedia.org/wiki/Párpado)

## encargo-12

leer bitácoras de otro compañere, encontrar diferencias, similitudes, aciertos, dudas, etc.

leí la bitácora de 04-yanma-bit. La propuesta que más me llamó la atención fue una idea que proponía crear un videojuego, cuyos controles sean basados en la posición del usuario, esto me recuerda a la kinect de la xbox 360, o al juego ring fit, para la nintendo switch.

En mi opinión, esta propuesta puede compararse al proyecto feelMyParanoia, en el sentido de que la posición del usuario determina las acciones que se ejecutan en el código, a su vez, me interesa la idea del feedback en estos casos. A lo que voy es que, yo busco que en mi proyecto el usuario tenga claro qué es lo que está generando las respuestas del robot, es decir, que el feedback sea lo suficientemente directo, para que entre en duda si la respuesta fue provocada por el usuario, o si es parte del comportamiento.

La principal diferencia que veo entre esta propuesta y el proyecto feelMyParanoia, es en cierta parte similar a la similitud:
mientras que el proyecto mencionado, intenta que el código pueda representar virtualmente las acciones del usuario(ejemplo, al acercarse al sensor, el personaje camina hacia adelante). Por otro lado, feelMyParanoia busca emular una reacción a las acciones del usuario, lo que entendemos como una "reacción humana". En conclusión, en la propuesta de Yanma, el output, es una representación del input del usuario, mientras que feelMyParanoia, el output es una representación de las reacciones de una interacción real(en una situación de miedo/tensión), en otras palabras, el output del código, es una representación del output humano en una interacción similar.

En cuanto a dudas sobre este proyecto, me cuestiono la utilidad de usar un sensor de proximidad, y surge la duda respecto a usar botones ubicados en el piso, tipo "Dance Dance Revolution". Como reflexión a esto: el sensor de proximidad podría ser una ventaja, debido a la capacidad de detectar diferentes distancias, por lo que, con esto se podría, por ejemplo, controlar la velocidad del personaje. Sin embargo los botones dan la ventaja de entregar un feedback más directo, y reduce la posibilidad de fallo o de confusión del usuario.