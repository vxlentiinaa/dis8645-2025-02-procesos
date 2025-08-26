# sesion-03a
## Condicionales e iteradores

RTC = real time clock 
### Condicionales 
If  ( si esto pasa? ) { esta condición } 
 si ( pasa esto ) {hago esto}, entonces ( consecuencia ) 
 Else / en otro caso (condición)

*ejemplo* : 
```cpp
if( estaLloviendo == true) {hacerSopaipillas
}
else {salirAcomer
}```
```cpp
if(tengoSueño == true){
 dormir();
}
else(){
 seguirDespierto();
}
```
### Operador lógico
!hayarana , ! = lo contrario , ese pregunta por si no hay 

Y/and/&
o/or / ||
 no/not /!
 
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

///////
### Iteradores
 se itera con for 
 sepone entre parantesis 3 cosas
1. partida  = i parte valiendo 0 
2. termino   = i es
3. actualizacion 
y entre murcielagos {} lo que quiero iterar 
```cpp
for(int i = 0; i < 30; i = i + 1)
{
hazEsto();
}
```
