# sesion-02a
12-08-2025
## teloneo 
arduino se conecta por 4 cables, el computador funciona como una power bank.

para iniciar la comunicaión serial utilizamos Serial.begin(9600); --> 9600 representa baudios, baud rate 

baudios --> es la velocidad de comunicación serial

la ciencia consiste en demostrar que las cosas son falsas.

que es usb?

- Universal = estándar 
- Serial
- Bus 

## primera parte
MP4MUSEUM https://mp4museum.org/  --> reproductor multimedia de codigo abierto.

El reproductor busca y reproduce automáticamente archivos de vídeo desde una unidad USB conectada o la tarjeta interna. También cuenta con un modo especial de reproducción sincronizada, que permite que varios dispositivos reproduzcan vídeos simultáneamente, ideal para configuraciones multipantalla.

el internet de las cosas (iot) --> es la idea de conectar a Internet cualquier cosa con sensores, software y conectividad para que pueda enviar y recibir datos. Esto permite que estos dispositivos recopilen información sobre su entorno, tomen decisiones basadas en esa información y realicen acciones de forma autónoma o con intervención humana. 

yuk hui --> ingeniero en informatica y filosofo 

john cage --> uno de los compositores mas influyente del siglo xx, pionero de la indeterminación musical, la música electroacústica y el uso no convencional de instrumentos musicales.

cajanegraeditora --> https://cajanegraeditora.com.ar/

libros que me gustaria leer:

- atencion trastornada, claire bishop
- el imperio de la normalidad, robert chapman
- timidos radicales, hamja ahsan
- arte y cosmotecnica, yuk hui
- materiales para una pesadilla, juan mattio
- futuromania, simon reynolds
- hacia el realismo especulativo, graham harman 

codigo :

- setup es la función que corre desde que se envía el código:
void setup() {
}

- indica el pin que se utilizará, en este caso es el led integrado en la placa:
  pinMode(LED_BUILTIN, OUTPUT);
}

- la funcion loop reproduce el codigo una y otra vez:
void loop() {
}

revision de funcionamiento de github:

- los encargos no se ponen en la sesion siguiente, se debe actualizar en la misma sesion

## segunda parte
visita de sokio (Mauricio Díaz) 

compositor de opera experimental "paraíso"

new latin wave --> organizacion sin fines de lucro y plataforma multidiciplinar para cultura y arte latino

utilizaba en los 90 el sampler s2000 akai 

teenage engineering --> empresa sueca de electronica de consumo y diseño. Sus productos incluyen electrónica y sintetizadores, siendo su producto estrella el OP-1, así como cámaras instantáneas.

https://teenage.engineering/

roberto matta --> fue un arquitecto, pintor y poeta chileno, considerado el último representante del surrealismo.

gorndon matta-clark --> artista estadounidense de ascendencia chilena que exploró diferentes modos de intervención arquitectónica. Se le reconoce principalmente por sus «building cuts» o «cortes de edificios».

juan downey -->  artista multidisciplinario chileno, pionero del videoarte y el arte interactivo.

## como subir codigos de arduino a github
subir carpeta que contiene el archivo 

debe haber un archivo que se llame igual, los que no se llaman de la misma forma son archivos anexos.

se abriran las carpetas en orden, pero el archivo principal (archivo con el mismo nombre que la carpeta) se abrira primero.

si no termina en / es porque estoy en un archivo y no en una carpeta 

- add file
- upload
- drag file (arrastrar carpeta)
- commit (subir)

 ## encargos 

codigo 1:

```cpp
bool encender = 2;

void setup() {
  pinMode (LED_BUILTIN, OUTPUT);

}

void loop() {
  if (encender){
    digitalWrite (LED_BUILTIN, HIGH);
  } else {
    digitalWriter (LED_BUILTIN, LOW);
  }
delay (1000);
}
```
Compilation error: 'digitalWriter' was not declared in this scope

codigo 2:

codigo 3:

ideas con arduino:

- mini pad (tipo midi pero de bolsillo)
- dispositivo que traduzca la frecuencia que emiten objetos organicos a sonido
- algo tipo mimu gloves (imogean heap)

