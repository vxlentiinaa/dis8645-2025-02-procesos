# sesion-03a
19/08/25
## primera nota 
trabajo grupal, la nota será una parte individual y otra grupal

IMPORTANTE:

- documentar que hizo cada persona
- justificar cada comentario del código
- tener proceso, documentación y justificación
- originalidad con el ponteciometro para controlar la pantalla

## condicionales 
![condicionales](sesion-03a/imagenes/condicionales-if.svg)

if --> es una condicion y tendrá una consecuente, sirve para hacer o no un codigo y se puede expandir con nomenclatura 

```cpp
If (Boolean condition) Then
    (consequent)
Else
    (alternative)
End If

ejemplos:

se puede poner una condicion dentro de otra.

```cpp
if (ver == false){
 ponerme lentes();

is(suciedad == true){
 limpiarLentes()
}

)else{
 continuarConMiVida();
}
```
## Otros operadores de comparación/desigualdad


Además de "==", existen otros operadores de comparación como "!=" (desigualdad), ">" (mayor que), "<" (menor que), ">=" (mayor o igual que), y "<=" (menor o igual que). 

```cpp
// si no hay arana
// reacciono tranqui
if (hayArana == false){
  reaccionarTranquilo();
}
else {
 chillar(volumen == infinito);
}
```

```cpp
if (edad >= 18 OR tengoPituto){
 dartePermisoConducir();
}
else{
 // no puedo
}
```

 ! --> lo contrario
 AND --> devuelve verdadero (o true) solo si ambos operandos o condiciones son verdaderos. Si al menos uno de los operandos es falso, el resultado de la operación AND será falso.
 
 ```cpp
if(diciembre AND donFrancisco == true AND !godzilla AND !elecciones){
 teleton();
}
else{
continuamosTransmisionesNormales();
}
```

ejemplo en arduino:

 ```cpp
// variable booleana
// la inicializamos falsa
bool prender = false; --> si pongo true;--> se prende el led 

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
millis() cuenta el tiempo desde que se prendió el arduino

### codigo que usamos con if

```cpp
// variable booleana
// la inicializamos falsa
bool prendido = false;

// despues de 3 segundos
// el led se apague

void setup() {
  // put your setup code here, to run once:

  // abrir puerto serial
  Serial.begin(9600);


  // hacer que una patita sea output, salida
  // usamos la constante incluida en Arduino
  // LED_BUILTIN, porque sabe donde esta el LED interno
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  // que solamente este prendido
  // en los primeros 3 segundos
  if (millis() < 3000) {
    prendido = true;
  }
  else {
   prendido = false;
  }

  digitalWrite(LED_BUILTIN, prendido);

  Serial.println(millis() / 1000 );

}
```
poner comentarios poner comentarios poner comentarios poner comentarios poner comentarios poner comentarios

## operadores logicos 
AND --> y , se deben cumplir todas las condiciones para que sea true 

si + si == si 

OR --> o , si alguna de las entradas es si, la respuesta es si/ true

NOT --> no , es lo contrario, o un inversor, si esta en 1 == 0, si esta en 0 == 1, es indepentiende y le sirve cualquier variable 

el orden de los operadores logicos no cambia el resultado

investigar:

- NAND --> produce un resultado falso solo si ambas entradas son verdaderas.
- NOR --> su salida es 1 solo cuando todas sus entradas son 0.
- XOR --> salida verdadera (1) solo cuando una y solo una de sus entradas es verdadera. 

para iterar ocupamos: i

```cpp
// cuantas veces itero
int veces = 100;
//int = existe un nuemro entero que es i --> es una variacion
// se itera con for
// se pone entre parentesis 3 cosas;
// 1
// 2
// 3
// y entre murcielagos {} lo que quiero iterar
// for (parto: termino; que hago cada paso)
for (int i = 0;i < veces; i = i +1)
// indice/ index
// i < veces condicion de termino 
// la tercera condicion me dice que hacer despues de llegar al final, es decir no es loop
{
hazEsto();

}
```
command + t --> para ordenar el codigo

modulo es solo para numeros enteros, me da directamente el resto

repasar y experimentar if, else , for, not 
