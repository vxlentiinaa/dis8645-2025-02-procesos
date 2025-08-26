# sesion-04a

## uso de pantalla y protoboard

simulación potenciómetro en wokwi:

```cpp

// declarar valor
// inicializar 0
int valorPot = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  // leer el valor
  valorPot = analogRead(A0);
  
  Serial.println(valorPot);
}
```

### pruebas en pantalla

![pantalla1](./imagenes/pantalla1.jpg)


![pantalla2](./imagenes/pantalla2.jpg)
