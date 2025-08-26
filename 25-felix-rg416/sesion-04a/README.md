# sesion-04a

Avanzamos muchísimo en el código para el proyecto

## POTENCIÓMETRO

![Interior de un potenciómetro](./imagenes/potenciometro-partes.png)

el menor valor que puede hacer es 0 y el máximo es 1023

Se escribe en digital y se lee en analógico


```cpp
// declarar valor
// inicializar 0

int valorPot;

void setup() {
    Serial.begin(9600);
}

void loop() {
    // leer el valor analógico
    valorPot = analogRead(A0);

}