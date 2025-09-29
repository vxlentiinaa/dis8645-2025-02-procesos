# sesion-07a

//Se me borro el codigo por el github... asi que esto es una reconstruccion rapida

Idea de Sebastian para la maquina

Una máquina que, al tener o no tener frío, te saluda agitando un dispositivo que tendrá. Esta máquina te dará un feedback a través de un display para explicar si es que no te va a saludar por el frío o si te va a saludar por el frío. Esta funcionará a partir de un sensor de temperatura, donde el rango de funcionamiento estaría especificado como menos de 20 °C.
Sensor ultrasónico para la presencia del usuario
Saludar con la “mano” es tener la mano en una posición neutra, para luego sacudir, de izquierda a derecha, entre los ángulos 135 y 45 de una circunferencia múltiples veces, entre 3 y 5, para realizar el saludo, y volviendo a la posición neutra para terminar el saludo.
Los sensores y actuadores que quiero que tenga este proyecto deberían ser un display, servomotor, sensor de temperatura, sensor de presencia. 

Cotizaciones:

- Servomotor: (SG90) $1.990 <https://afel.cl/products/micro-servomotor-sg90?_pos=1&_sid=e6931ef89&_ss=r>
- LDR: 5u. x $500 (alternativa) <https://afel.cl/products/pack-5-fotoresistores-gl5528-ldr?_pos=1&_sid=ec4cfaec3&_ss=r>
- Sensor Ultrasónico: (HC-SR04) $1.500 <https://afel.cl/products/sensor-de-ultrasonico-hc-sr04?_pos=1&_sid=1a8918b48&_ss=r>
- Pantalla led $6.500 <https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules?_pos=2&_sid=5fbaf1454&_ss=r>
- Sensor de temperatura y humedad DHT11 $2.300 <https://afel.cl/products/sensor-de-temperatura-y-humedad-dht11?_pos=1&_sid=13a5a7b0d&_ss=r>


Diagrama de flujo: 

Máquina inicia en estado neutro.

Si no detecta a nadie, se mantiene en este estado, en donde ambas manos estarán en suspensión y en la pantalla no se mostrará nada.

Si detecta a una persona, se esperan 3 segundos para actuar según la temperatura medida en el ambiente.

Si la temperatura es menor o igual a (15) grados Celsius, el servomotor no actuará y mostrará en el display un mensaje del porqué no quiere saludar, además de una expresión facial importada a través del Arduino que se puede observar en el display.

Si la temperatura es mayor a (15) grados Celsius, el servomotor actuará para dar el saludo (donde su "brazo" se moverá de lado a lado entre los grados 135 y 45 para simular un saludo de mano como lo realizaría un humano) y se mostrará en el display un mensaje de texto para saludar, junto a una expresión facial.

El ciclo del saludo se repetirá 3 veces y el mensaje durará 15 segundos en la pantalla.

La persona, al retirarse, hará que la máquina vuelva a su estado neutro.

Instructivo de uso: 

Instructivo para saludar al robot friolento
1. acercate al robot
2. si hacen menos o mas de cierta temperatura el robot querra o no saludarte 
3. si la pantalla muestra un un gesto facial negativo y dice tengo frio, el robot se niega a saludar
4. si la pantalla muestra un gesto facial positivo y dice hola! no tengo frio, con el servomotor movera su brazo y saludara con la mano 
5. volver a hacer si quieres saber si el robot tiene o frio
