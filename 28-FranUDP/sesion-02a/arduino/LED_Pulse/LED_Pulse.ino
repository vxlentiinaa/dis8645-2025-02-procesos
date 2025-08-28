const int LED = 13; // Pin 13 ahora se llama LED
bool state = 0; // Para definir si LED esta On/Off (inicia off)
const int cycle = 1000; // Tiempo total on + off 
int offTime; // declarando variable para el tiempo de apagado
int onTime = 1; // Tiempo encendido variable
bool brighter = true;

void setup() {
  pinMode(LED, OUTPUT); // Pin LED es output
  Serial.begin(9600);
}

void loop() {
  if (onTime >= cycle) {
    brighter = false;
  }

  if (onTime <= 0) {
    brighter = true;
  }
  
  if (brighter == true) {
    onTime = onTime + 40; // Aumentando el valor de "on" con cada loop
  } else {
    onTime = onTime - 40;
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
  delay(onTime); // on time
  state = 0; // bool state = off
  digitalWrite(LED, state); // led = off
  delay(offTime); // oposite time
}