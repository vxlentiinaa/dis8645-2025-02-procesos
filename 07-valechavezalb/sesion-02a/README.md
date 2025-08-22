# Clase 03

Martes 12 de agosto de 2025

## Cultura computacional

- Serial.beging: inicializa comunicación serial permitiendo que arduino reciba datos a través de puerto serie.
- c++ es c pero con clases.
- Proyectos computacionales programados.
- camelCase, sintáxis de programación.

### ¿Qué es un baudio?

Un baudio o baud rate es la veocidad de la comunicación de datos. Por ejemplo 9600 se usa para ser más estable.

## Encargo de la clase de hoy: documentar código, fallos y aciertos con arduino

## **Códigos**

## Luz que parpadea con código morse con la palabra SOS

```cpp
// luz led incorporada del arduino
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {

  // codigo morse (s)
  flash(200);
  flash(200);
  flash(200);
  delay(300);

  // codigo morse (o)
  flash (500);
  flash (500);
  flash (500);

// codigo morse (s)
  flash(200);
  flash(200);
  flash(200);
  delay(10000);

}

void flash (int duracion)
{
  digitalWrite (LED_BUILTIN, HIGH);
  delay(duracion);
  digitalWrite (LED_BUILTIN, LOW);
  delay(duracion);
}
```

### Reloj que muestra horas, minutos y segundos

```cpp
void setup() {

  unsigned long tiempoAnterior = 0;
}

void loop() {
  unsigned long tiempoActual = millis(); // tiempo desde que se encendio

  // se convierte a segundo totales
  unsigned long segundosTotales = tiempoActual / 1000;

  // se calcula horas, minutos y segundos
  int horas = segundosTotales / 360
  int minutos = (segundosTotales % 3600) / 60;
  int segundos = segundosTotales % 60;

  // se muestra el formato hh:mm:ss (horas, minutos, segundos)
  Serial.print (horas);
  serial.print (":");
  if (minutos < 10 Serial.print ("0")); //para que se vea 09 y no 9
  Serial.print (minutos);
  Serial.print (":");
  if (segundos < 10) Serial.print ("0");
  Serial.printIn(segundos);

  delay(1000); //espera de un segundo para mostrar de nuevo 
}
```

- Este tuvo un error que no pude resolverlo, dice que tiene un error de sintaxis pero está bien escrito y no supe resolverlo. Escrbí Serial.printIn y no me lo toma.

#### Elección de número al azar, que se ve en el serial monitor

```cpp
Serial.begin(9600); // inicia comunicacion serie 9600 --> velocidad a la que los datos se transmitiran entre pc-arduino
  randomSeed(analogRead(0)); // semilla que hace que los numeros no se repitan siempre

}

void loop() {
  int numero = random(1, 101); // numero aleatorio entrre 1 a 100
  Serial.printIn(numero); // lo envia al monitor serie
  delay(1000);
}
```

- Este código también tuvo el mismo error del código anterior, en términos de sintáxis con la misma variable Serial.printIn. Y no supe como solucionarlo.

## Charla de Sokio, Mauricio Días Gallardo

[https://sokio.studio/]

- Compositor chileno.
- New Latin Wave.
- Desarrollo de ópera experimental.
- Hizo la ópera Patria en base a un sampler (instrumento electrónico que permite grabar, almacenar y reproducir fragmentos de sonido).
- Con 8 megabytes hizo una opera.
- Teenage engineering empresa de diseño que programa instrumentos musicales. [https://teenage.engineering]
- National Sawdust. Brooklyn, NY. Sistema de audio espacial.
- Splitting/ Absence, obra dedicada a Roberto Matta, Gordon Matta-Clark.
- Gordon Matta-Clark, Arquitecto (anarquitecto). Sus obras consistían en cortes en cono, permitiendo la perdida de visión del espacio. Obra caleidoscopal.
- Juan Downey, artista chileno, pionero del videoarte y el arte interactivo.
- Solenoide, se envía un impulso y repsonde de manera percutora.
- Caja Hammond, caja estándar que permite albergar componentes electrónicos.
