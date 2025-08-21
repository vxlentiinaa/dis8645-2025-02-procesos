# sesion-02b // Clase 04 // 19.08.2025

## Condicionales

```cpp
if (Boolean condition) Then
    (consequent)

else {
   (alternative)
}
```

![diagrama](./imagenes/diagrama.png)

### ejemplo

```cpp
if(Cola-cola == False){
 ComproJugoNaranja();
```

### ELSE llega cuyando la condicion fue mentira

### ! bang (negación u opuesto)

```cpp
if(diciembre AND donFrancisco == true

AND !godZilla AND !elecciones){

teleton();

}

else{

continuamosTransmicionesNormales
```

### ejemplo Aaron

```cpp
// variable booleana
// la inicializamos falsa
bool prender = false;

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

}
```

### operadores lógicos

operacion que solo aparecen cuando quiero combinar es su estado logico

### Iterar

```cpp
hazEsto();

int veces;

for(parto,termino; que hago cada paso)
```
