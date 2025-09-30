# sesion-06a

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### [Scratch](https://scratch.mit.edu/)

<img align="left" src="./imagenes/scratch.jpg" alt="txt" title="Fuente: https://www.techlearning.com/how-to/what-is-scratch-and-how-does-it-work" width=300>

Plataforma, lenguaje de programación visual y comunidad donde niños y estudiantes aprenden a programar jugando, creando animaciones, juegos, historias, etc. 

<br/><br/>

### [Pure data](https://puredata.info/)

<img align="left" src="./imagenes/pureData.png" alt="txt" title="Fuente: https://puredata.info/ Captura de pantalla por FranUDP" width=300>

Lenguaje de programación visual open source diseñado para crear multimedia de manera interactiva y en tiempo real

<br/><br/><br/><br/><br/><br/><br/>

### [Github workflows](https://docs.github.com/es/actions/concepts/workflows-and-actions/workflows)

Es un proceso automatizado configurable que realiza acciones o trabajos cuando sea activado, ya sea por un cambio en un repositorio, tiempo de activacion pre-definido, menualmente, etc.

Los flujos de trabajo se definen en un archivo YAML (Yet Another Markdown Languaje) que se verifica o autoriza en el repositorio.

En nuestro caso el programa se activa cuando alguien actualiza sus forks y hace lint, aunque @montoyamoraga modificó este programa para que me ignore y así poder usar HTML y LaTex en mis bitacoras.   

#### [Lint](https://en.wikipedia.org/wiki/Lint_(software))

Es el proceso de automáticamente revisar el código en busqueda de errores programáticos y de estilo, cuando el programa encuentra estos errores los reporta al usuario.

### [LaTex](https://www.latex-project.org/get/)

Es un sistema de preparación de documentos que consiste de un lenguaje markup, que el usuario escribe, que es procesado y formateado por el programa.

LaTex es el lenguaje que utlizo para cambiar el color de las palabras en los archivos .readme.

#### [Tex](https://en.wikipedia.org/wiki/TeX)

Programa de tipografía creado por Donald Knuth en 1978, LaTex fue escrito con este programa como base.

El programa fue diseñado para que el output generado sea el mismo sin importar las diferencias entre computadores, version del programa, etc.

##### [Donald Knuth](https://en.wikipedia.org/wiki/Donald_Knuth)

<img align="left" src="./imagenes/donaldKnuth.jpg" alt="txt" title="Fuente: https://en.wikipedia.org/wiki/Donald_Knuth" width=150>

Es una de las personas más influenciales en ciencia computacional, escribió la "biblia de computer-science" ([The Art of Computer Programming](https://en.wikipedia.org/wiki/The_Art_of_Computer_Programming)), creó [Tex](https://en.wikipedia.org/wiki/TeX), introdujo el concepto de [programación alfabetizada (Literate_programming)](https://en.wikipedia.org/wiki/Literate_programming), entre otros.

<br/><br/><br/><br/><br/><br/>

#### [Overleaf](https://www.overleaf.com/)

<img align="left" src="./imagenes/overleaf-green-medium.svg" alt="txt" title="Fuente: https://www.overleaf.com/about" width=150>

Editor de LaTex diseñado para hacer escribir usando LaTex más facil, rápido, accesible y colaborativo (aunque se tiene que pagar para poder colaborar).


<br/><br/><br/><br/><br/>

### Proyecto 2: Máquina Saludadora

Vamos a hacer una maquina que salude, la cual tendrá que utilizar uno o más sensores como input.

### [Sensores](https://es.wikipedia.org/wiki/Sensor)

Un sensor es un aparato que detecta cambios en su entorno y envia señales eléctricas que un computador puede entender. <br/>
Que cambio(s), cómo los detecta o mide varían dependendiendo del tipo de sensor.

-----------------------------------------------------------------------------------------------------------
## Encargo 11 <!-- investigar sensores vistos en clases, cotizarlos, encontrar referentes que los usen, y describir 3 pequeñas ideas que podamos aplicar a su proyecto-02 de máquinas de saludar -->
### Sensores vistos en clase

### [Sensor ultrasónico de distancia (HC-SR04)](https://projecthub.arduino.cc/lucasfernando/ultrasonic-sensor-with-arduino-complete-guide-284faf)

<img align="right" src="./imagenes/HC-SR04.jpg" alt="HC-SR04 pinout" title="Fuente: https://www.theengineeringprojects.com/2018/10/introduction-to-hc-sr04-ultrasonic-sensor.html#google_vignette" width=400>

Emite ondas ultrasónicas y cuenta cuanto tiempo pasa antes de que estas regresen a él, igual como un murcielago.

Según lo que he podido encontrar en internet y testimonio de @misaaaaaa, el sensor no es muy preciso, sin embargo encontré una biblioteca llamada [NewPing](https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home) que fue desarrollada para solucionar este problema.

| Pinout  |          |
|---------|----------|
| Vcc     | Alimenta con 5V al sensor |
| Trigger | hace que el sensor emita un pulso |
| Echo    | comunica cuando regresa el pulso |
| Gnd     | Tierra |

| Consumo    |      |
|------------|------|
| idle       | <2mA |
| trabajando | 15mA |

Ángulo efectivo: 15º

Distancia efectiva: 2cm a 4M

Referentes: [Sonar](https://youtu.be/KGwtit2bFyo?si=A_or_WnmgpEQNJxr) y [sistema experimental de posiscionamiento de dron](https://www.youtube.com/watch?v=7r3OAkqaziI) 

 
| Cotización  |          |
|---------|----------|
|    [Afel](https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?variant=45125226365080&country=CL&currency=CLP&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&srsltid=AfmBOop5Ps48wG4CzlpsY6C8KO5xcNYxh0lGCjbrPNuP4vw_j6QItgmpDj0)  | $1500 |
| [Tenstar robot (aliexpress)](https://es.aliexpress.com/item/1005006039388853.html?src=google&pdp_npi=4%40dis!CLP!2895!1902!!!!!%40!12000035439724673!ppc!!!&snps=y&snpsid=1&src=google&albch=shopping&acnt=742-864-1166&isdl=y&slnk=&plac=&mtctp=&albbt=Google_7_shopping&aff_platform=google&aff_short_key=_oDeeeiG&gclsrc=aw.ds&&albagn=888888&&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=es1005006039388853&ds_e_product_merchant_id=5551326180&ds_e_product_country=CL&ds_e_product_language=es&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=21628548633&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=4&gad_campaignid=22457134733&gbraid=0AAAAA99aYpdUlCUf1lr4yY-dScBnL83TI&gclid=Cj0KCQjw3OjGBhDYARIsADd-uX4o03I0zXRkS0juNyjaJWFmuQ9_U5g88RtKTwuSvcWT1OfR9Tc3ZyoaAhs1EALw_wcB) | $1631 |

<br/>

---

### [Sensor de temperatura y humedad <sub>1</sub>](https://www.hwlibre.com/dht11/) [(DHT11)<sub>2</sub>](https://www.youtube.com/watch?v=nssXWNYdGT8&msockid=a89b07d59da211f0b745a4c3a2f1df11)

<img align="right" src="./imagenes/DHT11.jpg" alt="HDT11 pinout sensor y módulo" title="Fuente: https://components101.com/sensors/dht11-temperature-sensor" width=300>

Mide la temperatura y humedad del ambiente en que sea colocado, hace el trabajo de 2 sensores distintos.

| Pinout  |          |
|---------|----------|
| Vcc     | Alimenta con 3V-5V al sensor |
| Data | Emite las lecturas del sensor |
| NC    | No se conecta |
| Gnd     | Tierra |

| Características    |      |
|------------|------|
| Consumo | 2.5mA |
| Rango de temperatura | 0°C a 50°C |
| Precision de medición temp a 25°C | +-2°C |
| Rango medición humedad | 20% RH a 90% RH
| Resolución | 8 bit

Output es digital, no se requiere un ADC (Analog to Digital Conveter).

Referente: [Medidor de temperatura con display que controla un ventilador](https://youtu.be/kLGKVRmA6qM?si=V6R917zREnDpwnpz)

 
| Cotización  |          |
|---------|----------|
|    [Afel](https://afel.cl/products/sensor-de-temperatura-y-humedad-dht11?variant=45125225316504&country=CL&currency=CLP&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&srsltid=AfmBOopBpDKEg6-cvMiIue9GO7GNhKvCGqIIK9aevydRV5MYtyGcVEXtNH8)  | $2300 |
| [Aliexpress](https://es.aliexpress.com/item/1005005975376014.html?spm=a2g0o.tesla.0.0.2735uhdQuhdQRA&afTraceInfo=1005005975376014__pc__c_ppc_item_bridge_pc_same_wf__h4dja19__1759199326305&gatewayAdapt=glo2esp) | $1800 |

<br/>

---

###

###

###

###

###

###

###
