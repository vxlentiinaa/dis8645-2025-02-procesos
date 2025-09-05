```cpp

#ifndef POEMA_H
#define POEMA_H

#include "Texto.h"

class Poema : public Texto
{
  // constructor
  Poema();

  // destructor
  ~Poema();

tipografia = "Dramatic Sans";
  nota = 4.0;
};

#endif
```
solamente los poemas se escribiran con esa tipografía, no los textos
