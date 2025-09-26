# sesion-07a

### Apuntes
** pasar apuntes en limpio block de notas compu **
- Hackaday

- 
## Proyecto 2

- 17 de octubre 

- Salida: Un servomotor mueve unos ojos haciendo que el robot siga al usuario con la mirada. Al detectar que el usuario está a muy corta proximidad, un parlante emite sonido pre-grabado aleatorio.

- Sensores:
distancia ultrasónico

- Links de compra:
https://afel.cl/products/sensor-de-ultrasonico-hc-sr04

https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?_pos=10&_sid=9bafdb32f&_ss=r
https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=0b93ebcb6&_ss=r

https://www.mechatronicstore.cl/altavoz-8-ohm-1w/?srsltid=AfmBOorYd_ZdSsyd2QMst1Va9CZJEafOTb68oafW4jWeQ_nzC1nVphqa

Dudas / Atados:
¿Cómo obtener lecturas estables del sensor ultrasónico?
¿Cómo evitar que los ojos se queden fijos en objetos inmoviles (ambiente)

## Encargo 12
           
- Leer las bitacoras de colegas, encontrar similitudes, diferencias, preguntas y aciertos de sus máquinas saludadoras propuestas. Citar correctamente las fuentes

## Encargo 13
- Buscar 2 referentes asociados a tu proyecto de cada una de estas 4 categorías: 1. lenguaje natural (personas), código, materialidad, documentación. escribir un párrafo por cada uno de los referentes encontrados, citando las fuentes, y explicando por qué lo elegiste, qué te aporta, qué te inspira, o incluso si lo incluyes como antiejemplo.

### Lenguaje natural 
- NO HE PODIDO ENCONTRAR ALGO QUE ME INTERESE DE MOMENTO (RELLENAR)

### Código

- [Face Tracking Turret made with Arduino and OpenCV2](https://www.youtube.com/watch?v=a_UiYOO-Sdw). Este proyecto utiliza Arduino y OpenCV para controlar dos servomotores que siguen la posición de un rostro detectado en tiempo real. Los valores X e Y del rostro se reciben por serial y se mapean al rango de 0–180° para mover los servos, logrando un seguimiento fluido. Me interesa como referente de código porque muestra de manera clara cómo procesar entradas externas (detección de rostro) y transformarlas en movimientos precisos de servos, lo cual es exactamente lo que necesitamos para nuestro robot. Nosotros usaremos sensores ultrasónicos en lugar de visión por computadora. 
[Face-Tracking-Turret en GitHub]

[Face-Tracking-Turret en GitHub](https://github.com/OwenTheGreenBean/Face-Tracking-Turret)

### Materialidad

- Un proyecto que me interesó es el [Camera-Eye Follower Bot](https://www.notion.so/nilheim-mechatronics/Camera-Eye-Follower-Bot-25524779b64d80969680f8a0c32fa703) de Will Cogley. Este robot sigue el rostro de una persona en tiempo real usando seis servomotores MG90s, un controlador de mecanismo ocular o un Raspberry Pi Pico, y una microcámara USB integrada dentro de los ojos. Me gustó especialmente cómo combina piezas impresas en 3D con PLA para la estructura, y además utiliza una carcasa que le da forma de “mascota”. Personalmente, no me agrada ver un robot solo con su esqueleto; la carcasa hace que el proyecto tenga identidad y se vea más amigable, como un ser completo en lugar de un conjunto de mecanismos expuestos. Para nuestro proyecto, podemos aplicar la misma idea: usar PLA del laboratorio para la base del circuito y los ojos, y crear un cascarón que unifique la forma, haciendo que el robot se vea más expresivo y cercano al usuario. Me inspira porque demuestra cómo la elección de materiales y la forma externa no solo cumplen una función técnica, sino que también aportan personalidad, realismo y presencia al robot.

- [EyeMech α1.0](https://willcogley.notion.site/Will-Cogley-Project-Archive-75a4864d73ab4361ab26cabaadaec33a) del mismo creador del referente anterior, me llamó la atención por su enfoque en prototipado de bajo costo. Usando piezas impresas en PLA, micro servo motor y componentes de fácil acceso, se puede construir un ojo animatrónico funcional en poco tiempo.

- [How to Make Realistic Eyes Using 3D Printing for Animatronic Eye Mechanisms](https://www.instructables.com/How-to-Make-Realistic-Eyes-Using-3D-Printing-for-Anim/) Este video muestra cómo hacer ojos realistas impresos en 3D para mecanismos animatrónicos, con un encaje estandarizado que facilita montarlos y pintarlos. Me interesa porque últimamente disfruto pintando figuras en PLA, y aunque un postprocesado muy detallado quizá no sea necesario, siento que le daría personalidad y carácter al robot. Además, usando filamento PLA, podemos imprimir tanto la estructura como los ojos, adaptando tamaño y forma a nuestros servos y sensores.

### Documentación
- [Animatronic Eye Mechanism – Ikkalebob](https://www.instructables.com/Animatronic-Eye-Mechanism/) un referente que me pareció muy valioso es el proyecto **Animatronic Eye Mechanism** de Ikkalebob en Instructables. Lo que destaca es su documentación paso a paso, con fotos, listas de materiales, enlaces a componentes y explicaciones claras de cada etapa del montaje. Además, incluye consejos para ajustar los servos, personalizar el diseño y resolver problemas comunes, lo que permite que cualquier persona pueda reproducir o adaptar el proyecto sin confusión. Me inspira porque demuestra cómo un proyecto técnico no solo puede ser funcional, sino también accesible y enseñable, facilitando que otros aprendan de la experiencia y comprendan el funcionamiento detrás de cada decisión de diseño. También me parece importante destacar lo frustrante que resulta cuando un proyecto carece de buena documentación, ya que eso lo vuelve inaccesible y limita la posibilidad de desarrollarlo o aprender de él.



