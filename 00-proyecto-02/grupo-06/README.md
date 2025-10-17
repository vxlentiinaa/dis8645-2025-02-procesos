# Proyecto 02
- Grupo: 06
- Nombre de grupo: Hijos de la Tierra
- Integrantes:
 - Antonia Fuentealba Pessot / [AntFuentealba](https://github.com/AntFuentealba)
 - Santiago Gaete Fernández / [santiagoClifford](https://github.com/santiagoClifford)
 - Sofía Pérez Muñoz / [sofia-perezm](https://github.com/sofia-perezm)
 - Félix Rodríguez Guevara / [felix-rg416](https://github.com/felix-rg416)

## Presentación textual
### Lil Brother
Como primera propuesta, usamos la idea de [AntFuentealba](https://github.com/AntFuentealba), que consistía en una máquina que te siguiera con la mirada.

Desglosando esta idea llegamos a la conclusión de que la esta "mirada" debia activarse cuando se detectará de alguna forma una presencia.

Finalmente nuestro proyecto es una máquina con ojos que reacciona ante la presencia de una persona. En su estado normal, la base en donde están los ojos se mueven constantemente de un lado a otro y pestañean en un ciclo continuo, como si estuvieran explorando el entorno.

Cuando el sensor ultrasónico detecta a alguien cerca, la máquina se detiene y queda “mirando” fijamente, dejando de pestañear, como si reconociera la presencia y le impactara esta misma.

Al momento en que la persona se aleja, el sistema entra en un estado de alivio y vuelve a su comportamiento inicial, retomando el movimiento y el parpadeo en bucle.

### Mapa de flujo
![poner el mapa aqui](./)

## Inputs y outputs
Componentes a utilizar:

- Sensores ultrasónicos (2), sensor de proximidad HC-SR04
- Servomotores (3)

### Input

Mediante los sensores ultrasónicos, la máquina detecta si existe o no presencia de un sujeto u objeto. Esto mediante el movimiento de los sensores a través de servomotores, además la estructura tiene unos ojos que parpadean constantemente mientras está buscando que detectar.

### Output

Al detectar cualquier tipo de presencia, se queda mirando fijamente a la dirección en donde se haya sensado, y el pestañeo se detiene.

## Bocetos y acercamientos

En la primera etapa teniamos pensado como grupo el usar dos micrófonos MAX4466, y que através de estos se pudiera detectar sonido y esto activara el movimiento de servomotores para mover los ojos. Sin embargo esta primera idea fue desechada por complicaciones en el funcionamiento de los micrófonos.

## Pseudocódigo y experimentación
En un principio, lo que decidimos hacer, era probar como se movía el servomotor, y en base a esto ir decidiendo un rango, para definir la fluidez de movimiento que queriamos que tuviera. A continución se puede ver un extracto de código que utilizamos para probar el movimiento del servo.
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
Para ver más documentación sobre este proceso con imágenes y gifs, recomiendo visitar los repos linkeados al principio del readme.

## Etapas del código
- Etapa 1: Inclusión de bibliotecas
- Etapa 2: Creación de objetos
- Etapa 3: Variables de control
- Etapa 4: setup () - Configuración inicial
- Etapa 5: loop () - Ejecución inicial
- Etapa 6: Funciones auxiliares
- poner aqui la etapa del codigo en que nos ayudó el seba y mencionarlo

## Carcasas y prototipos
Para el primer acercamiento, nuestro proyecto constaba de una base con unos ojo que simulaban un parpadeo y se movía en una rotación de 180°.

![poner imagenes del primer prototipo](./)

Más adelante [santiagoClifford](https://github.com/santiagoClifford), ideo un mecanismo en base a distintos engranajes para lograr mover los distintos servos integrados.

![poner imagenes de los primeros engranajes](./)

Finalmente, [santiagoClifford](https://github.com/santiagoClifford) junto con [felix-rg416](https://github.com/felix-rg416), mejoraron el sistema de engranajes, haciendo adaptaciones para la correcta instalación fijación de las distintas partes del proyecto, y haciendo que la base también contara con un sistema de rotación en base a engranajes.

![poner foto del proyecto final aqui](./)


## Documentación y procesos
![poner fotos aqui](./)
## Referentes estéticos
- [1984 de George Orwell]
- [Around the world - Daft Punk ](https://www.youtube.com/watch?v=K0HSD_i2DvA)

### Musicales

El concepto de la paranoia ha sido trabajado múltiples veces por grandes exponentes de la música. Cada uno de ellxs dando su punto de vista de cómo es afectadx por la paranoia, y como ésta se manifiesta en sus vidas.

- [Paranoid Android - Radiohead](https://youtu.be/Lt8AfIeJOxw)
- [CHROMAKOPIA - Tyler, The Creator](https://youtu.be/hCcwCv3G1FQ)
- [Paranoid - Black Sabbath](https://youtu.be/fWvKvOViM3g)
- [Paranoid Eyes - Pink Floyd](https://youtu.be/ALuor5QREgw)
- [Imogen Heap - Headlock](https://youtu.be/roPiy2JydwA)




