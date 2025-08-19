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

 ##### **operadores lógicos** 
 Se usan para combinar o modificar condiciones, dando como resultado *true* or *false*

 **AND (&&)**
 Se deben cumplir todas las condiciones para que ocurra algo.
 
 **OR (||)**
 Al menos una condición debe cumplirse para que ocurra algo.

 **NOT (!)**
 Invierte el resultado lógico.
 

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



#### Apuntes extra 
- millis() cuenta el tiempo desde que se encendió el arduino.
- lo primero que hay que hacer es un *Pseudocódigo*, es decir, qué es lo que va a pasar paso a paso, explicando cada variable, que pasa si esto pasa? y si esto no pasa? **CLARIDAD SIEMPRE**
  



 
