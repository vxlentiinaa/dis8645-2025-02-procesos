# sesion-03a

## Condicionales

- If ( boolean condition) Then (consecuense) Else (alternative) End if
- // comentar
- =  asigna un valor a lo que está escrito a la izquierda
- ==condición
- ! lo contrario de algo
- \n enter linea espacio hacia abajo
- bool prender
- unsinged log
  
### EJEMPLO

```cpp
if(diciembre AND donFrancisco==true){
teleton();
{
else{
continuamosTransmisionesNormales ();
```

## Operadores lógicos

- compuerta and Y/and solo si ambas variantes se cumplen es si: &
- compuerta O/or si una variable se cumple la respuesta es si: ||
- compuerta no/not hace lo contrario de la otra variante ( inversor) : !

*invertigar nand, nor, xor.

- Iterar, repetir las cosas:
  
//se itera con for
// se pone entre paréntesis 3 cosas
//1 partida
//2 termino
//3 actulizacio
//y ente {} lo que quiero iterar

### ejemplo dias de semana

for(lunes;domingo; dia=dia+1)
{
hazEsto();
}

### ejemplo funcion

```cpp
for(int i =0;i<veces; 1=1+1)
{
hazEsto(); 
}
```

- ctrlT ordena los codigos es arduino
- resto=modulo, es solo para numeros enteros
- int se utiliza para declarar variables que almacenarán valores numéricos enteros. Por ejemplo, en C, C++ o Java, puedes declarar una variable int así: int edad = 30;

```cpp
int veces; 
for(parto;termino; que hago cada paso)
{
hazEsto(); 
```
Encargo 6,
"investigar nand, nor, xor y xnor"

- NAND (NOT AND)

Definición: Es la negación de la compuerta AND.

Operación: Solo es 0 si ambas entradas son 1; en todos los demás casos es 1.

Uso: Es llamada compuerta universal porque con NAND se pueden construir todas las demás compuertas lógicas.

- NOR (NOT OR)

Definición: Es la negación de la compuerta OR.

Operación: Solo es 1 si ambas entradas son 0.

Uso: También es una compuerta universal, al igual que NAND.

- XOR (Exclusive OR)

Definición: Da 1 solo si las entradas son diferentes.

Operación: 0 si las entradas son iguales, 1 si son distintas.

Uso: Se usa en sumadores binarios, criptografía, circuitos de comparación.

- XNOR (Exclusive NOR o equivalencia)

Definición: Es la negación de la XOR. Da 1 si las entradas son iguales.

Operación: 1 cuando A = B.

Uso: Comparadores lógicos, detectores de igualdad.

En resumen:
NAND / NOR = universales (pueden reemplazar todas las demás).

XOR / XNOR = comparan diferencias o igualdad.

<https://www.techtarget.com/whatis/definition/logic-gate-AND-OR-XOR-NOT-NAND-NOR-and-XNOR?>
