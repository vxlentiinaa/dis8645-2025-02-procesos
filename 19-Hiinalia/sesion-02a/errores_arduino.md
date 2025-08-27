# SOS en código morse

Partiendo con el ejemplo de blink básico que vimos en la clase, primero necesitaba averiguar la cantidad de segundos para poder hacer la S dentro del SOS.

```cpp
// the setup function runs once when you press reset or power the board
void setup() {

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second 

}
```

Le cambié el delay al encendido a 500 en vez de 1000, pero seguía demasiado lento para lo que necesitaba.
Después se lo cambié a 100, y el encendido quedó perfecto. Pero, ahora el apagado estaba muy lento.
La S funcionó como quería una vez el delay estaba en 500, después de experimentar varias veces.

```cpp
void loop() {

  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second 

}
```

Ahora, tengo que conseguir agregar la O y una S más. Para eso, copié y pegué dos veces más el código de la S para poder separarlo de la O. Y empecé a jugar con los segundos.
Yo sé que quizás hay una manera más eficiente de acortar todo lo que estoy haciendo ahora, pero creo que por el momento va bien, ya que se consigue lo que quería de un principio.

```cpp
void loop() {

  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
 digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);  
```

También me estoy asegurando de implementar un delay entre letras para poder distinguirlas bien.
Ya con la S y la O, ahora lo último que hice es copiar y pegar el código de la S para poder crear el mensaje completo, de igual forma asegurándome que tenga un delay más largo en el apagado al final de la palabra para poder saber cuando se reinicia el loop.

```cpp
// the setup function runs once when you press reset or power the board
void setup() {

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
 digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);     
  
   digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(2000);                      // wait for a second

}
```

## Metrónomo en luz LED

Mi intento de metrónomo. Este siento que aumentó mucho la dificultad comparado con el del SOS, y ojalá llegar a un resultado satisfactorio.

Primero partiendo por declarar el bpm base y el intervalo para poder hacer la conversión directamente del bpm base a segundos.

```cpp
// declaración bpm
int bpm = 120;
int intervalo;

```

Esto hasta ahora no me ha dado ningún error, supongo que es porque solo estoy declarando variables por ahora.
Después, esta parte es la que más se puso compleja. Tuve que empezar a hacer algunos cálculos sobre el bpm base, ya que en el código no se trabaja directamente con segundos, sino que con milisegundos. Entonces, considerando que un segundo son 1000 milisegundos, y en un minuto hay 60 segundos, entonces en un minuto deberían haber 60000 milisegundos. (Me estoy enredando yo sola escribiendo esto. Aquí le pedí ayuda a mis papás programadores, mi hermana que estudió música, y un poco de Google para entender más o menos lo que estoy haciendo.)

```cpp
void setup() {

  // declarar led
pinMode(LED_BUILTIN, OUTPUT);
intervalo = 60000/bpm;
```

La misma función que se utiliza en el blink al parecer también funciona bien para esto.

Ahora para el loop y que se encienda de acuerdo al bpm:

```cpp
void loop() {

digitalWrite(LED_BUILTIN, HIGH) // se enciende
delay(100)
digitalWrite(LED_BUILTIN, LOW) //se apaga
delay(intervalo)
```

Aquí me dio error al verificar, porque no les puse el punto y coma.

Lo probé y si encendió el LED. Lo probé con un metrónomo real, y el problema es que en vez de seguir los 120 bpm base, está siguiendo 100 bpm.

```cpp
// declaración bpm
int bpm = 120;
int intervalo;

void setup() {

  // declarar led
pinMode(LED_BUILTIN, OUTPUT);
intervalo = 60000/bpm;

}

void loop() {

digitalWrite(LED_BUILTIN, HIGH); // se enciende
delay(100);
digitalWrite(LED_BUILTIN, LOW); //se apaga
delay(intervalo);

}
```

Le saqué el delay de 100 del encendido para ver si eso era el problema, e incluso intenté poner el delay de intervalo en el encendido. La luz dejó de funcionar, así que hubo que empezar a experimentar. Estoy convencida de que quizás ese 100 era el problema. Finalmente, para no eliminar ninguno de los delay y que encendiera el led, le resté esos 100 al intervalo del apagado. El experimento terminó funcionando bien.

```cpp
//Metrónomo con luz led integrada en arduino

// declaración bpm
int bpm = 120;
int intervalo;

void setup() {

  // declarar led
pinMode(LED_BUILTIN, OUTPUT);
intervalo = 60000/bpm;

}

void loop() {

  // se enciende
digitalWrite(LED_BUILTIN, HIGH); 
delay(100);
//se apaga
digitalWrite(LED_BUILTIN, LOW);
delay(intervalo-100);

}
```

## Letras de canciones por comando

Mi intención en este código es hacer que con un comando pueda elegir que letra va a mandar mi arduino a mi computador. Para eso, estoy comenzando por experimentar con el comando Serial.begin()
Por no entender bien como funciona el guardado en GitHub y además por no haber conectado bien el cable de mi laptop como se debía, perdí todo lo que escribí. Así que, a continuación será lo que me acuerdo que hice.

Tengo claro que para poder hacer esto, tengo que lograr que String funcione.
Vimos en clases que al utilizar String con múltiples líneas, no se puede solamente dejarlo todo hacia el lado porque quedaría horrible.
Así que lo primero que hice fue dedicarme a entender por qué no funcionó el de la clase.

Lo usábamos como:

```cpp
String C1 = "blablabla \n";
C1 = C1 + "blablablablabla \n";
C1 = C1 + "blablablablabla \n";
```

Y aquí es donde me puse a investigar como hacer que funcione. Eventualmente, haciendo algunos experimentos y aplicando la lógica, llegué a la conclusión de que en realidad no era necesario utilizar = ni +. Solo había que continuarlo abajo y sacarle el punto y coma en cada línea. Esto debido a que con el punto y coma se termina lo que uno está haciendo dentro de esa declaración, por lo que al momento de utilizar el punto y coma quedaba completamente desconectado el salto de línea de String.

Así es como me funcionó a mí:

```cpp
String C1 =
"Cuando amanece, encendemos el fuego \n"
"El tiempo pasa como petalos cayendo \n"
"He recorrido un largo camino, has soñado por mucho tiempo \n"
"Si podemos intercambiar sinceridad, ya ha pasado \n";
```

Una vez que ya tenía el String completamente funcional para agregar más de uno, me dediqué a buscar como puedo hacer que en el monitor serial pueda elegir cuál canción quiero que me envíe el arduino.
Llegué hasta una lista de las funciones para el monitor serial que pensé que quizas funcionarían. Me topé con ```Serial.readString()``` y ```Serial.readStringUntil()```. La verdad es que no sé si hubieran funcionado o no, pero hice el intento de adaptarlo a lo que estaba haciendo. No funcionó.

Esto fue a lo que llegué y que no dio resultado:

```cpp
Serial.begin(9600);
delay (3000);
Serial.println("¿Que cantamos? (C1 o C2)");

  if (Serial.available()) {

    C1 = Serial.readStringUntil('\n');
    Serial.println(C1);
  }
```

Pero finalmente, toda esa investigación por lo menos me llevó a entender un poco más como funciona String. Hice que el arduino enviara el coro de la canción que quería a mi computador en loop de forma exitosa.

Un aprendizaje importante aquí: GitHub y yo misma son mis peores enemigos.

```cpp
// canción
String C1 =
"Cuando amanece, encendemos el fuego \n"
"El tiempo pasa como petalos cayendo \n"
"He recorrido un largo camino, has soñado por mucho tiempo \n"
"Si podemos intercambiar sinceridad, ya ha pasado \n";


void setup() {


// se activa el monitor serial
Serial.begin(9600);
delay(3000);

}

void loop() {

Serial.println(C1);
delay(5000);

}
```
