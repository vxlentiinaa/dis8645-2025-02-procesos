  // incluyo el archivo ""constantes.h""
#include "constantes.h";
#include "Persona.h";
#include "SensorAnalogo.h";


// "Persona" es en mayuscula porque es una clase
// "aristoteles" es minustcula porque es una variable
// (false) = no está vivo
Persona aristoteles(false);
Persona javieraMena(true);

// "potenciometroIzquierda" en el pin "A0"
SensorAnalogo potenciometroIzquierda(A0);

void setup() {
  // inicio la comunicación con el monitor serial
  Serial.begin(9600);

  // definimos las edades
  // en vez de calcular la edad de aristoteles
  // se suma el año oactual (2025)
  // mas el año de nacimiento (384 ac) 
  aristoteles.setEdad(2025 + 384);
  javieraMena.setEdad(42);
  aristoteles.setRut("1-0");
  javieraMena.setRut("11.111.111-1");

  potenciometroIzquierda.definirRangoUtil(0, 1023);
  potenciometroIzquierda.definirRangoMapeo(0, 10);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Aristoteles tiene ");
  Serial.print(aristoteles.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene ");
  Serial.print(javieraMena.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene RUT ");
  Serial.println(javieraMena.getRut());
  
  potenciometroIzquierda.leerValor();
}
