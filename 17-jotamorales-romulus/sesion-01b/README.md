# sesion-01b





## encargo

Crear variables y fallar. 3 codigos que no funciones y registrarlos. 


### Error 1

Quería imprimir el número 123 en el serial monitor, repitiendo 123 cada 1 segundo. Con el int es para guardar un número entero.

```cpp
//iNT https://docs.arduino.cc/language-reference/en/variables/data-types/int
// con el int se pueden guardar un números enteros.

void setup() {
  Serial.begin(9600);
}
void loop() {
  int numero = "123"; // número entero válido
  Serial.println(numero); // imprime el "123" en la ventana del Monitor Serial
  delay(1000); // Espera 1 segundo antes de volver a imprimir
}
```
![imagen de primero error](./imagenes/error1.png)


