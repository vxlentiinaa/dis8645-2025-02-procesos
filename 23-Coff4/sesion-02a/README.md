# sesion-02a

## El primer paso de alguien que no sabe nada de programacion o Arduino ( `ε´ )
---
Al no conocer ni ser una apasionada, se me ha dificultado saber por dónde empezar. No podría crear códigos sin saber lo fundamental.
Por lo tanto aqui plasmare los conocimientos mas basicos para tener una mejor base

## Intro ★
### Variables y comandos

«void setup()» : Primera funcion que se coloca para arrancar el programa. dentro de los parentesis varian las instrucciones

«void loop()» : Dentro de esta funcion (y en orden) se repetira en bucle/loop las instrucciones dadas

int : int dentro de la declaracion indica que tipo de dato es (en ese caso numeros enteros) hay diferentes variables para indicar otras cosas

***Para acordarme: Siempre de los siempres se debe declarar, o Arduino nunca sabra nada (`ー´)***

1. float: numeros decimales
2. char: un caracter ` a ` //no mas y no menos
3. String: frases "Chocolate" //de las pocas variables que comienzan con mayuscula
4. const: se le da un valor fijo y constante (que nunca cambia)
5. boolean: contiene 2 valores (truth or false)

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
