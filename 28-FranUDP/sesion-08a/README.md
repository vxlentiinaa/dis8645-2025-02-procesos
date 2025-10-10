# sesion-08a

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### SUBTITULO


### SUBTITULO


### Other things: <!-- Things to organize + random stuff -->
> ### SUB_SUBTITULO

-----------------------------------------------------------------------------------------------------------
## Encargo 16 <!-- cada persona del grupo debe subir a su README: qué llevan hasta el final de esta sesión, qué sí funciona, qué funciona casi, qué no funciona. después subir nueva versión del código y de la documentación, del trabajo que hagan entre 8a y 9a -->
### ${\color{cyan}Problema,\ solución,\ arrays\ y\ confusión}$

Después de la clase pasada me di cuenta de que el sistema con 2 sensores ultrasónicos viendo la misma zona para triangular la posición del usuario no iba a funcionar, debido al reducido cono de detección de estos sensores.

En lugar de eso, habría que hacer un sistema de radar que tenga un sensor ultrasónico sobre un servo, lo cual nos permitiría aumentar el cono de detección a 180°. El propio ángulo del servo podría ser empleado para determinar el ángulo en que se posicionan los ojos, ahorrándonos tener que implementar la triangulación en el programa.

Sin embargo, tenemos otro problema: si hay objetos en la sala, ¿cómo va el Arduino a diferenciar entre objetos inertes y personas?

Ahí se me ocurrió una solución: si el sensor mide y guarda la medición con el ángulo correspondiente a su servo, esos valores se podrían utilizar para comparar con la vez siguiente que mida la distancia en ese mismo ángulo.

Ej: servo en 50°, sensor ultrasónico mide y registra que en el ángulo 50 hay un objeto a 200 cm de distancia; la siguiente vez que mida la distancia en el ángulo 50 registra un valor distinto, es porque hubo movimiento en esa dirección (ángulo), por lo cual hay una persona y no un objeto estático.

Encontré este proyecto de [radar](https://howtomechatronics.com/projects/arduino-radar-project/) para usar como referencia en el nuevo sistema.

También estuve investigando [arrays](https://docs.arduino.cc/language-reference/en/variables/data-types/array/) para poder guardar y actualizar las variables de cada uno de los 180 grados.

### ${\color{cyan}Código}$

Estuve intentando alterar el código anterior para que funcionara; sin embargo, con tantas pestañas, funciones y demás, estaba muy confundido al momento de programar. A la confusión hay que añadirle que el servo y el sensor funcionan en conjunto. Si tengo que programarlos en pestañas aparte con códigos separados, ¿cómo los integro?

Decidí volver a comenzar el código desde cero, escribiéndolo de forma más similar a como ya sabía hacerlo, haciendo que partes funcionen antes de añadir otras funciones y partes.

Igual me terminé enredando. Le di el [código de ejemplo de la biblioteca NewPing](https://github.com/disenoUDP/dis8645-2025-02-procesos/tree/main/28-FranUDP/sesion-07b), lo que tenía y el [ejemplo de radar sacado de internet](https://drive.google.com/drive/folders/12gQ3RrdZkk9RzFDqwncEHSr0RJRcjLDn) a Gemini 2.5 Pro, además de una explicación detallada del comportamiento que busco obtener del código, para que me guíe al escribirlo.

Después de conseguir que el sensor funcionara y mostrara los valores registrados en la terminal, estuvimos intentando escribir el código de los componentes en sus respectivas pestañas, mientras que las variables y demás líneas correspondientes a la configuración estaban en el archivo principal (.ino), sin éxito.