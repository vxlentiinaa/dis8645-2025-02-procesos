# sesion-03a

## Condicionales en Programación

El uso de `if` permite tomar decisiones en el código:  

- Si una condición se cumple → se ejecuta un bloque de instrucciones.  
- Si no se cumple → se ejecuta el bloque alternativo con `else`.  
- Además, se pueden anidar varias condiciones dentro de otras.  

---

## Sintaxis básica

```cpp
if (condicion) {
    // código a ejecutar si la condición es verdadera
}
else {
    // código a ejecutar si la condición es falsa
}
```

### Ejemplo con condición anidada

```cpp
if (ver == false) {
    ponermeLentes();
    
    if (suciedad == true) {
        limpiarLentes();
    }
}
else {
    continuarConMiVida();
}
```

## Operadores de comparación

| Operador | Significado       |
|----------|-------------------|
| `==`     | Igual             |
| `!=`     | Distinto          |
| `>`      | Mayor que         |
| `<`      | Menor que         |
| `>=`     | Mayor o igual que |
| `<=`     | Menor o igual que |

### Ejemplo

```cpp
if (edad >= 18 || tengoPituto) {
    dartePermisoConducir();
}
else {
    // no puedo
}
```

## Operadores lógicos

| Operador | Nombre | Significado |
|----------|--------|-------------|
| `&&`     | AND    | Verdadero **solo si todas** las condiciones son verdaderas |
| `\|\|`     | OR     | Verdadero si **al menos una** condición es verdadera |
| `!`      | NOT    | Invierte el valor lógico (`true → false`, `false → true`) |

### Ejemplo

```cpp
if (diciembre && donFrancisco == true && !godzilla && !elecciones) {
    teleton();
}
else {
    continuamosTransmisionesNormales();
}
```

## Ejemplo en Arduino

```cpp
bool prender = false; // si pongo true, el LED se prende

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, prender);
}
```

Con `millis()` se puede medir el tiempo desde que se encendió el Arduino.

```cpp
bool prendido = false;

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    if (millis() < 3000) {
        prendido = true;
    }
    else {
        prendido = false;
    }

    digitalWrite(LED_BUILTIN, prendido);
    Serial.println(millis() / 1000); // imprime segundos
}
```

## Bucles con `for`

Sirven para iterar (repetir acciones).

```cpp
int veces = 100;

for (int i = 0; i < veces; i = i + 1) {
    hazEsto();
}
```

| Expresión     | Significado                                   |
|---------------|-----------------------------------------------|
| `i`           | Índice que cuenta las repeticiones            |
| `i < veces`   | Condición de término del bucle                |
| `i = i + 1`   | Incrementa el valor del índice en cada vuelta |

## Extra

- Command + T → en algunos editores, ordena el código automáticamente.
- Módulo (%) → devuelve el resto de una división (solo funciona con enteros).
