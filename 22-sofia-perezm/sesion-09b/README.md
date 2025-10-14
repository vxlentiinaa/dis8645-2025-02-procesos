# sesion-09b
10/10/25

Trabajamos en clase como grupo. Estamos resolviendo el problema que tuvimos con los sensores.

## Nuevo flujo de funcionamiento 
Decidimos cambiar los micrófonos por un sensor ultrasónico, el cual estará en constamte movimiento y pestañeo en loop, al momento de detectar una presencia, quedará quieto "mirando" a la persona fijamente dejando de pestañar, y cuando la persona se aleje entrará en un estado de "relief", volviendo a su primer estado de moviemiento y pestañeo en loop.

![diagrama_de_flujo_nuevo](./imagenes/diagrama_nuevo.png) 

También probamos cosas nuevas con el servo. Usamos los siguientes códigos:

```cpp
// Incluímos la librería para poder controlar el servo
#include <Servo.h>
 
// Declaramos la variable para controlar el servo
Servo servoMotor;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
}
 
void loop() {
  
  // Desplazamos a la posición 0º
  servoMotor.write(0);
  // Esperamos 1 segundo
  delay(1000);
  
  // Desplazamos a la posición 90º
  servoMotor.write(90);
  // Esperamos 1 segundo
  delay(1000);
  
  // Desplazamos a la posición 180º
  servoMotor.write(180);
  // Esperamos 1 segundo
  delay(1000);
}
```

```cpp
// Incluímos la librería para poder controlar el servo
#include <Servo.h>
 
// Declaramos la variable para controlar el servo
Servo servoMotor;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
 
  // Inicializamos al ángulo 0 el servomotor
  servoMotor.write(0);
}
 
void loop() {
 
  // Vamos a tener dos bucles uno para mover en sentido positivo y otro en sentido negativo
  // Para el sentido positivo
  for (int i = 0; i <= 180; i++)
  {
    // Desplazamos al ángulo correspondiente
    servoMotor.write(i);
    // Hacemos una pausa de 25ms
    delay(25);
  }
 
  // Para el sentido negativo
  for (int i = 179; i > 0; i--)
  {
    // Desplazamos al ángulo correspondiente
    servoMotor.write(i);
    // Hacemos una pausa de 25ms
    delay(25);
  }
}
```

referencias de código: https://programarfacil.com/blog/arduino-blog/servomotor-con-arduino/ 

servo moviendose de forma gradual con el primer código.

![primer_intento](./imagenes/intento_1.gif)

servo moviendose de forma fluida con el segundo código.

![segundo_intento](./imagenes/intento_2.gif)

prueba de proximidad con persona 100% real no fake.

![prueba_proximidad](./imagenes/prueba_con_sens-pr.gif)




