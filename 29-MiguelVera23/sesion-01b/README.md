# sesion-01b

ENCARGO

-Crear variables

-Experimentar con código

-Buscar que me interese programar

-Fallar

-Buscar info

-Documentar

-Mínimo 3 códigos

Para poder introducirme en la programación y el uso de código me puse metas "alcanzables" como programar un dado, usar morse o recibir texto. 

Me costó saber por dónde empezar asi que empecé a buscar soluciones específicas y ejemplos del uso de la nomenclatura.

Pulso

<https://docs.arduino.cc/language-reference/en/functions/advanced-io/pulseIn/>

Blink Led

<https://docs.arduino.cc/built-in-examples/basics/Blink/>

Funciones

<https://pasionelectronica.com/funciones-en-arduino/>

Uso de String y texto

<https://www.aranacorp.com/es/resumen-sobre-las-string-con-arduino/>

Random

<https://docs.arduino.cc/language-reference/en/functions/random-numbers/random/>

Uso de if

<https://programarfacil.com/blog/arduino-blog/if-else-arduino/#:~:text=Las%20sentencias%20condicionales%20if%20con,indefinidamente%20dentro%20de%20nuestro%20programa.>

SOS en morse

...---...

void setup() {

  // put your setup code here, to run once:

Serial.begin(9600);     //números específicos

pinMode(LED_BUILTIN,OUTPUT);    //siempre es necesario?

}


void loop() {

  // code for SOS

digitalWrite(LED_BUILTIN,HIGH);     //morse for S

delay(500);

digitalWrite(LED_BUILTIN,LOW);      //menos lineas?

delay(500);                         //mejor opción que delay?

digitalWrite(LED_BUILTIN,HIGH);

delay(500);

digitalWrite(LED_BUILTIN,LOW);

delay(500);

digitalWrite(LED_BUILTIN,HIGH);

delay(500);

digitalWrite(LED_BUILTIN,LOW);

delay(500);

digitalWrite(LED_BUILTIN,HIGH);     //morse for O

delay(1000);

digitalWrite(LED_BUILTIN,LOW);

delay(1000);

digitalWrite(LED_BUILTIN,HIGH);

delay(1000);

digitalWrite(LED_BUILTIN,LOW);

delay(1000);

digitalWrite(LED_BUILTIN,HIGH);

delay(1000);

digitalWrite(LED_BUILTIN,LOW);

delay(1000);

digitalWrite(LED_BUILTIN,HIGH);     //morse for S

delay(500);

digitalWrite(LED_BUILTIN,LOW);

delay(500);

digitalWrite(LED_BUILTIN,HIGH);

delay(500);

digitalWrite(LED_BUILTIN,LOW);

delay(500);

digitalWrite(LED_BUILTIN,HIGH);

delay(500);

digitalWrite(LED_BUILTIN,LOW);  

delay(2000);                       //delay de 2 segundos para que no se confunda con _

}
