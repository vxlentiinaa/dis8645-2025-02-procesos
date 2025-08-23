# sesion-01b

## Apuntes videos

int numeros enteros

float numeros decimales

char un carácter  ‘

String colección de caracteres uno tras otro “

“=“ no conmutativo, el lugar en la memoria que se llama como el que esta a la izq, adentro de eso vive el valor de la derecha.

notación camello “usar mayúscula entre palabras”

Serial. (adentro)

funcion debe tener ()

“;” fin de las lineas

\n enter

Declaracion: tipoDeDato nombreDeFantasiaUnico;

Funciones: así();

Variables: así = 7;

## Encargo

<img width="915" height="613" alt="Screen Shot 2025-08-23 at 10 32 08" src="https://github.com/user-attachments/assets/80f92bf1-0389-46a9-8d97-b9deb42f8fa5" />

No declaré "seconds"

<img width="910" height="616" alt="Screen Shot 2025-08-23 at 10 52 18" src="https://github.com/user-attachments/assets/635b1f72-f41d-427e-a6b8-2afb1e9431ce" />

Escribí mal "unsigned long" entonces no le lo leyó bien

<img width="918" height="616" alt="Screen Shot 2025-08-23 at 10 56 52" src="https://github.com/user-attachments/assets/1a317ff2-8bc2-4c17-a98f-b7f001287069" />

Olvidé poner ";" en "Serial.begin(9600)"

<img width="920" height="613" alt="Screen Shot 2025-08-23 at 10 57 26" src="https://github.com/user-attachments/assets/e50c54df-e6b5-492e-9cb3-340d33fcdf6c" />

No supe ocupar realmente el AND

<img width="946" height="600" alt="Screen Shot 2025-08-23 at 11 33 45" src="https://github.com/user-attachments/assets/d495cb32-a35e-4d24-895c-795a26519e46" />

Arregladoo! :

```cpp
// se inicia boleana en falso
bool on = false;

// declarar numeros
  int numero1 = 6;
  int numero2 = 13;
  int numero3 = 22;

//abrir puerto serial
void setup() { 
  
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  unsigned long seconds = millis() / 1000;

  // se comienza prendido y entre numeros se apaga
  if (seconds < numero1) {
    on = true;
  } else if (seconds > numero1) {
    on = false;
  } else if  (seconds < numero2) {
    on = false;
  } else if (seconds > numero2) {
    on = true;
  } else if (seconds < numero3) {
    on = true;
  } else {
    on = false;
  }
  digitalWrite(LED_BUILTIN, on);

  Serial.println(millis() / 1000);
}
```

