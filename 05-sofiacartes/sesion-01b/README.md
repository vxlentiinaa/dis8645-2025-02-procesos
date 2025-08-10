# sesion-01b 08/08

## Encargo 02

## Código 1

```cpp

void setup() {
  // put your setup code here, to run once:
  pinMode (LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i =0; i < 3; i++) {
  digitalWrite (LED_BUILTIN, HIGH);
  delay (200);
}
delay (500);//pausa larga despues de los destellos 
}
```

La idea es que después de tres destellos haga una pausa larga y reset. Pero, me resultó 7 destellos consecutivos y 1 rápido, siguiendo con que no se apague más.

## Código 2
