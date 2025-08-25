# sesion-02a

## El primer paso de alguien que no sabe nada de programacion o Arduino ( `ε´ )

---
Al no conocer, ni ser una apasionada, se me ha dificultado saber por dónde empezar. No podría crear códigos sin saber lo fundamental.
Por lo tanto aqui plasmare los conocimientos mas basicos para tener una mejor base

## Intro ★

### Variables y comandos

«void setup()» : Primera funcion que se coloca para arrancar el programa. dentro de los parentesis varian las instrucciones

«void loop()» : Dentro de esta funcion (y en orden) se repetira en bucle/loop las instrucciones dadas

int : int dentro de la declaracion indica que tipo de dato es (en ese caso numeros enteros) hay diferentes variables para indicar otras cosas

long : similar a int, pero este almacena datos mas grandes y largos

***Para acordarme: Siempre de los siempres se debe declarar, o Arduino nunca sabra nada (`ー´)***

1. float: numeros decimales
2. char: un caracter ` a ` //no mas y no menos
3. String: frases "Chocolate" //de las pocas variables que comienzan con mayuscula
4. const: se le da un valor fijo y constante (que nunca cambia)
5. boolean: contiene 2 valores (truth or false)
6. main: punto de inicio

---

## Instrucciones basicas  ★

### Pines

- pinMode(pin, mode); : se configura uno de los pines para ser la entrada o salida (INPUT, OUTPUT, or INPUT_PULLUP)
Input para que el pin reciba la señal. Output para que el mande la señal e Input Pull up //... pendiente

- digitalWrite(LED,HIGH/LOW); : se usa para hacer que un pin este HIGH or LOW (prendido o apagado)

### Tiempo

- delay(ms); : se pausa el tiempo asignado dentro de los parentesis en milisegundos //como un delay, bastante auto explicativo

- millis(); : supuestamente "devuelve" el tiempo desde que se inicio el programa //no pude comprender a que se refiere, debo investigarlo más.

- delayMicroseconds(); pausa pero en microsegundos

### Comunicación

- Serial.begin(9600); : se inicia la comunicacion entre el arduino y el pc

- Serial.print(); : envia una linea de numeros o letras al pc

- Serial.println(dato); : lo mismo que con print pero con saltos de linea incluido

- Serial.read(); con esto se leen los datos en el pc

### Logica y condiciones

- if(condición) {...} else {...} : toma de decisiones. si la afirmacion es verdadera se tomara el primero camino. si la afirmacion es mentira se tomara "else"

- while(condición) : mientras se mantenga la afirmacion verdadera, se repetira indefinidamente

---
***con esta primera aproximacion comparto un codigo que realice sin tener estos conocimientos***

```cpp
//Con esto inicio el programa
int main() {
// queria dar una variante de un numero x
int x;
//lo primero que se mostraria 
Serial.printIn("introduce tu numero")
//y aqui estan los problemas, mezcle lenguaje C++ o C y Arduino. algo que no es compatible 
cin >> x;
//al escribirse el numero, se mostraria una segunda linea de texto donde se veria ese numero
Serial.printIn("resultado); << x;
return 0; 
}
```

## Errores del ejercicio 1

Mi primer ejercicio fue buscar parte de un codigo simple, pero aparentemente mezcle el lenguaje c++ y por ello no arrancaba el programa, con sinceridad apenas si entendia el codigo cuando lo vi. no se como se me ocurrio la idea de estudiar algo que no captaba.

---

```cpp
//esto de arriba ya venia con el ejercicio base de arduino
void setup() {
pinMode(LED_BUILTIN, OUPUT);
}
//con esto se comienza
int main(); {
//aqui conoci la instruccion random() en el parentesis se coloca el numero limite
String numero = random(1000)
//con ello se manda la señal al pc
Serial.print(numero);
//y lo hace en estos tantos milisegundos
Serial.begin(9600);
}
```

## Errores

Por loco que suene no se que esta mal. el programa advierte sobre esto. Voy a ver como subir una imagen

![imagen del error](./imagenes/error%201.png)

 //demonios lo logre despues de 10 minutos

 ---

### Último ejercicio

 ```cpp
void setup() {
pinMode(LED_BUILTIN, OUPUT);
}

//este es otro intento de generar numeros randoms, donde declaro que existe el numero aleatorio
long numeroaleatorio() {
//este numero es igual a random en un rango de 900
numeroaleatorio();=random(900);
//despues mando esto para que se vea en el computador
SerialprintIl (numeroaleatorio);
//para decir que el numero aleatorio es random en un rango de 0 a 900
numeroaleatorio = random(0,900);
delay(500)
}
```

## Errores del último ejercicio

Posiblemente puse las cosas en desorden, como recien declarar a final que random puede ir de 0 a 900.
aunque el programa lanzo incluso mas cosas que ya no llegue a comprender

![imagen del error](./imagenes/error%202.png)

---

Y termine. tal vez parezca que es poco pero aprender a programar de 0 y ser lanzada a investigar me ha hecho ver la gran cuesta del aprendizaje

Estuve motivada al hacer estos ejercicios aunque no funcionaran (solo lo hizo uno)

![imagen del error](./imagenes/casi%20error.png)

Lo se. dice que hay error, pero sacando aquel experimento de la letra, funciona perfectamente (pero parece que no le saque captura al intento bueno)

La cosa es que el arduino repetidamente da en codigo morse la letra C (al ser la inicial de mi nombre)

Queria hacer mas pero no sabia cuanto almacenamiento ocuparia y no me atrevi

## Pero ese es mi recorrido, un poco torpe siendo honesta pero de a poco ire aprendiendo

✺◟( • ω • )◞✺

## Créditos ★

1. (<https://www.tutorialspoint.com/arduino/arduino_loops.htm>)
2. (<https://arduino.cl/programa-arduino/>)
3. (<https://www.instructables.com/Arduino-101-Fundamentals/>)
4. (<https://learn.robolink.com/lesson/rokit-counters/>)
