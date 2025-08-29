const int LED = 13; // Pin 13 ahora se llama LED
bool state = 0; // Para definir si LED esta On/Off (inicia off)
const int cycle = 1000; // Tiempo total on + off 
int offTime; // declarando variable para el tiempo de apagado
int onTime = 1; // Tiempo encendido variable
bool brighter = true; // Variable que define si aumenta de el tiempo que el LED está encendido o no.

void setup() {
  pinMode(LED, OUTPUT); // Pin LED es output
  Serial.begin(9600);
}

void loop() {
  if (onTime >= cycle) { // Si el tiempo que el LED es mayor o igual a la duracion del ciclo (tiempo)....
    brighter = false; // Hacer que la variable brighter sea falsa
  }

  if (onTime <= 0) { // Si el tiempo que el LED es menor o igual a 0 (tiempo)...
    brighter = true; // Hacer que la variable brighter sea verdadera
  }
  
  if (brighter == true) { // Si brighter es verdadera...
    onTime = onTime + 40; // Aumentando el tiempo que el LED está encendido con cada loop
  } else {                // Si brighter NO es verdadera...
    onTime = onTime - 40; // Reduciendo el tiempo que el LED está encendido con cada loop 
    }
  
  offTime = cycle - onTime; // Calculando el valor del tiempo de apagado
  Serial.print("onTime: ");
  Serial.print(onTime);
  Serial.print(" offTime: ");
  Serial.print(offTime);
  Serial.print(" ");
  Serial.print("ciclo: ");
  Serial.println(onTime + offTime);
  state = 1; // bool state = 1
  digitalWrite(LED, state); // led = on
  delay(onTime); // Mantener LED encendido por "onTime" cantidad de tiempo
  state = 0; // bool state = off
  digitalWrite(LED, state); // led = off
  delay(offTime); // // Mantener LED apagado por "offTime" cantidad de tiempo
}