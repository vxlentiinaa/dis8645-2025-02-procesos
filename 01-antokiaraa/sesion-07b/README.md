# sesion-07b - Viernes 26 de septiembre

## Cableado en clase

### Encoder rotatorio

Tiene 5 patitas:

- La primera es GND, cable a tierra. (GND)
- La segunda es VCC (+), alimentación de voltaje de entre 3.3V y 5V. (5V)
- La tercera es SW, salida del interruptor del botón. (4)
- La cuarta es DT (output B), se usa para determinar rotación. (-3)
- La quinta es CLK (output A), se usa para determinar cantidad de rotación, cada ve que el mando es girado en cualquier dirección (2)

 [Encoder rotatorio](https://afel.cl/products/encoder-rotatorio-ky-040-360-grados)

 ### Módulo micrófono amplificador 
 
 Tiene 3 patitas:

- La primera patita es OUT, pin de salida analógica que entrega la señal de sonido amplificada. (A0) 
- La segunda patita es GND, cable a tierra. (GND)
- La tercera es VCC, pin de fuente de alimentación de entre 2,4V a 5,5V. (5V)

//incluye un potenciómetro pequeño que se usa para ajustar la ganancia (cuanto amplifica el modulo la señal de sonido)

 [Micrófono amplificador](https://afel.cl/products/modulo-microfono-amplificador-max4466?_pos=1&_sid=0ce6bddc2&_ss=r)

### Pantalla LCD OLED 

Tiene 4 patitas:

- La primera es GND, conexión a tierra. (GND)
- La segunda es VCC, pin de alimentación, va entre 1,8V y 6V. (5V)
- La tercera es SCL, pin de señal de reloj de interfaz I2C. (A5)
- La cuarta es SDA, pin de señal de datos de interfaz I2C. (A4)

 [Pantalla LCD OLED](https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules)

### Módulo reproductor MP3

Tiene 8 por lado, se conecta 5 patitas a arduino usando resistencias:

- VCC va a 5V
- RX va a -5
- TX va a 4
- SPK1 se conecta al altavoz/parlante
- GND va a GND
- SPK2 va al altavoz/parlante

[Módulo reproductor MP3](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?utm_term=&hsa_kw=&hsa_mt=&gad_campaignid=1711725544)

### Shield Data Logger

Es una extensión que permite registrar datos, se conecta directo a una placa Arduino

- tiene slot para tarjeta SD
- voltaje de operacion de 5V DC

[Shield Data Logger](https://afel.cl/products/shield-data-logger-para-arduino-uno-mega?utm_term=&hsa_kw=&hsa_mt=&gad_campaignid=1711725544) 



## Encargos

### Encargo 14

 "cada persona del grupo debe implementar en diagrama de flujo dibujado o con la herramienta Mermaid.js con sus propias palabras y subirlo a su README."

### Encargo 15
 
"cada persona del grupo debe subir a su README: documentar funcionamiento de sus sensores, incluyendo instrucciones de conexión y de configuración, subir el proyecto entero de arduino como carpeta, tiene que poder compilar sin problema y mostrar en consola los datos de los sensores."
