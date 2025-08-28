# sesion-03b / Clase 06 / 22.08.2025

## Investigación Proyecto_01

## Contexto

### Haiku

Poesía japonesa breve

Se compone generalmente de 5 7 5 sílabas

A menudo se inspiran en la naturaleza y las estaciones del año.

### Matsuo Bashō

Ejemplo de poema
> Un viejo estanque.
>
> ¡Salta una rana!
>
> ¡Plop! Sonido de agua.

## Poema realizado

Código prendido

OLED ya encendido

Cerebro fundido

## Distribución de tareas

- Fran: función de traducción binaria
- Milla: dibujo y potenciómetro
- Jota: imagen en código y acroll
- Josefa: buzzer

## Componentes

- Placa Arduino
- Protoboard
- Pantalla OLED
- Potenciómetro

## Tareas asignadas
### Dibujos 

En la pantalla OLED se quiere mostrar una serie de dibujos que tienen relación con el poema inventado. Para esto, ocupé la aplicación Procreate para ajustar una hoja a los píxeles correspondientes y tener con mayor claridad de cómo sería el resultado final mostrado en la pantalla OLED. 

![arduino uno r4 dibujo](./imagenes/UnoR4.PNG)
![arduino uno r4 dibujo](./imagenes/Pantalla.PNG)
![arduino uno r4 dibujo](./imagenes/Fundido.PNG)

Código Arduino

OLED ya encendido 

Cerebro fundido 

### Potenciómetro 

> En la placa Arduino UNO tenemos 6 pines analógicos, desde A0 hasta A5 y su uso común es la lectura de datos de dispositivos analógicos como es el caso del potenciómetro. Tienen una resolución de 10 bits lo que implica que tenemos 1024 valores diferentes, es decir, podemos leer un rango de tensiones desde 0V hasta 5V detectando cambios de voltaje de 0.004V (5/1024). Por lo que los valores que obtendremos irán desde 0 hasta 1023.
> 
> [Fuente: Programar fácil](https://programarfacil.com/blog/arduino-blog/el-potenciometro-y-arduino/)

### Ejemplo 

Sacado de página web Programar fácil.

``` cpp

//Variable donde almacenaremos el valor del potenciometro
long valor;

void setup() {
  //Inicializamos la comunicación serial
  Serial.begin(9600);
  
  //Escribimos por el monitor serie mensaje de inicio
  Serial.println("Inicio de sketch - valores del potenciometro");

}

void loop() {
  // leemos del pin A0 valor
  valor = analogRead(A0);

  //Imprimimos por el monitor serie
  Serial.print("El valor es = ");
  Serial.println(valor);
  delay(1000);

}

```

![arduino potenciómetro](./imagenes/arduinoPotenciometro.png)


