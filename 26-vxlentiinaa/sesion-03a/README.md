# sesion-03a

19-08-2025

## Apuntes

Operadores lógicos

- AND: representado como &&. Devuelve un resultado verdadero solo si todas sus entradas son verdaderas; de lo contrario, devuelve falso.

- OR: representado como ||. Devuelve true (verdadero) si al menos uno de sus operandos es verdadero, y false (falso) en caso contrario. Es decir, la operación OR solo necesita una entrada verdadera para que el resultado sea verdadero.

- NOT: representado con !. Invierte el valor booleano, es decir, su función es negar una condición: si la expresión es verdadera, NOT la convierte en falsa; si es falsa, la convierte en verdadera.

> Plataforma juce = para hacer audios o mejorar los audios.
> RTC = real time clock

- ! bank: operador que significa lo contrario
  - ! variable
  - opuesto negativo

### Condicionales

- If: si pasa algo funciona, es como si tuviera más opciones.
- Se puede escribir una condición dentro de otra
- La condición debe ser compuesta (+ de una)
- condición binaria o bifurcación.

= asignar (x=1 ; x vale 1)

== condición, una pregunta, se compara (x==1 ; ¿vale 1?

- Not: Se usa para la ausencia de una variable
- For: Es la iteración. Se usa para ejecutar un bloque de código un número específico de veces

// se itera con for, se pone entre paréntesis 3 cosas

1. partida
2. término
3. actualización

y entre murciélagos {} lo que queremos iterar

Ejemplo de google

 ```cpp
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT); // Configura el pin del LED como salida
}

void loop() {
  for (int i = 0; i < 5; i++) { // El bucle se repite 5 veces (i va de 0 a 4)
    digitalWrite(ledPin, HIGH); // Enciende el LED
    delay(100);                 // Espera 100 milisegundos
    digitalWrite(ledPin, LOW);  // Apaga el LED
    delay(100);                 // Espera 100 milisegundos
  }
  // El código continúa aquí después de que el bucle for termina
}
```

Ejemplo en clases

```cpp
 //se itera con for
 //se pone entre parentesis 3 cosas:
 // 1 partida
 // 2 término
 // 3 actualización
 // y entre murcielagos { } lo que quiero iterar

 for (int i = 0; i<veces; i = i +1)
 {
 hazEsto();
 }
```

módulo --> solo para números enteros 
  > cuantas veces entra el número en ese.

Ejemplo: 3 en 6 = 2 | 3 en 3 = 1

### Apuntes extra

- los millis() cuenta el tiempo desde que se encendió el arduino, solo suben.
- Semiótica: el estudio de los signos.
- iterar: es hazlo, repetir
  - for: es la iteración

### Proyecto 01

Crear un código para arduino para que se logre ver en la pantalla, debe ser en base a un poema, también se puede "renderear" imagenes.

- código legible (con comentarios)
- tiene que tener un proceso (importante)

### Ejemplos en clase

```cpp
if(saldo>250){
 abrirTorniquete();
}else{
 Serial.println("SALDO INSUFICIENTE")
}
```

```cpp
//bool prender = false;
bool prender = true;

void setup() {
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, prender);
  delay(3000);
  prender = false;
  digitalWrite(LED_BUILTIN, prender);
}
```

```cpp
bool prendido = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Serial.println(millis() / 1000);
unsigned long segundos = millis() / 1000;

  // con este if, el led se prende durante 3 segundos y luego se apaga
  if (segundos < 3) {
    prendido = true;
  }/* else if (segundos > 10) {
    prendido = true;
  } */else {
    prendido = false;
  }

  digitalWrite(LED_BUILTIN, prendido);
}
```

### Encargo 04

- Investigar sobre NAND, NOR, XOR

- Repasar if, for, print, etc.

### NAND

Una puerta NAND produce una salida de 1 (verdadero) a menos que todas sus entradas sean 1. En ese caso específico (todas las entradas en 1), la salida es 0 (falso). 
Se refiere tanto al operador lógico en el código de programación, que invierte el resultado de una operación AND, como a las puertas lógicas NAND que se usan en la construcción de circuitos digitales. La puerta NAND es una puerta lógica universal que, junto con las puertas NOR, permite construir cualquier otro circuito lógico digital.

### NOR

Es una combinación de las compuertas OR y NOT, es la versión inversa de la compuerta OR. Al tener sus entradas en estado inactivo “0” su salida estará en un estado activo “1”, pero si alguna de las entradas pasa a un estado binario “1” su salida tendrá un estado inactivo “0”.

### XOR

Es un operador bit a bit representado por el símbolo "^", que compara los bits de dos números

El operador XOR compara los bits de dos números de forma individual.

Si un bit es 1 y el otro es 0, el resultado es 1.

Si ambos bits son iguales (ambos 1 o ambos 0), el resultado es 0.

Ejemplo de google

Imagina que quieres intercambiar los valores de dos variables, a y b, sin usar una tercera variable.

```cpp
int a = 5;  // Binario: 0101
int b = 10; // Binario: 1010

a = a ^ b; // a ahora vale (0101 ^ 1010) = 1111 (15)
b = a ^ b; // b ahora vale (1111 ^ 1010) = 0101 (5, el valor original de a)
a = a ^ b; // a ahora vale (1111 ^ 0101) = 1010 (10, el valor original de b)
```

### XNOR

Es un componente lógico digital que es una puerta XOR pero con la lógica invertida, produce una salida alta (1 lógico) solo cuando ambas entradas son iguales (ambas altas o ambas bajas). Por lo tanto, si las entradas son diferentes (una alta y otra baja), la salida de la puerta XNOR será baja (0 lógico).
