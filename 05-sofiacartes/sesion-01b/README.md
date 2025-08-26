# sesion-01b 08/08

## Apuntes clase

 Funciones Gmail:

 **BCC:** Es para que a todos les llegue el gmail y le llegue la despuesta al creador del correo enviado.

 Esto se puede hacer de la siguiente forma:
 
1. Configuración.
2. Todas las configuraciones
3. Reply all (responder a todos).

**CC:** Es para hacer la copia del correo enviado a alguien más, solo le llega, no le notifica (con copia).

## Arduino 

¿Qué es arduino?
 
Es un dialecto, se llama código abierto, lo quee nos permite crear proyectos electrónicos que podemos conservar en este y al conectarlo ya esté.

* **Arduino IDE** -> de entorno de desarrollo integrado. Es la interfaz gráfica, tiene varios software que conviven entre si.
  
* IDE: Integrated Developed Enviroment. Entorno de desarrollo integrado

IDE Software -> Para descargar, en el caso del arduino 4 minima se utiliza el IDE2.(  )

![arduinodescarga](./imagenes/arduinoejemplodescarga.png) 
R4 ese descargar al ya tener el software en el computador.

1. File
2. Examples
3. Basics
4. Blink

*Cada vez que se presiona 2 veces el botón reset, se olvida de todo lo anterior.*

* **Lenguaje en Arduino**

- **Serial monitor**: Todo lo que tenga serial pasa por aquí. 
- **( )** : Parentesis.
- **[  ]** : Corchete.
- **{ }** : Murciélago.
- **!** :
- **//** :Viene un comentario.
- **||** :
- **✔️** : Para enviar código.
- **->** :Para verificar código.
- ***/** :Abrir comentario.
- ***/** : Cerrar un comentario.
- **;** : La línea terminó.
- **=** : Dentro de la izquierda vive el valor de la derecha. Asignar valor.
- **==** : Se compara. Condición.   
- **HIGH**: Lo que está en 1
- **LOW**: Lo que está en 0
- **delay**: Significa que el arduino manda la señal y se queda ahí por un segunso, se vita que se queme. *Le dice al arduino congelado.*
- **Void**:
- **int**: Son variables.
- **foat**:Para decimales.
- **Char** Sólo una letra o un caracter.
- **String**: Colección de carácteres.
- **bool**: si//no
- **AND**: Debe cumplir todas.
- **OR**: Debe cumplir alguna.
- **command t**: Se ordena en el arduino.
- **Serial.println**: Imprime en otra línea.
- **Serial.print**: Imprime en la misma línea.
- **for**: Iteración.
- **if:** Si pasa algo funciona. Es como si tuviera mas opciones. Para hacer o no hacer cualquier código.
- **else**:
- **Serial.being()**: Es una función y lo que esta en el paréntesis es el valos que se le asigna.

## Códigos vistos en clase

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
## Encargo 02

Documentar 3 códigos que no funcionaron, pueden ser más. Sin ia. También, si nos ayudamos de algún lugar citar.

