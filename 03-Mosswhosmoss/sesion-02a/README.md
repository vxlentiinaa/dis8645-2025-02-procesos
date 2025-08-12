# sesion-02a
## Tarea sesión pasada
### **IDEA-1**
Hare que con codigo morse diga *"Instrucciones para llorar"* de el libro "Historias de cronocopios y famas" de Julio Cortazar; con el led integrado en el pin 13 de Arduino

### **REFERENTES**
[ejemplo-01](https://www.instructables.com/Morse-code-with-arduinoLED)

[ejemplo-02](https://www.arduino.cc/education/morse-code-project)

[ejemplo-03](https://forum.arduino.cc/t/blinking-led-morse-code-arduino-uno/695484)

[ayuda-01](https://github.com/kying18/morse-code/blob/master/sos.ino)

[ayuda-01 Video](https://youtu.be/6mLytyKEU5Q?si=NARBFvCrfxlxyM5f)

### **PRUEBAS** 
Estoy formando la palabra a base de este código
```cpp
//Proyecto decir en código morse "Instrucciones para llorar"

//Alfabeto para la palabra
//I = · ·
//N = — ·
//S = · · ·
//T = —
//R = · — ·
//U = · · —
//C = — · — ·
//O = — — — 
//E = ·
//P = · — — ·
//A = · —
//L = · — · ·

//Ahora voy a definir las variables
int LED = LED_BUILTIN;
//Esta variable es para lo que define el tiempo de ·
int tiempoCorto = 300;
//Esta variable es para lo que define el tiempo de —
int tiempoLargo = 900;

void setup() {
  //Se va a definir la led integrada del pin 13 como un OUTPUT
pinMode(LED, OUTPUT);
}

void loop() {
 //La letra "I"
 switchLED(tiempoCorto);
 switchLED(tiempoCorto);

 //Delay para generar un espacio entre letras
 delay(tiempoLargo);
 
 //La letra "N"
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "S"
 switchLED(tiempoCorto);
 switchLED(tiempoCorto);
 switchLED(tiempoCorto);
 
 delay(tiempoLargo);

 //La letra "T"
 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "R"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "U"
 switchLED(tiempoCorto);
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);

 delay(tiempoLargo);
  
 //La letra "C"
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);
 //La letra "C"
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoCorto); 

 delay(tiempoLargo);

 //La letra "I"
 switchLED(tiempoCorto);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "O"
 switchLED(tiempoLargo);
 switchLED(tiempoLargo);
 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "N"
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "E"
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "S"
 switchLED(tiempoCorto);
 switchLED(tiempoCorto);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "P"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoLargo); 
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "A"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);


 delay(tiempoLargo);

 //La letra "R"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "A"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "L"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "L"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "O"
 switchLED(tiempoLargo);
 switchLED(tiempoLargo);
 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "R"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);

 //La letra "A"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);

 delay(tiempoLargo);

 //La letra "R"
 switchLED(tiempoCorto);
 switchLED(tiempoLargo);
 switchLED(tiempoCorto);

 delay(tiempoLargo);
}

//Esta función es para el cambio de voltaje en el LED integrado
void switchLED (int timing) {
    // Esta funcion hara que el LED prenda
  digitalWrite(LED, HIGH);
  // Esto retrasara la siguiente linea de codigo, y que se pueda cambiar por cuanto tiempo el LED se encuentra encendido
  delay(timing);
  // Esta funcion hara que el LED se apague
  digitalWrite(LED, LOW);
   // Esto retrasara la siguiente linea de codigo, y que se pueda cambiar por cuanto tiempo el LED se encuentra apagado
  delay(tiempoCorto);
}
```
## **CLASE MARTES 12**
### **REFERENTES/LINKS**
[Tecnópolis](https://es.wikipedia.org/wiki/Tecnópolis)

[UNTREF](https://untref.edu.ar)

[YAELTEX](https://yaeltex.com)

[J.CROWE](https://www.jcrowe.xyz)

[.XYZ](https://gen.xyz) Sitio para comprar dominio barato 

[Nicholas Negroponte](https://es.wikipedia.org/wiki/Nicholas_Negroponte)

[Yuk Hui](https://scholars.cityu.edu.hk/ws/portalfiles/portal/185446872/45522588.pdf)

[cajaNegraEditorial](https://cajanegraeditora.com.ar) 
