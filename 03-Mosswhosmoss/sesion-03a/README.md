# sesion-03a

[juce](https://juce.com) IDE

## Contenidos
- Condicionales
- Iteradores
- Serial.read()
- Protoboard

[Ejemplo de condicionales](https://isitchristmas.com)

RTC = Real Time Clock

## Condicionales e iteradores

### Condicionales

Las condicionales son estructuras de control de flujo.

if = si esto ocurre, haz...

else = si no ocurrió lo otro, haz...

### variables

= asigna un valor a la variable

== verifica si dos valores son iguales entre sí

! lo opuesto a

#### Ejemplos:

```cpp
if(tengoSueño == true){
dormir();
}
else(){
seguirDespierto();
}
```
```cpp
if(edad >= 18 AND edad <= 80){
darPermisoDeConducir();
}
```
```cpp
if(!hayArana){
reaccionoTranquilo();
else{
chillar(volumen = infinito);
}
}
```
### Operador lógico
Combinan valores booleanos para producir un resultado también booleano.
- Y / AND = Mutuamente dependiente de sus elementos.
- O / OR = Independiente de sus elementos
- NO / NOT = Inversor de sus elementos

Tabla de verdad

AND

| A | B | OUT |
|----------|----------|----------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

OR

| A | B | OUT |
|----------|----------|----------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

NOT

| A | OUT |
|----------|----------|
| 1 | 0 |
| 0 | 1 |

### Iterar

Es el proceso de repetir un conjunto de instrucciones o pasos varias veces.
int i = variable de tipo int llamada "i".

for es para iterar.

Dentro del for entre paréntesis, se colocan 3 cosas:
1. partida
2. término
3. actualización

Entre murciélagos {} lo que quiero iterar.

```cpp
for(int i = 0; i < veces; i = i + 1)
{
hazEsto();
}
```

