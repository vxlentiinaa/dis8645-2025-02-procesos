EJEMPLO
```cpp

#ifndef TEXTO_H
#define TEXTO_H

#include "Tipo.h"
#include "Tinta.h"
#include "Autoria.h"

class Texto {
  // constructor
  Texto();

  // destructor
  ~Texto();
    
    Tipo tipografia;
    Tinta tinta;
    Autoria autora;
    
    bool izquierdaADerecha = true;
    float nota = 1.0;
};

#endif
```
Tinta (tipo) y tinta (nombre de la variable)
