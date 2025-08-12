# sesion-01b 08/08
## Apuntes clase
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

La idea es que después de 3 destellos haga una pausa larga y reset. Pero, me resultó 7 destellos consecutivos y 1 rápido, siguiendo con que no se apague más.

<img width="1469" height="825" alt="ejercicio1arduino" src="https://github.com/user-attachments/assets/91688fbb-cfd5-4bf2-bce2-0deab6055056" />

## Código 2

```cpp
void setup() {
  // put your setup code here, to run once:
  pinMode (LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int brillo = 0; birllo <= 255;brillo++) {
  analogWrite(LED_BUILTIN,brillo) ;
  delay(20);
}
}
```

La idea es simular pulso, aumentar y bajar brillo con PWM. Me equivoqué en la palabra brillo.

<img width="1278" height="825" alt="ejercicio2arduino" src="https://github.com/user-attachments/assets/23b1abcd-4f91-468c-aabd-70724e4cfe90" />

## Código 3

```cpp
onst int ledPin = LED_BUILTING;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin,HIGH);
delay(200);
digitalWrite(ledPin,LOW);
delay(200)

digitalWrite(ledPin, HIGH);
delay(1000);
digitalWrite(ledPin,LOW);
delay(1000);
}
```

La idea es que el LED alternara el parpadeo, uno rápido y después uno lento.

<img width="992" height="652" alt="ejerciio3arduino0 1" src="https://github.com/user-attachments/assets/c13e2541-4d89-4984-9045-13200bd5eb12" />
