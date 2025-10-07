# 🌷 sesion-08b

Martes 7 de octubre de 2025

## 🪩 Apuntes de clase 
- Un archivo .ino con todo lo que ocurre en la máquina.
- Las demás configuraciones deben estar en archivos.h para que contengan los parámetros de lo que queremos hacer.
- void configurar() son las cosas que quiero que haga mi sensor, (funciones).
- bool esta cerca = false

## Dispensador de chicles (cambiar nombre)
Nuestro proyecto se basa en un dispensador de chicles en forma de monstruo, donde manualmente puedes girar una manilla y caerá el chicle. Dependiendo del color del chicle es la animación y el sonido que se va a reproducir, dependiendo además de las emociones que significa cada color que se detallan a continuación:

✦ Tenemos los siguientes colores:
🔴 ➜ Enojo
🟡 ➜ Felicidad
🟢 ➜ Locura 
🔵 ➜ Tristeza

✦ Audios:
🔴 Enojo ➜
🟡 Felicidad ➜
🟢 Locura ➜
🔵 Tristeza ➜

✦ Animaciones:
🔴 Enojo ➜
🟡 Felicidad ➜
🟢 Locura ➜
🔵 Tristeza ➜

### 🔮 Probando pantalla circular
La forma que tiene nuestro proyecto es de un monstruo, por ende, lo escencial es que tenga ojos, por lo que usar una pantalla circular es la mejor opción, ya que simula un cíclope, pero de aspecto tierno.

➜ Conexiones de la pantalla y arduino

| Arduino | GC9A01 |
|---------|--------|
| 5V      | VCC    |
| GND     | GND    |
| 11      | DIN    |
| 13      | CLK    | 
| 10      | CS     |
| 7       | DC     |
| 8       | RST    |
| 9       | BL     |
