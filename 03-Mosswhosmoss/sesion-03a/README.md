# sesion-03a
[juce](https://juce.com) IDE 

## **Contenidos**
- condicionales 
- iteradores
- Serial.read()
- protoboard

[ejemplo condicionales](https://isitchristmas.com)
RTC = Real Time Clock 

## Condicionales e iteradores 
### Condicionales
Las condicionales son estructuras de control de flujo 

if = si esto ocurre haz...

else = si no ocurrio lo otro haz...

**variables**
= asigna un valor a la variable
== verifica si dos valores son iguales entre si
! lo opuesto a

Ejemplos:
```
if(tengoSueño == true){
 dormir();
}
else(){
 seguirDespierto();
}
```
```
if(edad >= 18 AND edad <= 80){
darPermisoDeConducir();
}
```
```
if(!hayArana){
 reaccionoTranquilo();
else{
chillar(volumen = infinito);
}
}
```
### Operador Lógico 
Combinan valores booleanos para producir un resultado tambien booleano 
- Y / AND = Mutuamente dependiente de sus elementos
- O / OR =  Independiente de sus elementos
- NO / NOT = Inversor de sus elementos 
  
Tabla de verdad

**AND**
| A | B | OUT |
|----------|----------|----------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

**OR**
| A | B | OUT |
|----------|----------|----------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

**NOT**
| A | OUT |
|----------|----------|
| 1 | 0 |
| 0 | 1 | 

### Iterar
Es el proceso de repetir un conjunto de instrucciones o pasos varias veces.

int i = variable tipo int llamada "i".

for es para iterar

Dentro del for entre parentesis, se colocan 3 cosas:
1. partida
2. termino
3. actualizacion
Entre murcielagos {} lo que quiero iterar
```
for(int i = 0; i < veces; i = i + 1)
{
hazEsto();
}
```
