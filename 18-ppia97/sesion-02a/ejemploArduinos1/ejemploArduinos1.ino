//declarar palabra y caracter a utilizar
String palabra = "XOXO";
String corazon = "\u2661";
//tiempo de encendido y apagado
int tiempoPrendido = 500;
int tiempoApagado = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // loop de palabra, caracter y espacio
Serial.print(palabra);
Serial.print(corazon);
Serial.print("\n");
delay(tiempoPrendido);s
delay(tiempoApagado);
}
