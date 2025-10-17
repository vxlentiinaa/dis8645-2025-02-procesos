# sesion-07b

se trabaja en el pseudocodigo . se hacen "ventanas " para cada sensor y las funciones de cada una. Aaron lo explica con el grupo uno .
nos dividimos el trabajo angie y yo vemos el codigo y las demas investigan el cableado 
trabajamos en eso y corremos el codigo y llevamos 3 
Se define el cableado necesario de cada componente 

 ```cpp 
// El sensor de sonido tiene 3 patitas

// La primera patita es Out, da salida HIGH (8)
// en condiciones de silencio y LOW cuando detecta sonido

// La segunda patita es GND, cable a tierra (GND)
// La tercera patita es VCC, suministra energía al sensor. Recomendado que
//se alimente entre 3.3V a 5V (5V)
//Tiene potenciometro para ajustar sensibilidad de señal OUT 

//https://afel.cl/products/sensor-sonido-digital 


//El encoder rotatorio tiene 5 patitas

//La primera es GND, conexión a tierra (GND)

//El segundo es VCC (+), alimentación de voltaje de entre 3.3V y 5V (5V)

//La tercera es SW, salida del interruptor del botón (4)

//La cuarta es DT (output B), se usa para determinar rotación (-3)

//La quinta es CLK (output A), se usa para determinar cantidad de rotación 
//cada ve que el mando es girado en cualquier dirección (2)

//https://afel.cl/products/encoder-rotatorio-ky-040-360-grados 


//El modulo microfono amplificador tiene 3 patitas

//La primera patita es OUT, pin de salida analógica que entrega la señal de sonido amplificada. (A0) 

//La segunda patita es GND, conexión a tierra. (GND)

//La tercera es VCC, pin de fuente de alimentación de entre 2,4V a 5,5V. (3,3 V o 5V?)

//incluye un potenciometro pequeño que se usa para ajustar la ganancia (cuanto amplifica el modulo la señal de sonido)

//https://afel.cl/products/modulo-microfono-amplificador-max4466?_pos=1&_sid=0ce6bddc2&_ss=r 


//La Shield Data Logger es una extensión que permite registrar datos, se conecta directo a una placa Arduino

//tiene slot para tarjeta SD

//Voltaje de operacion de 5V DC

//https://afel.cl/products/shield-data-logger-para-arduino-uno-mega?utm_term=&hsa_kw=&hsa_mt=&gad_campaignid=1711725544 


//La Pantalla LCD OLED tiene 4 patitas

// La primera es GND, conexión a tierra (GND)
//La segunda es VCC, pin de alimentación, va entre 1,8V y 6V (5V)
//La tercera es SCL, pin de señal de reloj de interfaz I2C (A5)
//La cuarta es SDA, pin de señal de datos de interfaz I2C (A4)

//https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules 

//El modulo reproductor MP3 tiene 8 por lado, se conecta 5 patitas a arduino usando resistencias

//VCC va a 5V
//RX va a -5
//TX va a 4
//SPK1 se conecta al altavoz?
//GND va a GND
//SPK2 va al altavoz

//https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?utm_term=&hsa_kw=&hsa_mt=&gad_campaignid=1711725544 

```

## Encargo 
fiagrama de flujo del trabajo 

  A(["Inicio: Encender pantalla"]) --> B["Volver al menú de idiomas"]
    B --> C["Girar encoder para navegar opciones"]
    C --> D["Presionar encoder para seleccionar idioma"]
    D --> E{"¿Aplaudir o presionar botón?"}
    E -- Aplauso --> F["Reproducir saludo en idioma seleccionado - Pantalla y Audio"]
    E -- Botón --> B
    F --> B

![diagrama-de-flujo-1](<./imagenes/diagrama-de-flujo-1.png>) 
