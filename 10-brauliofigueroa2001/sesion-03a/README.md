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

- ### operadores lógicos: y (and) o (or) no(not)

- **and:** se deben cumplir todos, ejemplo si quiero ir a mi casa, debo tener plata, pagar el metro, tomar la micro y caminar
- estos cuatro se deben cumplir porque sino no llegaré a mi casa
- **or**: ejemplo de transporte, si me quiero ir a mi casa puedo irme en metro o en micro o en uber o a pie
- solo cuando los 2 están de pie, la compuerta vale 1, EJ: SI Y SI = SI
- NO Y SI = NO   SI Y NO= NO    NO Y NO= NO,    SI Y SI= SI, en 3 de esas opciones es NO
- debe estar sí y sí para que se abra la compuerta
- estas =D- tiene 2 entradas y una salida, condiciones deben cumplirse para que se habilite esta salida
- **NOT:** hay una entrada, un negador y un resultado, en este ejemplo aaron y matías se agacharon
- aarón hacía lo contrario a lo que hacía matías, aaron sería el resultado después del negador
- el orden de los operadores lógicos no cambia el resultado
- **INVESTIGAR NAND, NOR, XOR**

- **ITERAR**
- el computador es una máquina de iterar
- int i , se la tiende a poner i porque se usa para iterar
- i < veces, i menor a veces, cuando i deja de ser menor a veces, esto deja de repetir
- división: lo que hace es truncar, ej: 5 dividido 2 nos da 2 y el resto de decimales no los sigue dividiendo
- **ver toda la parte de la iteración y división**
- **ejemplo de misaa: (pendiente ver video de esta parte de la clase porque me estaba quedando dormido)**
- repasar if, else, jugar con print, println, for,
- aprenderemos cómo usar las cosas que creó alguien para no hacer todo desde 0

### un repaso desde mi casita porque en clases entendí casi nada

- if (ver=false){
- ponermeLentes();
- }
else{
continuar con mi vida();

- esto significa, es ver igual a falso? si la respuesta es no, continuo con mi vida, si es false debo ponerme lentes
- else no puede existir en el vacío, corresponde a un cierto if, el else es opcional
- if y else dependen de la misma condición
- ¿qué pasaría si la respuesta es más allá de un sí o un no?
- ejemplo de otra condición
- if(edad>=18ANDedad<=80){
- dartePermisoConducir();
- }
- esto significa: si la edad es mayor o igual a 18 y también es menor o igual a 80, te doy permiso para conducir

- independiente de la pregunta, la respuesta será sí o no, aunque diga true o false
- puede existir un if dentro de otro if
- ejemplo:
- if ver == false){
- ponerme lentes();
- if (suciedad==true){
- limpiarlentes()
- }
- esto significa, si no veo, me pongo los lentes, si mis lentes al momento de ponerlos están sucios, los limpio.
- ! significa lo contrario de esto
- ejemplo: (!hayunaaraña){, el ! significa lo contrario, sería que en realidad no hay araña

### segunda parte

- **iterar**: es "hazlo,hazlo,hazlo", esto hará lo que está dentro de los murciélagos tantas veces como yo quiera pero ojo, **NO ES UN LOOP**
- a esto me refiero con un ejemplo: todos los días son distintos, van pasando pero no se repiten, todos los días son diferentes entre sí
- hay una variación dentro de estas repeticiones
- para iterar usamos **for**
- // 1 partida, parte el lunes
- // 2 termino, si algún dia es domingo, esto terminó
- // 3 actualización, es el refresco que hace después de cada paso
- for (int i; ---> existe un número entero que se llama como yo quiera
- al principio vale 0, mientras estamos en el for, i existe, cuando salgamos del for, i ya no existe
- for (int i = 0; i< veces, continúa
- repite hasta el cansancio, el cansancio llega cuando i deja de ser menor que veces
- partimos así, terminamos así, qué hago cada vez que lo hago, haz esto otro
- i++ es igual a decir i= i+1
- serial.print = imprime esto, muestra esto
- **otro ejemplo**: if( i!=13){
- serial.print(i);
- }
- esto significa que todo lo distinto a i se imprime, por lo que el 13 no se va mostrar, es como discriminación la verdad
- **otro ejemplo de cómo acomodar**
- if(i<10){
- serial.print(" ");
- }
- significa que si (if) número menor que 10, le pido que le imprima un espacio adicional

## tercera parte

- // quiero poder decirle a arduino
- // en el monitor serial
- // cada cuanto tiempo parpadee el led
- unsigned long --> número enorme
- misaa estaba dividiendo en 3, módulos eran 0,1,2
- el módulo es el resto de la división, esto significa que: 4/2= el 2 cabe 2 veces y sobra 0, este sobrante 0 es el módulo
- **importante en división**: cuántas veces me cabe y cuanto me sobra
- según cuanto divido, los módulos van cambiando porque los "restos" cambian su valor
