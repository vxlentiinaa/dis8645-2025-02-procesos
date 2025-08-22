// variable booleana
// la inicializamos falsa
bool prendido = false;

// despues de 3 segundos
// el led se apague

void setup() {
  // put your setup code here, to run once:

  // abrir puerto serial
  Serial.begin(9600);


  // hacer que una patita sea output, salida
  // usamos la constante incluida en Arduino
  // LED_BUILTIN, porque sabe donde esta el LED interno
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  // que solamente este prendido
  // en los primeros 3 segundos
  // cuando creen variables millis()
  // siempre declararlas con unsigned long

  unsigned long segundos = millis() / 1000;
  
  if (segundos < 3  ) {
    prendido = true;
  } else if ( segundos > 10) {
    prendido = true;
  } else {
    prendido = false;
  }

  digitalWrite(LED_BUILTIN, prendido);

  Serial.println(millis() / 1000);
}