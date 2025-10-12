# Sesión-03a

Martes 19 de agosto, 2025

## Trabajo en clase

### Cosas que hablamos en la mañana

[Daniel Cruz](https://arteymedios.org/daniel-cruz/), artista electrónico.

[Christian Oyarzún](https://15.bienaldeartesmediales.cl/participantes/christian-oyarzun/), miembro del Colectivo Hackería.

### Pauta Proyecto-01

- 1 punto base

#### Parte grupal

| Criterios                                              	| Puntos 	|
|--------------------------------------------------------	|--------	|
| documentación textual en README.md de todo el proyecto 	| 1      	|
| calidad de comentarios del código                      	| 1      	|
| factura, funcionalidad y originalidad                  	| 1      	|

#### Parte individual

| Criterios                                                                     | Puntos |
|-------------------------------------------------------------------------------|--------|
| bitácora constante y periódica y personal                                     | 1      |
| presentación oral de cada estudiante                                          | 1      |
| listado de roles que tomaste en el grupo, y explicaciones de forma detallada. | 1      |

#### Descuentos

| Criterios                                                                                                     | Puntos |
|---------------------------------------------------------------------------------------------------------------|--------|
| no cumplir con el cronograma                                                                                  | 4      |
| no cumplir con los plazos establecidos                                                                        | 3      |
| no presentar sin justificativo médico                                                                         | 3      |
| no escribir comentarios en el código                                                                          | 5      |
| hacer un "drop": no tener proceso sostenido en el tiempo ni en código, ni en desarrollo, ni en documentación. | 6      |
| usar directamente los datos del potenciómetro y no procesarlos con originalidad para controlar la pantalla    | 3      |

### Condicionales e Iteradores

if, una condición. Si eso ocurre, entonces hace ciertas cosas.

Álgebra booleana.

Las condiciones existen en todo tipo de lenguaje de programación. La condición va entre paréntesis.

```cpp
if (ver == false){
ponermeLentes():
}else{
continuarConMiVida():
```

Se pueden poner más ejemplos.

Si pones un ! (signo de exclamación), se le llama bang, se usa para decir lo contrario.

También puedes hacer que la condición tenga otra condición.

or es un operador lógico.

```cpp
if (edad >18 18 OR tengoPituto){
dartePermisoDeConducir():
 }
else{
// noPuedoNomas
```

Compuertas / Operadores lógicos: AND, NOT, OR, NAND, NOR, XOR

Tabla de verdad.

Las compuertas AND son dependientes.

#### Tabla de verdad AND

| A  | B  | OUT  |
|--- |--- |----- |
| 0  | 0  | 0    |
| 0  | 1  | 0    |
| 1  | 0  | 0    |
| 1  | 1  | 1    |

#### Tabla de verdad OR

| A  | B  | OUT  |
|--- |--- |----- |
| 0  | 0  | 0    |
| 0  | 1  | 1    |
| 1  | 0  | 1    |
| 1  | 1  | 1    |

#### Tabla de verdad NOT

| A | OUT |
| - | --- |
| 0 | 1   |
| 1 | 0   |

Sofistas

Con Control + T se ordenan las cosas en Arduino.

Variables, funciones, for, if, and.

---

### Referentes

- [Daniel Cruz](https://arteymedios.org/daniel-cruz/)

### Palabras importantes

---

## Encargo-08: Investigar NAND, NOR, XOR

Para resumir un poco, tenemos a las compuertas lógicas AND, NOT, OR, NAND, NOR y XOR; estos son compuertas utilizadas en la electrónica. Nos permiten hacer operaciones lógicas básicas en los circuitos o programación. Solo podemos trabajar con dos números: 0 o 1, o arriba o abajo.

### Compuerta AND Y NAND

La compuerta AND representa una multiplicación lógica. Si multiplicas cualquier entrada por 0, el resultado será 0. En cambio, si ambas entradas son 1, el resultado será 1.

| A  | B  | OUT  |
|--- |--- |----- |
| 0  | 0  | 0    |
| 0  | 1  | 0    |
| 1  | 0  | 0    |
| 1  | 1  | 1    |

La compuerta NAND representa una multiplicación lógica negada. Si multiplicas cualquier entrada por 0, el resultado será 1. En cambio, si ambas entradas son 1, el resultado será 0. Es lo contrario a la compuerta AND.

#### Tabla de verdad NAND

| A  | B  | OUT  |
|--- |--- |----- |
| 0  | 0  | 1    |
| 0  | 1  | 1    |
| 1  | 0  | 1    |
| 1  | 1  | 0    |

### Compuerta OR y NOR

La compuerta OR representa una suma lógica. Si sumas cualquier entrada por 1, el resultado será 1. Si sumas 1 más 1, el resultado será mayor, por tanto será 1. En cambio, si sumas 0 más 0, será 0.

| A  | B  | OUT  |
|--- |--- |----- |
| 0  | 0  | 0    |
| 0  | 1  | 1    |
| 1  | 0  | 1    |
| 1  | 1  | 1    |

La compuerta NOR representa una suma lógica negada. Si sumas cualquier entrada por 1, el resultado será 1 y al negarlo dará 0. Si sumas 1 más 1, el resultado será mayor, por tanto será 1, y negado será 0. En cambio, si sumas 0 más 0, el resultado será 0 y al negarlo será 1. Es lo contrario a la compuerta OR.

#### Tabla de verdad NOR

| A  | B  | OUT  |
|--- |--- |----- |
| 0  | 0  | 1    |
| 0  | 1  | 0    |
| 1  | 0  | 0    |
| 1  | 1  | 0    |

### Compuerta NOT

La compuerta NOT es un inversor lógico. Solo tiene una entrada y una salida. Si tenemos un 1 en la entrada, en la salida lo negará, por tanto quedará en 0. Y si tenemos un 0 en la entrada, en la salida tendremos un 1.

| A | OUT |
| - | --- |
| 0 | 1   |
| 1 | 0   |

### Compuerta XOR

La compuerta XOR representa una función booleana de desigualdad. Si tenemos entradas diferentes, la salida será 1. En cambio, si las entradas son iguales, la salida será 0.

#### Tabla de verdad XOR

| A  | B  | OUT  |
|--- |--- |----- |
| 0  | 0  | 0    |
| 0  | 1  | 1    |
| 1  | 0  | 1    |
| 1  | 1  | 0    |

>Video de referencia ["Compuertas Lógicas; AND, OR, NOT, NAND, NOR, XOR, XNOR (FUNCIONAMIENTO) | Electrónica Digital"](https://youtu.be/M4PQfNjTiOE?si=iQrq-_dp2BdO56GW)
