# sesion-02a

## APUNTES RAPIDOS

- USB significa Universal Serial Bus (Bus Serial Universal).
- Algunos usb no sirven para el arduino ya que podria ser solo para dar energía al y no para entregar energia y datos.
- Se repasó e introdujo GitHub tanto a gente del semestre pasado como nueva en el curso.
- Se vio cómo escribir en Markdown.
- Cómo hacer un issue.
- Tengo algun problemas = breve mensaje por issue a Aaron, etiquetándolo.
- Dominio vs Hosting: Dominio = terreno - Hosting = casa.
- Tipos de dominios: .com, .art, .life, etc.
- Nos visitó Sokio. Profes y compañeros del curso hicieron entrega de proyecto. [@sokio en Instagram](https://www.instagram.com/sokio/?hl=es)
- Revisar sus trabajos.

-----------------------------------

### ````CPP
cpp → extensión de archivos con código C++.

De forma mas sencilla, esto utilizarlo para colorear el código de una forma especial, ordenada y clara. 

Ejemplo de código C++:
```CPP
  Blink

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
```

Esto se puede hacer en Discord también a modo de resaltar el código.

