# 🌷 sesion-09a

10 de Octubre de 2025

## 🔮 Trabajo en clases | Proyecto 02

✦ Actualizaciones:

Como no pudimos solucionar lo de la pantalla (que se veía que estaba prendida, pero ejecutabamos el código, compilaba, pero la pantalla no mostraba nada). Entonces, decidimos comprar otra por si el problema era la pantalla y así empezar a descartar. En esta sesión haremos las conexiones de la pantalla.

### ⚡️ Conexión de la pantalla

- Primer problema:

Para empezar, la pantalla TFT GC9A01 está diseñada para una lógica de 3.3 V, por lo que la placa de arduino que estamos usando funciona con 5V. Entonces para conectar los pines de datos como **SC, SD, VS, DC** se necesita usar un conversor de nivel lógico bidireccional entre el arduino y la pantalla. Este componente "traduce" de forma segura las señales de 5V a 3.3V y viceversa. Al conectarlo directamente en el arduino sin usar un conversor, se podría dañar la pantalla.


- Soluciones:

  1. Viendo los siguientes videos: (https://www.youtube.com/watch?v=IRiT3L-W2hs&t=2s) y (https://www.youtube.com/watch?v=XGBhlo3DI4E), quizás dijimos que podría ser la placa de arduino, como estábamos usando r4 minima, decidimos cambiarla a una r3 minima, quizás era eso. Una vez que la cambiamos, la pantalla mostraba un poco más que antes, pero no se visualizaba lo que el código quería. Esta vez, conectamos directamente la pantalla a la placa, tal como lo hacía en el video, *pero no funcionó*.
  2. Primero vamos a soldar los conversores lógicos a la los pines correspondientes. Para soldar se solda la **pista**: controlador y **pata**: los pines.
 
## Conexión placa a la pantalla con conversor de nivel lógico bidireccional

apuntes:
- positivo a hb
- gnd to gnd 
- lb psotivo 3.3V lo mismo para el otro lb
- high volts 5V
- low volts 3.3V

### CONEXIONES 

