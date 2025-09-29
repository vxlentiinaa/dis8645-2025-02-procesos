/* 

*/

// si la ubicacion de la persona está en el rango de operación...
if posicion =< distanciaMax
// conseguir el angulo al que debe estar el servo para mirar a la persona
convertirPosicion ();

// mueve el servo de los parpados, abriendo los ojos
abrirOjos ();

// mueve el servo de los ojos a la posicion en que mira a la persona
mirar ();

//si la persona no está en el rango no abre los ojos ni la mira
