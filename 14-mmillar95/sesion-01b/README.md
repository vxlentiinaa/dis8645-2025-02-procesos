# sesion-01b / Clase 02 / 08.08.2025

## Arduino R4 minima 

![arduino R4 minima imagen referencia](./imagenes/arduinoR4.png)

### Componentes 

- Microcontrolador (MCU)
- Alimentación: Puerto USB-C
- Indicadores visuales
- Botón Reset 
- Conectividad de pines
- Entradas analógicas
- 14 pines digitales (D0 a D13)

### Conceptos 

- void setup  *// Lo que se ejecuta solo una vez*
- void Loop *// Lo que se genera continuamente (bucle)*
- pinMode *// Pin: Numero que quiero configurar Mode: Input/Output*
- digitalWrite *// Sirve para poner un pin digital en ALTO (HIGH) o en BAJO (LOW)*
- delay *//pausas*
- const int *// Número entero que no se puede modificar (usualmente para pines y datos que no se quieren modificar)*
- if *// Si una condición se cumple, ejecuta un bloque de código. Si no, lo ignora*

```cpp
// Definimos los pines
const int botonPin = 2;         // Pin del botón
const int ledPin   = LED_BUILTIN; // LED integrado en la placa

void setup() {
  pinMode(botonPin, INPUT_PULLUP); // Botón como entrada con resistencia interna
  pinMode(ledPin, OUTPUT);         // LED como salida
}

void loop() {
  int estadoBoton = digitalRead(botonPin); // Leer el botón

  if (estadoBoton == LOW) { // Si el botón se presiona
    digitalWrite(ledPin, HIGH); // Enciende el LED
  } else {
    digitalWrite(ledPin, LOW);  // Apaga el LED
  }
}
```

### Encargo 

#### Realizar y documentar 3 códigos como mínimo, los cuales deben tener error y solucionarlos (intentar) 
#### Generar codigos, solo con la placa de arduino

Fallar muchas veces

> sin chat gpt
> 
> sin componentes
> 
> analizar la falla

### Código_01

Para mi primer código de arduino, quiero realizar analizar los componentes y conceptos de la placa 

- pinMode
- delay
- digitalWrite

**error placa no encontrada** 

**error no finalizar con ;**

![imagen del código mal](./imagenes/código01.png)
