#include "SensorUltrasonico.h"

SensorUltrasonico::SensorUltrasonico() {}
SensorUltrasonico::~SensorUltrasonico() {}

void SensorUltrasonico::configurar() {
  // Nuevo objeto sensor
  sonar = new NewPing(patitaTrig, patitaEcho, maxDistancia);
}

int SensorUltrasonico::medirDistanciaCm() {
  // Numero de mediciones para promediar
  const int numeroDeLecturas = 3; 
  //
  long total_cm = 0;
  //
  int lecturasValidas = 0;

  for (int i = 0; i < numeroDeLecturas; i++) {
    // Usamos la función simple que sabemos que funciona
    int lecturaActual = sonar->ping_cm();
    
    // Solo sumamos lecturas que tienen sentido (no son 0)
    if (lecturaActual > 0) {
      total_cm += lecturaActual;
      lecturasValidas++;
    }
    
    // Una pausa muy pequeña entre pings es necesaria por física
    delay(25); // 15ms es un valor seguro según la documentación de NewPing
  }
  
  // Si no obtuvimos NINGUNA lectura válida, devolvemos el máximo
  if (lecturasValidas == 0) {
    return maxDistancia;
  }
  
  // Calculamos el promedio de las lecturas válidas
  return total_cm / lecturasValidas;
}






// // Usamos la función de NewPing para obtener la mediana de un número de pings.
//   // Es más rápida y resistente a lecturas anómalas que un promedio simple.
//   // El "50" es el timeout máximo en milisegundos.
//   int distancia = sonar->ping_median(4, 50);
  
  
//   // Si la distancia es = a 0 no hubo retorno, por lo que se devuelve el valor máximo
//   // también si registra un valor superior al maximo
//   if (distancia == 0 || distancia > maxDistancia) {
//     return maxDistancia;
//   }
  
//   return distancia;
// }