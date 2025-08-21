# sesion-03a

19 Agosto 2025

Presentación de proyecto 1

## Computación

### Condicionales

```If (condición booleana) Then (consiguiente)```

```Else (alternativa)```
```End if (alternativa)```

si se cumple la condición, entonces se cumple el “then”
también existe el else, para otra alternativa en el caso de que no se cumpla el if.

Else es opcional. La unica manera en que funcione else es que el if sea falso.

Entre if y else pueden existir infinitos if y else.

Existen diagramas de flujo que representan estas condicionales.

Mapa de flujo condicionales <https://en.wikipedia.org/wiki/Conditional_(computer_programming)#/media/File:IF-THEN-ELSE-END_flowchart.svg>

Ejemplo:

if (estaLloviendo == true) {
hacer sopaipillas();
}
else {
salirAAndarEnBici();
}

Con 2 iguales == es para comparar. Se dice si o no.

Se puede tambien escribir una condicion dentro de otra

Ejemplo:

```cpp
if (ver == false) {
ponermeLentes();

if (suciedad == true) {
limpiar lentes();
}
else {
seguirConMiVida();
}
```

Operadores lógicos <https://learn.microsoft.com/es-es/dotnet/csharp/language-reference/operators/boolean-logical-operators>
<https://www.freecodecamp.org/espanol/news/operador-c-operadores-logicos-de-programacion-en-c/#:~:text=¿Cuál%20es%20el%20papel%20de,uno%20en%20las%20siguientes%20secciones.>

### ¿Cuál es el papel de los Operadores Lógicos en la Programación en C?

<https://www.freecodecamp.org/espanol/news/operador-c-operadores-logicos-de-programacion-en-c/#:~:text=¿Cuál%20es%20el%20papel%20de,uno%20en%20las%20siguientes%20secciones.>
Los operadores lógicos se utilizan comúnmente en declaraciones condicionales (como las declaraciones if..else), ya que ayudan en la toma de decisiones: determinan qué acción debe tener lugar y qué código debe ejecutarse a continuación según las condiciones que establezcas.
Combina los operadores lógicos con una o múltiples condiciones para crear una expresión lógica.
Los operadores lógicos evalúan la expresión lógica y devuelven un resultado.
El resultado siempre es un valor booleano. Un valor booleano determina si la expresión es verdadera true o falsa false.
Hay tres operadores lógicos en la programación en C: el AND lógico (&&), el OR lógico (||) y el NOT lógico (!).

```
//si no hay arana
//reacciono tranqui
if (!hayArana) {
reaccionarTranqui();

if (suciedad == true) {
limpiar lentes();
}
else {
chillar(infinito);
}
```

```

if (edad >= 18 OR tengoPituto) {
dartePermisoConducir();

if (suciedad == true) {
limpiar lentes();
}
else {
(tomo metro);
}
```

bool: puede ser 0 o 1, verdadero o falso

**ejemplo ordinario**
// variable booleana
// la inicializamos falsa
bool prender = false;

// despues de 3 segundos
// el led se apague

void setup() {
  // put your setup code here, to run once:

  // hacer que una patita sea output, salida
  // usamos la constante incluida en Arduino
  // LED_BUILTIN, porque sabe donde esta el LED interno
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_BUILTIN, prender);
  delay(3000);
  prender = true;
  digitalWrite(LED_BUILTIN, prender);
  
}

millis() cuenta el tiempo desde que se prendió el arduino. no es infinito<https://docs.arduino.cc/language-reference/en/functions/time/millis/>

no se trabaja con int cuando se usa millis porque no cabe el número. se utiliza ```unsigned long```

**codigo que usamos con if**

```
// variable booleana
// la inicializamos falsa
bool prendido = false;

// despues de 3 segundos
// el led se apague

void setup() {
  // put your setup code here, to run once:

  // abrir puerto serial
  Serial.begin(9600);


  // hacer que una patita sea output, salida
  // usamos la constante incluida en Arduino
  // LED_BUILTIN, porque sabe donde esta el LED interno
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  // que solamente este prendido
  // en los primeros 3 segundos
  if (millis() < 3000) {
    prendido = true;
  }
  else {
   prendido = false;
  }

  digitalWrite(LED_BUILTIN, prendido);

  Serial.println(millis() / 1000 );
```

int es para uso de números cotidianamente. se utiliza long para usar números más grandes.

**con la maña de misa de usar la variable segundos y hacerse cargo muy responsablemente de usar unsigned long**

```
// variable booleana
// la inicializamos falsa
bool prendido = false;

// despues de 3 segundos
// el led se apague

void setup() {
  // put your setup code here, to run once:

  // abrir puerto serial
  Serial.begin(9600);


  // hacer que una patita sea output, salida
  // usamos la constante incluida en Arduino
  // LED_BUILTIN, porque sabe donde esta el LED interno
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  // que solamente este prendido
  // en los primeros 3 segundos

  unsigned long segundos = millis() / 1000;
  
  if (segundos < 3  ) {
    prendido = true;
  } else if ( segundos > 10) {
    prendido = true;
  } else {
    prendido = false;
  }

  digitalWrite(LED_BUILTIN, prendido);

  Serial.println(millis() / 1000);
}
```

Referencia: Arduino.cc
Siempre utilizar la documentación oficial.
<https://docs.arduino.cc/programming/>
<https://docs.arduino.cc/language-reference/>

## Operadores Lógicos

tabla de simbolos de operadores lógicos <https://panamahitek.com/wp-content/uploads/2014/02/compuertas-logicas.png>

Existen 3 operadores lógicos.

y/and o/or no/not

and &
or ||
not !

Cuando hay varias condiciones que se deben cumplir al mismo tiempo y no funciona si uno no se cumple, están bajo el operador lógico de ```and```.

Se simboliza como la cabecita del android dentro del mapa de flujo.

**tablita de ejemplo para entender el and
A B  Out
0 0  0
0 1  0
1 0  0
1 1  1**

Para or, si alguna de las condiciones se cumple, si funciona, ya que es uno o lo otro. Tambien va a funcionar si es que los dos se cumplen.

**tablita de ejemplo para entender el or

A B  Out
0 0  0
0 1  1
1 0  1
1 1  1

Not se utiliza para cambiar la lógica. Es una manera de hacer lo contrario. A veces va a haber que negar algunas condiciones. Not básicamente es una contradicción.

**tablita de ejemplo para entender el not

A  Out
0 1
1 0
**

## Investigar

Nand
Nor
Xor

Hay que evitar que se repita demasiado un codigo. Lo mejor es establecer que quiero que haga y cuantas veces quiero que lo haga.

```
//iterar

int veces = 100;

// se itera con “for”
// se pone entre parentesis 3 cosas:
// 1 partida
// 2 termino
// 3 actualizacion
// entre murcielagos lo que quiero iterar.
for (parto; termino; que hago cada paso)

// int se utiliza solo para iterar
for (int i = 0; i < veces; dia = dia + 1)
{
hazEsto();
}
```

La i se tiende a usar para iterar. La i parte siendo 0 desde el principio de los tiempos. Despues este i se borra.
i < veces significa que “si esto es verdad, entonces vuelvo a hacerlo”

Se puede utilizar la j para hacer otra iteración.

Serial.println() sirve para hacer enter.

**ejemplo iteradores mi primer for**

```
int numEstudiantes = 29;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  for (int i = 0; i < numEstudiantes; i++) {
    Serial.println(i);
  }

}

void loop() {
  // put your main code here, to run repeatedly:



}
```

**iteradores con if y !=**

```
int numEstudiantes = 29;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  for (int i = 0; i < numEstudiantes; i++) {
    Serial.print("estudiante:");
    Serial.print(" ");

   if (i < 10) {
    Serial.print(" ");
   }
    

    if (i != 13) {
    Serial.print(i);
    }

    Serial.print("\n");
    delay(500);
  }

}

void loop() {
  // put your main code here, to run repeatedly:



}

```

**test de division**

```
//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long segundos = millis() / 1000;

  int numero1 = 5;
  int numero2 = 2;
  int division;

  //YA QUE division ES UN int
  //ELIMINA TODO LO QUE ESTA DESPUES DE LA COMA
  division = numero1 / numero2;
  //EL RESULTADO VA A SER "2", NO "2.5"
  Serial.println(division);
}
```

El modulo (%) es SOLAMENTE para numeros enteros. No existe con numeros decimales.

```
//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;
int numero1 = 6;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long segundos = millis() / 1000;

  
  int numero2 = 3;
  int division;
  int resto;

  //YA QUE division ES UN int
  //ELIMINA (trunca) TODO LO QUE ESTA DESPUES DE LA COMA
  division = numero1 / numero2;
  resto = numero1 % numero2;
  //EL RESULTADO VA A SER "2", NO "2.5"
  Serial.print("la division vale ");
  Serial.print(division);
  Serial.print(" con un resto de ");
  Serial.println(resto);

  //voy a incrementar numero1 de 1 en 1
  numero1++;
  delay(500);
}

```

Restos

 7   /   2 = 3
-6
__
1

El 1 sería lo que sobra dentro de la division que le hicimos al 7.
El resultado que no es modulo es la division de enteros.

**detectar si un numero es par o impar con %**

```
//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;
int numero1 = 6;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long segundos = millis() / 1000;

  
  int numero2 = 2;
  int division;
  int resto;

  //YA QUE division ES UN int
  //ELIMINA (trunca) TODO LO QUE ESTA DESPUES DE LA COMA
  division = numero1 / numero2;
  resto = numero1 % numero2;
  //EL RESULTADO VA A SER "2", NO "2.5"
  Serial.print("numero1 es ");
  Serial.print(numero1);
  Serial.print(" y el modulo al dividir por 2 es ");
  Serial.println(resto);



  //voy a incrementar numero1 de 1 en 1
  numero1++;
  delay(500);
}
```

**hacer que el led interno se apague en los segundos pares y se prenda en los segundos impares**

```
//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;
int numero1 = 6;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long segundos = millis() / 1000;

  int numero2 = 2;
  int division;
  int resto;

  division = numero1 / numero2;
  resto = numero1 % numero2;
  //EL RESULTADO VA A SER "2", NO "2.5"
  Serial.print("numero1 es ");
  Serial.print(numero1);
  Serial.print(" y el modulo al dividir por 2 es ");
  Serial.println(resto);

  //voy a incrementar numero1 de 1 en 1
  numero1++;
  
  if (segundos%2 == 0){ //si es un segundo par
    estadoLed = false;
  } else {
    estadoLed = true; ////si es un segundo impar
  }

  digitalWrite(LED_BUILTIN,estadoLed);
}
```

Finalmente, este codigo no alcanzamos a terminarlo en clases y no funcionó con lo que teniamos. De todas maneras, es importante fallar y arreglar para poder aprender.

De martes a viernes: Repasar if, else, for, and, or, not
hacer cositas con esto
documentar proceso de investigacion dentro de la bitacora.
