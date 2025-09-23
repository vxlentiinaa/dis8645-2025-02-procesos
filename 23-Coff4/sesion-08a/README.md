# sesion-08a

Se conformarán diferentes grupos, en los cuales se deberán de traer 10 proyectos para tenerlos de referente.
Es bueno tener botones para probar las cosas de manera rapida.

RTC real time clock: este modulo es para el tiempo
Un motor de DC no sabe en donde esta, normalmente se encuentra en los celulares al vibrar
Step motor how it work: motor paso a paso
Micro Servomotor

---

## Trabajo en clases: 

Una máquina que, al tener o no tener frío, te saluda agitando un dispositivo que tendrá. Esta máquina te dará un feedback a través de un display para explicar si es que no te va a saludar por el frío o si te va a saludar por el frío. Esta funcionará a partir de un sensor de temperatura, donde el rango de funcionamiento estaría especificado como menos de 20 °C.

Sensor ultrasónico para la presencia del usuario

Saludar con la “mano” es tener la mano en una posición neutra, para luego sacudir, de izquierda a derecha entre los angulos 135 y 45 de una circunferencia múltiples veces, entre 3 y 5, para realizar el saludo, y volviendo a la posición neutra para terminar el saludo.

Los seensores y actuadores que quiero que tenga este proyecto deberian ser un display, servomotor, sensor de temperatura, sensor de presencia.

Paso a Paso: 

1. Maquina inicia en estado neutro
2. Si no detecta a nadie, se mantiene en este estado, en donde ambas manos estarán en suspensión y en la pantalla no se mostrará nada
3. Si detecta a una persona, se esperan 3 segundos para actuar según la temperatura medida en el ambiente.
4. Si la temperatura es menor o igual a (15) grados Celsius, el servomotor no actuará y mostrará en el display un mensaje del porqué no quiere saludar, además de una expresión facial importada a través del Arduino que se puede observar en el display.
5. Si la temperatura es mayor a (15) grados Celsius, el servomotor actuará para dar el saludo (donde su "brazo" se moverá de lado a lado entre los grados 135 y 45 para simular un saludo de mano como lo realizaría un humano) y se mostrará en el display un mensaje de texto para saludar, junto a una expresión facial.
6. El ciclo del saludo se repetirá 3 veces y el mensaje durará 15 segundos en la pantalla.
7. La persona, al retirarse, hará que la máquina vuelva a su estado neutro.

### Cotizaciones: 

Servomotor: (SG90) $1.990 https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=e6931ef89&_ss=r

LDR: 5u. x $500 https://afel.cl/products/pack-5-fotoresistores-gl5528-ldr?_pos=1&_sid=ec4cfaec3&_ss=r

Sensor Ultrasónico: (HC-SR04) $1.500 https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?_pos=1&_sid=1a8918b48&_ss=r

Pantalla Oled: $6.500 https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules?_pos=2&_sid=5fbaf1454&_ss=r

Sensor de temperatura y humedad: $2.300 https://afel.cl/products/sensor-de-temperatura-y-humedad-dht11?_pos=1&_sid=13a5a7b0d&_ss=r
