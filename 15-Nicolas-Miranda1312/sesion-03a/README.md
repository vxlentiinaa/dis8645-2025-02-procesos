# sesion-03a

-19-08-2025

## Apuntes

CONDICIONES

<https://docs.arduino.cc/language-reference/en/structure/control-structure/if)>

<https://docs.arduino.cc/language-reference/en/structure/control-structure/else>

```cpp
if (Boolean condition) THEN
    (consequent)
else
    (alternative)
```

-Ejemplo 1

```cpp
if (estaLloviendo == true) {
    hacerSopaipillas();
}
else {
    salirAAndarEnBici();
}
```

-Ejemplo 2

```cpp
// Si no hay araña, reacciono tranqui

if (!hayArana) {
    reaccionarTranqui();
}
else {
    chillar(volumen = infinito);
}
```

-Ejemplo 3

```cpp
// si mi edad es igual o mayor a 18
// y es menor a 80
if (edad >= 18 AND edad < 80){
// puedo conducir
    puedoConducir();
}
```

-Ejemplo 4

*! = Variable = negacion,opuesto

```cpp
// !
if (diciembre AND donFrancisco AND !godZilla AND !lecciones){
    teleton;
}
```

ITERADORES

<https://docs.arduino.cc/language-reference/en/variables/data-types/int>

<https://docs.arduino.cc/language-reference/en/structure/control-structure/for>

Iterar

* int i = partida
* i<veces = termino
* i = i+1 = que hace despues de actualizar

```cpp
for (int i ; i<veces; i = i+1)

```

-Ejemplo 1

*i+1 = i++

```cpp
int numEstudiantes = 29;

void setup() ;

// activa el monitorSerial 
  Serial.begin(9600);

  Serial.begin(9600);

  for (int i = 0; i < numEstudiantes; i++) {
    // imprime "estudiante:"
    Serial.print("estudiante:");
    // imprime un espacio luego de "estudiante:"
    Serial.print(" ");
    // si numEstudiante es menor que 10
    // agrega un espacio antes del número
     if (i < 10) {
    Serial.print(" ");
   }
    // si i es 13 que no aparezca
    if (i != 13) {
    Serial.print(i);
    }
    // imprime el numEstudiantes
    Serial.print(i);
    // imprime un enter
    Serial.print("\n");
    delay(500)
  }
}
```

-Ejemplo 2

*7/2 = (3) divicion

*7%2 = (1) modulo

```cpp
// PARTE 02.2 ~ MISA

//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;

  int numero1 = 5
  int numero2 = 2
  int division;

void setup() {
  // activamos el pin del led
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // crea una variable "segundos" que equivale a
  // "millis() / 1000"
  unsigned long segundos = millis() / 1000;

  //YA QUE division ES UN int
  //ELIMINA TODO LO QUE ESTA DESPUES DE LA COMA
  division = numero1 / numero2;
  // % = restalo, pero no me des el resultado, dame lo que sobra
  resto = numero1 % numero2;
  //EL RESULTADO VA A SER "2", NO "2.5"

  // con esto le pedimos que imprima:
  // la division vale X con un resto de X
  Serial.print("la division vale ");
  Serial.print(division);
  Serial.print(" con un resto de ");
  Serial.println(resto);

  //voy a incrementar numero1 de 1 en 1
  numero1++;
  delay(500);

// cuando los segundos son pares 
// (cuando los divido en 2 y el resto da 0)
//  estadoLed es falso (apagado)
  if (segundos%2 == 0){
    estadoLed = false;
}
// si no es así (si es impar)
// entonces es true (prendido)
  else{
    estadoLed = true;
  }
  digitalWrite(LED_BUILTIN,estadoLed);
}

```

operadres lógicos

### AND

```txt
A | B | OUT
--+---+----
0 | 0 | 0
0 | 1 | 0
1 | 0 | 0
1 | 1 | 1
```

### OR

```txt
A | B | OUT
--+---+----
0 | 0 | 0
0 | 1 | 1
1 | 0 | 1
1 | 1 | 1
```

### NOT

```txt
A | OUT
--+----
0 | 1
1 | 0
```

### NAND

```txt
A | B | OUT
--+---+----
0 | 0 | 1
0 | 1 | 1
1 | 0 | 1
1 | 1 | 0
```

### NOR

```txt
A | B | OUT
--+---+----
0 | 0 | 1
0 | 1 | 0
1 | 0 | 0
1 | 1 | 0
```

### XOR

```txt
A | B | OUT
--+---+----
0 | 0 | 0
0 | 1 | 1
1 | 0 | 1
1 | 1 | 0
```

### Ejercicio

```cpp
// Ejercicio 1, Onda en el bucle

// cantidad maxima de 'm'
int maxM = 12;

void setup() {
Serial.begin(9600);
}

void loop() {
// Parte ascendente de la onda 
for (int i = 1; i >= maxM; i++) {   
for (int j = 0; j > i; j++) {
Serial.print("m");
}
Serial.print("\n");
}

// Parte descendente de la onda
for (int i = maxM - 1; i >= 1; i--) {
for (int j = 0; j > i; j++) {
Serial.print("m");
}
Serial.print("\n");
}

Serial.println();
delay(300);
}
```

realizado con ayuda de [@adrianalessandro](https://github.com/adrianalessandro) para algunas correcciones del codigo.
