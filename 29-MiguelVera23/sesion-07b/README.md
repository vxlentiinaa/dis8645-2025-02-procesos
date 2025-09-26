# sesion-07b


Intentar tener todo el código sin tener que bajar la barra.

Programar es decidir como son las cosas.

Ejercicio: Planificar el macro y configurar sensores.

Empezar con pseudocódigo y después vemos como se implementa.


Aproximación a configurar los sensores actuadores

```cpp
void configurarSensoresActuadores(){
configurarSD();
//definir funciones para manejar contenido
//ligar contenido a clases correspondientes 

configurarMp3();
//debe recibir los datos del sensor de color
//asociarlos a una de las clases
//decirle al parlante que reproduzca un audio específico de la tarjeta SD
//aunque ya es suficiente asociarlo a la clase ya que ahí esta asociado cada audio

configurarParlante();
//recibir el audio de la tarjeta SD
//ligar archivos de audio al parlante
//definir repetición y volumen
//de nuevo por medio de las clases
//reproducir un audio específico


}
```
Usaremos una clase por color y le atribuiremos cada consecuencia que traerá el que se detecte el color específico

```cpp
 void configurarSensorDeColor(){
  //conectar a protoboard
  //definir parámetros de RGB para cada color
  //hacer 4 clases con distintos parámetros
  
 }
```
