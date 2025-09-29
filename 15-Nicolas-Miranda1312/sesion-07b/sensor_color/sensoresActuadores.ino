void configurarSensoresActuadores() {

  configurarSensorColor();

  configurarPantalla();

  configurarSonido();

  // configurar mas sensores
  // configurar actuadores
  
}

void leerSensores() {
  
  leerSensorColor();
  
  leerPantalla(); 

  leerSonido();
}

void tomarDecisiones() {
// cuando detacta un color tama la deecicion de vuscar un mensaje y una accion 
  if (estadorojo < estadoverde && estadorojo < estadoazul) {
    Serial.pantalla(accion);
    Serial.audio(mensaje); 

void actuar() {
  // la pontalla hace una animacion y produce un mensaje con el altavos dependiendo de el color que salga .
 delay(50); 
}
