# sesion-06a

En la programación no queremos escapar de lo manual, queremos automatizar.

Vamos a crear workflows, presionando el botón verde en nuestro fork.

Lo que va a habilitar es que, en un momento que pase algo específico, ocurra otra cosa.

Porque ocurren los workflows, vamos a conocer y ocupar la primera carpeta del repositorio, la carpeta .github; es una carpeta muy especial.

Muchas carpetas de nuestro computador tienen algo que no es para usuario; son para cosas hackers, cosas que nosotros, como hackers capaces, llegaremos a saber usar.

Lint en el mundo hacker es un proceso de limpieza, de procesar y limpiar estilo, lo que se asegura de que esté bonito todo.

Lint en lavandería es una pelusa, que molesta, pero igual deja funcionar.

Todas las palabras hackers están en inglés para darnos miedo.

El archivo lint está en YAML.

YAML es un tipo de lenguaje que es para configurar cosas; se usa mucho para decir que las cosas son así, se parece mucho a Python.

Le podemos colocar cualquier cosa que queramos. 

Aquí no hay indentación, no son necesarios los murciélagos.

// Sacar foto de qué está pasando en la grabación a las 09:42.

Este archivo vive en nuestro repositorio.

Main es el software para que la gente lo use; la branch va a estar presente cuando esté procesando un error o nueva implementación.

Ubuntu es gratis y de fuente abierta.

Si 2 subtítulos se llaman igual, se devolverá un error.

Existen múltiples GitHub Actions, entre estas unas oficiales de [Arduino](https://github.com/arduino/arduino-lint-action).

Las acciones son acumulativas; te muestra el historial de las cosas que han pasado.

La próxima entrega será crear nuestras propias clases, donde nos vamos a repartir las tareas.

FQBN permite compilar y revisar código de Arduino, donde te dice si existen errores, cuáles errores son y en dónde se encuentran.

LaTeX es muy útil para hacer typesetting; en el lenguaje de cómo yo lo estoy entendiendo, es como usar InDesign, pero del mundo de la programación, para poder tener algo de una manera estandarizada y fácil de cambiar. 

overleaf.com es como LaTeX en la nube, debido a que LaTeX es medio pesado de instalar.

## Módulo después del break

Misaa y Janis están buscando sensores para que podamos trabajar con el mundo del hardware.

El 17 de octubre será nuestro 2.º proyecto.

Una máquina saludadora, donde te llame la atención y cuando te acerques cambie su comportamiento. 

Aarón no quiere que hagamos cosas tan complejas, que tengan una factura bella.

Vamos a tomar estos sensores áridos y convertirlos en algo bello. 

Código ordenadito con uso de clases.

Nada puede estar al azar, donde la interacción con el usuario tiene que estar pensada. 

No es necesario que sea algo que con solo observar esta máquina se entienda su uso; podría necesitar un manual, pero ese manual debería ser legible y comprensible. 

El sensor ultrasónico funciona con sonido, donde uno de estos agujeros emite un sonido que no somos capaces de percibir, mientras que el otro lo recibe una vez haya rebotado. De esta manera se puede medir la distancia, pero no es necesariamente muy preciso.

Temperatura y humedad, como para medir el ambiente, donde se entregan y se pueden medir estos 2 datos por separado, creando interesantes combinaciones.

El medidor de dióxido de carbono, que mide el nivel de dióxido de carbono, probablemente se volvería loco aquí en Santiago.

El encoder rotatorio es similar a un potenciómetro, pero no tiene límites; gira y gira y gira y gira y gira.

Sensor de lluvia, una resistencia experimental compuesta de 2 láminas de cobre; es un sensor pasivo que no necesita energía para su funcionamiento.

Un joystick, un potenciómetro en 2 ejes.

LDR (light-dependent resistor) es un sensor de luminosidad, donde puedo hacer que algo se active o desactive si le llega una cantidad de luz definida, o si está en la oscuridad.

De sonido, un micrófono electret, para medir más que todo si es que existe un sonido.

Medir en tiempo real vs. datalogging.

Datalogging lo ocupan los científicos para poder dejar grabando datos y de esta manera crear un rango de funcionamiento definido.

Existen unos módulos que se llaman shields para el Arduino, como si fueran un DLC.

## Encargo 11 "investigar sensores vistos en clases, cotizarlos, encontrar referentes que los usen, y describir 3 pequeñas ideas que podamos aplicar a su proyecto-02 de máquinas de saludar"

Para la cotización de los sensores y actuadores que iríamos a ocupar en el futuro proyecto 2, los revisé en [Afel](https://afel.cl/).

1. Una máquina que te ofrece darte la mano, pero solo si es que no tiene frío, refiriéndose al “frío” por una temperatura menor a 15°C, ya que si la máquina tiene frío, preferirá tener sus “brazos” debajo de una bufanda o algo similar. Esto funcionaria con un servomotor, para que se mueva según los rangos que se le indiquen al Arduino.

2. Detector de nerviosismo, donde si le das la mano y siente que estás sudando, te da unas palabras de apoyo, esto podría ser medido por un sensor de humedad en el ambiente la “palma de la mano” del robot.

3. Una máquina que te “llama” con un “brazo” controlado con un servomotor pero si te acercas demasiado te empujará hacia atrás, debido a que quiere su espacio personal, solo si es que estas a una distancia “correcta” para el robot (medida por un sensor ultrasónico) es que te daria un saludo de movimiento de mano.

Precios en Afel de los sensores y actuadores: 

| Sensor / Actuador               | Especificacion | Precio | Link de compra                                                                                                                                                                 |
| ------------------------------- | -------------- | ------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| Servomotor                      | SG90           | $1.990 | [https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=e6931ef89&_ss=r](https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=e6931ef89&_ss=r)                       |
| LDR (5 unidades)                | GL5528         | $500   | [https://afel.cl/products/pack-5-fotoresistores-gl5528-ldr?_pos=1&_sid=ec4cfaec3&_ss=r](https://afel.cl/products/pack-5-fotoresistores-gl5528-ldr?_pos=1&_sid=ec4cfaec3&_ss=r) |
| Sensor Ultrasónico              | HC-SR04        | $1.500 | [https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?_pos=1&_sid=1a8918b48&_ss=r](https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?_pos=1&_sid=1a8918b48&_ss=r)       |
| Joystick                        | Tenstar        | $2.000 |  [https://afel.cl/products/joystick-palanca-de-mando?_pos=1&_sid=07e8f066d&_ss=r](https://afel.cl/products/joystick-palanca-de-mando?_pos=1&_sid=07e8f066d&_ss=r)              |
| Micrófono Electret              | LM393          | $1.000 | [https://afel.cl/products/sensor-sonido-digital?_pos=1&_sid=64a83b1ea&_ss=r](https://afel.cl/products/sensor-sonido-digital?_pos=1&_sid=64a83b1ea&_ss=r)                       |
| Sensor de Temperatura y Humedad | DHT11          | $2.300 | [https://afel.cl/products/sensor-de-temperatura-y-humedad-dht11](https://afel.cl/products/sensor-de-temperatura-y-humedad-dht11)                                               |
