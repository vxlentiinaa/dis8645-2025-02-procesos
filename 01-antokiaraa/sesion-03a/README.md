# sesion-03a
## anotaciones: condicionales, iteradores, Serial.read(), protoboard
```ccp
If (Boolean condition) Then
   (consequent)
Else
   (alternative)
End If
```
// diagramas de flujo 
```cpp
If (estaLloviendo == true) {
  hacer sopaipillas();
  }
else {
 salirAandarenbici();
}
If (tengoPlata == false) { //si no tengo plata
   noComproNa();           //no compro nada
}
If (tengoPlata == true) {  //si temgo plata
   siCompro();             //me compro algo
}
If (edad >=18) {
   dartePermisoConducir();
}
else {
noPuedoNoMas();
}
```
## OPERADORES LÓGICOS
```ccp
y / and  -  o / or  -  no / not
la compuerta "and" solo es 1 si ambas variables son 1, en cualquier otro caso es 0 (&&)
la compuerta "or" si alguna de las entradas es si; la respuesta es si. si ambas es no, la respuesta es no (independiente) (||)
la compuerta "not" lo que sea que haga la entrada, la salida hace lo contrario
```
#### INVESTIGAR "NAND" "NOR" "XOR"
```ccp
iterar
int veces;
for(parto; termino; que hago cada paso)
{
hazEsto();
}
// se itera con for
// se pone entre parentesis 3 cosas:
//1 partida
//2 termino
//3 actualizacion
// y entre murciélagos {} lo que quiero iterar
for (lunes; domingo; dia = dia +1)
for (int i = 0; i < veces; i = i + 1)
```
## prueba ejemplo en arduino
```ccp
int numEstudiantes = 29;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  for (int i = 0; i < numEstudiantes; i++) {
    Serial.println(i);
  }

}

void loop() {
  // put your main code here, to run repeatedly:



}

