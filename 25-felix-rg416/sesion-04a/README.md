# sesion-04a

martes 28 de agosto

Avanzamos muchísimo en el código para el proyecto

Con el equipo investigamos sobre cómo hacer que el texto se mueva en la pantallita.

## comando `map()`

<https://docs.arduino.cc/language-reference/en/functions/math/map/>

Este comando recibe los rangos del potenciómetro y los entrega en un rango que nosotros definamos. `map(x, minimoInput, maximoInput, minimoOutput, maximoOutput)` en nuestro caso lo usamos para regular la velocidad a la que sube el poema, así: `velocidad = map(velocidad, 0, 1023, 0, 100)`

Nos sirvió mucho un código que servía para [controlar un servomotor con el potenciómetro](https://wokwi.com/projects/344892191015961170) sacado de <https://docs.wokwi.com/parts/wokwi-potentiometer#simulator-examples>

Carla y Bernardita se encargaron de hacer que una la imagen aparezca como queríamos

![imagen del pixelart](./imagenes/pixelart.jpeg)

## POTENCIÓMETRO

![Interior de un potenciómetro](./imagenes/potenciometro-partes.png)

el menor valor que puede hacer es 0 y el máximo es 1023

Se escribe en digital y se lee en analógico

![imagen](./imagenes/analogANDdigitalSignals.jpg)

Los comandos para escribir o leer en analóco y digital:

- **Leer**
  - analógico --> `analogRead(pin que leerá)`
  - digital -->`digitalRead()`
- **escribir**
  - analógico --> `analogWrite()`
  - digital --> `digitalWrite()`

### Código

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
```

## ENLACES

- [`map()`](https://docs.arduino.cc/language-reference/en/functions/math/map/)
- [Controlar un servo con un potenciómetro](https://wokwi.com/projects/344892191015961170)
- [Ejemplos de usos para un potenciómetro](https://docs.wokwi.com/parts/wokwi-potentiometer#simulator-examples)
- [`analogRead()`](https://docs.arduino.cc/language-reference/en/functions/analog-io/analogRead/)
- [`digitalRead()`](https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalread/)
- [`analogWrite()`](https://docs.arduino.cc/language-reference/en/functions/analog-io/analogWrite/)
- [`digitalWrite()`](https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalwrite/)
