#ifndef CRIATURA_MARINA H //se pregunta si no esta definida
#define CRIATURA_MARINA H //una vez la encuentra, la define

#include <Arduino.h> //se incluye el lenguaje arduino para cosas como String

class Cefalopodo 
public: 
void setLongitud(int nuevaLongitud); 
int getLongitud(); //en este caso int es un entero que define longitud
void setEspecie(String nuevaEspecie);
String getEspecie();

class CriaturaMarina : public Cefalopodo { //Cefalopodo hereda de criatura marina
public:
CriaturaMarina(bool esCalamar);
~CriaturaMarina(); //destructor

bool isSquid; //true si es calamar, false si es pulpo
int longitud = -1; //si ningun valor es añadido se dejara en -1
String especie;
}; //en estas situaciones se termina con ; ya que normalmente no es asi
#endif