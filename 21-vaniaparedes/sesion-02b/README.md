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

>https://docs.arduino.cc/language-reference/<

#### Examples:
if (itIsRaining == true) {
makeSopaipillas();
}
_______________________________
*Se puede escribir una condición dentro de otra.
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
_____
if (edad >= 18 AND !(edad == 81) {
permisoConducir();
}
_______________________________
#### !
id (december AND donFrancisco == true AND !godZilla AND !elecciones) {
teleton();
}
else {
normalTransmision();
}
________________________________
digitalWrite(#LED_BUILTON#, #prender#);
Mayuscula = variable
Minuscula = constante

#### millis() (positivos (+0))
unsigned long
_________________________________
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

  ### NOT !
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
 
 for (int i = 0; i<veces; i = i + 1)

 {
 hazEsto();
 }

 Example:
 for (int j = 0; j<alto; j = j +1)
 dibujarPixel(i,j);
 }
