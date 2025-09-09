# sesion-06a

## Scratch y Pure Data

Nos mostraron la página web Scratch para programar. Comenzó como un proyecto universitario.
<https://scratch.mit.edu/>
Se podía usar Scratch para programar en Arduino. Se programa en bloques.

**Pure Data:** Lenguaje de programación open source creado por Miller Puckette.
**Max Msp:** Software de desarrollo modular y gráfico. Generalmente utilizado por diseñadores, artistas, y músicos.

Nos dieron una demostración de cómo funciona Pure Data. Se utilizan clases para poder esconder toda la complejidad de la programación de cada objeto.

Es importante encapsular estas complejidades y generar una interfaz para el usuario. Va a ser importante para el segundo proyecto.

**vvvv:** entorno de programación visual y textual <https://vvvv.org/>
**isadora:** otro entorno de programación (no es muy bueno, lo utilizan en broadway)

## Workflow Github

Hay que aprender a automatizar las cosas. Por lo que tenemos que activar el flujo de trabajo de nuestros repositorios en Github.
Ocurren los workflows  

Las carpetas que comienzan con punto son para cositas hacker. Son cositas complicadas que están ocultas.

La carpeta workflow en el Github contiene un archivo markdown-lint. Lint es un proceso automatizado de limpieza, depuración, para ordenar estilos. Este archivo asegura que se cumplan las reglas de markdown. Lint también significa pelusa. Es un archivo para sacar las pelusas en pocas palabras.

**YAML:** Es un tipo de lenguaje para decir “que las cosas son así”. Se parece mucho a Python. Serialización de datos. 

Las acciones son acumulativas. Se muestra el historial de todas las cosas que han pasado.

LaTeX es un software para programar tipografía. Overleaf es un LaTeX en la nube.
Existe un lenguaje de programación en Quechua. 

## Introducción a proyecto 02

El concepto de la caja negra significa tener un input y output, sin preocuparse de cómo funciona internamente.

Un sensor es un input, y un actuador es un output.
**Sensor Logger** Aplicación de sensores que dice que sensores tiene mi celular.

Nos mostraron en la página de Afel algunos de los sensores que podemos conseguir para nuestro proyecto. 

### Disponible en el taller

Ultrasónico: Se utiliza para medir distancias sin contacto utilizando ondas de sonido que son imperceptibles por el oído humano. Un poco impreciso pero se puede usar para cosas más básicas.

Temperatura y humedad (DHT11): Mide la temperatura y humedad del ambiente. Se utiliza mucho en cultivo indoor automatizado.

Gas: Detecta gases en el ambiente.

Encoder rotatorio: No tiene límite, a diferencia de un potenciómetro. Se pueden hacer muchas más cosas con este sensor. Algunos tienen un click al presionar.

Humedad: Mide la humedad, sirve mucho para poner en las plantas para saber cuándo hay que regarlas.

Lluvia: Detecta gotas de agua.

Joystick: Tiene dos potenciómetros internamente. Uno hacia una dirección, y el segundo hacia la otra dirección. También tiene botón.

Fotodiodo: Convierte luz en corriente, y se utiliza como sensor para detectar la luz.

Sonido: Ocupa micrófono. Se puede utilizar para cosas como detectar aplausos.


## Tarea en clases

### Temperatura y humedad

<https://programarfacil.com/blog/arduino-blog/sensor-dht11-temperatura-humedad-arduino>
Según esta página web, este sensor no solo mide la temperatura y humedad, sino que también es digital. Se puede usar en proyectos en donde otros sensores dependen de estos factores para tomar medidas.

Encontré un proyecto en Github que utiliza este sensor para controlar temperaturas dentro de un hogar o un invernadero. <https://github.com/FerminOrtega/DHT11Arduino>
Utiliza una pantalla LCD para monitorear la temperatura y humedad.
Hasta ahora, la mayoría de los proyectos que utilizan este tipo de sensor son lo mismo. Se despliega la temperatura y la humedad en la pantallita. La verdad aún no tengo ideas de cómo podría hacer algo distinto.

Según esta página <https://www.luisllamas.es/arduino-dht11-dht22> este sensor puede llegar a ser muy limitado. Me imagino que es por esto que no hay variedad de proyectos.

Esta persona utiliza este sensor como acercamiento a una automatización de pasar la lista clase a clase. Monitorea constantemente el ambiente de la sala de clases para tener las mejores condiciones de aprendizaje. <https://projecthub.arduino.cc/anaferraz/automatic-attendance-and-classroom-environmental-monitoring-39ec1a>

Aquí hay un proyecto un poco más distinto, que es un sistema automatizado de irrigación de plantas. <https://projecthub.arduino.cc/lakshyajhalani56/smart-irrigation-system-using-arduino-dht11-moisture-781740>

### Costos

En <https://afel.cl/products/sensor-de-temperatura-y-humedad-dht11?srsltid=AfmBOooM96R0i6rV2rfvmBgdktUaPolgyVnfAN5Rbm3CvlQIrhd2CJXm> Cuesta 2300 clp (el mismo que tenemos en el taller)

En <https://mcielectronics.cl/shop/product/sensor-de-humedad-y-temperatura-dht11/?srsltid=AfmBOop5JD0T4lOuYOt9OTsXe_i0_T1BziGHu-OucHPfbh4TrQIu1io1> está a 3490 clp, un poco más caro que en afel.

En MercadoLibre también hay varias opciones de vendedores, están entre 3000 y 4000 clp.


### Incorporación a máquina que saluda

Una manera que se me ocurre es que sea un sistema automático de irrigación de una planta, en el cual cada vez que se riega, la planta saluda para agradecer el agua.

Otra idea que se conecta a la anterior es utilizar junto con el sensor de temperatura y humedad, un actuador de sonido. Alguna bocina lo suficientemente fuerte como para llamar la atención de todos los que viven en un espacio, y que salude para llamar la atención para que la planta sea irrigada.

La última idea que se me ocurre es utilizar el sensor para desplegar la temperatura y humedad en una pantalla LCD. Una vez que la temperatura y la humedad lleguen a cierto rango que asegure que va a llover, en la pantalla LCD aparecerá un mensaje que te diga que entres la ropa del tendedero para que no se te moje, y va a saludar para llamar tu atención.

