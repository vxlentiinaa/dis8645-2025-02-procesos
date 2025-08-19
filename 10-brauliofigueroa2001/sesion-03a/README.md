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
- 
- 
