# sesion-01b
viernes 08 de abril

- Hay que saber mandar correos
  - Siempre se pone Subject (asunto)
  - Evitar saludos largos (no es necesario "junto con saludar...") en este contexto no es necesario (Aarón quiere correos que vayan directo al punto)
- Siempre hay que documentar y comentar
- [C++ Variabels](https://www.w3schools.com/cpp/cpp_variables.asp)
 
## instalar Arduino IDE

<https://www.arduino.cc/en/software/>

### usando arduino
- void *declaración*() {
  - void =
  - declaración = crea una declaración con ese nombre
  - { = aquí dentro está todo lo que debe ocurrir cuando se llama *declaración*
- "delay(xxxx)" palabras rojas con paréntesis indican **funciones** = palabaras que llaman a otro código
- /* "de aquí en adelante todo es comentario" */ = notas grandes dentro del código
- // = para notas por lineas
- () = paréntesis = parámetros, se separan mediante ", " (incluyendo el espacio)
- {} = murciélago
- [] = corchete
- /n = enter
- ; = fin de las líneas (excepto si es un murciélago)
- verify y uploud
- int tiempoPrendido = 100;
  - int = contenedor
    - int = número entrero
    - bool = sí (1) o no (0)
    - float = numeros decimales
    - char = 1 caracter *´a´*
    - string = palabras *"texto"* 
  - tiempoPrendido = nombre de variable
  - 100 = tiempo que corre
- setup = función que corre desde que se presiona "reset" o cuando se prende la placa
- pinMode(LED_BUILTIN, OUTPUT)
  - pinMode = pin de salida o entrada, siemrpe hay que decirle qué hace
  - LED_BUILTIN = nombre o número del pin
  - OUTPUT = es salida o entrada (INPUT)
- loop = función que corre una y otra vez por siemprre
- digitalWrite(LED_BUILTIN, HIGH)
  - digitalWrite = escribe aquí
  - LED_BUILTIN = en este pin
  - HIGH = está encendido o está apagado (LOW)
- delay(1000 / 10)
  - delay = tiempo que se corre el digitalWrite
- Serial.begin(9600); = abre el puerto serial

> No todo lo que está en color está vien hecho, tiene que estar declarado

## Encargo

Fallar de muchas formas

3 códigos 

Puedo hacer una frase en código morse. Un traductor de clave morse
