# sesion-02a
## Ejercicio y clase ##
### ejercicio de fallas ###
 1) lograr hacer con el led del Arduino la señal de S.O.S con código morse 
 primero hacer mas de 2 comandos de prendido y apagado 
 1-0-1-0-1      -se copio los comandos ya existentes y si pusieron posterior a los anteriores
2) definir un tiempo diferente para cada comando de prendido
 1-0-1a-0    -se agrega un int tiempoPrendidoA = 500  / TPa
   -hay error como se muestra en la imagen1 de una falta ortográfica la falta de ";" al final 
3) tiempos diferente en comando de apagado 
1-0-1a-0a    -se agrega int tiempoApagadoA = 700;  / TAa
TP  = 1 = 3segundos 
TA  = 0 = 2 segundos 
TPa = 1a = 5 segundo 
TAa = 0a = 7 segundos 
 
 4) tratar de hacer S.O.S morse 
como  el comando esta en loop se repetirá indefinidamente solo debe hacer S.O.
S = …    O = ---
 Para hacer "S" se utilizan 5 comandos de prendido y apagado intercalados , siendo utilizados 1 como pinto y 0 como espacio entremedio. 
Lo mismo para "O" solo que 1a como ralla y para generar una diferencia entre las letras se utiliza 0a 
 
Con los errores se trato de ver si podía primero hacer el "S" y copiar la función para O pero no se logro al ser la misma función , se trato de ver si lograba leerlo se diferenciaban entre si pero tampoco , se termino escribiendo los comandos dentro de una función de loop. 
