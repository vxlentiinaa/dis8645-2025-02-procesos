// Sensor Reconocimiento de Color Tcs230 - Tcs3200
// Calibra la configuración del sensor
// identificación de parametros para clasificar cada color
// identificar numero maximo y minimo de cada color
// identificar poder o alcance del sensor 
// nos ayudará a obtener los datos sin procesar del sensor


// Función de normalización

int normalizar(int valor, int maximoEntrada) {
  if (valor > maximoEntrada) valor = maximoEntrada;
  return (valor * 50) / maximoEntrada; // Escala proporcional
}



bool cercaDe(int valor, int objetivo) {
  return abs(valor - objetivo) <= 1; // tolerancia 0 (puedes subirla a 1 o 2 si es inestable)
}