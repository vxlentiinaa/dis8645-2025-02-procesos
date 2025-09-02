#include "SensorAnalogo.h"


  // constructor
  SensorAnalogo::SensorAnalogo(int nuevaPatita){
    SensorAnalogo::patita = nuevaPatita;
  }

    // destructor
  SensorAnalogo::~SensorAnalogo(){}

  void SensorAnalogo::definirRangoUtil(int nuevoMin, int nuevoMax){
    SensorAnalogo::valorMinimo = nuevoMin;
    SensorAnalogo::valorMaximo = nuevoMax;
  }

  void SensorAnalogo::definirRangoMapeo(int nuevoMin, int nuevoMax){
    SensorAnalogo::rangoMapeadoMin = nuevoMin;
    SensorAnalogo::rangoMapeadoMax = nuevoMax;
  }

  void SensorAnalogo::leerValor() {
    // leer el valor con analogRead
    SensorAnalogo::valorActual = analogRead(SensorAnalogo::patita);

    SensorAnalog::valorMapeado = map(SensorAnalogo::valorActual, 
    SensorAnalogo::valorMinimo, SensorAnalogo::valorMaximo,
    SensorAnalogo::rangoMapeadoMin, SensorAnalogo::rangoMapeadoMax 
    );

  }