/* arduino perturbador que te perturba y te saluda.ino

Francisco Stephens
José Morales
Camila Parada
Bernardita lobo
braulio Figueroa
*/


// espacio personal minimo
int distanciaMin = 

// distancia maxima de detección
int distanciaMax = 

//distancia a la cual te saluda
int distanciaSaludo = 

void setup() {
  
// configurar sensores ultrasonicos
configurar_HC_SR04 (A);
configurar_HC_SR04 (B);

// configurar servos del animatronico
configurarServo (ojos);
configurarServo (parpados);

// configurar mp3 y parlante
configurarMP3 ();
configurarParlante ();

}

void loop() {

// con los sensores calcular la posicion de la persona
triangulacion ();

// con la posicion de la persona segirla con la mirada
seguimiento ();

// hablarle a la persona
respuestaMP3 ();

}
