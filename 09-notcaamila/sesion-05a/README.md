# sesion-05a

## martes 02 de septiembre

distintos lenguajes de programación: lua, chuck, phyton, c++

libro: computers that made the world

antes cada computador tnía su propio lenguaje

esolang: esoteric programming languaje

turing-complete: aquel lenguaje que tiene el mismo poder computacional que una máquina de Turing universal

## abrimos ARDUINO IDE

### 1. trabajando con otras tabs, cómo incluirlas

usar otros archivos en un archivo

```cpp
#include "constantes.h"


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(numEstudiantes);
}
```

### 2. cosas en mayúscula: atención, ojito

```cpp
#ifndef CONSTANTES_H
#define CONSTANTES_H

const int numEstudiantes = 29

#endif
```
