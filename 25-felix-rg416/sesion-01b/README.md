# sesion-01b
viernes 08 de abril

- Hay que saber mandar correos
  - Siempre se pone Subject (asunto)
  - Evitar saludos largos (no es necesario "junto con saludar...") en este contexto no es necesario (Aarón quiere correos que vayan directo al punto)
- Siempre hay que documentar y comentar
## instalar Arduino IDE

<https://www.arduino.cc/en/software/>

### usando arduino

- /* "de aquí en adelante todo es comentario" */ = notas grandes dentro del código
- // = para notas por lineas
- () = paréntesis
- {} = murciélago
- [] = corchete
- verify y uploud
- int tiempoPrendido = 100;
  - int = variable
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
