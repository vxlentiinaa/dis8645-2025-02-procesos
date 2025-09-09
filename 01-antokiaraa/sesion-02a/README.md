# sesion-02a // martes 12 de agosto ⋆ 𐙚 ̊

(el de arriba es título)

## subtítulo

### subsubtítulo

esto está entre asteriscos y quedó *cursiva*

esto es **bold**

- código para generar patrones aleatorios en base a 5 símbolos, sólo lo utilice para tratar de comprender cómo funciona y que significa cada línea, lo entendí más o menos.

```cpp
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
randomSeed(analogRead(0)); //inicio números aleatorios
}

void loop() {
int filas = 3; //cantidad de filas del patrón
int columnas = 5;  // cantidad de columnas del patrón
char simbolos[] = {'#', '@', '*', '-'}; // símbolos a usar
int cantidadSimbolos = 5;
for (int f = 0; f < filas; f++) { //recorre cada fila
  for (int c = 0; c < columnas; c++) { //recorre cada columna
    int indice = random(0, cantidadSimbolos); //elige índice aleatorio
    Serial.print(simbolos[indice]); //imprime los símbolos sin salto
    Serial.print(' '); // espacio
}
Serial.println(); //salto de línea

}
Serial.println(); //línea extra para separar un patrón de otro
delay(2000); //tiempo de espera entre cada patrón

}
```

- el código debe vivir en una carpeta del mismo nombre, y subir la carpeta (arrastrándola) al github.

## Intentos

```cpp
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); +
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(holi probando); // texto + salto de línea
  delay(2500); // espera 2.5seg antes de repetir
  Serial,println(esto sería el siguiente texto?);
  delay(1000);

}
```

## Documentación errores

### Error 1

```cpp
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:10:26: error: stray '\303' in program
   Serial,println(esto sería el siguiente texto?);
                          ^
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:10:27: error: stray '\255' in program
   Serial,println(esto sería el siguiente texto?);
                           ^
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino: In function 'void setup()':
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:4:1: error: expected primary-expression before '}' token
 }
 ^
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino: In function 'void loop()':
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:8:18: error: 'holi' was not declared in this scope
   Serial.println(holi probando); // texto + salto de línea
                  ^~~~
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:10:18: error: 'esto' was not declared in this scope
   Serial,println(esto sería el siguiente texto?);
                  ^~~~
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:10:18: note: suggested alternative: 'auto'
   Serial,println(esto sería el siguiente texto?);
                  ^~~~
                  auto
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:10:10: error: 'println' was not declared in this scope
   Serial,println(esto sería el siguiente texto?);
          ^~~~~~~
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:10:10: note: suggested alternative: 'lrintl'
   Serial,println(esto sería el siguiente texto?);
          ^~~~~~~
          lrintl
exit status 1

Compilation error: stray '\303' in program
```

> por lo que entendí después es que en vez de un punto puse una coma sin querer, y que el texto debe ir en comillas.
> 
> lo modifiqué y me volvió a dar error, porque el murciélago está mal(?)

### Error 2

```cpp

C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino: In function 'void setup()':
C:\Users\anton\AppData\Local\Temp\.arduinoIDE-unsaved2025719-9844-7ui50n.qhxme\sketch_aug19a\sketch_aug19a.ino:4:1: error: expected primary-expression before '}' token
 }
 ^
exit status 1

Compilation error: expected primary-expression before '}' token
```

> se me había colado un "+", eso era

```cpp
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("holi probando"); // texto + salto de línea
  delay(2500); // espera 2.5seg antes de repetir
  Serial.println("esto sería el siguiente texto?");
  delay(1000);

}
```

### Error 3

> ya está, pero no me funciona en el serial monitor c:
> 
> era el puerto usb, ya funcionó.
