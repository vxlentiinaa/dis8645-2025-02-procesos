
void setup() {
  configurarSensoresActuadores();
  configurarPantallita();
  configurarEncoder();

}

void loop() {
  

  leerSensores();
  desplegarMenu();
  tomarDecisionesEncoder(); 
  desplegarMensaje();             
  aplausoTextoSonido();
}


