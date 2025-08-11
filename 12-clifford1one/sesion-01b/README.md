# sesion-01b

## 08-agosto-2025 - clase 2

## conceptos arduino

- [digitalWrite()](https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalwrite)

- [pinMode()](https://docs.arduino.cc/language-reference/en/functions/digital-io/pinMode)

- [delay()](https://docs.arduino.cc/language-reference/en/functions/time/delay) usar delay() es considerado una mala práctica, pues, el arduino se congela durante el tiempo establecido, por lo que no puede realizar otras tareas durante ese tiempo.

- [Serial.begin()](https://docs.arduino.cc/language-reference/en/functions/communication/serial/begin)

- [Serial.print](https://docs.arduino.cc/language-reference/en/functions/communication/serial/print)

- [Serial.println](https://docs.arduino.cc/language-reference/en/functions/communication/serial/println)

- [map( )](https://docs.arduino.cc/language-reference/en/functions/math/map)

- [analogWrite( )](https://docs.arduino.cc/language-reference/en/functions/analog-io/analogWrite)

## Arduino IDE

códigos de color

- rojo/naranjo: identifica funciones

ejemplo: 
- void loop(){}
- digitalWrite();

### funciones

la diferencia entre ambas funciones, es que cuando tiene el void, estás definiendo que se hace dentro de esa función, cuando no tiene el void, se está "llamando" a la función, y se corre todo lo que esté adentro de dicha función.

por lo tanto, puede crear un void confeti( ){ } y definir (dentro del murciélago) qué hace ese void, y después, en el draw, llamar a confeti(), y se correra lo que diga dentro de esa función.

### tipos de dato

en arduino al declarar una variables, hay que explicitar qué tipo de dato es. Para esto se usan [variables de C++](https://www.w3schools.com/cpp/cpp_variables.asp)

- int - númro entero
- float - número decimal
- bool - variable boolania(0 ó 1)
- char - 'caracter'(letra, número o caracter especial)
- String - "texto"

estos datos se pueden entender como "contenedores", al ir a comprar un chicle, lo guardas en un bolsillo. Pero al ir a comprar una sandía tendría que llevar un carrito de feria. Y si compras planchas de terciado, necesitas un flete. Estos distintos contenedores tienen distinto costo, y pueden cargar distintas cosas.

## códigos de hoy

```cpp
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

int onTime;
int offTime;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // pinMode(n°, INPUT);

  onTime = 200;
  offTime = 3000;
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(onTime);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(offTime);      
  
  confeti();                // wait for a second
}

void confeti(){
  Serial.print('wujuuu!');
}
```

```cpp
/*
  Blink
  Turns an LED on for one second, then off for one second, repeatedly.
  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

int onTime;
int offTime;

String poema;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // pinMode(n°, INPUT);

  Serial.begin(9600);

  onTime = 200;
  offTime = 3000;

poema = "poemaaaaaaaaaaaaaaaaa \n";
poema = poema + "sigue poema \n";

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(onTime);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(offTime);
  confeti();                // wait for a second
}

void confeti(){
 Serial.print(poema);
 //Serial.print("\n");
}
```


## personas

- [Constanza Gaggero:](https://www.instagram.com/gaggeroworks/?hl=en) diseñadora gráfica profe FaAAD

- [Alejandra Pizarnik:](https://es.wikipedia.org/wiki/Alejandra_Pizarnik) poeta surrealista

- [Samuel Morse](https://es.wikipedia.org/wiki/Samuel_Morse)

## links

- [arduino.cc](https://www.arduino.cc)

- [Arduino IDE:](https://www.arduino.cc/en/software) Integrated Development Enviroment

- [Arduino UNO R4 Wi Fi](https://docs.arduino.cc/hardware/uno-r4-wifi)

- [Arduino UNO R4 Minima](https://docs.arduino.cc/hardware/uno-r4-minima)

- [ejemplo comunicación acertiva:](https://www.youtube.com/watch?v=6JGp7Meg42U) Íñigo Montoya de la novela "La princesa prometida"

### extras

- el caracter "enter" se representa así: \n

- [Décimas - Violeta Parra](https://web.uchile.cl/publicaciones/cyber/13/tx7.html)

## encargo

Documentar mínimo 3 códigos probados en el arduino que no funcionaron.

### experimento-01

Mi objetivo es utilizar el input del usuario. Escribir en el puerto serial produce cierto output.

para esto hay que entender [Serial.read( )](https://docs.arduino.cc/language-reference/en/functions/communication/serial/println/). 

con este código, al escribir en el puerto serial, devuelve números enteros de 1-3 dígitos. Los cuales provienen de [ASCII(American Standard Code for Iformation Interchange)](https://www.ascii-code.com). ASCII es un método de codificación de carácteres.

- [tabla de conversión ASCII](https://elcodigoascii.com.ar/#google_vignette)

## Serial.println( )

[Serial.println( )](https://docs.arduino.cc/language-reference/en/functions/communication/serial/println/?_gl=1*eskx99*_up*MQ..*_ga*MTk4NjE4Njc5MC4xNzU0ODQyNjQ5*_ga_NEXN8H46L5*czE3NTQ4NDI2NDckbzEkZzEkdDE3NTQ4NDI3NzckajYwJGwwJGgxMjQ5NDI2NDI.) escribe en la consola, y pide 2 variables:

Serial.println(valor/variable, formato);

formatos permitidos: 

- DEC: decimal codificado en ASCII
- HEX: hexadecimal codificado en ASCII
- OCT: octal codificado en ASCII
- BIN: binario codificado en ASCII

| N° | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|:---:|---|:---:|:---:|:---:|---|---|---|---|---|---|
| ASCII | 48 | 49 | 50 | 51 | 52 | 53 | 54 | 55 | 56 | 57 |

sabiendo esto, puedo escribir un código en el que, dependiendo del caracter que envíe el usuario, el arduino haga cierta tarea.

por ejemplo, con los números del teclado controlar por cuántos segundos se enciende el LED del arduino.

```cpp
int datoRecibido = 0;  // for incoming serial data

void setup() {
  Serial.begin(9600);  // opens serial port, sets data rate to 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    datoRecibido = Serial.read();

    //tecla '1' = 1 segundo, tecla '2' = 2 segundos, etc.
    if (datoRecibido == 49) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(1000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 50) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(2000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 51) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(3000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 52) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(4000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 53) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(5000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 54) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(6000);
      digitalWrite(LED_BUILTIN, LOW);
    }else if (datoRecibido == 55) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(7000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 56) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(8000);
      digitalWrite(LED_BUILTIN, LOW);
    } else if (datoRecibido == 57) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(9000);
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
```

### experimento-02

usando la misma lógica de código ASCII, escribpi un código, que controla la intensidad del LED del arduuno con las teclas numéricas. 

```cpp
int datoRecibido = 0;  // for incoming serial data

void setup() {
  Serial.begin(9600);  // opens serial port, sets data rate to 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    datoRecibido = Serial.read();

    // say what you got:
    //Serial.print("I received: ");
    //Serial.println(datoRecibido, DEC);

    //map(datoRecibido, 0, 1023, 1, 10);

    if (datoRecibido == 49) {
      analogWrite(LED_BUILTIN, 25);
    } else if (datoRecibido == 50) {
      analogWrite(LED_BUILTIN, 50);
    } else if (datoRecibido == 51) {
      analogWrite(LED_BUILTIN, 75);
    } else if (datoRecibido == 52) {
      analogWrite(LED_BUILTIN, 100);
    } else if (datoRecibido == 53) {
      analogWrite(LED_BUILTIN, 125);
    } else if (datoRecibido == 54) {
      analogWrite(LED_BUILTIN, 150);
    } else if (datoRecibido == 55) {
      analogWrite(LED_BUILTIN, 175);
    }else if (datoRecibido== 56){
      analogWrite(LED_BUILTIN, 200);
    }else if (datoRecibido== 57){
      analogWrite(LED_BUILTIN, 225);
    }else if (datoRecibido== 48){
      analogWrite(LED_BUILTIN, 255);
    }
  }
}
```

#### error en experimento-02

intente usar la función [map( )](https://docs.arduino.cc/language-reference/en/functions/math/map) para reasignar la cantidad de valores análogos predeterminados, que son 1024, del 0 al 1023. Esto debido a que es el valor máximo almacenable en 10 bits (2^10).
