# sesion-10a
14/10/2025

## Clase

Durante la clase de hoy seguimos avanzando en el desarrollo de nuestro Proyecto 2. Nuestro compañero Santiago presentó un nuevo prototipo físico, compuesto por un sistema de engranajes integrado a una estructura base. Este mecanismo permitirá generar el movimiento de toda la estructura del proyecto.

Por su parte, Félix trabajó en una nueva versión del código, llamada “codigo-10a”, con el objetivo de prevenir posibles errores o daños en el archivo original desarrollado la semana pasada.

En esta sesión, trabajé junto a Sofía en la parte de programación. El proceso fue complejo debido a la gran cantidad de componentes involucrados, pero finalmente conseguimos que el código compilara de forma correcta y sin errores.

Fragmento del código:
```cpp
void setup() {
  Serial.begin(9600);
  sensores.configurar(10);
  cuello.configurar();
  parpados.configurar();
  sensorProxIZQ.configurar();
  sensorProxDER.configurar();

  sensores.moverMotorcillo(90, 0);
  cuello.moverMotorcillo(90, 0);
  parpados.moverMotorcillo(0, 0);

  Serial.println("Iniciando sistema de ojos...");
}
```

Durante la clase también nos visitaron maguimolinari y mecha.mio, quienes observaron nuestro proyecto y nos entregaron comentarios muy valiosos para optimizar el sistema de engranajes. Además, nos contaron sobre su experiencia profesional y sobre un espacio inmersivo en la universidad donde trabajan, diseñado para experimentar con proyecciones, visuales y sonido. Esa idea me pareció muy inspiradora; sería genial que en la UDP existieran espacios de ese tipo, donde pudiéramos explorar nuestras ideas desde una perspectiva más sensorial y experimental.
