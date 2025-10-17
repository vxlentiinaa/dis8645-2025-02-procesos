# sesion-07b
proyecto 2 como empezar a programarlo 
se deben crear archivos ino 
- codigo principal 
- creditos 
- cableado 
- sensor 1
- sensor 2 
- actuador 
- configuraciones 
- terminal 


**void** 
configurar sensor 1 
configurar sensor 2 

**loop** 
leer el sensor 
tomar decisiones
actuar 

Trabajo de clases:

Se intentó usar los diferentes componentes que nos compraron y llegamos a 2 versiones del pseudocódigo que no compilaban.

Con carla llegamos a un código que fue traspasado a wokwi que utiliza el sensor de movimiento ultrasónico

<https://wokwi.com/projects/304444938977804866>
 
También se  trabajó toda la clase (y fuera de esta) buscando como utilizar el sensor de temperatura. 

## Encargo 14, por hacer 
 "cada persona del grupo debe implementar en diagrama de flujo dibujado o con la herramienta Mermaid.js con sus propias palabras y subirlo a su README."));

## Encargo 15,
"cada persona del grupo debe subir a su README: documentar funcionamiento de sus sensores, incluyendo instrucciones de conexión y de configuración, subir el proyecto entero de arduino como carpeta, tiene que poder compilar sin problema y mostrar en consola los datos de los sensores."

- sensor de temperatura: <https://docs.cirkitdesigner.com/component/3d8e6da8-841a-47a6-a1aa-0aa902c905e1/aht20bmp280>

Instrucciones de uso:

Conexión del AHT20 + BMP280 a un Arduino UNO:

Alambrado:

Conecte el pin del módulo VCCal 5Vpin del Arduino.

Conecte el GNDpin al Arduino GND.

Conecte el SDApin al A4pin del Arduino (línea de datos I²C).

Conecte el SCLpin al A5pin del Arduino (línea de reloj I²C).

Instalar las bibliotecas necesarias:

Instalar la Adafruit_AHTX0biblioteca para el sensor AHT20.

Instalar la Adafruit_BMP280biblioteca para el sensor BMP280.

Estas bibliotecas se pueden instalar a través del Administrador de bibliotecas de Arduino IDE.

- Sensor ultrasónico: 
<https://wokwi.com/projects/304444938977804866>
<https://docs.wokwi.com/parts/wokwi-hc-sr04>
Alambrado 

VCC - Alimentación de tensión (5 V)

TRIGONOMETRÍA - Pulso para iniciar la medición, pin digital 

ECO - Mida la longitud del pulso alto para obtener la distancia, pin digital 

Tierra - Conecte el GNDpin al Arduino GND.

Como funciona: 
Para iniciar una nueva medición de distancia, configure el pin TRIG en alto durante 10 µS o más. Luego, espere hasta que el pin ECHO se active y cuente el tiempo que permanece activo (duración del pulso). La duración del pulso ECHO alto es proporcional a la distancia. Utilice la siguiente tabla para convertir la duración del pulso ECHO en microsegundos a centímetros/pulgadas:

Unidad	Distancia (como se codifica para que del valor real en el codigo)

Centímetros	PulseMicros / 58

Pulgadas	PulseMicros / 148
