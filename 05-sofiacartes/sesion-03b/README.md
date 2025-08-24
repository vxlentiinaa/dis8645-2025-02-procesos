# sesion-03b 22/08 

## Apuntes de la clase, online.

**Pantallas:** la importancia para elegir la pantalla que necesitamos se debe ver la resolución, cantidad y la densidad de los pixeles. Ya que, el úmeri de pixeles individuales son capaces de verse en una dimensión.

* Una pantalla son muchos LEDS ordenados.
* Panel display, pantallad de siete segmentos. 8x8 64 pixeles. **matriz LED**
* Existen pantallas que solo hacen carácteres.


Para nuestro proyecto 01 utilizaremos pantallas oled, la cual es más lumínica. Además, utiliza el chip 1306. 

También se compró la pantalla TFT, tiene forma redonda. esta pantalla es menos lumínica. 

Es importante saber que el arduino no tiene tanta capacidad de tantos pixeles (la info y el refresco de esta) **la capacidad de alimentarlo**

Para esta clase trabajamos en el simulador Wokwi <https://wokwi.com/>, otro simulador que podemos utilizar es Tinkercad <https://www.tinkercad.com/dashboard>.

**Pines:**

* VCC: carga postivia

* GND: carga negativa

* SCL: signal clock, determina el pulso de tiempo

* SDA: signal data.

A la hora de trabajar debemos preocuparnos de revisar la alimentación que necesita, en este caso, con la pantalla y el arduino r4 minima es de 3.3 v.

### Referencias:


* [I²C](https://en.wikipedia.org/wiki/I²C) protocolo que nos simplifica conectar 2 dispositivos entre sí.

* [chip de Adafruit](https://github.com/adafruit/adafruit_ssd1306)

* <https://docs.arduino.cc/tutorials/uno-r4-minima/cheat-sheet/>
