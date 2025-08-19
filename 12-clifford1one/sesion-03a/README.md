# sesion-03a

## 19-agosto-2025 - clase 5

### proyecto-01

- 1 punto base

#### parte grupal

- 1 punto por documentación textual de todo el proyecto
- 1 punto por calidad de comentarios del código
- 1 punto por factura, funcionalidad y originalidad

#### parte individual

- 1 punto por bitácora constante, periódica y personal
- 1 punto por presentación de cada estudiante
- 1 punto por definir los roles que tomaste en el grupo

#### descuentos

- 3 puntos por entregar tarde
- 3 puntos menos por no presentar (sin justificativo médico)
- 5 puntos menos por falta de comentarios en el código
- 6 puntos menos si se presenta sin documentación del proceso
- 3 puntos menos por hacer el mínimo esfuerzo respecto a la capacidad/características de los componentes


### clase

hoy veremos condicionales.

el if sirve para correr ciertas partes del codigo siempre que se cumplan ciertas condiciones.

con else y else if podemos expandir las posibilidades,

#### ejemplo: 

```cpp
if(saldo>250){
 abrirTorniquete();
}else{
 Serial.println("SALDO INSUFICIENTE")
}
```

### links

- [if( )](https://docs.arduino.cc/language-reference/en/structure/control-structure/if) 

- [else{ }](https://docs.arduino.cc/language-reference/en/structure/control-structure/else)

- [&&](https://docs.arduino.cc/language-reference/en/structure/boolean-operators/logicalAnd)

- [||](https://docs.arduino.cc/language-reference/en/structure/boolean-operators/logicalOr)

### extras 

- [David Hume](https://es.wikipedia.org/wiki/David_Hume)

## códigos trabajados en clase

```cpp
//bool prender = false;
bool prender = true;

void setup() {
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, prender);
  delay(3000);
  prender = false;
  digitalWrite(LED_BUILTIN, prender);
}
```

en el anterior ocupamos delay();, lo cual no es muy recomendado.

```cpp
bool prendido = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Serial.println(millis() / 1000);
unsigned long segundos = millis() / 1000;

  // con este if, el led se prende durante 3 segundos y luego se apaga
  if (segundos < 3) {
    prendido = true;
  }/* else if (segundos > 10) {
    prendido = true;
  } */else {
    prendido = false;
  }

  digitalWrite(LED_BUILTIN, prendido);
}
```

