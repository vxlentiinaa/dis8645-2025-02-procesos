# sesion-02b

## Condicionales

If (boolean condicion)
(consequent)
Else (alternative)
End if

"=" se usa para asignar un valor
"==" comparar (¿Son lo mismo?)
"!" lo contrario
"++" = que decir x = x+x
print(ln) = imprime y enter para la proxima vez que imprima
"%" Módulo, para saber el resto (7%2=1)

><https://docs.arduino.cc/language-reference/><

## Examples
```cpp
if (itIsRaining == true) {
makeSopaipillas();
}
_______________________________
//Se puede escribir una condición dentro de otra.
if (see == false) {
useGlasses();
}
if (dirty == true) {
cleanGlasses();
}
else{
continuarConMiVida();
}
_______________________________
*Más de una pregunta*
if (edad >= 18 AND edad <= 80) {
permisoConducir();
}

if (edad >= 18 AND !(edad == 81) {
permisoConducir();
}

id (december AND donFrancisco == true AND !godZilla AND !elecciones) {
teleton();
}
else {
normalTransmision();
}
```
digitalWrite(#LED_BUILTON#, #prender#);
Mayuscula = variable
Minuscula = constante

millis() (positivos (+0))

unsigned long

## Operadores logicos

Computativas, el orden no cambia el resultado

* Compuertas

  ### AND &

  mutuamente dependiente
  A B | out
  0 0 | 0
  0 1 | 0
  1 0 | 0
  1 1 | *1*

  ### OR ||

Si alguna de las entradas es si, la respuesta es si
Independiente
  A B | out  
  0 0 | 0
  0 1 | 1
  1 0 | 1
  1 1 | 1

### NOT

  Tenemos una variable y queremos detectar la ausencia de esta
  A | out  
  0 | 1
  1 | 0
  _______________________________
 *Investigar*
  NAND
  NOR
  XOR
  _______________________________

### Iterar

 // cuantas veces itero (variable i)
 int veces;

 // se itera con for
 // se pone entre p() 3 cosas
 // 1 partida
 // 2 termino
 // 3 actualización
 // y entre {} lo que quiero iterar
 // for (parto; termino; que hago cada paso)

```cpp
 for (int i = 0; i<veces; i = i + 1)

 {
 hazEsto();
 }

 Example:
 for (int j = 0; j<alto; j = j +1)
 dibujarPixel(i,j);
 }
```
# Encargo
####  NAND, NOR y XOR

Una compuerta lógica es un dispositivo digital que realiza operaciones binarias con uno o dos estados lógicos (0,1) en la entrada y obteniendo resultados booleanos (0,1) en la salida del sistema. Se pueden combinar entre si para obtener nuevas funciones.

Las compuertas básicas son tres AND, OR y NOT, y sus compuertas complementarias son NAND, NOR. También existe una compuerta suplementaria XOR y su compuerta complementaria XNOR.
Cada compuerta está asociada a un símbolo, una tabla de verdad y una operación booleana; que expresa el estado de su salida para cada combinación posible de las entradas.

<img width="600" height="1024" alt="image" src="https://github.com/user-attachments/assets/c62ae479-6a78-49a1-8d8e-0d216af61bb2" />

Dependiendo los resultados que la operación nos arroje se pueden clasificar los resultados en:

Producto de Sumas (maxitérminos): Expresión booleana que reúne las variables de entrada que a su salida tengan un cero lógico.
Suma de Productos (minitérminos): Expresión booleana que reúne las variables de entrada que a su salida tengan un uno lógico.
<img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/5cfd3a4b-3ec7-4bb2-a427-cafbb40ca84f" />

