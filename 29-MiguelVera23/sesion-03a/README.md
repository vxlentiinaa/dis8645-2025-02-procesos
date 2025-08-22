# sesion-03a

PARA EL VIERNES

repasar

-else

-if

-for

bitácora


Ciclo For <https://www.youtube.com/watch?v=e8CEpAQ4otU&ab_channel=ChepeCarlos>

Sirve para "contar" y por consecuencia automatizar y reducir código. En el caso revisado hay 12 leds que requieren activación.

Para empezar a reducir se declaran 2 variables: int CantidadLed = 10 y int LedInicial 3 (en que número empieza a contar.

Ejemplo: for (int i = 0 ; i < 5; i = i++).

Iniciará cuando i sea igual a 0, mientras sea menor que 5 y a medida que se ejecuta se aumentará el valor de la variante (i++).

Serial.prinln(i); toma la variable exclusiva de for y la hace visible en el monitor serial a medida que cambia.

Al ser menor que 5 imprime hasta 4. La impresión de los números se rige por la función for.

Para hacer conteo regresivo se usa i--

//Todo lo anterior va en setup

Para reducir la cantidad de líneas se usan los int establecidos al principio y pinMode(i, OUTPUT); en vez de 10 pinMode distintos.


```opp
for (int i = LedInicial ; i < CantidadLed + LedInicial ; i++) {
pinMode(i, OUTPUT);

De esta manera cambia en tiempo real al valor actual. Ahora en void loop se encienden los led repitiendo la función.

for (int i = LedInicial ; i < CantidadLed + LedInicial ; i++) {  //se repite constantemente pero el número del led (i) cambia.
pinMode(i, HIGH);      //prender led
delay(500);            //esperar medio segundo
digitalWrite(i, LOW);  //apagar led
}

Para que regrese se suman las CantidadLed y LedInicial pero se resta uno ya que LedInicial está comprendido dentro de CantidadLed.

for (int i = CantidadLed + LedInicial - 1 ; i >= LedInicial ; i--) {  //"inverso" pero honestamente me confundió esta parte.
pinMode(i, HIGH);      //prender led
delay(500);            //esperar medio segundo
digitalWrite(i, LOW);  //apagar led
}
```


Variables te simplifican la vida cuando se usa un mismo valor en varias partes y no quieres cambiarlos uno a uno.

En vez de delay(500); es mejor int Esperar = 200; y delay(Esperar);

Hardcoding(?)



Uso de if/else <https://www.wexterhome.com/curso-arduino/sentencia-if-else/>

Si no se cumple if ocurre else if, y si este no ocurre ocurre else.

if anidado: es una condición co-dependiente de otra para que se realize la acción. Si el primer if se cumple y el segundo no, no ocurre

nada o se pasa a la siguiente condición o else.


<https://ai.thestempedia.com/docs/evive/evive-arduino-ide-tutorials/arduino-ide-conditionalif-else-if-statements/>

else if sirve para tener una cantidad definida de opciones. En este caso notas según puntaje.

else se puede usar para resultados más amplios como "si no es así es así".

char almacena un caracter que en este caso es la nota.

Ejemplo en el sitio:

```opp 
int Marks = 95; //nota variable
char Grade;     //simplificación del resultado para impresión con iteración variable

void setup() {
 Serial.begin(9600);

if (Marks <= 33){    //if y else if tienen misma jerarquía (?)
 Grade = 'E';
 }
 else if (Marks <= 40){
 Grade = 'D';
 }
 else if (Marks <= 60){   //Grade cambia según valor de Marks y se ajusta a 1 de estos parámetros.
 Grade = 'C';
 }
 else if (Marks <= 80){
 Grade = 'B';
 }
 else if (Marks <= 100){   //no hay caso sin cubrir (en que no ocurra nada)
 Grade = 'A';
 }

Serial.print("Your grade is: ");
 Serial.println(Grade);
}

void loop() {
}
```

Ejercicios para probar:

Dado DyD: Según tu vida y número de roll te dice tu destino.

```opp
int vida = 10; 
int dado = 7;
char daño; //quise usar directamente un valor de "daño recibido" pero no supe implementarla

void setup() {
 Serial.begin(9600);
 pinMode(LED_BUILTIN; OUTPUT); //prepara led

if (vida <= 5){        //escenario "malo" falta opción alternativa con misma vida y distinto dado
  if (dado <= 7){
    digitalWrite(LED_BUILTIN, HIGH);  //led se prende si pierdes
    Serial.println("Moriste...");    //texto te informa de tu status
    delay(1000);                     
  }
}
else (vida > 5){
    if (14 >= dado > 7){
      Serial.println("Sobrevives...");   //escenario intermedio
      delay(1000);                       //descubrí que faltan varios escenarios intermedios
    }                                    // es posible que en casos no ocurra nada
  }
else (vida > 5){
    if (dado > 14){
      Serial.println("Ganaste!");      //mejor escenario posible
      delay(1000);
    }
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
```

Feliz cumpleaños: según día y mes me dice si estoy de cumpleaños.

```opp
int dia = 22;
int mes = 10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (dia = 23){
   if (mes = 10){
    Serial.println("Feliz cumpleaños!");
   }
  }
 else{
  Serial.println("No es tu cumpleaños.");
  digitalWrite(LED_BUILTIN, HIGH);
  
 }

}
```

Meses: arduino cuenta y transforma números en meses (algunos)

```opp
int meses = 12; //cantidad máxima
int wait = 500;

void setup() {
 Serial.begin(9600);

 for (int i = 0; i < meses; i++) {    //empieza a contar desde 0
  Serial.print("hoy es \n");  //añade hoy es antes de cada mes
  delay(wait);

  if (i = 1){
    Serial.print("Enero \n"); //asocia número a mes
    delay(wait);
  }
  if (i = 2){
    Serial.print("Febrero \n");
    delay(wait);
  }
    if (i = 3){
    Serial.print("Marzo \n");
    delay(wait);
  }
    if (i = 4){
    Serial.print("Abril \n");
    delay(wait);
  }
    if (i = 5){
    Serial.print("Mayo \n"); //asociación llega hasta mayo
    delay(wait);
  }
    if (i > 5){
    Serial.print("algun mes \n"); //al superar el número 5 empieza a repetir algun mes hasta reiniciar el ciclo
    delay(wait);
  }
 } 

}

void loop() {
  // put your main code here, to run repeatedly:

}
```
