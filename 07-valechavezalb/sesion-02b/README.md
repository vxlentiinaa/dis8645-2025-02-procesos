#### Martes 19 de Agosto de 2025

# Clase 4

## Proyecto N°1

- usar potenciómetro para controlar pantalla.
- navegadores de poemas. (INGENIO).
- entrega a fines de agosto.
- grupos de 3 a 4 personas.
- proceso obligatorio.

## CONDICIONALES E ITERADORES

- condición booleana.
- para que una condición pase debe tener un **if**
- condición **binaria** o **bifurcación**.
- todo lo que se condensa en {} es *sí* o *no*.

### TABLA DE VERDAD

hay dos variables y un resultado,

- cuando las dos son verdad, son verdad.
- cuando hay una verdadera y la otra falsa, es falso.

**DOCUMENTACIÓN DE ARDUINO**
[https://docs.arduino.cc/language-reference]

### **operadores lógicos**

 Se usan para combinar o modificar condiciones, dando como resultado *true* or *false*

 **AND (&&)**
 Se deben cumplir todas las condiciones para que ocurra algo.

 **OR (||)**
 Al menos una condición debe cumplirse para que ocurra algo.

- si alguna de las entradas es sí, es verdadero.

 **NOT (!)**
 Invierte el resultado lógico.

- Lo que sea que se haga, se hace lo contrario.
- queremos detectar la ausencia de esa variable.

```cpp
  **If** (boolean condition) **Then**
  (consequent)

  **Else** (en cualquier otro caso).
  **End if**
```

```cpp
if (condición) {
    // Acción cuando es verdadero
} else {
    // Acción cuando es falso
}
```

- si esto es verdad, esto pasa. Y si es falso, esto pasa.
- Una cosa es la condición (va entre paréntesis) y se cumplirán ciertas condiciones para que pase algo.

### Ejemplos... (para cualquier lenguaje de programción)

```cpp
if (ver == false) {
ponermeLentes();
if (suciedad == true) {
limpiarLentes(); // esto para hacer una anidación, una condicion dentro de otra
}else{
continuarConMiVida();
//este resultado es verdadero cuando ocurra lo contrario
```

```cpp
if (!hayArana == false) { // ! significa bank y 
reaccionarTranqui();
}
else{
gritar(infinito);
}
```

```cpp
if(edad>=18){
dartePermisoConducir();
}
else{
}
```

### EJEMPLOS CLASE CON ARDUINO Y CONDICIONALES

```cpp
//variable booleana
// la inicializamos falsa

bool prendido = false; // si es true se va a prender

// despues de 3 segundos
// el led se apague

void setup() {
  // abrir puesrto serial
  Serial.begin(9600);
  // hacer que una patita sea output, salida
  // usamos la variable incluida
  // LED_BUILTIN, OUTPUT, porque sabe donde esta el led interno.

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  
  // que solamente este prendido en los primeros 3 segundos

  if (millis() < 3000) {
    prendido = true;
  }
  else {
    prendido = false;
  }
  digitalWrite (LED_BUILTIN, prendido);

  Serial.println(millis() / 1000);
  }
```

### **ITERACIONES**

Es cuantas veces se repite algo pero no en un loop, ejemplo, todos los días son iguales, pero dentro del día cambian las cosas que voy haciendo.

```cpp
// cuantas veces itero
// se itera con for
// se pone en parentesis 3 cosas
// 1 empiezo
// 2 termino
// 3 actualizacion
// y entre murcielagos {} lo que quiero iterar.

for (int i = 0; i < veces; i = i + 1); // se va sumando todo en un loop, cambiano el valor del resultado de i + 1, que seria el incremento.
{
hazEsto();
}
```

### **EJEMPLOS ARDUINO CON ITERACIONES**

```cpp
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

### SEGUNDO EJEMPLO | iteradores con con if y !=

```cpp
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

#### PRENDER Y APAGAR EL LED

```cpp
// quiero poder decirle a arduino
// en el monitor serial
// cada cuanto tiempo parpadee el led

bool estadoLed = 0;

void setup() {
pinMode (LED_BUILTIN, OUTPUT);
Serial.begin (9600);
}

void loop() {
unsigned long segundos = millis() / 1000;

int numero1 = 5;
int numero2 = 2;
int division;

// ya que division es un int (entero)
// elimina todo lo que esta depsues de la coma

division = numero1 / numero 2; // el resultado va a ser 2 y no 2.5
Serial.println(division);

Serial.println (segundos);
}

```

### TEST DE DIVION CON ARDUINO

```cpp
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

### MÓDULO CON ARDUINO

%: devuelve el resto de la división cuando se dividen numero enteros.

```cpp
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

### DETECTAR SI UN NUMERO ES PAR O IMPAR CON %

```cpp
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

### HACER QUE EL LED INTERNO DEL ARDUINO SE APAGUE EN LOS SEGUNDOS PARES Y SE PRENDA EN LOS SEGUNDOS IMPARES

```cpp
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

### EJEMPLO QUE NO FUNCIONÓ

```cpp
//QUIERO PODER DECIRLE A ARDUINO
//EN EL MONITOR SERIAL
//CADA CUANTO TIEMPO PARPADEE EL LED
bool estadoLed = 0;
int cadaCuanto = 2;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long segundos = millis() / 1000;

  Serial.print("vamos en el segundo ");
  Serial.print(segundos);
  Serial.print(" y parpadeamos cada ");
  Serial.print(cadaCuanto);
  Serial.println(" segundos");

  if (segundos%cadaCuanto == 0){
    estadoLed = !estadoLed;
  }

  digitalWrite(LED_BUILTIN, estadoLed);
}
```

# Apuntes extra

- millis() cuenta el tiempo desde que se encendió el arduino.
- lo primero que hay que hacer es un *Pseudocódigo*, es decir, qué es lo que va a pasar paso a paso, explicando cada variable, que pasa si esto pasa? y si esto no pasa? **CLARIDAD SIEMPRE**
- Semiótica: el estudio de los signos.
- aprender a investigar...
- comando + t para ordenar el texto del arduino.
- cuando dividimos numeros enteros, se usa el termino truncar, esto quiere decir que el resto de la división no se molesta em escrbirla.
- %: significa, réstalo pero no me des el resultado con el resto.
- usar codigos ya hechos para complementar y llegar a mejores resultados.
  