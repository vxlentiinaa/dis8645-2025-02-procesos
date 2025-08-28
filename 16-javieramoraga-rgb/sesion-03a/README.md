# sesion-03a ₊˚⊹ᰔ

## Conceptos básicos de programación  

### Condicionales 

Los condicionales permiten que un programa **tome decisiones** en función de ciertas condiciones (verdadero o falso).  

```cpp
If (Boolean condition) Then
  (consequence)
  Else
    (alternative)
  End if
Si (asistencia, condición) entonces
print ("pasaste")
En cualquier otro caso
print ("nope")
Ejemplo:
if (estaLloviendo == true) {
   hacerSopaipillas();
}
else {
  salirAAndarEnBici();
---------
}
if (ver == false) {  
   ponermeLentes();
if (suciedad == true){   //condición dentro de otra condición, se puede hacer.
   limpiarLentes();
}
}
else{
continuarConMiVida();
}
//equivale a ¿es ver falso?, si la respuesta es sí, ponerme lentes, si la respuesta es no, continuar con mi vida.
```

╰┈➤ También se pueden anidar condiciones dentro de otras:


> *📌 Traducción: “¿Es ver falso? → si sí, ponerme lentes. Si además están sucios, limpiarlos. Si no, seguir con la vida normal”.*

```cpp
!: bank, significa lo contrario a.
ejemplo:
//si no hay arana
//reacciono tranqui
if (!hayArana) {
   reaccionarTranqui();
}
else {
chillar(infinito);
}
```
```cpp

if (edad >= 18 AND edad <=80 ) {
  dartePermisoConducir();
}
else {
noPuedoNoMas();
}
```

### ⋆ Operadores lógicos 

+ Los operadores lógicos permiten formular preguntas de sí/no y combinar condiciones.
  
+ AND (&& / y) → Verdadero solo cuando ambas condiciones son verdaderas.
  
+ OR (|| / o) → Verdadero cuando al menos una condición es verdadera.
  
+ NOT (! / no) → Devuelve lo contrario a la condición.

```cpp

  OPERADORES LÓGICOS
o/ or    /    no/not       /   y/ and
La compuerta and solo es 1 cuando las dos variables estan en 1, en cualquier otro caso es 0 (&&)
La compuerta or, si alguna de las entradas es sí, la respuesta es sí, si ambas es no la respuesta es no (||)
La compuerta not, la respuesta a la entrada siempre va a ser contraria (!)
El orden de los operadores lógicos no cambia el resultado (son conmutativos)
```

> *📌 Propiedad: el orden de los operadores lógicos no afecta el resultado (son conmutativos).*

────୨ৎ────

##Compilado de compuertas lógicas ｡𖦹°‧

+ **NAND → Combinación de AND y NOT.**

→ Resultado = 1 en todos los casos, excepto cuando ambas entradas son 1 (resultado = 0).
- NOR → Combinación de OR y NOT.

→ Solo será 1 cuando todas las entradas sean 0.
- XOR (OR exclusiva)

→ Devuelve 1 únicamente cuando las entradas son diferentes.

→ Si ambas son iguales (0 + 0 o 1 + 1), devuelve 0.

  ────୨ৎ────

### Iteraciones (bucles) ⋆˙⟡

Las iteraciones permiten repetir un bloque de código varias veces. En Arduino, se usa el bucle for.

```cpp
for (inicio; condición de fin; actualización) {
    // acciones a repetir
}
```

Ejemplo:

```cpp
int veces = 10;

for (int i = 0; i < veces; i = i + 1) {
    hazEsto();
}
```

────୨ৎ────

### Funciones útiles ｡𖦹°‧

+ Serial.read() → Permite leer datos enviados al Arduino por el puerto serial.

+ millis() → Cuenta el tiempo en milisegundos desde que el Arduino fue encendido.

+ ⚠️ Si se usan variables con millis(), deben declararse como unsigned long para evitar errores por desbordamiento.
  
+ Protoboard → Herramienta de conexión rápida para circuitos sin necesidad de soldar.
