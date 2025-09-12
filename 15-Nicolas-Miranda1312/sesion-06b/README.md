# sesion-06b

-12-0-2025

## Proyecto: Sensor de proximidad con reacciones para saludar 

  Descripción:
    El sistema detecta la presencia y distancia de un objeto con un sensor,
    responde con luces, movimientos de brazo y frases.

PASO 1: Estado apagado
 - No detecta movimiento u objeto
 - Luces apagadas
 - Brazo agachado

PASO 2: Detección inicial de objeto
 - Detecta un objeto
 - Respuesta: "Ah, eres tú"
 - Acción: levantar la mano

PASO 3: Medición de distancia

 --- Muy cerca ---
 - Respuestas:
   "Aléjate, estás muy cerca"
   "Carrete un cachito o te formateo"
   "Error 404: espacio personal no encontrado"
 - Acciones:
   Luz roja
   Brazo estirado

 --- Distancia moderada ---
 - Respuesta: "Zona de confort: activada"
 - Acciones:
   Luz verde
   Moverse de lado a lado (baila)

 --- Muy lejos ---
 - Respuesta: "Correte pa' mi radar"
 - Acciones:
   Luz amarilla
   Mano flexionando (llamando al objeto)

PASO 4: Retorno al estado apagado
 - Si no detecta nada
 - Apagar luces
 - Brazo agachado
