# sesion-02a

12-08-2025  

## Apuntes

- Al comenzar la serie se establece la comunicación inicial.  
- El valor **9600 baudios** indica la velocidad de transmisión: corresponde a la rapidez con que viajan los datos entre la placa y el computador.

### ¿Qué significa un Baudio?

- El **baudio (Bd)** es la medida de cuántas variaciones o símbolos por segundo se envían en una transmisión de datos.

---

## Sokio

- Nombre real: **Mauricio Días Gallardo**.  
- Inició su trayectoria en los años 90 componiendo para obras de teatro.  
- Introdujo sonidos de **8 bits** en sus mezclas, publicando parte de su trabajo con el **sello Pueblo Nuevo Netlabel**.  
- Fundó la organización llamada *New Latín Wave*.  
<https://pueblonuevo.cl/bios/sokio>
<https://pueblonuevo.cl>
<https://newlatinwave.com>


---

## Gordon Matta-Clark (Artista)

- Su obra se caracteriza por cortes y vacíos en muros y estructuras, creando efectos casi caleidoscópicos.  
<https://www.archdaily.cl/cl/768903/en-perspectiva-gordon-matta-clark>
---

## Ejercicios de encargo

### Ejercicio 1

**El primer código con error.**
Código en **Arduino Uno R4 Mínima** para mostrar una onda vertical con `/` en el monitor serial:  

```cpp
// Ejercicio 1 - Onda vertical
// declarar
String decimas; 

void setup() {
decimas = "/\n";
decimas = decimas + "/\n\n";
decimas = decimas + "/\n\n\n";
decimas = decimas + "/\n\n\n\n";
decimas = decimas + "/\n\n\n\n\n";
decimas = decimas + "/\n\n\n\n\n\n";
decimas = decimas + "/\n\n\n\n\n\n\n";
decimas = decimas + "/\n\n\n\n\n\n\n\n";
decimas = decimas + "/\n\n\n\n\n\n\n\n\n";
decimas = decimas + "/\n\n\n\n\n\n\n\n\n\n";

  Serial.begin(9600);
}


void loop() {
  // prende
  Serial.print(decimas);
  Serial.print("\n");

}
```
**La solución corregida.**
Se reemplazó / por m y se corrigieron los espacios

```cpp
// declarar
String onda; 

void setup() {

onda = "m\n";
onda = onda + "mm\n";
onda = onda + "mmm\n";
onda = onda + "mmmm\n";
onda = onda + "mmmmm\n";
onda = onda + "mmmmmm\n";
onda = onda + "mmmmm\n";
onda = onda + "mmmm\n";
onda = onda + "mmm\n";
onda = onda + "mm\n";
onda = onda + "m\n";

  Serial.begin(9600);
}


void loop() {
  // prende
  Serial.print(onda);
  Serial.print("\n");

}
```
### Ejercicio 2
**Bucle ascendente y descendente**

Este ejercicio imprime en el monitor serial una onda de `m` que va creciendo hasta un máximo y luego decreciendo hasta 1.
<https://docs.arduino.cc/language-reference/en/structure/control-structure/for>

**codigo error**
```cpp
// Ejercicio 1 - Onda en el bucle

// cantidad máxima de 'm'
int maxM = 12;

void setup() {
Serial.begin(9600);
}

void loop() {
// Parte ascendente de la onda 
for (int i = 1; i >= maxM; i++) {   
for (int j = 0; j > i; j++) {
Serial.print("m");
}
Serial.print("\n");
}

// Parte descendente de la onda
for (int i = maxM - 1; i >= 1; i--) {
for (int j = 0; j > i; j++) {
Serial.print("m");
}
Serial.print("\n");
}

Serial.println();
delay(300);
}
```
**La solución corregida.**
condición equivocada
- `>=` estaba al revés, debía ser `<=`.
- `j > i` estaba al revés, debía ser `j < i`.

```cpp
// Ejercicio 1 - Onda en el bucle

// cantidad máxima de 'm'
int maxM = 12;

void setup() {
Serial.begin(9600);
}

void loop() {
// Parte ascendente de la onda 
for (int i = 1; i >= maxM; i++) {   
for (int j = 0; j > i; j++) {
Serial.print("m");
}
Serial.print("\n");
}

// Parte descendente de la onda
for (int i = maxM - 1; i >= 1; i--) {
for (int j = 0; j > i; j++) {
Serial.print("m");
}
Serial.print("\n");
}

Serial.println();
delay(300);
}
```


