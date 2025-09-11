# sesion-06a

09-09-2025

## Apuntes

[Scratch](https://scratch.mit.edu/): Fue desarrollado por MIT Media Lab, es un software de programación para niños. Estrategia de programar con bloques.

[Pure data](https://puredata.info/): Software para programar audios, por dentro está programado en c++.

Miller puckette: Es un matemático, programador y profesor de música estadounidense, director asociado del CRSA, así como miembro del claustro de la facultad de la UC University of California en San Diego donde trabaja desde 1994. Cycling 74 esta empresa vende un software llamado `Max map`.

- Max: gráficas para hacer audios
- Dac: de digital a análogo
- Las cajitas que están arriba, son entradas y las de abajo, son salidas (input/output)
- Si creo algo en puredata se hace un subpach
- La `~` es para la salida del sonido 
- Lint: proceso de automatización para corregir errores, por ejemplo, sacar las pelusas de la ropa.
- YAML: Es un formato de serialización de datos legible por humanos que se utiliza principalmente para archivos de configuración y para transmitir datos entre sistemas, gracias a su fácil lectura y escritura. Es decir, un estilo de lenguaje que sirve para ordenar información.
- [Touchdesigner](https://derivative.ca/)
- [Isadora software](https://en.wikipedia.org/wiki/Isadora_(software))

--- 

### Trabajo en clases / Encargo

Investigar sobre sensor elegido en clases y buscar 3 ideas para realizar con dicho sensor

### [Sensor de proximidad HC­-SR04](https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?srsltid=AfmBOopiJB4kbuyh1LzlyMIL_vnBDt6UiMfwsZDgQLgASIhoOPDrjGsI)

- Sensor de distancia ultrasónico hc-sr04
- Es capaz de detectar objetos y calcular la distancia a la que se encuentra; en un rango de 2 a 450cm
- El sensor posee dos transductores, un emisor y un receptor, piezoeléctricos.
- El funcionamiento del sensor, se basa en que el emisor, piezoeléctrico, emite 8 pulsos de ultrasonido, la señal eléctrica se convierte en pulsos de sonido ultrasónico. Y el otro actúa como receptor y escucha los pulsos transmitidos. LCuando el receptor recibe estos pulsos, produce un pulso de salida cuyo ancho es proporcional a la distancia del objeto en frente.

Este sensor proporciona una excelente detección de rango sin contacto entre 2 cm y 400 cm (~13 pies) con una precisión de 3 mm.

Como funciona con 5 volts, se puede conectar directamente a un Arduino o cualquier otro microcontrolador lógico de 5V.

El sensor posee dos transductores, un emisor y un receptor, piezoeléctricos.

El funcionamiento de este es porque el emisor, piezoeléctrico, emite 8 pulsos de ultrasonido. Luego, de recibir la orden en el pin TRIG, las ondas de sonido viajan en el aire y rebotan al encontrar un objeto, el sonido de rebote es detectado por el receptor piezoeléctrico. Después,el pin ECHO cambia a Alto por un tiempo igual al que demoró la onda, desde que fue emitida hasta que fuedetectada.


 

<https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?utm_term=&utm_campaign=%40+Campa%C3%B1a+Inteligente+Display&utm_source=adwords&utm_medium=ppc&hsa_acc=1808722794&hsa_cam=11192697983&hsa_grp=&hsa_ad=&hsa_src=x&hsa_tgt=&hsa_kw=&hsa_mt=&hsa_net=adwords&hsa_ver=3&gad_source=1&gad_campaignid=21510966891&gbraid=0AAAAADBMsFTqaXFnAaRCBzwNfYDPlDfVI&gclid=Cj0KCQjwoP_FBhDFARIsANPG24OiqkbTcdGwwMT36ru8LYq9EYJMEDpzSEGAMBCRLESmm6Rqb_nhdEkaAjoGEALw_wcB>
