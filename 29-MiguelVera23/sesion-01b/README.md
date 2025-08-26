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

```cpp
// SOS en morse

// ...---...

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

```

Este código funcionó pero debe haber una manera más fácil de optimizarlo. A continuación hay intentos fallidos que me ayudaron a familiarizarme con la nomenclatura pero aún me es muy dificil encontrar la lógica detras de programar.

```cpp

// LAS MAÑANITAS

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.printIn("Levántate!");
}

//String canción = "Estas son las mañanitas\n";
//canción = canción + "que cantaba el rey David\n";
void loop() {
  // code for SOS
  Serial.printIn(canción);
String canción = "Estas son las mañanitas\n";
canción =  + "que cantaba el rey David\n";
canción = canción + "Hoy por ser dia de de tu santo\n";
canción = canción + "te las cantamos aquí\n";
canción = canción + "Despierta, mi bien, despierta\n";
canción = canción + "mira que ya amaneció\n";
canción = canción + "ya los pajaritos cantan\n";
canción = canción + "La Luna ya se metió\n";
canción = canción + "Qué linda está la mañana\n";
canción = canción + "En que vengo a saludarte\n";
canción = canción + "Venimos todos con gusto\n";
canción = canción + "Y placer a felicitarte\n";
canción = canción + "El día en que tú naciste\n";
canción = canción + "Nacieron todas las flores\n";
canción = canción + "En la pilar del bautismo\n";
canción = canción + "Cantaron los Ruiseñores\n";

}
```

Intenté enseñarle las mañanitas pero hay errores que aunque sean simples aún no puedo percibir.

```cpp
// DADO 30

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
randomSeed(analogRead(0));


}


void loop() {
if(randomNumber1 < 15) = Serial.printIn (Defeat);
if(randomNumber1 > 15) = Serial.printIn (Victory);
long randomNumber1 = random(30);    //dado 30
void randomNumber1
}
```

Me interesé por usar la aleatoriedad y busqué ejemplos.

```cpp
//chat y respuesta de arduino

while(Serial.available())
{
  delay(50);
char c=Serial.read();
readString+=c;
}
if(readString.length()>0){
Serial.printIn(readString);
if (readString=="ON"){
  digitalWrite(LED_BUILTIN, HIGH);
}
String readString
readString="";
}
```

de este ejemplo <https://forum.arduino.cc/t/receive-string-from-serial-monitor/643266>

```cpp
char str[]="Me estoy alargandooo!";

void setup() {
  // put your setup code here, to run once:           //
Serial.begin(9600);
Serial.println(str);
Serial.print("String length:"); Serial.println(strlen(str));     
Serial.print("Array length:"); Serial.println(sizeof(str));
for(int i=0;i<sizeof(str);i++){
Serial.println(str[i]);
}
Serial.println(F("end of string"));
}
void loop() {
  // put your main code here, to run repeatedly:

}
```

display de texto vertical y horizontal
