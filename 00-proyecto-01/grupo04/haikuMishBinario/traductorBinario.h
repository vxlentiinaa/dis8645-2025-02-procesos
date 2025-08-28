#include <Arduino.h>

String linea0 = "codigo arduino";     // linea 1 del poema
String linea1 = "oled ya encendido";  // linea 2 del poema
String linea2 = "cerebro fundido";    // linea 3 del poema
String binario0 = "";                 // traduccion de linea 1, vacio al inicio
String binario1 = "";                 // traduccion de linea 2, vacio al inicio
String binario2 = "";                 // traduccion de linea 3, vacio al inicio


bool linea0Done = false;  // flag, evita que se repita en loop la linea 1
bool linea1Done = false;  // flag, evita que se repita en loop la linea 2
bool linea2Done = false;  // flag, evita que se repita en loop la linea 3


String traductor(char sorter) {  // toma el caracter actual, ve con cual caso corresponde y envia el valor de retorno
  switch (sorter) {
    case 'a':
      return "01100001";
    case 'b':
      return "01100010";
    case 'c':
      return "01100011";
    case 'd':
      return "01100100";
    case 'e':
      return "01100101";
    case 'f':
      return "01100110";
    case 'g':
      return "01100111";
    case 'h':
      return "01101000";
    case 'i':
      return "01101001";
    case 'j':
      return "01101010";
    case 'k':
      return "01101011";
    case 'l':
      return "01101100";
    case 'm':
      return "01101101";
    case 'n':
      return "01101110";
    case 'o':
      return "01101111";
    case 'p':
      return "01110000";
    case 'q':
      return "01110001";
    case 'r':
      return "01110010";
    case 's':
      return "01110011";
    case 't':
      return "01110100";
    case 'u':
      return "01110101";
    case 'v':
      return "01110110";
    case 'w':
      return "01110111";
    case 'x':
      return "01111000";
    case 'y':
      return "01111001";
    case 'z':
      return "01111010";
    case ' ':
      return "00100000";
    default:
      return "";  // retornar nada en caso que el caracter no calse (ej, numeros, simbolos, etc)
  }
}

void loopBinario() {
  if (linea0Done == false) {                        // si aun no se traduce la linea 1
    for (int i = 0; i < linea0.length(); i++) {     // corre mientras i sea menor al numero de caracteres ( i < linea1.length() )
      char caracterActual = linea0.charAt(i);       // caracterActual corresponde al caracter en la posicion de i
      String binChar0 = traductor(caracterActual);  // binChar1 corresponde al retorno de la funcion traductor
      binario0 = binario0 + binChar0;               // binario1 (final) corresponde al valor de si mismo (0 al inicio) + binChar1
      binario0 = binario0 + " ";                    // binario1 corresponde a su mismo valor + un espacio (separación entre palabras para humanos)
    }
    linea0Done = true;  // despues de terminar "for" se activa la flag, evitando que se vuelva a traducir en bucle
    Serial.println("Linea 0:");
    Serial.println(binario0);  // Serial.println(secuencia final de linea1)
  }

  if (linea1Done == false) {                        // si aun no se traduce la linea 2
    for (int i = 0; i < linea1.length(); i++) {     // corre mientras i sea menor al numero de caracteres ( i < linea2.length() )
      char caracterActual = linea1.charAt(i);       // caracterActual corresponde al caracter en la posicion de i
      String binChar1 = traductor(caracterActual);  // binChar2 corresponde al retorno de la funcion traductor
      binario1 = binario1 + binChar1;               // binario2 (final) corresponde al valor de si mismo (0 al inicio) + binChar2
      binario1 = binario1 + " ";                    // binario2 corresponde a su mismo valor + un espacio (separación entre palabras para humanos)
    }
    linea1Done = true;  // despues de terminar "for" se activa la flag, evitando que se vuelva a traducir en bucle
    Serial.println("Linea 1:");
    Serial.println(binario1);  // Serial.println(secuencia final de linea2)
  }

  if (linea2Done == false) {                        // si aun no se traduce la linea 3
    for (int i = 0; i < linea2.length(); i++) {     // corre mientras i sea menor al numero de caracteres ( i < linea3.length() )
      char caracterActual = linea2.charAt(i);       // caracterActual corresponde al caracter en la posicion de i
      String binChar2 = traductor(caracterActual);  // binChar3 corresponde al retorno de la funcion traductor
      binario2 = binario2 + binChar2;               // binario3 (final) corresponde al valor de si mismo (0 al inicio) + binChar3
      binario2 = binario2 + " ";                    // binario3 corresponde a su mismo valor + un espacio (separación entre palabras para humanos)
    }
    linea2Done = true;  // despues de terminar "for" se activa la flag, evitando que se vuelva a traducir en bucle
    Serial.println("Linea 2:");
    Serial.println(binario2);  // Serial.println(secuencia final de linea3)
  }
}
