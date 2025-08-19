# sesion-03a
## taller clase martes 19 de agosto

### primera parte

- **notas del semestre**
- los proyectos serán breves
- habrá nota grupal e individual en cada proyecto
- los proyectos deben tener un proceso como tal en bitácora, no pueden aparecer de la nada
- **tipos de descuentos en los proyectos**
- 3 puntos menos por no cumplir el paso de entrega
- 3 puntos menos por no presentar sin justificativo médico
- 5 puntos menos por no escribir comentarios en el código
- 6 puntos menos por hacer un "drop": no tener proceso sostenido en el tiempo ni en código, ni en desarrollo, ni en documentación
- 3 puntos menos por usar directamente los datos del potenciómetro y no procesarlos con originalidad para controlar la pantalla
- no puede ser llegar y usar los datos del potenciómetro, ejemplo: "de 0 a 1"
### cápsula parte 1
- **condicionales e iteradores**
- condicionales: es el "if", es una condición booleana, si eso ocurre, pasa esto
- if (boolean condition) then (consequent) ---> si esto pasa, hace esto
- ejemplo: if: tienes más de 70% y promedio 3,5 superior, consecuencia: puedes dar el examen
- else (alternative): en otro caso
- ejemplo: tiene saldo para pasar el torniquete? if: then, end, (tiene?, si tiene, pasa torniquete)
- si no tiene, if: no tiene saldo, else: otras alternativas
- otro ejemplo: if (esta lloviendo=true){
-                     hacerSopaipillas();
-                   }
-                else{
-              saliraAndarEnBici();
-               }
- independiente de que en if diga true o false, el resultado es sí o no
- tu puedes escribir una condición dentro de otra
- la gracia es que el if y else dependan de la misma condición
- OR, palabra clave, significa: operador lógico
- la cabeza de android se asimila a una AND gate de circuito
- **ARDUINO**
- en bool cabe un 0 o un 1
- pinMode es para decirle a cierta patita que fuera usada de cierta manera
- // es para comentarios
- millis: cuenta el tiempo desde que se prendió el arduino
- funciones que graben millis van a ser unsigned long para hacerlo más eficiente
- que sean declaradas con unsigned long
- ## BREAK

-   ### operadores lógicos: y (and) o (or) no(not)
-  **and:** se deben cumplir todos, ejemplo si quiero ir a mi casa, debo tener plata, pagar el metro, tomar la micro y caminar
-  estos cuatro se deben cumplir porque sino no llegaré a mi casa
-  **or**: ejemplo de transporte, si me quiero ir a mi casa puedo irme en metro o en micro o en uber o a pie
-  solo cuando los 2 están de pie, la compuerta vale 1, EJ: SI Y SI = SI
-  NO Y SI = NO   SI Y NO= NO    NO Y NO= NO,    SI Y SI= SI, en 3 de esas opciones es NO
-  debe estar sí y sí para que se abra la compuerta
-  estas =D- tiene 2 entradas y una salida, condiciones deben cumplirse para que se habilite esta salida
-  **NOT:** hay una entrada, un negador y un resultado, en este ejemplo aaron y matías se agacharon
-  aarón hacía lo contrario a lo que hacía matías, aaron sería el resultado después del negador
-  el orden de los operadores lógicos no cambia el resultado
-  **INVESTIGAR NAND, NOR, XOR**

-  **ITERAR**
-  el computador es una máquina de iterar
-  int i , se la tiende a poner i porque se usa para iterar
-  i < veces, i menor a veces, cuando i deja de ser menor a veces, esto deja de repetir
-  división: lo que hace es truncar, ej: 5 dividido 2 nos da 2 y el resto de decimales no los sigue dividiendo
-  **ver toda la parte de la iteración y división**
-  **ejemplo de misaa: (pendiente ver video de esta parte de la clase porque me estaba quedando dormido)**
-  repasar if, else, jugar con print, println, for,
-  aprenderemos cómo usar las cosas que creó alguien para no hacer todo desde 0
-  
- 
- 
