# sesion-08a 30/08

## Proyecto 02- Robot que cuenta datos curiosos

`Componentes que utilizaremos:`

- Sensor ultrasónico HC-SR04
- Servo Motor
- Motor DC
- Reproductor mp3
- Altavoz

`Entrada:` Mediante el sensor ultrsónico la máquina detecta presencia y detalles de distancia de esta presencia humana.

`Salida:` Al detectar la distancia de la presencia la máquina reacciona de diferentes.

1. Cuando detecte una presencia esta comenzará a temblar (de nervios) mediante el motor DC el tembleque aumentará entre más cerca estés.
2. El sensor detectará presencia en 3 instancias: 2 - 10cm, 40 - 60cm, 80 - 100cm.
3. En cada parámetro la máquina reproduce un audio de voz distinto mediante la microSD en el reproductor MP3 y el altavoz.
4. Los parametros son: 80 - 100cm = Te "grita" que vengas diciendo: "HOLA HUMANO, VEEEN!" 40 - 60cm = Te grita de nuevo pidiendo que te acerque más, diciendo: "HOOLAA, MÁS CERCA!" 2 - 10cm = Levanta un "dedo" usando el servo motor, este se moverá de los 0 grados a los 180 mientras estés a esa distancia. Al mismo tiempo te dirá algún dato interesante.

### Diálogo

- Decir "hola humano, ¿porqué estas tan lejos?. Acércate" 
- Que tirite con el motor DC al momento de no acercarse hacia el robot.
- "Hola, no seas tímido, más cerca. no tengo, virus creoo"

Datos curiosos que dirá:

- “¿Sabías que?, los 99% de los problemas se arreglan reiniciando.”
- “La nube no existe, son computadores de otro.”
- “Los datos nunca se borran, sólo se esconden.”
- “El error 404 es mi manera de hacerme el leso.”
- “El primer mouse era de madera.”

### Cosas faltantes:

1. Mecanismo `en proceso`
2. Carcasa `en proceso`
3. Motor DC
4. Unir código
5. Diálogo `listo`
6. Tipo de voz: artificial `listo`

### Desarrollo en clases

- Código para usar el mp3 y el altavoz funcionó gracias a janis y mateo, el cual es de esta fuente: <https://github.com/DFRobot/DFRobotDFPlayerMini>
  
 ```cpp
<@746126402121629817> /***************************************************
DFPlayer - A Mini MP3 Player For Arduino
 <https://www.dfrobot.com/product-1121.html>
 
 ***************************************************
 This example shows the basic function of library for DFPlayer.
 
 Created 2016-12-07
 By [Angelo qiao](Angelo.qiao@dfrobot.com)
 
 GNU Lesser General Public License.
 See <http://www.gnu.org/licenses/> for details.
 All above must be included in any redistribution
 ****************************************************/

/***********Notice and Trouble shooting***************
 1.Connection and Diagram can be found here
 <https://www.dfrobot.com/wiki/index.php/DFPlayer_Mini_SKU:DFR0299#Connection_Diagram>
 2.This code is tested on Arduino Uno, Leonardo, Mega boards.
 ****************************************************/

#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"

#if (defined(ARDUINO_AVR_UNO) || defined(ESP8266))   // Using a soft serial port
#include <SoftwareSerial.h>
SoftwareSerial softSerial(/*rx =*/4, /*tx =*/5);
#define FPSerial softSerial
#else
#define FPSerial Serial1
#endif

DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

void setup()
{
#if (defined ESP32)
  FPSerial.begin(9600, SERIAL_8N1, /*rx =*/A3, /*tx =*/A2);
#else
  FPSerial.begin(9600);
#endif

  Serial.begin(115200);

  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
  if (!myDFPlayer.begin(FPSerial, /*isACK = */true, /*doReset = */true)) {  //Use serial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
  Serial.println(F("DFPlayer Mini online."));
  
  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.play(1);  //Play the first mp3
}

void loop()
{
  static unsigned long timer = millis();
  
  if (millis() - timer > 3000) {
    timer = millis();
    myDFPlayer.next();  //Play next mp3 every 3 second.
  }
  
  if (myDFPlayer.available()) {
    printDetail(myDFPlayer.readType(), myDFPlayer.read()); //Print the detail message from DFPlayer to handle different errors and states.
  }
}

void printDetail(uint8_t type, int value){
  switch (type) {
    case TimeOut:
      Serial.println(F("Time Out!"));
      break;
    case WrongStack:
      Serial.println(F("Stack Wrong!"));
      break;
    case DFPlayerCardInserted:
      Serial.println(F("Card Inserted!"));
      break;
    case DFPlayerCardRemoved:
      Serial.println(F("Card Removed!"));
      break;
    case DFPlayerCardOnline:
      Serial.println(F("Card Online!"));
      break;
    case DFPlayerUSBInserted:
      Serial.println("USB Inserted!");
      break;
    case DFPlayerUSBRemoved:
      Serial.println("USB Removed!");
      break;
    case DFPlayerPlayFinished:
      Serial.print(F("Number:"));
      Serial.print(value);
      Serial.println(F(" Play Finished!"));
      break;
    case DFPlayerError:
      Serial.print(F("DFPlayerError:"));
      switch (value) {
        case Busy:
          Serial.println(F("Card not found"));
          break;
        case Sleeping:
          Serial.println(F("Sleeping"));
          break;
        case SerialWrongStack:
          Serial.println(F("Get Wrong Stack"));
          break;
        case CheckSumNotMatch:
          Serial.println(F("Check Sum Not Match"));
          break;
        case FileIndexOut:
          Serial.println(F("File Index Out of Bound"));
          break;
        case FileMismatch:
          Serial.println(F("Cannot Find File"));
          break;
        case Advertise:
          Serial.println(F("In Advertise"));
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
  
}
```

- Logramos hacer funcionar el sensor ultrasónico junto al servomor, fotito arriba y el código está adjunto en files.
- Preparamos los diálogos y los audios de estos.

Fuente de descarga de voces <https://aivoice-es.vidnoz.com/text-to-speech>

![trabajoEnClases1](./imagenes/trabajoEnClases30Sep.jpg)

![trabajoEnClases2](./imagenes/trabajoEnClases30Sep01.jpg)

- diálogo:
  
1. "hola1.mp3" de 80-10cm, para llamar a la persona: "Hola humano ¿Por qué estás tan lejos? Acércate."
2. "hola2.mp3" de 40-60cm, para hacer que la persona se acerque más: "Hola! No seas timido, ven más cerca, no tengo virus... creo jiji"
3. "dato1, 2, 3, 4,5 y 6.mp3" de 2-10cm:
   
dato1: "¿Sabías qué? El primer mause era de madera... Seguro también servía de leña jajaj"

dato2: "¿Sabías qué? El error 404 es mi manera de hacerme el leso... jajaja"

dato3: "¿Sabías qué? La nube no existe, son computadores de otro... pero no se lo digas a nadie"

dato4: "¿Sabías qué? Los datos nunca se borran, solo se esconden... igual que tus calcetines"

dato5: "¿Sabías qué? Apagar y prender arregla todo, y sino, un golpecito y como nuevo"

dato6: "¿Sabías qué? El porcentaje exacto de 99,999999999999... Nah, inventé jajaja pero aún sigues aquí ¿no?"

---

#### Encargo 16

Cada persona del grupo, debe subir a su README qué es lo que llevan hasta el final de la sesión, que sí funciona, que funciona casi y que no funciona. Después subir nueva versión del código y de la documentación.

Búsqueda de motor DC y referentes de carcasa

No hemos hecho la conexión como tal del Motor DC, solo buscamos referentes.

Nos explica que el motor DC no funciona directamente con arduino ya que el motor necesita bastante corriente y arduino da hasta 5v, por lo que al conectarlo se necesitará un transistor, en este caso ella habla de un transistor NPN (2N2222A), necesitaremos también una resistencia que dependerá del transistor que se use.

- Ayuda de como conectarlo: "Conexión de un transistor NPN a un motor DC y a un Arduino" <https://www.youtube.com/watch?v=O-kuwPfpCng>
- Referente robot <https://www.ottodiy.com/>
  
---

- Errores y problemas en el código: El reproductor MP3 no funcionaba, al principio se escuhaba pero no tenía ningún código aplicado. Pensamos que podría ser la tarjeta SD y la formateamos con las introducciones de Gemini: "Para formatear una tarjeta SD para Arduino Uno, conéctala a tu computadora e inicia la herramienta de formateo de tu sistema operativo. En la configuración de formato, elige FAT32 como sistema de archivos, o FAT para tarjetas de menos de 2GB, y luego inicia el formateo. Para obtener los mejores resultados, considera usar la herramienta oficial SD Formatter de la SD Association."
- Conecciones y registro: Buscamos como conectar el altavoz al Arduino y el Reproductor MP3, en la página de AFEL se encuentra la foto de como conectar el Reproductor MP3 [AFEL](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?srsltid=AfmBOopRNTgHOWYlfaHTtNXuy2sf4_Lw2Spb70NB-QN52b7Sybu8JQWi)

![IMG_5428](./imagenes/IMG_5427.jpg)

![IMG_5428](./imagenes/IMG_5428.jpg)

![IMG_5429](./imagenes/IMG_5429.jpg)
