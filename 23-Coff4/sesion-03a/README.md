# sesion-03a

## Otro dia aprendiendo a programar de 0 (=･ x ･=)

Para la clase del mismo martes...

No pude ir.

Nunca pense que me agarraria una enfermedad sumamente fuerte que me dejaria 2 dias fuera del ring, para luego enterarme que se armaron grupos para el primer proyecto.
lo bueno entre comillas es que estaban repasando y ampliando las cosas que ya escribi en mi antigua hoja de bitacora.

Por lo tanto buscare expandir por mi cuenta esto y volvere para complementar con la clase  (*que a dia de hoy jueves no han subido*)

---

## Condicionales ★

- if: *tal vez ya la puse, pero como va en este conjunto y es importante, repito*. Segun se cumpla la condicion, se ejecutara lo que haya en dentro de los "Vampiros"

- if and "else": Estos deben de ir juntos por temas de logica. con if si se cumple la funcion se ejecuta, pero si no se cumple se ejecuta else en su lugar

- else if: *1+2+3* Permite mas opciones. si if no se ejecuta, salta a la segunda y si no se cumple, a la tercera opcion

- switch ... case: el switch es nuestra "pregunta" y los case son las diferentes opciones (es mejor para mas de 3 opciones y tenerlo mas ordenado)

- for: este es como un mecanismo de repeticion (el cual aun no entiendo muy bien la verdad) pero que repite un bloque de informacion hasta que se cumpla una condicion

- while: hasta que deje de ser verdadera la afirmacion, se seguira repitiendo la instruccion

- do ... while: igual que arriba se seguira repitiendo, pero el cambio es que si la afirmacion fuera falsa, se ejecutara al menos una vez

- break: la manera simple de romper bucles a cierto punto

- continue: sirve para saltarse un caso y seguir con los siguientes

- return: sirve para terminar todo y cerrar

---

Ahora por la noche esta lloviendo y hay nieve...es agradable aun teniendo fuertes dolores de cabeza.

al menos las clases seran online (＿ ＿*)

---

## Actualizacion de contenido

Con la clase ya en mi posesion actualizare este documento con la nueva informacion como prometi

- =: con este se asigna un valor

- ==: con 2 de estos se deja de asignar y ahora se compara

- unsigned long: dato entero para almacenar numeros grandes (igual que long) pero aqui solo se trabaja con numeros que nunca seran negativos ni decimales

- %: sirve para obtener los restos de divisiones enteras (sin decimales)

- ++: aumentar de uno en uno

``cpp
if (nuevocap == false){
    hacertarea();
if (aunfaltatiempo = true){
    esperar();
    }
}
else{
verelnuevocap
}
``

ahora para entenderlo es simple.
condicional: puede que haya un nuevo capitulo, pero si la afirmacion es falsa tengo que hacer tarea.
aunque puede que falte tiempo para que se transmita y por ello se puede esperar.

por otro lado puede que salga y lo vea inmediatamente.

!/Bang: lo contrario a la condicional ya puesta

``cpp
if (!hayarana){
reaccionartranquilo();
}
else{
chillar(volumen=infinito)
}
``

como se dijo en aquella clase el bang al ser lo contrario, seria:
si no hay araña, se reacciona tranqui.
por el otro caso se chilla a niveles que son iguales a infinitos

//los else son opcionales y no necesariamente obligatorios

---

clase ejemplo

```cpp

// primero se declara el estado led en 0 (tambien se puede ocupar true or false ya que son equivalentes)
bool estadoLed = 0;
//despues se declara el primer numero (creo que lo hicieron en temas de orden con otra parte del codigo)
int numero1 = 6;

//con ello se empieza como siempre con el setup
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
//se determina que segundos seran milesimas divididas "/" en 1000, con esto serian segundos
  unsigned long segundos = millis() / 1000;

//el segundo numero se declara con el numero que queremos
  int numero2 = 2;
// se declara que existira una division
  int division;
//y un resto
  int resto;
// ahora declaramos que la division es el numero 1 dividido por el numero 2
  division = numero1 / numero2;
// con ello se utiliza el % para sacar el resto
  resto = numero1 % numero2;
  //EL RESULTADO VA A SER "2", NO "2.5" ya que solo estamos trabajando con enteros
  Serial.print("numero1 es ");
  Serial.print(numero1);
  Serial.print(" y el modulo al dividir por 2 es ");
  Serial.println(resto);

  //voy a incrementar numero1 de 1 en 1
  numero1++;

//aqui se saca el resto de los segundos divididos por 2
  if (segundos%2 == 0){ //si es un segundo par
    estadoLed = false;
  } else {
    estadoLed = true; ////si es un segundo impar
  }

  digitalWrite(LED_BUILTIN,estadoLed);
}
```

Con un poco de esfuerzo pude escribirlo como llegue a entenderlo yo, aunque puede ser un poco confuso, si uno va lento pero seguro es mas facil de lo que se aparenta.

esto sera por la bitacora del martes.

me despido ─=≡Σ((( つ＞＜)つ
