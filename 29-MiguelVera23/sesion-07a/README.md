# sesion-07a
## Encargo para el viernes

traer 10 proyectos "robados" por grupo

-instructables.com

-arduino.com

-github

-Hackaday.com


CITAR FUENTES

sensor de movimiento (O-O) es malo*

añadir botón para pruebas rápidas


## Ideas para implementar

-Detector de CO2

-Módulo RTC (sabe la hora)

-Módulo grabación/reproducción de audio

-Tiras led (demanded.cl)


## Revisar

NFC (near field communication)

<<https://www.amazon.com/Beginning-NFC-Communication-Arduino-PhoneGap/dp/1449372066>>

<<https://itp.nyu.edu/physcomp/>>

Nicolás Briceño Aravena

afel.cl

Hackaday-Clock that is wrong

Nixon tubes

@lapiezaoscura

*Nona Fernandez

<<https://www.youtube.com/watch?v=OpL0joqJmqY>>

sensor sonido site:cl (para que solo sea en chile)

openscad


## Motores

Máquina en la que se inyecta energía eléctrica para transformarla en energía mecánica (transducción)

-DC: Es rápido y no sabe dónde está (vibrador teléfono). Solo se puede controlar el sentido de giro y no se puede quemar.

-Paso a paso: Lento, preciso y no sabe donde está. Arduino dice cuando pero no da energía (requiere driver). 

-Servomotor: Es relativamente preciso, sabe donde está y es ruidoso. Resuelto en arduino.

-Solenoide: Más caro, movimiento lineal

## PROYECTO 02

En esta ocasión haremos un dispensador de dulces mecánico que reproduce un saludo distinto dependiendo del color del dulce. Para esto pensamos en integrar a una estructura impresa en 3D un sensor de color, un parlante, una pantalla y el arduino. La máquina estará caracterizada como un marciano y tendrá una pantalla circular como ojo que se activará en el intercambio. Teníamos pensado usar MyM para tener un mínimo de 6 opciones distintas e incluso consideramos asignar 2 audios distintos por color. Por la cantidad de datos que manejaremos también será necesario usar una tarjeta SD. Los distintos aspectos paralelos que tenemos que abordar dan una gran oportunidad de aprovechar las clases de arduino y hacen del trabajo en grupo una ventaja. Idealmente queremos "esconder" en la carcasa las piezas, dejando al descubierto solo lo esencial como la pantalla y el sensor de color(detrás de algún tipo de mica).
Usar la forma de un dispensador de dulces trae muchas ventajas:

-Podemos editar el modelo 3D para adecuarlo a nuestras necesidades.

-Ayuda a disimular cables y piezas electrónicas.

-El dispensador mecánico (perilla giratoria) ahorra el uso de un motor.

-Apoya a la imagen del objeto y le da cierta "teatralidad".

## Referentes

### Código:

Detección de colores <https://projecthub.arduino.cc/SurtrTech/color-detection-using-tcs3200230-a1e463>

<https://www.az-delivery.de/es/blogs/azdelivery-blog-fur-arduino-und-raspberry-pi/>

Hay 64 fotodiodos receptores de luz que se agrupan en Rojo, Azul, Verde y Blanco (ilumina el objeto). Estos se controlan con las conexiones S2 y S3 usando 4 combinaciones de LOW y HIGH. Las conexiones S0 y S1 escalan la salida de frecuencias, con las que se detecta que color percibe el sensor, y GND con VCC se unen a la fuente de alimentación (2.7 a 5.5V). OE activa o desactiva la salida del sensor y en el 2do sitio hay un tutorial y tabla de como hacer las  conexiones. Recomiendan construir una cajita para evitar que se contamine la medición con luz ambiental. Aparentemente es posible programar con o sin biblioteca ya que se puedencontrolar directamente los fotodiodos.

```cpp
#define S0 4
#define S1 8
//define pins de fotodiodos como constantes
S2 6
S3 7
ENABLED
#define TCS_IN 5

int red = 0;
int gruen = 0;
//añade variables de colores
= int 0;
int = 0;
char serialBuffer[55];
//resetea el serial monitor pero no sé para que

void setup()
{
  Serial.begin(115200);
//inicia el monitor de serie para que muestre el contenido de los pins
//entiendo que a una mayor velocidad de lo normal para que haga la detección de manera "instantánea"
  pinMode(S0, OUTPUT); //S0
  pinMode(S1, OUTPUT); //S1
  pinMode(S2, OUTPUT); //S2
  pinMode(S3, OUTPUT); //S3
  pinMode(OE, OUTPUT); //S3
  pinMode(TCS_IN, INPUT); //OUT

  // Sensor Output aktivieren
  digitalWrite(OE, LOW);
 
  // Frequenzteiler auf 20%
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
}
```

A continuación me perdí un poco pero entendí como setear las entradas/salidas de los colores para que detecten cada uno.
 
```cpp
// LOW / LOW = rote Photodiode
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  // Frequenz messen
  rot = pulseIn(TCS_IN, digitalRead(TCS_IN) == HIGH ? LOW : HIGH);
  
  // LOW / HIGH = blaue Photodiode
  digitalWrite(S3, HIGH);
  blau = pulseIn(TCS_IN, digitalRead(TCS_IN) == HIGH ? LOW : HIGH);
  
  // HIGH / HIGH = Gruene Photodiode
  digitalWrite(S2, HIGH);
  gruen = pulseIn(TCS_IN, digitalRead(TCS_IN) == HIGH ? LOW : HIGH);
  
  // HIGH / LOW = Photodiode ohne Filter
  digitalWrite(S3, LOW);
  klar = pulseIn(TCS_IN, digitalRead(TCS_IN) == HIGH ? LOW : HIGH);    
  
  // Ausgabe
  sprintf(serialBuffer, "Rot: %4d Gruen: %4d Blau: %4d Klar: %4d", rot, gruen, blau, klar);
  Serial.println(serialBuffer);

```

Usando este sistema se muestra el porcentaje de la presencia de cada color en el monitor de serie. No es lo que buscamos pero es muy útil saber como hacer que
detecten colores para empezar. A partir de este código podemos poner nuestros propios if y unirlos a archivos de audio e imágenes en la pantalla.


### Materialidad:

Máquina dispensadora de chicles de cartón DIY <https://www.youtube.com/watch?v=T7twtN2oYdw>

Dispensador granel <https://fooddispense.eu/categories/candy-dispenser-candy-pipe-pick-and-mix-dispensers-candy-scoop-bins/>

Al concentrarme más en lo esencial del dispensador de dulces, la manilla que abre y cierra el flujo del contenido, quedamos en libertad de hacer la forma que
queramos con el material que queramos. Por supuesto que la impresión 3d es la opción más versatil y prolija en este caso pero si quisieramos darle otro carácter
(infantil tal vez) valdría la pena experimentar con el cartón. Teniendo cuidado con el oficio, el cartón podría contrastar con la parte computacional del objeto 
y darle un encanto rudimentario aprovechando la simpleza del proyecto. Volviendo al tema del mecanismo, el contenedor puede tener la forma que queramos mientras
quepan los dulces (y se pueda rellenar) y siguiendo la estructura básica de un dispensador podemos hacer que las piezas computacionales mismas conformen la estructura o encajen de manera astuta.

### Lenguaje:

Lenguaje persuasivo <https://copyblogger.com/persuasive-content-elements/>

"Copywriting" words <https://www.davidhodder.com/824-powerful-words/>

Las palabras que usemos son muy importantes para transmitir nuestras intenciones, el propósito de nuestro proyecto y sus capacidades. Al no estar familiarizado con la terminología técnica o los trucos para destacar un producto me concentré en fortalecer ese ámbito. Los sitios mencionados no solo ayudaron a pensar en un ideal de objeto sino que establecieron parámetros que me gustaría cumplir en el proyecto. Algunas palabras particulares que destaco (en inglés ya que no se traducen tan bien) son:

-effortless

-inimitable

-amazingly simple

-intuitive

-entertaining

Para aprovechar todo el potencial del proyecto es importante ser estratégico. Hacer listados con puntos breves e interconectados es un método efectivo para
decir bastante sin caer en lo tedioso. El uso de frases llamativas y/o chistosas con las que se puede relacionar el receptor ayudan a que se involucre con la
presentación y preste atención. Simplificar terminología y explicaciones complicadas transmite mejor el mensaje y elimina barreras en la comunicación. 

### Documentación:

Comercial juguetes Kreisel <https://www.youtube.com/watch?v=ArE88Nmw0Uo&t=16s>

Step by step <https://www.instructables.com/DIY-Arduino-Tachometer-and-Distance-Measurement-To/>

Por el carácter lúdico y la personalidad de nuestro potencial máquina pensé de inmediato en los comerciales extra cortos de juguetes que daban en la tele.
Explican de manera muy condensada cómo funciona, las partes y lo entretenido que es al mismo tiempo que un video de personas ocupándolo. Dejando de lado 
las canciones creo que es una estructura que (aunque sea de manera complementaria) podemos aprovechar. En cuánto a la estructura de una futura presentación
el ejemplo del 2do link muestra algo muy parecido a nuestras bitácoras que desglosa ideas, proceso, elementos individuales y resultado. Por la gran diferencia 
de trabajo paralelo que habrá, lo mejor sería separarlo en pasos claros. Es importante considerar también que puede que resulte distinto de como lo imaginamos
ahora, por lo que los registros de cómo evoluciona son vitales para sacar cualquier aprendizaje.
